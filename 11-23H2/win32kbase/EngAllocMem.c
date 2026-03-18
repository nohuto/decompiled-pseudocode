/*
 * XREFs of EngAllocMem @ 0x1C0090F40
 * Callers:
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0090D20 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C015E660 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngCreateClip @ 0x1C016AD60 (EngCreateClip.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64_&_ @ 0x1C0026468 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BC80 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall EngAllocMem(ULONG fl, ULONG cjMemSize, ULONG ulTag)
{
  const void *v3; // rsi
  char v4; // r12
  ULONG v5; // edx
  size_t v6; // r14
  NSInstrumentation::CLeakTrackingAllocator *v7; // rdi
  int v8; // eax
  __int64 Pool2; // rbx
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct _ERESOURCE *v14; // rsi
  __int64 *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  int v18; // r8d
  struct _ERESOURCE *v19; // rcx
  __int64 UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64; // rax
  _QWORD *v22; // rax
  __int64 v23; // r10
  char v24; // r15
  __int64 v25; // [rsp+30h] [rbp-89h] BYREF
  __int64 v26; // [rsp+38h] [rbp-81h] BYREF
  _QWORD v27[2]; // [rsp+40h] [rbp-79h] BYREF
  PVOID BackTrace[20]; // [rsp+50h] [rbp-69h] BYREF
  ULONG v29; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v30; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = (const void *)ulTag;
  v4 = fl;
  if ( cjMemSize - 1 > 0xFFFFFFDE )
    return 0LL;
  v5 = cjMemSize + 32;
  if ( v5 >= 0x2710000 )
    return 0LL;
  v6 = v5;
  if ( (fl & 2) == 0 )
  {
    v7 = gpLeakTrackingAllocator;
    v29 = ulTag;
    v25 = 260LL;
    v26 = v5;
    v8 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(262LL, v5, ulTag);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
      goto LABEL_7;
    }
    if ( v8 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, ulTag)
        && v6 + 16 >= v6 )
      {
        v22 = (_QWORD *)ExAllocatePool2(v25 | 2, v6 + 16, v29);
        Pool2 = (__int64)v22;
        if ( !v22
          || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
              *v22 = v3,
              Pool2 = (__int64)(v22 + 2),
              v22 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v7 + 1),
            v3);
        }
        goto LABEL_7;
      }
      goto LABEL_41;
    }
    if ( v8 == 2 )
    {
      v30 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, ulTag, &v30) )
      {
        v27[0] = &v25;
        v27[1] = &v29;
        UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                                                                                           (__int64)v7,
                                                                                           (__int64)v27,
                                                                                           &v26);
        goto LABEL_20;
      }
      v24 = 0;
      if ( v6 < 0x1000 || (v6 & 0xFFF) != 0 )
      {
        v23 += 16LL;
        v24 = 1;
        v26 = v23;
      }
      Pool2 = ExAllocatePool2(262LL, v23, (unsigned int)v3);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v24 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v7,
                                  Pool2,
                                  v30,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_7;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v7,
                                     Pool2,
                                     v30,
                                     BackTrace) )
        {
          goto LABEL_7;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_41:
    Pool2 = 0LL;
    goto LABEL_7;
  }
  UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                                                                     gpLeakTrackingAllocator,
                                                                                     68LL,
                                                                                     v5,
                                                                                     ulTag);
LABEL_20:
  Pool2 = UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64;
LABEL_7:
  v10 = v4 & 1;
  if ( Pool2 )
  {
    if ( v10 )
      memset((void *)Pool2, 0, v6);
    v13 = *(_QWORD *)(SGDGetSessionState(*(_QWORD *)&fl) + 24);
    *(_DWORD *)(Pool2 + 16) = 0;
    v14 = *(struct _ERESOURCE **)(v13 + 3216);
    if ( v14 )
    {
      PsEnterPriorityRegion(v12, v11);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v14);
    }
    v15 = *(__int64 **)(v13 + 3208);
    if ( *v15 != v13 + 3200 )
      __fastfail(3u);
    *(_QWORD *)Pool2 = v13 + 3200;
    *(_QWORD *)(Pool2 + 8) = v15;
    *v15 = Pool2;
    *(_QWORD *)(v13 + 3208) = Pool2;
    v16 = *(_QWORD *)(v13 + 3216);
    if ( v16 )
    {
      v17 = *(_QWORD *)(SGDGetSessionState(v15) + 24);
      if ( *(_DWORD *)(v17 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v17,
          (unsigned int)&LockRelease,
          v18,
          v16,
          (__int64)L"GreBaseGlobals.MultiUserEngAllocListLock");
      v19 = *(struct _ERESOURCE **)(v13 + 3216);
      if ( v19 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v19);
        PsLeavePriorityRegion();
      }
    }
    Pool2 += 32LL;
  }
  return (PVOID)Pool2;
}
