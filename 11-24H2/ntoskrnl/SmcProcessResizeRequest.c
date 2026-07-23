/*
 * XREFs of SmcProcessResizeRequest @ 0x14079945C
 * Callers:
 *     SmSetStoreInformation @ 0x140A57E40 (SmSetStoreInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x1404933CC (SmpGetProcessPartition.c)
 *     SmcStoreResize @ 0x14079DE40 (SmcStoreResize.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmcProcessResizeRequest(unsigned __int64 a1, int a2, char a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 ProcessPartition; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  v8 = 0LL;
  v9 = 0;
  if ( a2 != 20 )
    return 3221225990LL;
  if ( a3 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v5 = a1;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 19) = *(_BYTE *)(v5 + 19);
  }
  v8 = *(_OWORD *)a1;
  v6 = *(_DWORD *)(a1 + 16);
  v9 = v6;
  if ( (_BYTE)v8 != 1 )
    return 3221225561LL;
  if ( (v8 & 0xFFFFFE00) != 0 || !v6 || SHIDWORD(v8) >= 2 )
    return 3221225485LL;
  ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  result = SmcStoreResize(ProcessPartition + 2288, &v8);
  if ( (int)result >= 0 )
  {
    *(_OWORD *)a1 = v8;
    *(_DWORD *)(a1 + 16) = v9;
    return 0LL;
  }
  return result;
}
