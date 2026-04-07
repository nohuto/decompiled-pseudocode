/*
 * XREFs of ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x180073088
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CA@PEAX@Z @ 0x180073030 (-_lambda_invoker_cdecl_@_lambda_1ad7ecfab602a777ecf020873216a663_@@CA@PEAX@Z.c)
 *     ?_lambda_invoker_cdecl_@_lambda_152aa9d2a3a0648fa2fa7fcef514b376_@@CA@PEAX@Z @ 0x180073060 (-_lambda_invoker_cdecl_@_lambda_152aa9d2a3a0648fa2fa7fcef514b376_@@CA@PEAX@Z.c)
 *     ?FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ @ 0x18009E608 (-FlushUsage@FeatureStateManager@details@wil@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details_abi::SubscriptionList::OnSignaled(LPCRITICAL_SECTION lpCriticalSection, PSRWLOCK SRWLock)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  void (__fastcall *v6)(unsigned __int64); // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  __m128i v10; // xmm1

  AcquireSRWLockShared(SRWLock);
  v4 = (*(_QWORD *)&lpCriticalSection[1].LockCount - (unsigned __int64)lpCriticalSection[1].DebugInfo) >> 4;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  v5 = 0LL;
  while ( v5 < v4 )
  {
    v6 = 0LL;
    v7 = 0LL;
    EnterCriticalSection(lpCriticalSection);
    AcquireSRWLockExclusive(SRWLock);
    v8 = 16 * v5;
    while ( v5 < v4 )
    {
      DebugInfo = lpCriticalSection[1].DebugInfo;
      if ( *(_QWORD *)((char *)&DebugInfo->Type + v8) )
      {
        v10 = *((__m128i *)&DebugInfo->Type + v5++);
        v7 = _mm_srli_si128(v10, 8).m128i_u64[0];
        v6 = (void (__fastcall *)(unsigned __int64))v10.m128i_i64[0];
        break;
      }
      ++v5;
      v8 += 16LL;
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v6 )
      v6(v7);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
}
