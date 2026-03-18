/*
 * XREFs of PnpBootDeviceWait @ 0x1405A3D68
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     PipWaitCriticalDevices @ 0x140C2255C (PipWaitCriticalDevices.c)
 *     VhdInitialize @ 0x140C5D2CC (VhdInitialize.c)
 *     CimfsInitialize @ 0x140C5DD6C (CimfsInitialize.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     HeadlessKernelAddLogEntry @ 0x1404AD660 (HeadlessKernelAddLogEntry.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x1409CAD5C (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x140A43B04 (IopOpenRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpBootDeviceWait(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  ULONG_PTR BugCheckParameter4; // r14
  unsigned int v8; // ebx
  int RegistryValue; // esi
  __int64 v10; // r9
  int v11; // eax
  ULONG_PTR v12; // rbx
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+40h] BYREF

  v4 = 0;
  BugCheckParameter4 = a2;
  P = 0LL;
  Handle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v16[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v16[0] = 7209068LL;
  v8 = 0;
  RegistryValue = IopOpenRegistryKeyEx(&Handle, 0LL, v16, 131097LL);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 3) == 4 )
      {
        v8 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        if ( v8 >= 0xC8 )
        {
          if ( v8 > 0x2BF20 )
            v8 = 180000;
        }
        else
        {
          v8 = 0;
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
    v4 = v8;
  while ( 1 )
  {
    RtlFreeAnsiString(&UnicodeString);
    v11 = guard_dispatch_icall_no_overrides(a1, a4, &UnicodeString, v10);
    v12 = v11;
    if ( v11 >= 0 )
      break;
    if ( v4 <= 0 )
    {
      HeadlessKernelAddLogEntry();
      KeBugCheckEx(0x7Bu, (ULONG_PTR)&UnicodeString, v12, 0LL, BugCheckParameter4);
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&P);
    v4 -= 200;
  }
  RtlFreeAnsiString(&UnicodeString);
  return 0LL;
}
