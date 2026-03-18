/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___ @ 0x14004ACF8
 * Callers:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x14004ABD8 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     DirectComposition::Memory::Allocate @ 0x14004AC18 (DirectComposition--Memory--Allocate.c)
 *     Win32AllocPoolWithQuota @ 0x14004AC90 (Win32AllocPoolWithQuota.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64_&_ @ 0x14004AF60 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019869C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___(
        int *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __m128i *a4)
{
  int v4; // eax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  unsigned __int64 *Pool2; // rax
  __int64 v11; // rdi
  char v12; // si
  unsigned __int64 v13; // rcx
  _DWORD *v14; // rax
  unsigned __int64 i; // rbp
  __m128i v16; // [rsp+20h] [rbp-C8h] BYREF
  PVOID BackTrace[20]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v18; // [rsp+F8h] [rbp+10h] BYREF

  v18 = a2;
  v4 = *a1;
  v6 = a3;
  v7 = a2;
  if ( !*a1 )
  {
    result = ExAllocatePool2(
               *(_QWORD *)a4->m128i_i64[0] | 3LL,
               a2,
               *(unsigned int *)_mm_srli_si128(*a4, 8).m128i_u32[0]);
    if ( result )
      _InterlockedIncrement64((volatile signed __int64 *)a1 + 14);
    return result;
  }
  if ( v4 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
           (NSInstrumentation::CLeakTrackingAllocator *)a1,
           a3)
      && v7 + 16 >= v7 )
    {
      Pool2 = (unsigned __int64 *)ExAllocatePool2(
                                    *(_QWORD *)a4->m128i_i64[0] | 3LL,
                                    v7 + 16,
                                    *(unsigned int *)_mm_srli_si128(*a4, 8).m128i_u32[0]);
      v11 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)a1 + 14),
            *Pool2 = v6,
            v11 = (__int64)(Pool2 + 2),
            Pool2 == (unsigned __int64 *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)a1 + 1),
          v6);
      }
      return v11;
    }
    return 0LL;
  }
  if ( v4 != 2 )
    return 0LL;
  if ( (a3 & a1[20]) == a3 )
  {
    v13 = (unsigned int)a1[21];
    v14 = a1 + 12;
    for ( i = 0LL; i < v13; ++i )
    {
      if ( *v14 == a3 )
      {
        v12 = 0;
        if ( a2 < 0x1000 || (a2 & 0xFFF) != 0 )
        {
          v7 = a2 + 16;
          v12 = 1;
          v18 = a2 + 16;
        }
        v11 = ExAllocatePool2(
                *(_QWORD *)a4->m128i_i64[0] | 3LL,
                v7,
                *(unsigned int *)_mm_srli_si128(*a4, 8).m128i_u32[0]);
        if ( v11 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)a1 + 16);
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v12 && (unsigned __int64)(v11 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    a1,
                                    v11,
                                    i,
                                    BackTrace) )
              return v11 + 16;
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       a1,
                                       v11,
                                       i,
                                       BackTrace) )
          {
            return v11;
          }
          _InterlockedIncrement64((volatile signed __int64 *)a1 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v11);
        }
        return 0LL;
      }
      ++v14;
    }
  }
  v16 = *a4;
  return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_1fd17fd8824effd8075d8ed53ede85aa__unsigned___int64___(
           a1,
           &v16,
           &v18);
}
