/*
 * XREFs of KeSetIdealProcessorThreadEx @ 0x1403B422C
 * Callers:
 *     MiRevertProcessorMove @ 0x14030AAFC (MiRevertProcessorMove.c)
 *     KeSetIdealProcessorThread @ 0x1403B40B0 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403B4160 (KeSetIdealProcessorThreadByNumber.c)
 *     MiSetIdealProcessorThread @ 0x1403B4508 (MiSetIdealProcessorThread.c)
 *     ?SmCompressCtxUpdateThreadTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_ETHREAD@@@Z @ 0x14044A2C8 (-SmCompressCtxUpdateThreadTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiCheckForThreadDispatch @ 0x14031D21C (KiCheckForThreadDispatch.c)
 *     ?KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z @ 0x1403B4344 (-KiSetIdealProcessorThread@@YAJPEAU_KTHREAD@@KEPEAKE@Z.c)
 *     EtwTraceIdealProcessor @ 0x1404B1DCC (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadEx(struct _KTHREAD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int8 v6; // di
  __int64 v7; // rdx
  int v8; // ebp
  char v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = 0;
  v10 = 0;
  KiAcquireThreadLockRaiseToDpc((__int64)a1, (unsigned __int8 *)&v10);
  v6 = (a1->MiscFlags & 8) != 0 && a1 == KeGetCurrentThread();
  v8 = KiSetIdealProcessorThread(a1, a2, v6, &v11, v10);
  if ( v8 >= 0 && !v6 )
    _interlockedbittestandset((volatile signed __int32 *)&a1->116 + 1, 0);
  a1->ThreadLock = 0LL;
  if ( (xmmword_140FC5B10 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL);
    if ( (xmmword_140FC5B10 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL);
  }
  LOBYTE(v7) = v10;
  KiCheckForThreadDispatch(KeGetCurrentPrcb(), v7);
  if ( a3 )
    *a3 = v11;
  return (unsigned int)v8;
}
