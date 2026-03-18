/*
 * XREFs of Win32AllocPoolZInit @ 0x14003EF50
 * Callers:
 *     <none>
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019869C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall Win32AllocPoolZInit(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // eax
  __int64 Pool2; // rbx
  unsigned __int64 *v8; // rax
  _DWORD *v9; // rax
  unsigned __int64 i; // rbp
  char v11; // r14
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = W32GetUserSessionState(a1) + 72288;
  v5 = *(_DWORD *)v4;
  if ( !*(_DWORD *)v4 )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(256LL, v3, (unsigned int)v2);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 112));
    return Pool2;
  }
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      if ( ((unsigned int)v2 & *(_DWORD *)(v4 + 80)) != (_DWORD)v2 )
        goto LABEL_2;
      v9 = (_DWORD *)(v4 + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= *(unsigned int *)(v4 + 84) )
          goto LABEL_2;
        if ( *v9 == (_DWORD)v2 )
          break;
        ++v9;
      }
      v11 = 0;
      if ( v3 < 0x1000 || (v3 & 0xFFF) != 0 )
      {
        v11 = 1;
        v3 += 16LL;
      }
      Pool2 = ExAllocatePool2(256LL, v3, (unsigned int)v2);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 128));
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v11 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v4,
                                  Pool2,
                                  i,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v4,
                                     Pool2,
                                     i,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 136));
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
          (NSInstrumentation::CLeakTrackingAllocator *)v4,
          v2)
    || v3 + 16 < v3 )
  {
    return 0LL;
  }
  v8 = (unsigned __int64 *)ExAllocatePool2(256LL, v3 + 16, (unsigned int)v2);
  Pool2 = (__int64)v8;
  if ( !v8
    || (_InterlockedIncrement64((volatile signed __int64 *)(v4 + 112)),
        *v8 = v2,
        Pool2 = (__int64)(v8 + 2),
        v8 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *(NSInstrumentation::CPointerHashTable **)(v4 + 8),
      (const void *)v2);
  }
  return Pool2;
}
