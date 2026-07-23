/*
 * XREFs of WheaRegChangeNotifyCallback @ 0x1407C8F50
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     __report_rangecheckfailure @ 0x1404F2ABC (__report_rangecheckfailure.c)
 *     wcstombs @ 0x1404FDD90 (wcstombs.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WheapScanRegistryForPolicyChanges @ 0x1407C9258 (WheapScanRegistryForPolicyChanges.c)
 *     WheapPfaReset @ 0x1407C98F4 (WheapPfaReset.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     WheapPropagatePolicyToHal @ 0x140AA45BC (WheapPropagatePolicyToHal.c)
 */

LONG WheaRegChangeNotifyCallback()
{
  char v0; // si
  __int64 i; // rbx
  __int64 v2; // rdi
  int *v3; // rax
  const wchar_t *v4; // rdx
  __int64 v5; // rdx
  _DWORD Src[8]; // [rsp+68h] [rbp-19h] BYREF
  char Dest[16]; // [rsp+88h] [rbp+7h] BYREF
  __int128 v9; // [rsp+98h] [rbp+17h]
  int v10; // [rsp+A8h] [rbp+27h]
  int v11; // [rsp+ACh] [rbp+2Bh]

  memset_0(Src, 0, 0x48uLL);
  if ( NtNotifyChangeMultipleKeys(
         WheapDispatchPtr.Vpb,
         0,
         0LL,
         0LL,
         (PIO_APC_ROUTINE)&WheapDispatchPtr.AttachedDevice,
         (PVOID)1,
         (PIO_STATUS_BLOCK)&WheapDispatchPtr.DriverObject,
         4u,
         0,
         0LL,
         0,
         1u) < 0 )
    _InterlockedExchange((volatile __int32 *)&WheapDispatchPtr.DeviceExtension, 1);
  KeWaitForSingleObject(&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink, Executive, 0, 0, 0LL);
  WheapScanRegistryForPolicyChanges();
  v0 = 0;
  for ( i = 0LL; (unsigned int)i < 0x16; i = (unsigned int)(i + 1) )
  {
    if ( WheapRegPolicyTableChanged[i] )
    {
      if ( (unsigned int)i >= 0x16uLL )
        _report_rangecheckfailure();
      WheapRegPolicyTableChanged[i] = 0;
      if ( (unsigned int)(i - 2) <= 3 )
        v0 = 1;
      WheapPropagatePolicyToHal((unsigned int)i);
      Src[3] = 0;
      v2 = 4LL * (unsigned int)i;
      *(_OWORD *)Dest = 0LL;
      v9 = 0LL;
      Src[0] = 1733060695;
      v3 = *(int **)((char *)&off_140E095A8 + v2 * 8);
      v4 = (&WheaRegPolicyTable)[v2];
      Src[1] = 1;
      Src[2] = 72;
      Src[5] = -2147483550;
      Src[4] = 1280201291;
      Src[6] = 2;
      Src[7] = 40;
      v10 = i;
      v11 = *v3;
      wcstombs(Dest, v4, 0x1FuLL);
      WheaLogInternalEvent(Src, v5);
    }
  }
  if ( v0 )
    WheapPfaReset();
  return KeSetEvent((PRKEVENT)&WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink, 0, 0);
}
