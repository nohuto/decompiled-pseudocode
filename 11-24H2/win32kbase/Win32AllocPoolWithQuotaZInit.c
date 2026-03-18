/*
 * XREFs of Win32AllocPoolWithQuotaZInit @ 0x14003F1D0
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

__int64 __fastcall Win32AllocPoolWithQuotaZInit(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbp
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rdi
  unsigned __int64 *Pool2; // rax
  char v9; // r15
  __int64 v10; // rsi
  _DWORD *v11; // rax
  unsigned __int64 i; // r14
  PVOID BackTrace[23]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = W32GetUserSessionState(a1) + 72288;
  v5 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 )
  {
    if ( v5 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
             (NSInstrumentation::CLeakTrackingAllocator *)v4,
             v2)
        && v3 + 16 >= v3 )
      {
        Pool2 = (unsigned __int64 *)ExAllocatePool2(257LL, v3 + 16, (unsigned int)v2);
        v6 = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)(v4 + 112)),
              *Pool2 = v2,
              v6 = (__int64)(Pool2 + 2),
              Pool2 == (unsigned __int64 *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v4 + 8),
            (const void *)v2);
        }
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      if ( v5 != 2 )
        return 0LL;
      if ( ((unsigned int)v2 & *(_DWORD *)(v4 + 80)) == (_DWORD)v2 )
      {
        v11 = (_DWORD *)(v4 + 48);
        v6 = 0LL;
        for ( i = 0LL; ; ++i )
        {
          if ( i >= *(unsigned int *)(v4 + 84) )
            goto LABEL_14;
          if ( *v11 == (_DWORD)v2 )
            break;
          ++v11;
        }
        v9 = 0;
        if ( v3 < 0x1000 || (v3 & 0xFFF) != 0 )
        {
          v9 = 1;
          v3 += 16LL;
        }
        v10 = ExAllocatePool2(257LL, v3, (unsigned int)v2);
        if ( v10 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v4 + 128));
          memset(BackTrace, 0, 0xA0uLL);
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v9 && (unsigned __int64)(v10 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v4,
                                    v10,
                                    i,
                                    BackTrace) )
              return v10 + 16;
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v4,
                                       v10,
                                       i,
                                       BackTrace) )
          {
            return v10;
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v4 + 136));
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v10);
        }
      }
      else
      {
LABEL_14:
        v6 = ExAllocatePool2(257LL, v3, (unsigned int)v2);
        if ( v6 )
          _InterlockedIncrement64((volatile signed __int64 *)(v4 + 112));
      }
    }
  }
  else
  {
    v6 = ExAllocatePool2(257LL, v3, (unsigned int)v2);
    if ( v6 )
      _InterlockedIncrement64((volatile signed __int64 *)(v4 + 112));
  }
  return v6;
}
