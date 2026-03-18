/*
 * XREFs of ?PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1402BB4A4
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x14019D7E8 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1402BA7DC (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1403B9A28 (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1403F8E44 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002B720 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?UpdateDripsBlockerVidMmEvictionData@DripsBlockerTrackingHelper@@QEAAX_KPEAU_DXGK_SLEEP_STUDY_DATA@@@Z @ 0x1402BBA14 (-UpdateDripsBlockerVidMmEvictionData@DripsBlockerTrackingHelper@@QEAAX_KPEAU_DXGK_SLEEP_STUDY_DA.c)
 */

void __fastcall ADAPTER_RENDER::PurgeSegments(struct _EX_RUNDOWN_REF *a1, unsigned int a2, __int64 a3)
{
  int v6; // edi
  ULONG_PTR Count; // rcx
  __int64 v8; // r8
  ULONG_PTR v9; // rax
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  const wchar_t *v13; // r9
  __int64 v14; // r8
  _OWORD v15[3]; // [rsp+50h] [rbp-58h] BYREF

  v6 = a2 & 8;
  if ( (a2 & 8) != 0 )
  {
    if ( ADAPTER_RENDER::IsCoreResourceSharedOwner((ADAPTER_RENDER *)a1) )
      goto LABEL_3;
    WdLogSingleEntry0(1LL);
    v12 = 3221LL;
    v13 = L"IsCoreResourceSharedOwner()";
  }
  else
  {
    if ( ADAPTER_RENDER::IsCoreResourceExclusiveOwner((ADAPTER_RENDER *)a1) )
      goto LABEL_3;
    WdLogSingleEntry0(1LL);
    v12 = 3225LL;
    v13 = L"IsCoreResourceExclusiveOwner()";
  }
  WdLogGlobalForLineNumber = v12;
  DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, v13, v12, 0LL, 0LL, 0LL, 0LL);
LABEL_3:
  if ( a1[96].Count )
  {
    if ( !v6 )
    {
      ExWaitForRundownProtectionRelease(a1 + 173);
      ExReInitializeRundownProtection(a1 + 173);
    }
    Count = a1[95].Count;
    if ( a3 && (v14 = *(_QWORD *)(a3 + 64)) != 0 )
      v8 = *(_QWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)Count - 1));
    else
      v8 = 0LL;
    (*(void (__fastcall **)(ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(Count + 8) + 64LL))(a1[96].Count, a2, v8);
    v9 = a1[95].Count;
    memset(v15, 0, sizeof(v15));
    (*(void (__fastcall **)(ULONG_PTR, _QWORD, _OWORD *))(*(_QWORD *)(v9 + 8) + 1200LL))(a1[96].Count, 0LL, v15);
    Global = DXGGLOBAL::GetGlobal();
    v11 = *(_QWORD *)(a1[2].Count + 232);
    if ( v11 )
    {
      DripsBlockerTrackingHelper::UpdateDripsBlockerVidMmEvictionData(
        (struct DXGGLOBAL *)((char *)Global + 2232),
        v11,
        (struct _DXGK_SLEEP_STUDY_DATA *)v15);
    }
    else
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 762;
    }
  }
}
