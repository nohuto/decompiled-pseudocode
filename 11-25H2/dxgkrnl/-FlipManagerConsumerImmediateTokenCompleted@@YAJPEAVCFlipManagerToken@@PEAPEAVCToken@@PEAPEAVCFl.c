/*
 * XREFs of ?FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C05C
 * Callers:
 *     ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x14005E100 (-Discard@CFlipManagerToken@@UEAAXXZ.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x14005E1D4 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C6F8 (-ConsumerImmediateTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEA.c)
 */

__int64 __fastcall FlipManagerConsumerImmediateTokenCompleted(
        struct CFlipManagerToken *a1,
        struct CToken **a2,
        struct CFlipManagerSignal **a3)
{
  __int64 v3; // rsi
  int v7; // ebx

  v3 = *((_QWORD *)a1 + 11);
  v7 = CPushLock::AcquireLockExclusive((CPushLock *)(v3 + 40));
  if ( v7 >= 0 )
  {
    CFlipManager::ConsumerImmediateTokenCompleted((CFlipManager *)(v3 + 32), a1, a2, a3);
    CPushLock::ReleaseLock((CPushLock *)(v3 + 40));
  }
  return (unsigned int)v7;
}
