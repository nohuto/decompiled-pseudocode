/*
 * XREFs of VidSchiSwitchContext @ 0x140021240
 * Callers:
 *     VidSchiSubmitQueueCommandDirect @ 0x14004FDAC (VidSchiSubmitQueueCommandDirect.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x140015D90 (VidSchiProfilePerformanceTick.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140020F30 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x140020FC4 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiSwitchContext(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rdx
  _QWORD *v17; // rax

  v1 = *(_QWORD *)(a1 + 96);
  v2 = a1;
  v3 = *(_QWORD *)(v1 + 216);
  if ( v3 != a1 )
  {
    VidSchiProfilePerformanceTick(3, *(_QWORD *)(v1 + 24), v1, 0LL, a1, 0LL, 0LL, *(_QWORD *)(v1 + 216));
    if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 72)) == 1 )
    {
      if ( !*(_BYTE *)(v2 + 908) )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 3840LL, v2, 0LL, 0LL);
        WdLogGlobalForLineNumber = 906;
        goto LABEL_29;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v2 + 104) + 24LL));
    }
    *(_QWORD *)(v1 + 216) = v2;
    if ( !v3 )
      return;
    v2 = -1LL;
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 96) + 24LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 72), 0xFFFFFFFF) != 1 )
      return;
    v5 = *(_QWORD *)(v3 + 96);
    if ( *(_QWORD *)(v5 + 224) == v3 )
      *(_QWORD *)(v5 + 224) = 0LL;
    v6 = *(_QWORD *)(v3 + 8);
    if ( *(_QWORD *)(v6 + 8) != v3 + 8 )
      goto LABEL_17;
    v7 = *(_QWORD **)(v3 + 16);
    if ( *v7 != v3 + 8 )
      goto LABEL_17;
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    v8 = *(_QWORD *)(v3 + 24);
    if ( *(_QWORD *)(v8 + 8) != v3 + 24 )
      goto LABEL_17;
    v9 = *(_QWORD **)(v3 + 32);
    if ( *v9 != v3 + 24 )
      goto LABEL_17;
    *v9 = v8;
    v1 = v4 + 1992;
    *(_QWORD *)(v8 + 8) = v9;
    while ( 1 )
    {
      v10 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)v1, (_QWORD **)(v3 + 712), (_DWORD *)(v3 + 728));
      if ( !v10 )
        break;
      ExFreePoolWithTag(v10 - 1, 0);
    }
    if ( (*(_DWORD *)(v3 + 112) & 0x100) == 0 )
    {
LABEL_19:
      if ( bTracingEnabled )
        VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v3, v11, v12);
      v13 = *(void **)(v3 + 992);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      v14 = *(_QWORD *)(v3 + 104);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 24), v2) != 1 )
        goto LABEL_24;
      v15 = *(_QWORD *)(v14 + 104);
      if ( *(_QWORD *)(v15 + 8) == v14 + 104 )
      {
        v16 = *(_QWORD **)(v14 + 112);
        if ( *v16 == v14 + 104 )
        {
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          ExFreePoolWithTag((PVOID)v14, 0);
LABEL_24:
          ExFreePoolWithTag((PVOID)v3, 0);
          return;
        }
      }
LABEL_17:
      __fastfail(3u);
    }
LABEL_29:
    while ( 1 )
    {
      v17 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)v1, (_QWORD **)(v3 + 736), (_DWORD *)(v3 + 752));
      if ( !v17 )
        break;
      ExFreePoolWithTag(v17 - 1, 0);
    }
    goto LABEL_19;
  }
}
