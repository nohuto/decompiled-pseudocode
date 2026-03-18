/*
 * XREFs of MiDeletePartialVad @ 0x1403CDE5C
 * Callers:
 *     MiFreeVadRange @ 0x1403CDBD8 (MiFreeVadRange.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiComputeVadCharges @ 0x140236208 (MiComputeVadCharges.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiPerformVadSplitting @ 0x140405FC8 (MiPerformVadSplitting.c)
 *     Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline @ 0x14068EBE8 (Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline.c)
 *     MiUnmapVad @ 0x1408E5280 (MiUnmapVad.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiAllocateSplitVads @ 0x140A245C0 (MiAllocateSplitVads.c)
 */

__int64 __fastcall MiDeletePartialVad(_DWORD *P, __int64 a2, __int64 a3, int a4)
{
  int IsEnabledDeviceUsageNoInline; // eax
  struct _KTHREAD *CurrentThread; // r13
  int v10; // esi
  _KPROCESS *Process; // r14
  __int64 result; // rax
  unsigned __int64 v13; // rdi
  __int128 v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h]
  _QWORD v16[2]; // [rsp+38h] [rbp-38h] BYREF
  int v17; // [rsp+48h] [rbp-28h]
  int v18; // [rsp+4Ch] [rbp-24h]
  __int64 v19; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp-10h]

  v16[0] = 0LL;
  v18 = 0;
  v21 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  IsEnabledDeviceUsageNoInline = Feature_Servicing_Mm_RotateSplitResAvailLeak__private_IsEnabledDeviceUsageNoInline();
  CurrentThread = KeGetCurrentThread();
  v10 = IsEnabledDeviceUsageNoInline;
  Process = CurrentThread->ApcState.Process;
  if ( (P[12] & 0x200000) == 0 && *(_QWORD *)(**((_QWORD **)P + 9) + 64LL) && *((__int64 *)P + 15) < 0 )
    return 3221225505LL;
  v17 = a4;
  v19 = a2;
  v20 = a3;
  v16[1] = P;
  result = MiAllocateSplitVads(v16);
  if ( (int)result >= 0 )
  {
    if ( v10 )
      MiComputeVadCharges((__int64)P, (__int64)&v14);
    MiPerformVadSplitting(v16);
    v13 = v14;
    if ( v10 && (_QWORD)v14 )
    {
      v14 = 0LL;
      v15 = 0LL;
      MiComputeVadCharges((__int64)P, (__int64)&v14);
      v13 -= v14;
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, Process);
    if ( (P[12] & 0x200000) != 0 )
      MiDeleteVad(P);
    else
      MiUnmapVad(P);
    if ( v10 )
    {
      if ( v13 )
        MiReturnResident(*((_QWORD *)qword_140E2FF88 + HIWORD(Process[2].ProcessListEntry.Blink)), v13);
    }
    return 0LL;
  }
  return result;
}
