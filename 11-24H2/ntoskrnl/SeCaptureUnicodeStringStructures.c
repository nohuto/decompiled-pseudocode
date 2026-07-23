/*
 * XREFs of SeCaptureUnicodeStringStructures @ 0x14088D200
 * Callers:
 *     SepCaptureUnicodeStringArray @ 0x14088CF60 (SepCaptureUnicodeStringArray.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureUnicodeStringStructures(__int64 a1, unsigned int a2, char a3, __int64 *a4)
{
  unsigned int v7; // ebx
  ULONG_PTR v8; // r15
  int v9; // r14d
  __int64 Pool2; // rcx

  v7 = 0;
  *a4 = 0LL;
  if ( !a1 )
  {
    if ( !a2 )
      return 0;
    return (unsigned int)-1073741811;
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    *a4 = a1;
    return 0;
  }
  v8 = 16LL * a2;
  if ( is_mul_ok(0x10uLL, a2) )
  {
    v9 = 0;
  }
  else
  {
    v8 = -1LL;
    v9 = -1073741675;
  }
  if ( v9 >= 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, v8, 0x73556553u);
    if ( Pool2 )
    {
      if ( v8 && (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      while ( v7 < a2 )
      {
        *(_OWORD *)(Pool2 + 16LL * v7) = *(_OWORD *)(a1 + 16LL * v7);
        ++v7;
      }
      *a4 = Pool2;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v9;
}
