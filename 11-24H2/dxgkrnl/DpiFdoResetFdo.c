/*
 * XREFs of DpiFdoResetFdo @ 0x1402453A8
 * Callers:
 *     DpiAddDevice @ 0x1402393B0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x140241460 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     ?DpiFdoCleanupFeatureDatabase@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x14007CC70 (-DpiFdoCleanupFeatureDatabase@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiFdoCleanupDP @ 0x14007D54C (DpiFdoCleanupDP.c)
 *     DpiFdoCleanupMipiDsi @ 0x14007D5D0 (DpiFdoCleanupMipiDsi.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1401A0808 (DxgkReleaseAdapterFdoReference.c)
 *     DxgkFreeUnicodeString @ 0x140237C00 (DxgkFreeUnicodeString.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x14023CDA8 (DpiFdoCleanupGpuVirtualization.c)
 *     DpiRequestIoPowerState @ 0x14039F1A8 (DpiRequestIoPowerState.c)
 */

void __fastcall DpiFdoResetFdo(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  void *v4; // rcx
  DXGADAPTER *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void (__fastcall *v12)(_QWORD); // rax
  void (__fastcall *v13)(_QWORD); // rax
  void (__fastcall *v14)(_QWORD); // rax
  __int64 v15; // rcx
  void (__fastcall *v16)(_QWORD); // rax
  __int64 v17; // rax
  void *v18; // rcx

  v1 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v1 + 1392) )
  {
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741823LL);
    WdLogGlobalForLineNumber = 13501;
  }
  ExDeleteResourceLite((PERESOURCE)(v1 + 3928));
  ExDeleteResourceLite((PERESOURCE)(v1 + 3440));
  if ( *(_QWORD *)(v1 + 4064) )
    DpiRequestIoPowerState(a1, 7LL, v3, 0LL);
  RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4896));
  RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4912));
  DxgkFreeUnicodeString(v1 + 4992);
  v4 = *(void **)(v1 + 2832);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(v1 + 2832) = 0LL;
  }
  DpiFdoCleanupGpuVirtualization(v1);
  DpiFdoCleanupMipiDsi(v1);
  DpiFdoCleanupDP((_QWORD *)v1);
  DpiFdoCleanupFeatureDatabase((struct _FDO_CONTEXT *)v1);
  v5 = *(DXGADAPTER **)(v1 + 4032);
  if ( v5 )
  {
    DxgkReleaseAdapterFdoReference(v5);
    *(_QWORD *)(v1 + 4032) = 0LL;
  }
  v6 = *(void **)(v1 + 3432);
  *(_DWORD *)(v1 + 3416) = 0;
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(v1 + 3432) = 0LL;
  }
  v7 = *(void **)(v1 + 3424);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(v1 + 3424) = 0LL;
  }
  v8 = *(void **)(v1 + 4960);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(v1 + 4960) = 0LL;
  }
  v9 = *(void **)(v1 + 4968);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v1 + 4968) = 0LL;
  }
  v10 = *(void **)(v1 + 2856);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(v1 + 2856) = 0LL;
  }
  v11 = *(void **)(v1 + 2872);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(v1 + 2872) = 0LL;
  }
  v12 = *(void (__fastcall **)(_QWORD))(v1 + 3016);
  if ( v12 )
  {
    v12(*(_QWORD *)(v1 + 3000));
    *(_OWORD *)(v1 + 2992) = 0LL;
    *(_OWORD *)(v1 + 3008) = 0LL;
    *(_OWORD *)(v1 + 3024) = 0LL;
  }
  v13 = *(void (__fastcall **)(_QWORD))(v1 + 3064);
  if ( v13 )
  {
    v13(*(_QWORD *)(v1 + 3048));
    *(_OWORD *)(v1 + 3040) = 0LL;
    *(_OWORD *)(v1 + 3056) = 0LL;
    *(_OWORD *)(v1 + 3072) = 0LL;
  }
  v14 = *(void (__fastcall **)(_QWORD))(v1 + 2808);
  if ( v14 )
  {
    v14(*(_QWORD *)(v1 + 2792));
    *(_OWORD *)(v1 + 2784) = 0LL;
    *(_OWORD *)(v1 + 2800) = 0LL;
    *(_OWORD *)(v1 + 2816) = 0LL;
  }
  v15 = *(_QWORD *)(v1 + 5008);
  if ( v15 )
  {
    v16 = *(void (__fastcall **)(_QWORD))(v15 + 32);
    if ( v16 )
    {
      v16(*(_QWORD *)(v15 + 16));
      v17 = *(_QWORD *)(v1 + 5008);
      *(_OWORD *)(v17 + 8) = 0LL;
      *(_OWORD *)(v17 + 24) = 0LL;
      *(_OWORD *)(v17 + 40) = 0LL;
      *(_QWORD *)(v17 + 56) = 0LL;
    }
    v18 = *(void **)(v1 + 5008);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *(_QWORD *)(v1 + 5008) = 0LL;
    }
  }
}
