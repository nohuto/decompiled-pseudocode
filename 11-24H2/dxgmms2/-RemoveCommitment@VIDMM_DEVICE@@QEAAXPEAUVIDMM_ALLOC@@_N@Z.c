/*
 * XREFs of ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B3090
 * Callers:
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400AC484 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400D758C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010FD30 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3278 (-RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPE.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400B3520 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400B3810 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z @ 0x1400B4E94 (-StartPreparation@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4VIDMM_OPERATION@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::RemoveCommitment(VIDMM_DEVICE *this, __int64 **a2, char a3)
{
  __int64 *v6; // rsi
  VIDMM_PROCESS *v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  int v10; // edx
  struct VIDMM_SEGMENT *v11; // r9
  unsigned __int16 v12; // r8
  __int64 v13; // rax
  _QWORD *v14; // r8
  __int64 *v15; // rcx
  struct _VIDMM_DEVICE_COMMITMENT_INFO *v16; // r11
  __int64 *v17; // rax
  VIDMM_GLOBAL *v18; // rsi
  __int64 v19; // r14
  int v20; // ebp
  __int64 *v21; // rbx
  __int64 v22; // rax
  __int64 **v23; // rcx

  v6 = (__int64 *)**a2;
  v7 = (VIDMM_PROCESS *)(*a2)[1];
  v8 = *v6;
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v9 + 24) = a2;
    *(_QWORD *)(v9 + 32) = this;
    WdLogGlobalForLineNumber = 1461;
  }
  v10 = *((_DWORD *)v6 + 6);
  if ( (v10 & 0x40000000) != 0 )
  {
    v12 = *((_WORD *)v6 + 14) & 0x1F;
    v11 = *(struct VIDMM_SEGMENT **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40232LL) + 8LL * (v10 & 0x3F))
                                               + 1648LL)
                                   + 8LL * v12);
  }
  else
  {
    v11 = *(struct VIDMM_SEGMENT **)(v8 + 64);
    v12 = *((_WORD *)v11 + 20);
  }
  v13 = v12;
  v14 = a2 + 7;
  v15 = a2[7];
  v16 = (struct _VIDMM_DEVICE_COMMITMENT_INFO *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * (v6[3] & 0x3F))
                                                           + 16LL)
                                               + 56 * v13);
  if ( (__int64 **)v15[1] != a2 + 7 || (v17 = a2[8], (_QWORD *)*v17 != v14) )
LABEL_15:
    __fastfail(3u);
  *v17 = (__int64)v15;
  v15[1] = (__int64)v17;
  --*(_DWORD *)v16;
  *((_QWORD *)v16 + 1) -= *(_QWORD *)(v8 + 16);
  *v14 = 0LL;
  a2[8] = 0LL;
  VIDMM_PROCESS::RemoveCommitment(
    v7,
    v16,
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 240LL),
    v11,
    *(_DWORD *)v16 == 0,
    (struct VIDMM_GLOBAL_ALLOC *)v6);
  --*((_DWORD *)v6 + 19);
  *((_DWORD *)a2 + 7) &= 0xFFFFFFEC;
  if ( dword_1400815B0 )
  {
    v18 = *(VIDMM_GLOBAL **)this;
    v19 = **a2;
    if ( *(_DWORD *)(*(_QWORD *)this + 8LL) )
    {
      v20 = 1;
    }
    else
    {
      v20 = 0;
      VIDMM_GLOBAL::StartPreparation(v18, *(_DWORD *)(v19 + 24) & 0x3F, this, a2, 218);
    }
    VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(v18, (struct VIDMM_ALLOC *)a2);
    if ( !v20 )
      VIDMM_GLOBAL::EndPreparation(v18, *(_DWORD *)(v19 + 24) & 0x3F, 0LL, 0, 0LL, 0LL);
  }
  if ( a3 )
  {
    v21 = (__int64 *)(a2 + 7);
    v22 = *(_QWORD *)this + 3712LL;
    v23 = *(__int64 ***)(*(_QWORD *)this + 3720LL);
    if ( *v23 != (__int64 *)v22 )
      goto LABEL_15;
    *v21 = v22;
    v21[1] = (__int64)v23;
    *v23 = v21;
    *(_QWORD *)(v22 + 8) = v21;
  }
}
