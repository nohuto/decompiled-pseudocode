/*
 * XREFs of ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C001F34C
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001CDB0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     DrvCleanupOneGraphicsDevice @ 0x1C0018720 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C001B068 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C001D8F0 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C00246E4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC58 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD0C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E25C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E628 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5AC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA4C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DrvSetDisconnectedGraphicsDevice(__int64 a1)
{
  int v1; // r15d
  unsigned int v2; // r14d
  _QWORD *v3; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  int v6; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  WCHAR v8; // ax
  WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v10; // rdi
  void *v11; // rax
  void *v12; // rax
  _QWORD *Pool2; // rax
  __int64 v14; // r10
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v17[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  PVOID BackTrace[20]; // [rsp+78h] [rbp-90h] BYREF
  WCHAR ValueName[16]; // [rsp+118h] [rbp+10h] BYREF

  v1 = a1;
  v2 = 0;
  v15 = 0;
  wcscpy(ValueName, L"\\Device\\Disc");
  v3 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  if ( v1 )
  {
    if ( v3[174] )
      return 1LL;
  }
  else if ( v3[172] )
  {
    return 1LL;
  }
  v5 = gpLeakTrackingAllocator;
  DestinationString = 260LL;
  LODWORD(v16) = 1986291527;
  v6 = *(_DWORD *)gpLeakTrackingAllocator;
  *(_QWORD *)&DestinationString_8.Length = 304LL;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      if ( v6 != 2 )
        return v2;
      v17[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76646747u, v17) )
      {
        v17[0] = (unsigned __int64)&DestinationString;
        v17[1] = (unsigned __int64)&v16;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           v5,
                                                                                           v17,
                                                                                           &DestinationString_8);
        goto LABEL_8;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v14,
                                                                                         320LL,
                                                                                         1986291527LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        return v2;
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v5,
                                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                v17[0],
                                BackTrace) )
          goto LABEL_9;
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v5,
                                   UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                   v17[0],
                                   BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_8;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      return v2;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76646747u) )
      return v2;
    Pool2 = (_QWORD *)ExAllocatePool2(DestinationString & 0xFFFFFFFFFFFFFFFDuLL, 320LL, (unsigned int)v16);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
          *Pool2 = 1986291527LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v5 + 1),
        (const void *)0x76646747);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       304LL,
                                                                                       1986291527LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
  }
LABEL_8:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    return v2;
LABEL_9:
  DestinationString_8 = 0LL;
  RtlInitUnicodeString(
    &DestinationString_8,
    L"\\REGISTRY\\Machine\\System\\CurrentControlSet\\Services\\TSDDD\\Device0");
  RtlWriteRegistryValue(4u, L"VIDEO", ValueName, 1u, DestinationString_8.Buffer, DestinationString_8.Length + 2);
  *(_OWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = *(_OWORD *)ValueName;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = *(_QWORD *)&ValueName[8];
  v8 = ValueName[12];
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 160) |= 0x2000000u;
  *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 24) = v8;
  *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 216) = -1;
  RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(
                                           UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                           0LL,
                                           0LL,
                                           0LL,
                                           0,
                                           &v15);
  v10 = RegistryHandleFromDeviceMap;
  if ( v15 >= 0 )
  {
    if ( RegistryHandleFromDeviceMap )
    {
      DrvGetDeviceConfigurationInformation(
        (void **)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
        RegistryHandleFromDeviceMap,
        0);
      ZwClose(v10);
      v2 = 1;
    }
    if ( v15 >= 0 )
    {
      if ( !*(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 208) )
      {
        v11 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                gpLeakTrackingAllocator,
                0x104uLL,
                0x20uLL,
                0x73726447u);
        *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 208) = v11;
        if ( v11 )
        {
          v12 = (void *)DrvGetRegistryHandleFromDeviceMap(
                          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                          0LL,
                          0LL,
                          v11,
                          16,
                          &v15);
          if ( v12 )
            ZwClose(v12);
        }
        else
        {
          v15 = -1073741670;
        }
      }
      if ( v15 >= 0 )
      {
        swprintf_s(
          (wchar_t *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 64),
          0x20uLL,
          L"WinDisc");
        *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 136) = 0LL;
        if ( v3[158] )
          *(_QWORD *)(v3[159] + 128LL) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        else
          v3[158] = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        v3[159] = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        if ( v1 )
          v3[174] = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        else
          v3[172] = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        if ( (*(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 160) & 0x800000) != 0 )
          DrvAddAdapterLuid(*(struct _LUID *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                            + 240));
        return v2;
      }
    }
  }
  DrvCleanupOneGraphicsDevice((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  return 0LL;
}
