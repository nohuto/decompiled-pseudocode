/*
 * XREFs of Win32AllocPoolWithQuotaZInit @ 0x1C002FBB0
 * Callers:
 *     HMAllocObjectEx @ 0x1C0012A1C (HMAllocObjectEx.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C014A350 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     NtUserSystemParametersInfo @ 0x1C014C2C0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64_&_ @ 0x1C002FCA0 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall Win32AllocPoolWithQuotaZInit(unsigned __int64 a1, unsigned int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rbx
  unsigned __int64 v3; // rdi
  const void *v4; // rsi
  int v5; // eax
  __int64 v6; // r14
  _QWORD *Pool2; // rax
  char v9; // bp
  __int64 v10; // rdi
  _QWORD v11[2]; // [rsp+20h] [rbp-D8h] BYREF
  PVOID BackTrace[20]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v13; // [rsp+100h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+108h] [rbp+10h] BYREF
  __int64 v15; // [rsp+110h] [rbp+18h] BYREF
  unsigned __int64 v16; // [rsp+118h] [rbp+20h] BYREF

  v2 = gpLeakTrackingAllocator;
  v3 = a1;
  v4 = (const void *)a2;
  v14 = a2;
  v15 = 260LL;
  v16 = a1;
  v5 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v5 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, a2)
        && v3 + 16 >= v3 )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(v15 & 0xFFFFFFFFFFFFFFFCuLL | 1, v3 + 16, v14);
        v6 = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
              *Pool2 = v4,
              v6 = (__int64)(Pool2 + 2),
              Pool2 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v2 + 1),
            v4);
        }
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      v6 = 0LL;
      if ( v5 != 2 )
        return v6;
      v13 = 0LL;
      if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, a2, &v13) )
      {
        v9 = 0;
        if ( v3 < 0x1000 || (v3 & 0xFFF) != 0 )
        {
          v3 += 16LL;
          v9 = 1;
          v16 = v3;
        }
        v10 = ExAllocatePool2(261LL, v3, (unsigned int)v4);
        if ( v10 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v9 && (unsigned __int64)(v10 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v2,
                                    v10,
                                    v13,
                                    BackTrace) )
              return v10 + 16;
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v2,
                                       v10,
                                       v13,
                                       BackTrace) )
          {
            return v10;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v10);
        }
      }
      else
      {
        v11[0] = &v15;
        v11[1] = &v14;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
                 v2,
                 v11,
                 &v16);
      }
    }
  }
  else
  {
    v6 = ExAllocatePool2(261LL, a1, a2);
    if ( v6 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
  }
  return v6;
}
