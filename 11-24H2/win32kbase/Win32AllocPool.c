/*
 * XREFs of Win32AllocPool @ 0x1400BA170
 * Callers:
 *     <none>
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64_&_ @ 0x1400BEFB4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x140151C9C (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019869C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall Win32AllocPool(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 UserSessionState; // rax
  __int64 v5; // rdi
  int v6; // eax
  __int64 Pool2; // rbx
  unsigned __int64 *v9; // rax
  char v10; // r14
  _QWORD v11[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v13; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v14; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v15; // [rsp+110h] [rbp+77h] BYREF
  unsigned __int64 v16; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = a2;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  v14 = v2;
  v15 = 256LL;
  v16 = v3;
  v5 = UserSessionState + 72288;
  v6 = *(_DWORD *)(UserSessionState + 72288);
  if ( !v6 )
  {
    Pool2 = ExAllocatePool2(258LL, v3, (unsigned int)v2);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
    return Pool2;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 2 )
    {
      v13 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              (NSInstrumentation::CLeakTrackingAllocator *)v5,
              v2,
              &v13) )
      {
        v11[0] = &v15;
        v11[1] = &v14;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                 v5,
                 v11,
                 &v16);
      }
      v10 = 0;
      if ( v3 < 0x1000 || (v3 & 0xFFF) != 0 )
      {
        v3 += 16LL;
        v10 = 1;
        v16 = v3;
      }
      Pool2 = ExAllocatePool2(258LL, v3, (unsigned int)v2);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 128));
        memset(BackTrace, 0, 0xA0uLL);
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v5,
                                  Pool2,
                                  v13,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v5,
                                     Pool2,
                                     v13,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 136));
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v5,
          v2)
    || v3 + 16 < v3 )
  {
    return 0LL;
  }
  v9 = (unsigned __int64 *)ExAllocatePool2(v15 | 2, v3 + 16, v14);
  Pool2 = (__int64)v9;
  if ( !v9
    || (_InterlockedIncrement64((volatile signed __int64 *)(v5 + 112)),
        *v9 = v2,
        Pool2 = (__int64)(v9 + 2),
        v9 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v5 + 8),
      v2);
  }
  return Pool2;
}
