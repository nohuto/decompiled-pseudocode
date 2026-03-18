/*
 * XREFs of ?IssueFlipManagerWaitForFlipAway@CAdapter@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x14009B944
 * Callers:
 *     ?IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x14009A998 (-IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSIT.c)
 * Callees:
 *     ?FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z @ 0x14009B6D8 (-FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z.c)
 *     ?GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContext@1@@Z @ 0x14009B73C (-GetSyncContextForFlipManager@CAdapter@@IEAAJPEAUFlipManagerObject@@PEAPEAUFlipManagerSyncContex.c)
 *     ?Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1@@Z @ 0x14009C0C0 (-Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x14029E990 (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 */

__int64 __fastcall CAdapter::IssueFlipManagerWaitForFlipAway(
        CAdapter *this,
        struct FlipManagerObject *a2,
        const struct tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE *a3,
        __int64 a4)
{
  int SyncContextForFlipManager; // ebx
  struct _LIST_ENTRY *v8; // rcx
  struct CFlipAwayFence *Flink; // rax
  __int64 v10; // rdx
  struct CAdapter::FlipManagerSyncContext *v11; // rdi
  struct CFlipAwayFence *v13; // [rsp+20h] [rbp-60h] BYREF
  struct CAdapter::FlipManagerSyncContext *v14; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v15[10]; // [rsp+30h] [rbp-50h] BYREF

  v14 = 0LL;
  SyncContextForFlipManager = CAdapter::GetSyncContextForFlipManager(this, a2, &v14);
  v8 = (struct _LIST_ENTRY *)((char *)this + 104);
  Flink = 0LL;
  v13 = 0LL;
  if ( SyncContextForFlipManager < 0 )
  {
    if ( SyncContextForFlipManager != -1073741275 )
      goto LABEL_10;
LABEL_9:
    SyncContextForFlipManager = CFlipAwayFence::Create(v8, *((_DWORD *)this + 11), a3, &v13);
    Flink = v13;
    goto LABEL_10;
  }
  Flink = (struct CFlipAwayFence *)v8->Flink;
  if ( v8->Flink == v8 )
    goto LABEL_9;
  v10 = *((_QWORD *)a3 + 2);
  while ( 1 )
  {
    v13 = Flink;
    if ( *((_QWORD *)Flink + 4) == v10 )
      break;
    Flink = *(struct CFlipAwayFence **)Flink;
    if ( Flink == (struct CFlipAwayFence *)v8 )
      goto LABEL_9;
  }
  SyncContextForFlipManager = 0;
LABEL_10:
  v11 = v14;
  if ( SyncContextForFlipManager < 0
    || (LODWORD(v13) = *((_DWORD *)Flink + 10),
        memset(v15, 0, sizeof(v15)),
        LODWORD(v15[0]) = *((_DWORD *)v14 + 2),
        v15[1] = &v13,
        HIDWORD(v15[0]) = 1,
        v15[2] = a4,
        SyncContextForFlipManager = DxgkKernelModeWaitForSynchronizationObjectFromGpu(v15),
        SyncContextForFlipManager < 0) )
  {
    CAdapter::FreeFlipManagerSyncContext(this, v11);
  }
  return (unsigned int)SyncContextForFlipManager;
}
