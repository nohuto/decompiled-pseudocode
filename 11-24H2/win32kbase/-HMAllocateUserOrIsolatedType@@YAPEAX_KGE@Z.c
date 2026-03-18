/*
 * XREFs of ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x140041A40
 * Callers:
 *     HMAllocObjectEx @ 0x140041FF0 (HMAllocObjectEx.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x140042EF8 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019869C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void *__fastcall HMAllocateUserOrIsolatedType(unsigned __int64 a1, __int16 a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rbx
  unsigned __int64 *Pool2; // rax
  _DWORD *v10; // rax
  unsigned __int64 i; // rbp
  char v12; // r14
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  if ( (a2 & 0x200) == 0 )
  {
    v4 = *((unsigned int *)&unk_1402437B8 + 6 * a3);
    v5 = W32GetUserSessionState(3LL * a3) + 72288;
    v6 = *(_DWORD *)v5;
    if ( !*(_DWORD *)v5 )
      goto LABEL_3;
    if ( v6 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
             (NSInstrumentation::CLeakTrackingAllocator *)v5,
             v4)
        && a1 + 16 >= a1 )
      {
        Pool2 = (unsigned __int64 *)ExAllocatePool2(256LL, a1 + 16, (unsigned int)v4);
        v7 = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)(v5 + 112)),
              *Pool2 = v4,
              v7 = (__int64)(Pool2 + 2),
              Pool2 == (unsigned __int64 *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v5 + 8),
            v4);
        }
        return (void *)v7;
      }
    }
    else if ( v6 == 2 )
    {
      if ( ((unsigned int)v4 & *(_DWORD *)(v5 + 80)) != (_DWORD)v4 )
      {
LABEL_3:
        v7 = ExAllocatePool2(256LL, a1, (unsigned int)v4);
        if ( v7 )
          _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
        return (void *)v7;
      }
      v10 = (_DWORD *)(v5 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v5 + 84) )
          goto LABEL_3;
        if ( *v10 == (_DWORD)v4 )
          break;
        ++v10;
      }
      v12 = 0;
      if ( a1 < 0x1000 || (a1 & 0xFFF) != 0 )
      {
        v12 = 1;
        a1 += 16LL;
      }
      v7 = ExAllocatePool2(256LL, a1, (unsigned int)v4);
      if ( v7 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v12 && (unsigned __int64)(v7 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v5,
                                  v7,
                                  i,
                                  BackTrace) )
          {
            v7 += 16LL;
            return (void *)v7;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v5,
                                     v7,
                                     i,
                                     BackTrace) )
        {
          return (void *)v7;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 136));
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v7);
      }
    }
    return 0LL;
  }
  return HMAllocateIsolatedType(a3);
}
