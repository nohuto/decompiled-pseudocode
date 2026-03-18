/*
 * XREFs of ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x14009B808
 * Callers:
 *     ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x14009A868 (-IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVE.c)
 * Callees:
 *     ?FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z @ 0x14009B6D8 (-FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z.c)
 *     ?GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContext@1@@Z @ 0x14009B73C (-GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContex.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1402B125C (DxgkSignalSynchronizationObjectInternal.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1403E7E60 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 */

__int64 __fastcall CAdapter::IssueFlipManagerSignal(
        CAdapter *this,
        struct FlipManagerObject *a2,
        void *a3,
        struct _KEVENT *a4,
        unsigned __int64 a5)
{
  NTSTATUS SyncContextForFlipManager; // ebx
  struct CAdapter::FlipManagerSyncContext *v9; // rdi
  __int64 v10; // r8
  int v11; // eax
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-E0h]
  __int64 AccessMode; // [rsp+28h] [rbp-D8h]
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[58]; // [rsp+50h] [rbp-B0h] BYREF

  Handle[0] = 0LL;
  SyncContextForFlipManager = CAdapter::GetSyncContextForFlipManager(
                                this,
                                a2,
                                (struct CAdapter::FlipManagerSyncContext **)Handle);
  if ( SyncContextForFlipManager >= 0 )
  {
    v9 = (struct CAdapter::FlipManagerSyncContext *)Handle[0];
    SyncContextForFlipManager = DxgkSignalSynchronizationObjectFromGpuByReference(
                                  a3,
                                  a5,
                                  *((unsigned int *)Handle[0] + 2));
    if ( SyncContextForFlipManager >= 0 )
    {
      if ( a4 )
      {
        memset(v16, 0, sizeof(v16));
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
          v11 = *((_DWORD *)v9 + 2);
          LODWORD(v16[17]) |= 2u;
          LODWORD(v16[0]) = v11;
          v16[50] = Handle[0];
          SyncContextForFlipManager = DxgkSignalSynchronizationObjectInternal(
                                        v16,
                                        0LL,
                                        v10,
                                        0LL,
                                        ObjectType,
                                        AccessMode);
          ZwClose(Handle[0]);
        }
      }
    }
    else
    {
      CAdapter::FreeFlipManagerSyncContext(this, v9);
    }
  }
  return (unsigned int)SyncContextForFlipManager;
}
