/*
 * XREFs of ?Create@CSystemResourceReference@CBatch@DirectComposition@@SAJVResourceHandle@@PEAVCApplicationChannel@3@PEAPEAV123@@Z @ 0x1C0030EE4
 * Callers:
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C0030FAC (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0029000 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64_&_ @ 0x1C002FCA0 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DirectComposition::CBatch::CSystemResourceReference::Create(int a1, __int64 a2, __int64 *a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // rsi
  unsigned int v4; // r14d
  int v8; // eax
  __int64 UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  unsigned __int64 v12[2]; // [rsp+28h] [rbp-89h] BYREF
  __int64 v13; // [rsp+38h] [rbp-79h] BYREF
  __int64 v14; // [rsp+40h] [rbp-71h] BYREF
  PVOID BackTrace[20]; // [rsp+48h] [rbp-69h] BYREF
  unsigned int v16; // [rsp+130h] [rbp+7Fh] BYREF

  v3 = gpLeakTrackingAllocator;
  v4 = 0;
  v13 = 260LL;
  v16 = 1919042372;
  v8 = *(_DWORD *)gpLeakTrackingAllocator;
  v14 = 16LL;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      if ( v8 != 2 )
        return (unsigned int)-1073741801;
      v12[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x72624344u, v12) )
      {
        v12[0] = (unsigned __int64)&v13;
        v12[1] = (unsigned __int64)&v16;
        UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
                                                                                           (__int64)v3,
                                                                                           (__int64)v12,
                                                                                           &v14);
        goto LABEL_4;
      }
      UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = ExAllocatePool2(
                                                                                         261LL,
                                                                                         32LL,
                                                                                         1919042372LL);
      if ( !UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 )
        return (unsigned int)-1073741801;
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v3,
                                UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64,
                                v12[0],
                                BackTrace) )
          goto LABEL_5;
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v3,
                                   UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64,
                                   v12[0],
                                   BackTrace) )
      {
        UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 += 16LL;
        goto LABEL_4;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64);
      return (unsigned int)-1073741801;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x72624344u) )
      return (unsigned int)-1073741801;
    Pool2 = (_QWORD *)ExAllocatePool2(v13 & 0xFFFFFFFFFFFFFFFCuLL | 1, 32LL, v16);
    UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
          *Pool2 = 1919042372LL,
          UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v3 + 1),
        (const void *)0x72624344);
    }
  }
  else
  {
    UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 = ExAllocatePool2(
                                                                                       261LL,
                                                                                       16LL,
                                                                                       1919042372LL);
    if ( UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
  }
LABEL_4:
  if ( !UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 )
    return (unsigned int)-1073741801;
LABEL_5:
  DirectComposition::CConnection::ReferenceSystemResource(*(_QWORD *)(a2 + 40), a1);
  *(_DWORD *)(UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64 + 8) = a1;
  *a3 = UntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64;
  return v4;
}
