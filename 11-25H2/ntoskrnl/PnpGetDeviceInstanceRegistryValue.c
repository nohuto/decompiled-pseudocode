/*
 * XREFs of PnpGetDeviceInstanceRegistryValue @ 0x140AB8700
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 */

__int64 __fastcall PnpGetDeviceInstanceRegistryValue(const WCHAR *a1, char a2, const WCHAR *a3, int a4, _QWORD *a5)
{
  int v9; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r8d
  int RegistryValue; // ebx
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF

  Handle[0] = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v9 = 17;
  }
  else
  {
    if ( (a2 & 2) == 0 )
      return 3221225485LL;
    v9 = 18;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v11 = v9 | 0x200;
  if ( (a2 & 4) == 0 )
    v11 = v9;
  RegistryValue = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, v11, 0, 131097, 0, (__int64)Handle, 0LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle[0], a3, a4, a5);
    ZwClose(Handle[0]);
  }
  return (unsigned int)RegistryValue;
}
