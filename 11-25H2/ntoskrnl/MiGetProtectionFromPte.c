/*
 * XREFs of MiGetProtectionFromPte @ 0x1404D3508
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiGetProtectionFromPte(ULONG_PTR BugCheckParameter2, signed __int64 BugCheckParameter3)
{
  unsigned int v2; // ecx
  ULONG_PTR result; // rax
  unsigned int v4; // ecx

  if ( (BugCheckParameter3 & 1) != 0 )
  {
    v2 = *(_DWORD *)(BugCheckParameter2 + 48);
    result = ((BugCheckParameter3 & 0x800) != 0 ? 4 : 1) | 2u;
    if ( BugCheckParameter3 < 0 )
      result = (BugCheckParameter3 & 0x800) != 0 ? 4 : 1;
    v4 = (v2 >> 7) & 0x1F;
    if ( v4 >> 3 == 3 && (v4 & 7) != 0 )
    {
      return (unsigned int)result | 0x18;
    }
    else if ( v4 >> 3 == 1 )
    {
      return (unsigned int)result | 8;
    }
  }
  else
  {
    if ( (BugCheckParameter3 & 0x400) != 0 )
      KeBugCheckEx(0x1Au, 0x412uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
    return ((unsigned __int64)BugCheckParameter3 >> 8) & 8 | 0x10;
  }
  return result;
}
