/*
 * XREFs of ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E0F20
 * Callers:
 *     VidMmSubmitPacket @ 0x1400E0D40 (VidMmSubmitPacket.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140007FC0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400DF530 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::CheckBudgetRefreshConditionOnProcessMemoryChange(
        VIDMM_PROCESS_ADAPTER_INFO *this)
{
  char v1; // r12
  unsigned int v3; // r14d
  char *v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // r9
  int v8; // ecx
  unsigned int *v9; // r11
  unsigned __int64 v10; // r10
  __int64 v11; // rdi

  v1 = 0;
  v3 = 0;
  if ( *(_DWORD *)(*(_QWORD *)this + 6944LL) )
  {
    v4 = (char *)this + 48;
    do
    {
      v5 = (_QWORD *)(*((_QWORD *)this + 2) + 304LL * (unsigned __int16)v3);
      if ( v4 && *((struct _KTHREAD **)v4 + 1) == KeGetCurrentThread() )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1512;
        DxgkLogInternalTriageEvent(v6, 262146LL);
      }
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)v4);
      v7 = v5 + 24;
      v8 = 0;
      v9 = (unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40232LL) + 8LL * v3) + 536LL);
      while ( 1 )
      {
        v10 = *(v7 - 6);
        if ( v8 == 1 )
          v10 += v5[33] + v5[34] + v5[35] + v5[36] + v5[37];
        v11 = *v9;
        if ( v10 > *v7 * (v11 + 100) / 0x64uLL || v10 < *v7 * (100 - v11) / 0x64uLL )
          break;
        ++v8;
        ++v7;
        v9 += 6;
        if ( v8 >= 2 )
          goto LABEL_14;
      }
      v1 = 1;
LABEL_14:
      _InterlockedDecrement((volatile signed __int32 *)v4 + 4);
      ExReleasePushLockSharedEx(v4, 0LL);
      KeLeaveCriticalRegion();
      ++v3;
    }
    while ( v3 < *(_DWORD *)(*(_QWORD *)this + 6944LL) );
    if ( v1 )
      VIDMM_GLOBAL::RequestNewBudget(*(VIDMM_GLOBAL **)this, 1);
  }
}
