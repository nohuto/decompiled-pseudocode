/*
 * XREFs of ?FlipManagerConsumerIFlipTokenSubmitted@@YAJPEAVCFlipManagerToken@@@Z @ 0x14004CA3C
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x14005E1D4 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z @ 0x14004CA9C (-ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z.c)
 */

__int64 __fastcall FlipManagerConsumerIFlipTokenSubmitted(struct CFlipManagerToken *a1)
{
  __int64 v1; // rsi
  int v3; // ebx

  v1 = *((_QWORD *)a1 + 11);
  v3 = CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 40));
  if ( v3 >= 0 )
  {
    CFlipManager::ConsumerIFlipTokenSubmitted((CFlipManager *)(v1 + 32), a1);
    CPushLock::ReleaseLock((CPushLock *)(v1 + 40));
  }
  return (unsigned int)v3;
}
