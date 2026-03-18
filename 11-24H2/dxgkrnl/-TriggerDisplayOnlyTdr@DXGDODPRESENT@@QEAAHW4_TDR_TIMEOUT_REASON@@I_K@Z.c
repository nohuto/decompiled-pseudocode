/*
 * XREFs of ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1402835F4
 * Callers:
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1402829AC (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1403A2F5C (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOn.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x14004C604 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ @ 0x140071BB8 (-GetDbgOwnerTag@DXGADAPTER@@QEAA_KXZ.c)
 *     TdrBugcheckOnTimeout @ 0x140186C5C (TdrBugcheckOnTimeout.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D01F0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1403EEDD0 (-TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ.c)
 */

__int64 __fastcall DXGDODPRESENT::TriggerDisplayOnlyTdr(__int64 a1, int a2, int a3, __int64 a4)
{
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  struct _TDR_RECOVERY_CONTEXT *StartContext; // rbx
  struct DXGADAPTER *Adapter; // rax
  DXGADAPTER *v11; // rcx
  NTSTATUS v13; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF
  void *ThreadHandle; // [rsp+90h] [rbp+8h] BYREF

  _m_prefetchw((const void *)(a1 + 140));
  if ( _InterlockedOr((volatile signed __int32 *)(a1 + 140), 0x80000000) >= 0 )
  {
    RecoveryContext = TdrCreateRecoveryContext();
    StartContext = RecoveryContext;
    if ( RecoveryContext )
    {
      *((_DWORD *)RecoveryContext + 4) = a2;
      Adapter = DXGDODPRESENT::GetAdapter((DXGDODPRESENT *)a1);
      *((_QWORD *)StartContext + 4) = Adapter;
      _InterlockedIncrement64((volatile signed __int64 *)Adapter + 3);
      v11 = (DXGADAPTER *)*((_QWORD *)StartContext + 4);
      *((_QWORD *)StartContext + 5) = -1LL;
      *((_DWORD *)StartContext + 36) = 69639;
      *((_DWORD *)StartContext + 37) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 27) + 64LL) + 40LL) + 28LL);
      *((_QWORD *)StartContext + 3) = a4;
      *((_DWORD *)StartContext + 20) = a3;
      *((_QWORD *)StartContext + 13) = DXGADAPTER::GetDbgOwnerTag(v11);
      if ( !TdrIsRecoveryRequired(StartContext) )
        return 1LL;
      memset(&ObjectAttributes.Length + 1, 0, 20);
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      ThreadHandle = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      v13 = PsCreateSystemThread(
              &ThreadHandle,
              0,
              &ObjectAttributes,
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              0LL,
              (PKSTART_ROUTINE)DXGADAPTER::PresentDisplayOnlyRecoveryWorker,
              StartContext);
      if ( v13 < 0 )
        TdrBugcheckOnTimeout(StartContext, v13, 15);
      ZwClose(ThreadHandle);
    }
  }
  return 0LL;
}
