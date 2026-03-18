/*
 * XREFs of KeSetIdealProcessorThreadEx @ 0x1403B3360
 * Callers:
 *     MiRevertProcessorMove @ 0x14022559C (MiRevertProcessorMove.c)
 *     MiSetIdealProcessorThread @ 0x140377430 (MiSetIdealProcessorThread.c)
 *     ?SmCompressCtxUpdateThreadTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_ETHREAD@@@Z @ 0x140393740 (-SmCompressCtxUpdateThreadTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@.c)
 *     KeSetIdealProcessorThread @ 0x1403B2460 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403B2510 (KeSetIdealProcessorThreadByNumber.c)
 * Callees:
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x140201B78 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     EtwTraceIdealProcessor @ 0x1404B0E7C (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadEx(struct _KTHREAD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int IdealProcessor; // r15d
  unsigned int UserIdealProcessor; // r14d
  char v8; // di
  __int64 v9; // rdx
  int v10; // ebp
  __int64 v11; // r9
  unsigned int v12; // edi
  char v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0;
  v14 = 0;
  KiAcquireThreadLockRaiseToDpc((__int64)a1, (unsigned __int8 *)&v14);
  IdealProcessor = a1->IdealProcessor;
  UserIdealProcessor = a1->UserIdealProcessor;
  v8 = (a1->MiscFlags & 8) != 0 && a1 == KeGetCurrentThread();
  v10 = KiSetIdealProcessorThread(a1, a2, v8, &v15, v14);
  if ( v10 >= 0 && !v8 )
    _interlockedbittestandset((volatile signed __int32 *)&a1->116 + 1, 0);
  v11 = a1->IdealProcessor;
  v12 = a1->UserIdealProcessor;
  a1->ThreadLock = 0LL;
  if ( (xmmword_140FC5B10 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, IdealProcessor, v11);
    if ( (xmmword_140FC5B10 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, UserIdealProcessor, v12);
  }
  LOBYTE(v9) = v14;
  KiCheckForThreadDispatch(KeGetCurrentPrcb(), v9);
  if ( a3 )
    *a3 = v15;
  return (unsigned int)v10;
}
