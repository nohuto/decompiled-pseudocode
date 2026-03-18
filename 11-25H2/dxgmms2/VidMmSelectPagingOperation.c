/*
 * XREFs of VidMmSelectPagingOperation @ 0x1400EBA30
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SelectResumeDevice@VIDMM_GLOBAL@@QEAAPEAVVIDMM_DEVICE@@PEA_N@Z @ 0x1400ED970 (-SelectResumeDevice@VIDMM_GLOBAL@@QEAAPEAVVIDMM_DEVICE@@PEA_N@Z.c)
 *     VidMmSelectReadyQueue @ 0x1400EDB80 (VidMmSelectReadyQueue.c)
 */

_BOOL8 __fastcall VidMmSelectPagingOperation(__int64 a1, __int64 *a2, _QWORD *a3, struct VIDMM_DEVICE **a4)
{
  struct VIDMM_DEVICE *v4; // rsi
  _QWORD *v9; // r14
  __int64 ready; // rbx
  __int64 v11; // rcx
  struct VIDMM_DEVICE *v12; // rax
  VIDMM_GLOBAL *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _BOOL8 result; // rax
  bool v17; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v17 = 0;
  v9 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(a1 + 192) = KeGetCurrentThread();
  ready = VidMmSelectReadyQueue(a1, a1 + 64);
  if ( !ready )
  {
    if ( ((*(_BYTE *)(a1 + 213) - 1) & 0xFD) != 0 )
    {
      ready = *(_QWORD *)(a1 + 32);
      v11 = a1 + 32;
      if ( ready == a1 + 32 )
      {
LABEL_6:
        ready = 0LL;
        if ( g_IsInternalReleaseOrDbg )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = *(unsigned __int8 *)(a1 + 213);
          WdLogGlobalForLineNumber = 588;
        }
        goto LABEL_20;
      }
      while ( (*(_BYTE *)(ready + 112) & 0x18) != 0x18 )
      {
        ready = *(_QWORD *)ready;
        if ( ready == v11 )
          goto LABEL_6;
      }
    }
    else
    {
      v12 = VIDMM_GLOBAL::SelectResumeDevice(*(VIDMM_GLOBAL **)a1, &v17);
      v4 = v12;
      if ( v12 && (*((_BYTE *)v12 + 312) & 7) == 1 )
        goto LABEL_20;
      ready = VidMmSelectReadyQueue(a1, a1 + 48);
      if ( !ready )
      {
        if ( *(_BYTE *)(a1 + 215) )
        {
          v13 = *(VIDMM_GLOBAL **)a1;
          *(_BYTE *)(a1 + 215) = 0;
          *(_QWORD *)(a1 + 120) = *((_QWORD *)v13 + 570);
        }
        if ( v4 && *(_QWORD *)(*(_QWORD *)a1 + 4560LL) - *(_QWORD *)(a1 + 120) >= qword_140081568
          || (ready = VidMmSelectReadyQueue(a1, a1 + 32)) == 0 )
        {
          *(_BYTE *)(a1 + 215) = 1;
          goto LABEL_20;
        }
      }
    }
  }
  v9 = *(_QWORD **)(ready + 32);
  v14 = (_QWORD *)(ready + 32);
  v4 = *(struct VIDMM_DEVICE **)(ready + 96);
  if ( v9[1] != ready + 32 || (v15 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
    __fastfail(3u);
  *v14 = v15;
  *(_QWORD *)(v15 + 8) = v14;
  *v9 = 0LL;
  v9[1] = 0LL;
LABEL_20:
  *(_QWORD *)(a1 + 16) = v4;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(a1 + 192) = 0LL;
  ExReleasePushLockExclusiveEx(a1 + 184, 0LL);
  KeLeaveCriticalRegion();
  result = v17;
  *a2 = ready;
  *a4 = v4;
  *a3 = v9;
  return result;
}
