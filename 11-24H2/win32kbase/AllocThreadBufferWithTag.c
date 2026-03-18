/*
 * XREFs of AllocThreadBufferWithTag @ 0x1400ABB70
 * Callers:
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1400AB790 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1400ABAB0 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64_&_ @ 0x1400BEFB4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x140151C9C (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019869C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall AllocThreadBufferWithTag(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned int v6; // ecx
  unsigned __int64 v7; // rbx
  __int64 UserSessionState; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  int v11; // eax
  __int64 UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rax
  __int64 *v17; // rdi
  unsigned __int64 *Pool2; // rax
  char v20; // r15
  __int64 v21; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v23[2]; // [rsp+30h] [rbp-D8h] BYREF
  PVOID BackTrace[20]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v25; // [rsp+110h] [rbp+8h] BYREF
  unsigned __int64 v26; // [rsp+128h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a2;
  v5 = 0LL;
  if ( (unsigned int)a1 < 0xFFFFEFDF )
  {
    if ( (a3 & 0x20) != 0 )
    {
      v6 = a1 + 32;
      if ( v6 > 0x400 && v6 + 4096 >= v6 )
        v6 = (v6 + 4095) & 0xFFFFF000;
      a1 = v6 - 32;
    }
    v7 = (unsigned int)(a1 + 32);
    if ( (_DWORD)a1 != -32 )
    {
      UserSessionState = W32GetUserSessionState(a1);
      v25 = v4;
      v21 = 256LL;
      v22 = v7;
      v10 = UserSessionState + 72288;
      v11 = *(_DWORD *)(UserSessionState + 72288);
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                 (NSInstrumentation::CLeakTrackingAllocator *)v10,
                 v4) )
          {
            if ( v7 + 16 < v7 )
            {
              UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = 0LL;
            }
            else
            {
              Pool2 = (unsigned __int64 *)ExAllocatePool2(v21 | 2, v7 + 16, v25);
              UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = (__int64)Pool2;
              if ( !Pool2
                || (_InterlockedIncrement64((volatile signed __int64 *)(v10 + 112)),
                    *Pool2 = v4,
                    UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = (__int64)(Pool2 + 2),
                    Pool2 == (unsigned __int64 *)-16LL) )
              {
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *(NSInstrumentation::CPointerHashTable **)(v10 + 8),
                  v4);
              }
            }
          }
          else
          {
            UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = 0LL;
          }
        }
        else
        {
          if ( v11 == 2 )
          {
            v26 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                    (NSInstrumentation::CLeakTrackingAllocator *)v10,
                    v4,
                    &v26) )
            {
              v23[0] = &v21;
              v23[1] = &v25;
              UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                                                                                                 v10,
                                                                                                 v23,
                                                                                                 &v22);
              goto LABEL_11;
            }
            v20 = 0;
            if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
            {
              v7 += 16LL;
              v20 = 1;
              v22 = v7;
            }
            UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = ExAllocatePool2(
                                                                                               258LL,
                                                                                               v7,
                                                                                               (unsigned int)v4);
            if ( UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v10 + 128));
              memset(BackTrace, 0, sizeof(BackTrace));
              RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
              if ( v20
                && (unsigned __int64)(UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 & 0xFFF)
                 + 16 < 0x1000 )
              {
                if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                        v10,
                                        UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64,
                                        v26,
                                        BackTrace) )
                {
                  UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 += 16LL;
                  goto LABEL_11;
                }
              }
              else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                           v10,
                                           UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64,
                                           v26,
                                           BackTrace) )
              {
                goto LABEL_11;
              }
              _InterlockedIncrement64((volatile signed __int64 *)(v10 + 136));
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64);
            }
          }
          UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = 0LL;
        }
      }
      else
      {
        UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = ExAllocatePool2(
                                                                                           258LL,
                                                                                           (unsigned int)v7,
                                                                                           (unsigned int)v4);
        if ( UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 )
          _InterlockedIncrement64((volatile signed __int64 *)(v10 + 112));
      }
LABEL_11:
      if ( !UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 )
        return v5;
      v5 = UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 + 32;
      CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v9);
      if ( CurrentThreadNonPaged )
      {
        v14 = *CurrentThreadNonPaged;
        v15 = *CurrentThreadNonPaged == 0;
        *(_QWORD *)(UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 + 16) = v5;
        if ( !v15 )
          v3 = v14 + 8;
        *(_QWORD *)(UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 + 24) = FreeThreadBufferWithTag;
        if ( v3 )
        {
          v16 = *(_QWORD *)(v3 + 88);
          v17 = (__int64 *)(v3 + 88);
          if ( *(__int64 **)(v16 + 8) != v17 )
            __fastfail(3u);
          *(_QWORD *)UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = v16;
          *(_QWORD *)(UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 + 8) = v17;
          *(_QWORD *)(v16 + 8) = UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64;
          *v17 = UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64;
          return v5;
        }
      }
      else
      {
        *(_QWORD *)(UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 + 16) = v5;
        *(_QWORD *)(UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 + 24) = FreeThreadBufferWithTag;
      }
      *(_QWORD *)(UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 + 8) = UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64;
      *(_QWORD *)UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64;
    }
  }
  return v5;
}
