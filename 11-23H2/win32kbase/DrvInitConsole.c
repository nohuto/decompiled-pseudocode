/*
 * XREFs of DrvInitConsole @ 0x1C0016330
 * Callers:
 *     InitVideo @ 0x1C0016804 (InitVideo.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001CDB0 (DrvUpdateGraphicsDeviceList.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 DrvInitConsole()
{
  int v0; // edi
  __int64 v1; // r14
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  void *v4; // rsi
  unsigned int v5; // eax
  unsigned __int64 i; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 DxgkWin32kInterface; // rax
  int v11; // eax
  unsigned int v12; // eax
  NSInstrumentation::CLeakTrackingAllocator *v13; // rdi
  unsigned __int64 v14; // rbx
  int v15; // eax
  __int64 Pool2; // rbx
  unsigned __int64 v17; // rax
  NSInstrumentation::CLeakTrackingAllocator *v18; // rdi
  unsigned __int64 v19; // rbx
  int v20; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *v23; // rax
  char v24; // si
  _QWORD *v25; // rax
  __int64 v26; // r10
  char v27; // si
  unsigned __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v35; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v36; // [rsp+78h] [rbp-88h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  PVOID BackTrace[20]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v39[26]; // [rsp+150h] [rbp+50h] BYREF
  ULONG ResultLength; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v41; // [rsp+238h] [rbp+138h] BYREF
  unsigned int v42; // [rsp+240h] [rbp+140h] BYREF
  void *KeyHandle; // [rsp+248h] [rbp+148h] BYREF

  DestinationString = 0LL;
  KeyHandle = 0LL;
  v0 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v1 = *(_QWORD *)(SGDGetSessionState() + 24);
  if ( !gProtocolType )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ResultLength = 0;
      RtlInitUnicodeString(&DestinationString, L"SystemStartOptions");
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741789
        && ResultLength >= 0x11 )
      {
        v2 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
               gpLeakTrackingAllocator,
               0x104uLL,
               ResultLength,
               0x706D7447u);
        v3 = v2;
        if ( v2 )
        {
          v4 = v2;
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 v2,
                 ResultLength,
                 &ResultLength) >= 0 )
          {
            v5 = v3[2];
            if ( v5 >= 0x12 )
            {
              for ( i = (unsigned __int64)(v3 + 3); i <= (unsigned __int64)v3 + v5 - 6; i += 2LL )
              {
                v7 = *(_QWORD *)i - 0x45005300410042LL;
                if ( *(_QWORD *)i == 0x45005300410042LL )
                {
                  v7 = *(_QWORD *)(i + 8) - 0x45004400490056LL;
                  if ( *(_QWORD *)(i + 8) == 0x45004400490056LL )
                    v7 = *(unsigned __int16 *)(i + 16) - 79LL;
                }
                if ( !v7 )
                {
                  v0 = 1;
                  break;
                }
              }
            }
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
        }
      }
      ZwClose(KeyHandle);
    }
  }
  WdLogSingleEntry0(5LL);
  v8 = *(_QWORD *)(SGDGetSessionState() + 24);
  *(_DWORD *)(v8 + 1232) = v0;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v8, v9);
  v11 = (*(__int64 (**)(void))(DxgkWin32kInterface + 80))();
  *(_DWORD *)(v1 + 1300) = v11;
  v12 = 8 * v11;
  if ( !v12 )
    goto LABEL_50;
  v13 = gpLeakTrackingAllocator;
  v14 = v12;
  v41 = 1634492743;
  v30 = 260LL;
  v15 = *(_DWORD *)gpLeakTrackingAllocator;
  v31 = v14;
  if ( !v15 )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v14, 1634492743LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v13 + 14);
    goto LABEL_21;
  }
  if ( v15 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x616C6147u)
      && v14 + 16 >= v14 )
    {
      v23 = (_QWORD *)ExAllocatePool2(v30 & 0xFFFFFFFFFFFFFFFDuLL, v14 + 16, v41);
      Pool2 = (__int64)v23;
      if ( !v23
        || (_InterlockedIncrement64((volatile signed __int64 *)v13 + 14),
            *v23 = 1634492743LL,
            Pool2 = (__int64)(v23 + 2),
            v23 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v13 + 1),
          (const void *)0x616C6147);
      }
      goto LABEL_21;
    }
    goto LABEL_50;
  }
  if ( v15 != 2 )
    goto LABEL_50;
  v28 = 0LL;
  if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x616C6147u, &v28) )
  {
    v24 = 0;
    if ( v14 < 0x1000 || (v14 & 0xFFF) != 0 )
    {
      v14 += 16LL;
      v24 = 1;
      v31 = v14;
    }
    Pool2 = ExAllocatePool2(260LL, v14, 1634492743LL);
    if ( Pool2 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v13 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v24 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v13,
                                Pool2,
                                v28,
                                BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_21;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v13,
                                   Pool2,
                                   v28,
                                   BackTrace) )
      {
        goto LABEL_21;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v13 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    }
LABEL_50:
    Pool2 = 0LL;
    goto LABEL_21;
  }
  v35 = &v30;
  v36 = &v41;
  Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
            v13,
            &v35,
            &v31);
LABEL_21:
  v17 = *(unsigned int *)(v1 + 1300);
  *(_QWORD *)(v1 + 1304) = Pool2;
  if ( !(_DWORD)v17 )
    goto LABEL_28;
  v18 = gpLeakTrackingAllocator;
  v19 = (unsigned int)v17;
  v33 = v17;
  v42 = 1634492743;
  v32 = 260LL;
  v20 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       (unsigned int)v19,
                                                                                       1634492743LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v18 + 14);
    goto LABEL_25;
  }
  if ( v20 != 1 )
  {
    if ( v20 == 2 )
    {
      v29 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x616C6147u, &v29) )
      {
        v35 = &v32;
        v36 = &v42;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           v18,
                                                                                           &v35,
                                                                                           &v33);
        goto LABEL_25;
      }
      v27 = 0;
      if ( v19 < 0x1000 || (v19 & 0xFFF) != 0 )
      {
        v19 += 16LL;
        v27 = 1;
        v33 = v19;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v26,
                                                                                         v19,
                                                                                         1634492743LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v18 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(v39);
        if ( v27
          && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v18,
                                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                  v29,
                                  v39) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            goto LABEL_25;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v18,
                                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                     v29,
                                     v39) )
        {
          goto LABEL_25;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v18 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
    }
    goto LABEL_28;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x616C6147u)
    || v19 + 16 < v19 )
  {
LABEL_28:
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_25;
  }
  v25 = (_QWORD *)ExAllocatePool2(v32 & 0xFFFFFFFFFFFFFFFDuLL, v19 + 16, v42);
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v25;
  if ( !v25
    || (_InterlockedIncrement64((volatile signed __int64 *)v18 + 14),
        *v25 = 1634492743LL,
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v25 + 2),
        v25 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v18 + 1),
      (const void *)0x616C6147);
  }
LABEL_25:
  *(_QWORD *)(v1 + 1312) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  if ( !*(_QWORD *)(v1 + 1304) || !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    return 3221225495LL;
  DrvUpdateGraphicsDeviceList(1LL);
  return 0LL;
}
