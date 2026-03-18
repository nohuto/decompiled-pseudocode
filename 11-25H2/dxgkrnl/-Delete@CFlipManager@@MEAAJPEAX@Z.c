/*
 * XREFs of ?Delete@CFlipManager@@MEAAJPEAX@Z @ 0x14005F090
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x140007800 (-DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x140007948 (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x140007BCC (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     DxgkGetSessionTokenManager @ 0x14000B2D0 (DxgkGetSessionTokenManager.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?FreeCancels@CFlipManager@@AEAAXXZ @ 0x14005B5F4 (-FreeCancels@CFlipManager@@AEAAXXZ.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140078D98 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009C454 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::Delete(CFlipManager *this, void *a2)
{
  __int64 v3; // rsi
  char v4; // bl
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void (__fastcall *v11)(_QWORD); // rbx
  unsigned int TracingId; // eax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline(this) )
  {
    v14 = 0LL;
    if ( (int)DxgkGetSessionTokenManager(&v14) >= 0 )
    {
      v3 = v14;
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
      (*(void (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v3 + 248LL))(
        v3,
        (char *)this + 328,
        (char *)this - 32);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 28);
  if ( v5 )
  {
    (**v5)(v5, 1LL);
    *((_QWORD *)this + 28) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 36);
  if ( v6 )
  {
    ObfDereferenceObject(v6);
    *((_QWORD *)this + 36) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 37);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    *((_QWORD *)this + 37) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 40);
  if ( v8 )
  {
    ObfDereferenceObject(v8);
    *((_QWORD *)this + 40) = 0LL;
  }
  CFlipManager::FreeCurrentUpdates(this);
  CEndpointResourceStateManager::DestroyAllResourceStates((CFlipManager *)((char *)this + 56));
  CEndpointResourceStateManager::DestroyAllResourceStates((CFlipManager *)((char *)this + 104));
  CFlipManager::FreeQueuedUpdates(this);
  CFlipManager::FreeCancels(this);
  v9 = (void *)*((_QWORD *)this + 38);
  if ( v9 )
  {
    ObfDereferenceObject(v9);
    *((_QWORD *)this + 38) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 3);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)this + 3) = 0LL;
  }
  v11 = *(void (__fastcall **)(_QWORD))(DxgkGetWin32kImportTable() + 336);
  TracingId = CFlipManager::GetTracingId(this);
  v11(TracingId);
  return 0LL;
}
