/*
 * XREFs of ?FlipManagerGetTracingIdFromToken@@YAIPEAVCFlipManagerToken@@@Z @ 0x14001A754
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x14005E9A4 (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 */

__int64 __fastcall FlipManagerGetTracingIdFromToken(struct CFlipManagerToken *a1)
{
  __int64 v1; // rdi
  unsigned int TracingId; // ebx

  v1 = *((_QWORD *)a1 + 11);
  TracingId = 0;
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 40)) >= 0 )
  {
    TracingId = CFlipManager::GetTracingId((CFlipManager *)(v1 + 32));
    CPushLock::ReleaseLock((CPushLock *)(v1 + 40));
  }
  return TracingId;
}
