/*
 * XREFs of MiInitializeStrongCode @ 0x140BE0444
 * Callers:
 *     MmInitSystem @ 0x140BE02E8 (MmInitSystem.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402313D4 (VslGetNestedPageProtectionFlags.c)
 */

__int64 MiInitializeStrongCode()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // rdx

  result = VslGetNestedPageProtectionFlags(qword_140E38D08);
  if ( !(_DWORD)result )
    return result;
  v1 = MiFlags | 0x1000;
  MiFlags = v1;
  v2 = v1;
  if ( (result & 4) != 0 )
  {
    v1 |= 0x6000uLL;
    MiFlags = v1;
    v2 = v1;
  }
  if ( (result & 1) != 0 )
  {
    v1 = v2 | 0x28000;
LABEL_8:
    v2 = v1;
    MiFlags = v1;
    goto LABEL_9;
  }
  if ( (result & 2) != 0 )
  {
    v1 = v2 | 0x8000;
    goto LABEL_8;
  }
LABEL_9:
  if ( (result & 0x10) == 0 )
  {
    v1 = v2 | 0x10000;
    MiFlags = v2 | 0x10000;
    v2 |= 0x10000uLL;
  }
  if ( (result & 0x40) != 0 )
  {
    v1 = v2 | 0x80000;
    MiFlags = v2 | 0x80000;
  }
  if ( (result & 0x4000) != 0 )
  {
    v1 |= 0x1000000000uLL;
    MiFlags = v1;
  }
  if ( (result & 0x8000) != 0 )
  {
    v1 |= 0x2000000000uLL;
    MiFlags = v1;
  }
  if ( (result & 0x80u) != 0LL )
    MiFlags = v1 | 0x40000;
  return result;
}
