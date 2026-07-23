/*
 * XREFs of IopReferenceFileObject @ 0x1403EB740
 * Callers:
 *     IopSetEaOrQuotaInformationFile @ 0x140710530 (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x140710FC8 (IopValidateJunctionTarget.c)
 *     NtQueryQuotaInformationFile @ 0x1407157A0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140715F10 (NtSetVolumeInformationFile.c)
 *     NtQueryEaFile @ 0x140956950 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x140957700 (NtFlushBuffersFileEx.c)
 *     NtCancelIoFile @ 0x1409DCE40 (NtCancelIoFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0AE70 (NtNotifyChangeDirectoryFileEx.c)
 *     NtCancelIoFileEx @ 0x140A296A0 (NtCancelIoFileEx.c)
 *     NtSetEaFile @ 0x140A59680 (NtSetEaFile.c)
 *     NtWriteFileGather @ 0x140AA6DD0 (NtWriteFileGather.c)
 *     IopIoRingReferenceFileObject @ 0x140AB5C7C (IopIoRingReferenceFileObject.c)
 *     NtReadFileScatter @ 0x140ABB0B0 (NtReadFileScatter.c)
 *     NtCopyFileChunk @ 0x140ABE950 (NtCopyFileChunk.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x1408592D0 (PsIsProcessAppContainer.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
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
