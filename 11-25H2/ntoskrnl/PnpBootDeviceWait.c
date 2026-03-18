/*
 * XREFs of PnpBootDeviceWait @ 0x1405A05F8
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     PipWaitCriticalDevices @ 0x140C113FC (PipWaitCriticalDevices.c)
 *     VhdInitialize @ 0x140C4BF5C (VhdInitialize.c)
 *     CimfsInitialize @ 0x140C4C9EC (CimfsInitialize.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     HeadlessKernelAddLogEntry @ 0x1404AC070 (HeadlessKernelAddLogEntry.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x140A3E608 (IopOpenRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpBootDeviceWait(__int64 a1, int a2)
{
  int v2; // edi
  ULONG_PTR BugCheckParameter4; // r14
  unsigned int v5; // ebx
  int RegistryValue; // esi
  int v7; // eax
  ULONG_PTR v8; // rbx
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+40h] BYREF

  v2 = 0;
  BugCheckParameter4 = a2;
  P = 0LL;
  Handle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v12[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v12[0] = 7209068LL;
  v5 = 0;
  RegistryValue = IopOpenRegistryKeyEx(&Handle, 0LL, v12, 131097LL);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 3) == 4 )
      {
        v5 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        if ( v5 >= 0xC8 )
        {
          if ( v5 > 0x2BF20 )
            v5 = 180000;
        }
        else
        {
          v5 = 0;
        }
      }
      else
      {
        RegistryValue = -1073741823;
      }
      ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
  }
  P = (PVOID)-2000000LL;
  if ( RegistryValue >= 0 )
    v2 = v5;
  while ( 1 )
  {
    RtlFreeAnsiString(&UnicodeString);
    v7 = guard_dispatch_icall_no_overrides(a1);
    v8 = v7;
    if ( v7 >= 0 )
      break;
    if ( v2 <= 0 )
    {
      HeadlessKernelAddLogEntry();
      KeBugCheckEx(0x7Bu, (ULONG_PTR)&UnicodeString, v8, 0LL, BugCheckParameter4);
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&P);
    v2 -= 200;
  }
  RtlFreeAnsiString(&UnicodeString);
  return 0LL;
}
