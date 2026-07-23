/*
 * XREFs of PnpProfileUpdateHardwareProfile @ 0x14072B41C
 * Callers:
 *     PpProfileCancelTransitioningDock @ 0x14072B680 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14072B72C (PpProfileCommitTransitioningDock.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     IopExecuteHardwareProfileChange @ 0x140737D04 (IopExecuteHardwareProfileChange.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpProfileUpdateHardwareProfile(__int64 a1)
{
  int v2; // eax
  __int64 Pool2; // rax
  char *v4; // rdi
  __int64 *v5; // rdx
  char *v6; // rbx
  __int64 v7; // rax
  int v8; // ecx
  unsigned int v9; // ebx
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+30h] BYREF
  HANDLE v14; // [rsp+78h] [rbp+38h] BYREF

  v14 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  ExAcquireFastMutex(&PiProfileDeviceListLock);
  *(_DWORD *)&ValueName.Length = 8126586;
  ValueName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\IDConfigDB";
  if ( (int)IopOpenRegistryKeyEx(&Handle, 0LL, &ValueName, 131097LL) >= 0 )
  {
    ValueName.Buffer = (wchar_t *)L"CurrentDockInfo";
    *(_DWORD *)&ValueName.Length = 2097182;
    if ( (int)IopOpenRegistryKeyEx(&KeyHandle, Handle, &ValueName, 131103LL) >= 0 )
    {
      ValueName.Buffer = L"EjectableDocks";
      *(_DWORD *)&ValueName.Length = 1966108;
      ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &PiProfileDeviceCount, 4u);
      ZwClose(KeyHandle);
    }
    ZwClose(Handle);
  }
  v2 = PiProfileDeviceCount;
  if ( !PiProfileDeviceCount )
    v2 = 1;
  Pool2 = ExAllocatePool2(0x40uLL, (unsigned int)(8 * v2 + 8), 0x20207050u);
  v4 = (char *)Pool2;
  if ( Pool2 )
  {
    v5 = (__int64 *)PiProfileDeviceListHead;
    v6 = (char *)Pool2;
    while ( v5 != &PiProfileDeviceListHead )
    {
      v7 = v5[2];
      if ( v7 )
      {
        *(_QWORD *)v6 = v7;
        v6 += 8;
      }
      v5 = (__int64 *)*v5;
    }
    KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    if ( v6 == v4 )
    {
      *(_QWORD *)v6 = 0LL;
      v6 += 8;
    }
    *(_QWORD *)v6 = 0LL;
    v9 = IopExecuteHardwareProfileChange(v8, (_DWORD)v4, (v6 - v4) >> 3, (unsigned int)&v14, a1);
    if ( v14 )
      ZwClose(v14);
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    return (unsigned int)-1073741670;
  }
  return v9;
}
