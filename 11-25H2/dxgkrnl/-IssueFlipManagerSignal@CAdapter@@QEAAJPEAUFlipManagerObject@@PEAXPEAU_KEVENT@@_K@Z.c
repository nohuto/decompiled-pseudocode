/*
 * XREFs of ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400996B8
 * Callers:
 *     ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400986D8 (-IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVE.c)
 * Callees:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline @ 0x140073484 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z @ 0x140099588 (-FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z.c)
 *     ?GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContext@1@@Z @ 0x1400995EC (-GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContex.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1402A8CDC (DxgkSignalSynchronizationObjectInternal.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x140347AF0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 */

__int64 __fastcall CAdapter::IssueFlipManagerSignal(
        CAdapter *this,
        struct FlipManagerObject *a2,
        DXGSYNCOBJECT *a3,
        struct _KEVENT *a4)
{
  NTSTATUS SyncContextForFlipManager; // ebx
  struct CAdapter::FlipManagerSyncContext *v8; // rdi
  __int64 v9; // r8
  int v10; // eax
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-E0h]
  __int64 AccessMode; // [rsp+28h] [rbp-D8h]
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v15[58]; // [rsp+50h] [rbp-B0h] BYREF

  Handle[0] = 0LL;
  SyncContextForFlipManager = CAdapter::GetSyncContextForFlipManager(
                                this,
                                a2,
                                (struct CAdapter::FlipManagerSyncContext **)Handle);
  if ( SyncContextForFlipManager >= 0 )
  {
    v8 = (struct CAdapter::FlipManagerSyncContext *)Handle[0];
    SyncContextForFlipManager = DxgkSignalSynchronizationObjectFromGpuByReference(a3);
    if ( SyncContextForFlipManager < 0 )
      CAdapter::FreeFlipManagerSyncContext(this, v8);
    if ( (unsigned int)Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( SyncContextForFlipManager >= 0 )
      {
        if ( a4 )
        {
          memset(v15, 0, sizeof(v15));
          Handle[0] = 0LL;
          SyncContextForFlipManager = ObOpenObjectByPointer(
                                        a4,
                                        0,
                                        0LL,
                                        0x1F0003u,
                                        (POBJECT_TYPE)ExEventObjectType,
                                        1,
                                        Handle);
          if ( SyncContextForFlipManager >= 0 )
          {
            v10 = *((_DWORD *)v8 + 2);
            LODWORD(v15[17]) |= 2u;
            LODWORD(v15[0]) = v10;
            v15[50] = Handle[0];
            SyncContextForFlipManager = DxgkSignalSynchronizationObjectInternal(
                                          v15,
                                          0LL,
                                          v9,
                                          0LL,
                                          ObjectType,
                                          AccessMode);
            ZwClose(Handle[0]);
          }
        }
      }
    }
  }
  return (unsigned int)SyncContextForFlipManager;
}
