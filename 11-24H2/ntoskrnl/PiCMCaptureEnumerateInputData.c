/*
 * XREFs of PiCMCaptureEnumerateInputData @ 0x14097D6D4
 * Callers:
 *     PiCMEnumerateSubKeys @ 0x14097D49C (PiCMEnumerateSubKeys.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PiCMCaptureEnumerateInputData(unsigned __int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // r8d
  unsigned __int64 v5; // rdx

  v4 = 0;
  if ( a1 && a2 >= 0x14 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = a1 + a2;
    if ( v5 > 0x7FFFFFFF0000LL || v5 < a1 )
      v4 = 0;
    *(_OWORD *)a4 = *(_OWORD *)a1;
    *(_DWORD *)(a4 + 16) = *(_DWORD *)(a1 + 16);
    if ( *(_DWORD *)a4 != 20 )
      v4 = -1073741811;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 < 0 )
  {
    *(_OWORD *)a4 = 0LL;
    *(_DWORD *)(a4 + 16) = 0;
  }
  return (unsigned int)v4;
}
