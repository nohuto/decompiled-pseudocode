/*
 * XREFs of CcGetBcbListHead @ 0x140229390
 * Callers:
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 * Callees:
 *     CcGetBcbListHeadLargeOffset @ 0x14041AFB0 (CcGetBcbListHeadLargeOffset.c)
 */

unsigned __int64 __fastcall CcGetBcbListHead(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 <= 0x200000 || (*(_DWORD *)(a1 + 152) & 0x200) == 0 )
    return a1 + 16;
  if ( v2 <= 0x2000000 )
  {
    if ( a2 - 0x80000 < (((int)((((int)v2 >> 18) + 1) & 0xFFFFFFFE) / 2) << 19) - 0x80000 )
      return *(_QWORD *)(a1 + 88) + 16 * (a2 >> 19) + 8 * ((unsigned __int64)(unsigned int)v2 >> 18);
    else
      return a1 + 16;
  }
  else
  {
    LOBYTE(v2) = 1;
    return CcGetBcbListHeadLargeOffset(a1, a2, v2, a2);
  }
}
