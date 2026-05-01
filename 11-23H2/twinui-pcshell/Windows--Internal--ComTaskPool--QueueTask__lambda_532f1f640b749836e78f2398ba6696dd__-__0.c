/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__&__0 @ 0x1803AB500
 * Callers:
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x1803BA4DC (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__&_ @ 0x1803AB784 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__-_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd_____0(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd____(v7);
  v4 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  v5 = v7[0];
  if ( v7[0] )
  {
    v7[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return v4;
}
