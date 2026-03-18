/*
 * XREFs of ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400BBF50
 * Callers:
 *     _lambda_7830472d83fd6962041fe396e2298a02_::operator() @ 0x1401BF1F0 (_lambda_7830472d83fd6962041fe396e2298a02_--operator().c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019869C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
        NSInstrumentation::CLeakTrackingAllocator *this,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  __int64 Pool2; // rbx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rcx
  _DWORD *v13; // rax
  unsigned __int64 i; // r14
  char v15; // r15
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = *(_DWORD *)this;
  v5 = a3;
  v6 = a4;
  if ( !*(_DWORD *)this )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(a2 & 0xFFFFFFFFFFFFFFFCuLL | 1, a3, a4);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)this + 14);
    return Pool2;
  }
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      if ( (a4 & *((_DWORD *)this + 20)) != a4 )
        goto LABEL_2;
      v12 = *((unsigned int *)this + 21);
      v13 = (_DWORD *)((char *)this + 48);
      for ( i = 0LL; ; ++i )
      {
        if ( i >= v12 )
          goto LABEL_2;
        if ( *v13 == a4 )
          break;
        ++v13;
      }
      v15 = 0;
      if ( a3 < 0x1000 || (a3 & 0xFFF) != 0 )
      {
        v15 = 1;
        v5 = a3 + 16;
      }
      Pool2 = ExAllocatePool2(a2 & 0xFFFFFFFFFFFFFFFCuLL | 1, v5, a4);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)this + 16);
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v15 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  this,
                                  Pool2,
                                  i,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     this,
                                     Pool2,
                                     i,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)this + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(this, a4) || v5 + 16 < v5 )
    return 0LL;
  v11 = (unsigned __int64 *)ExAllocatePool2(a2 & 0xFFFFFFFFFFFFFFFCuLL | 1, v5 + 16, (unsigned int)v6);
  Pool2 = (__int64)v11;
  if ( !v11
    || (_InterlockedIncrement64((volatile signed __int64 *)this + 14),
        *v11 = v6,
        Pool2 = (__int64)(v11 + 2),
        v11 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)this + 1),
      v6);
  }
  return Pool2;
}
