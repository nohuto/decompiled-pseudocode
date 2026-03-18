/*
 * XREFs of MiDeletePartialVad @ 0x1402A3A10
 * Callers:
 *     MiFreeVadRange @ 0x1402A45F8 (MiFreeVadRange.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiPerformVadSplitting @ 0x1402A3F44 (MiPerformVadSplitting.c)
 *     MiUnmapVad @ 0x1408B4E4C (MiUnmapVad.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 *     MiAllocateSplitVads @ 0x1409021D4 (MiAllocateSplitVads.c)
 */

__int64 __fastcall MiDeletePartialVad(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rsi
  __int64 result; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+34h] [rbp-24h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]
  __int64 v14; // [rsp+48h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v9[0] = 0LL;
  v11 = 0;
  v14 = 0LL;
  Process = CurrentThread->ApcState.Process;
  if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0
    && *(_QWORD *)(**(_QWORD **)(a1 + 72) + 64LL)
    && *(__int64 *)(a1 + 120) < 0 )
  {
    return 3221225505LL;
  }
  v10 = a4;
  v12 = a2;
  v13 = a3;
  v9[1] = a1;
  result = MiAllocateSplitVads(v9);
  if ( (int)result >= 0 )
  {
    MiPerformVadSplitting(v9);
    UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, Process);
    if ( (*(_DWORD *)(a1 + 48) & 0x200000) != 0 )
      MiDeleteVad(a1, a5, 0LL);
    else
      MiUnmapVad(a1, a5, 0LL);
    return 0LL;
  }
  return result;
}
