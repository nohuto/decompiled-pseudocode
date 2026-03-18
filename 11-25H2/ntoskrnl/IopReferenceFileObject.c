/*
 * XREFs of IopReferenceFileObject @ 0x1403F6490
 * Callers:
 *     IopSetEaOrQuotaInformationFile @ 0x1407068A0 (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x140707338 (IopValidateJunctionTarget.c)
 *     NtQueryQuotaInformationFile @ 0x14070BB10 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14070C280 (NtSetVolumeInformationFile.c)
 *     NtQueryEaFile @ 0x140935870 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x140938D80 (NtFlushBuffersFileEx.c)
 *     NtCopyFileChunk @ 0x140970910 (NtCopyFileChunk.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14098A4B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtCancelIoFile @ 0x1409E3D30 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x140A2F5B0 (NtCancelIoFileEx.c)
 *     NtSetEaFile @ 0x140A5F1F0 (NtSetEaFile.c)
 *     NtWriteFileGather @ 0x140AA6840 (NtWriteFileGather.c)
 *     IopIoRingReferenceFileObject @ 0x140AB691C (IopIoRingReferenceFileObject.c)
 *     NtReadFileScatter @ 0x140ABBBA0 (NtReadFileScatter.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x140969C10 (PsIsProcessAppContainer.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
 */

__int64 __fastcall IopReferenceFileObject(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PVOID *a4,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  NTSTATUS v6; // ebx
  _QWORD *v7; // rax
  _DWORD *v9; // rax
  ULONG_PTR v10; // rdi
  signed __int64 v11; // rax
  bool v12; // cc
  signed __int64 v13; // rax
  __int64 v14; // rcx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  v6 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)IoFileObjectType, a3, &Object, HandleInformation);
  v7 = Object;
  *a4 = Object;
  if ( v6 >= 0 )
  {
    v9 = (_DWORD *)v7[26];
    if ( v9 )
    {
      if ( (*v9 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      {
        v10 = (ULONG_PTR)*a4;
        if ( ObpTraceFlags )
          ObpPushStackInfo(v10 - 48, 0, 1u, 0x746C6644u);
        v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 48), 0xFFFFFFFFFFFFFFFFuLL);
        v12 = v11 <= 1;
        v13 = v11 - 1;
        if ( !v12 )
          return (unsigned int)-1073739504;
        if ( *(_QWORD *)(v10 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v10 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v10 - 48) >> 8)],
            v10,
            1uLL,
            *(_QWORD *)(v10 - 40));
        if ( v13 < 0 )
          KeBugCheckEx(0x18u, 0LL, v10, 2uLL, v13);
        if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
        {
          ObpDeferObjectDeletion(v10 - 48);
          return (unsigned int)-1073739504;
        }
        if ( (*(_BYTE *)(v10 - 22) & 0x40) != 0 )
        {
          v14 = *(_QWORD *)(v10 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v10 - 22) & 0x7F]);
          if ( *(_BYTE *)(v14 + 24) )
            ObpHandleRevocationBlockRemoveObject(v14);
        }
        if ( ObpTraceFlags )
          ObpDeregisterObject(v10 - 48);
        ObpRemoveObjectRoutine(v10 - 48, 0LL);
        return (unsigned int)-1073739504;
      }
    }
  }
  return (unsigned int)v6;
}
