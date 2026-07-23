/*
 * XREFs of MiDeletePartialVad @ 0x1402675A0
 * Callers:
 *     MiFreeVadRange @ 0x14026731C (MiFreeVadRange.c)
 * Callees:
 *     MiComputeVadCharges @ 0x140210398 (MiComputeVadCharges.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1403C8374 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiPerformVadSplitting @ 0x1403C877C (MiPerformVadSplitting.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiUnmapVad @ 0x140895E38 (MiUnmapVad.c)
 *     MiAllocateSplitVads @ 0x140919FC8 (MiAllocateSplitVads.c)
 */

__int64 __fastcall MiDeletePartialVad(_DWORD *P, __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v6; // zf
  _KPROCESS *Process; // rsi
  __int64 result; // rax
  __int64 v9; // rdi
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-40h]
  _QWORD v12[2]; // [rsp+38h] [rbp-38h] BYREF
  int v13; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+4Ch] [rbp-24h]
  __int64 v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp-18h]
  __int64 v17; // [rsp+60h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v12[0] = 0LL;
  v14 = 0;
  v17 = 0LL;
  v6 = (P[12] & 0x200000) == 0;
  Process = CurrentThread->ApcState.Process;
  v10 = 0LL;
  v11 = 0LL;
  if ( v6 && *(_QWORD *)(**((_QWORD **)P + 9) + 64LL) && *((__int64 *)P + 15) < 0 )
    return 3221225505LL;
  v13 = a4;
  v15 = a2;
  v16 = a3;
  v12[1] = P;
  result = MiAllocateSplitVads(v12);
  if ( (int)result >= 0 )
  {
    MiComputeVadCharges((__int64)P, (__int64)&v10);
    MiPerformVadSplitting(v12);
    v9 = v10;
    if ( (_QWORD)v10 )
    {
      v10 = 0LL;
      v11 = 0LL;
      MiComputeVadCharges((__int64)P, (__int64)&v10);
      v9 -= v10;
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, Process);
    if ( (P[12] & 0x200000) != 0 )
      MiDeleteVad(P);
    else
      MiUnmapVad(P);
    if ( v9 )
      MiReturnResident(*((_QWORD *)qword_140E300C8 + HIWORD(Process[2].ProcessListEntry.Blink)), v9);
    return 0LL;
  }
  return result;
}
