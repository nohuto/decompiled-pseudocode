/*
 * XREFs of PiQueryResourceRequirements @ 0x140A64274
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14069CD20 (ZwDeleteValueKey.c)
 *     PipSetDevNodeFlags @ 0x1408331E8 (PipSetDevNodeFlags.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     PpIrpQueryResourceRequirements @ 0x140A643AC (PpIrpQueryResourceRequirements.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiQueryResourceRequirements(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  ULONG *v4; // rbx
  unsigned int v5; // r14d
  ULONG DataSize; // esi
  struct _KTHREAD *CurrentThread; // rax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+30h] BYREF
  PVOID Data; // [rsp+88h] [rbp+38h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  Data = 0LL;
  ValueName = 0LL;
  Handle = 0LL;
  v3 = PpIrpQueryResourceRequirements(v2, &Data);
  v4 = (ULONG *)Data;
  v5 = v3;
  if ( v3 < 0 )
    v4 = 0LL;
  Data = v4;
  if ( v4 )
    DataSize = *v4;
  else
    DataSize = 0;
  if ( ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 9)
    && ((*(_DWORD *)(a1 + 396) & 0x2000) == 0 || *(_DWORD *)(a1 + 404) != 3 && *(_DWORD *)(a1 + 404) != 19) )
  {
    if ( (int)CmOpenDeviceRegKey(
                *(__int64 *)&PiPnpRtlCtx,
                *(const WCHAR **)(a1 + 48),
                20,
                0,
                983103,
                v4 != 0LL,
                (__int64)&Handle,
                0LL) < 0 )
      Handle = 0LL;
    if ( Handle )
    {
      *(_DWORD *)&ValueName.Length = 2359330;
      ValueName.Buffer = (wchar_t *)L"BasicConfigVector";
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
      v4 = (ULONG *)Data;
      if ( Data )
      {
        ZwSetValueKey(Handle, &ValueName, 0, 0xAu, Data, DataSize);
        ExAcquireFastMutex(&PiResourceListLock);
        *(_QWORD *)(a1 + 440) = v4;
        KeReleaseGuardedMutex(&PiResourceListLock);
        PipSetDevNodeFlags(a1, 0x200u);
        v4 = 0LL;
      }
      else
      {
        ZwDeleteValueKey(Handle, &ValueName);
      }
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Handle )
    ZwClose(Handle);
  return v5;
}
