/*
 * XREFs of NtGetDevicePowerState @ 0x140A7FFA0
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1408E9330 (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PnpGetRelatedTargetDevice @ 0x14035E4A8 (PnpGetRelatedTargetDevice.c)
 *     PopLockGetDoDevicePowerState @ 0x1404B49B8 (PopLockGetDoDevicePowerState.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtGetDevicePowerState(HANDLE Device, PDEVICE_POWER_STATE State)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  NTSTATUS RelatedTargetDevice; // edi
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)State < 0x7FFFFFFF0000LL )
      v5 = (__int64)State;
    *(_DWORD *)v5 = *(_DWORD *)v5;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Device, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v10 = 0LL;
    RelatedTargetDevice = PnpGetRelatedTargetDevice((PFILE_OBJECT)Object, &v10);
    if ( RelatedTargetDevice >= 0 && v10 )
      v4 = *(__int64 **)(v10 + 32);
    ObfDereferenceObject(Object);
    if ( RelatedTargetDevice >= 0 )
    {
      *State = PopLockGetDoDevicePowerState(v4[39]);
      ObfDereferenceObject(v4);
    }
    return RelatedTargetDevice;
  }
  return result;
}
