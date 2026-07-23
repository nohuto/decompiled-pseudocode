/*
 * XREFs of IopParseDevice @ 0x1408A7F20
 * Callers:
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     IopParseFile @ 0x1409E89F0 (IopParseFile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     IopDequeueIrpFromThread @ 0x1402847D0 (IopDequeueIrpFromThread.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PsGetCurrentProcessSessionId @ 0x1402BAD30 (PsGetCurrentProcessSessionId.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     IopGetDevicePDO @ 0x140355B0C (IopGetDevicePDO.c)
 *     IopCheckDeviceAndDriver @ 0x140355E70 (IopCheckDeviceAndDriver.c)
 *     IopIncrementVpbRefCount @ 0x1403566B0 (IopIncrementVpbRefCount.c)
 *     IopDereferenceVpbAndFree @ 0x140357B78 (IopDereferenceVpbAndFree.c)
 *     IopDeleteFileObjectExtension @ 0x1403B1BD0 (IopDeleteFileObjectExtension.c)
 *     PsReleaseSiloHardReference @ 0x1403B3310 (PsReleaseSiloHardReference.c)
 *     IoGetAttachedDevice @ 0x1403B3B80 (IoGetAttachedDevice.c)
 *     IopCreateSecurityCheck @ 0x1403B5AE0 (IopCreateSecurityCheck.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     IopCheckSessionDeviceAccess @ 0x1403C1594 (IopCheckSessionDeviceAccess.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PsIsServerSilo @ 0x1403C35A8 (PsIsServerSilo.c)
 *     IopCheckVpbMounted @ 0x1403E5C10 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1403E6060 (IopDecrementDeviceObjectRef.c)
 *     SeFastTraverseCheck @ 0x1403E9BE8 (SeFastTraverseCheck.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     IopGetSetSpecificExtension @ 0x14041AD50 (IopGetSetSpecificExtension.c)
 *     RtlGetActiveConsoleId @ 0x140421360 (RtlGetActiveConsoleId.c)
 *     IoGetSilo @ 0x140424000 (IoGetSilo.c)
 *     IopSetFileObjectExtensionFlag @ 0x1404278D0 (IopSetFileObjectExtensionFlag.c)
 *     PsIsHostSilo @ 0x1404329D0 (PsIsHostSilo.c)
 *     IopSymlinkGetECP @ 0x140446838 (IopSymlinkGetECP.c)
 *     PsGetServerSiloServiceSessionId @ 0x14044B690 (PsGetServerSiloServiceSessionId.c)
 *     IoSetActivityIdThread @ 0x140451750 (IoSetActivityIdThread.c)
 *     PsAcquireSiloHardReference @ 0x140453640 (PsAcquireSiloHardReference.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140474550 (IopSymlinkGetMostRecentlyUsedName.c)
 *     MmIsDriverVerifying @ 0x140499230 (MmIsDriverVerifying.c)
 *     IopAllowRemoteDASD @ 0x1404C4890 (IopAllowRemoteDASD.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IoCancelFileOpen @ 0x1406F7A40 (IoCancelFileOpen.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x1406F8A94 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeTokenIsAdmin @ 0x14085AA10 (SeTokenIsAdmin.c)
 *     SeLockSubjectContext @ 0x14086C760 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14086C7C0 (SeUnlockSubjectContext.c)
 *     IopRetrieveTransactionParameters @ 0x1408A1ED0 (IopRetrieveTransactionParameters.c)
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     IopCheckBackupRestorePrivilege @ 0x1408AA2E0 (IopCheckBackupRestorePrivilege.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408AAEC0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     IopSymlinkCreateECP @ 0x1408AB950 (IopSymlinkCreateECP.c)
 *     IopSymlinkUpdateECP @ 0x1408ABA8C (IopSymlinkUpdateECP.c)
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 *     SeAppendPrivileges @ 0x1409C22A0 (SeAppendPrivileges.c)
 *     IopQueryInformation @ 0x1409C4DC0 (IopQueryInformation.c)
 *     IopCheckTopDeviceHint @ 0x1409DE490 (IopCheckTopDeviceHint.c)
 *     IopRetrieveTransactionParametersFromOpenPacket @ 0x140A0C5A0 (IopRetrieveTransactionParametersFromOpenPacket.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140A0DCC4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     IopSymlinkProcessReparse @ 0x140A2F13C (IopSymlinkProcessReparse.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x140A3550C (IopSymlinkEnforceEnabledTypes.c)
 *     PsGetParentSilo @ 0x140A50EA0 (PsGetParentSilo.c)
 *     IopCancelAlertedRequest @ 0x140A76074 (IopCancelAlertedRequest.c)
 *     IopGetNetworkOpenInformation @ 0x140AAAF68 (IopGetNetworkOpenInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x140BAB450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BAB7CC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopParseDevice(
        unsigned int *BugCheckParameter2,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        unsigned __int8 a4,
        unsigned int a5,
        UNICODE_STRING *a6,
        const UNICODE_STRING *a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        _QWORD *a11)
{
  struct _ACCESS_STATE *v11; // r13
  unsigned int *v12; // r15
  PCUNICODE_STRING v13; // rsi
  _QWORD *v14; // r14
  unsigned __int8 v15; // bl
  __int64 v16; // r9
  __int64 v17; // rdx
  struct _DEVICE_OBJECT *v18; // r14
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // r8
  int RemainingDesiredAccess; // eax
  int OriginalDesiredAccess; // eax
  int v24; // r15d
  __int64 v25; // rcx
  int v26; // edx
  unsigned __int8 v27; // r9
  char v28; // bl
  ULONG Characteristics; // eax
  char v30; // al
  unsigned __int8 v31; // bl
  PCUNICODE_STRING v32; // r8
  __int64 v33; // r13
  __int64 v34; // rdx
  PDEVICE_OBJECT v35; // rsi
  PDEVICE_OBJECT v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 Irp; // rax
  __int64 v40; // r14
  unsigned __int8 v41; // dl
  __int64 v42; // r13
  int v43; // eax
  char v44; // al
  PVOID v45; // r15
  PFILE_OBJECT v46; // r15
  __int64 v47; // rax
  unsigned __int16 Length; // ax
  __int64 Pool2; // rax
  struct _DEVICE_OBJECT *v50; // rsi
  struct _ECP_LIST *v51; // r8
  NTSTATUS v52; // eax
  _BYTE *v53; // rax
  NTSTATUS v55; // r13d
  int v56; // ecx
  struct _ECP_LIST *v57; // r8
  NTSTATUS v58; // eax
  int v59; // esi
  bool v60; // r13
  ULONG_PTR v61; // rcx
  __int64 v62; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  struct _FILE_OBJECT *RelatedFileObject; // rax
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  struct _DEVICE_OBJECT *v66; // r8
  struct _DEVICE_OBJECT *v67; // r9
  struct _DEVICE_OBJECT *v68; // rdx
  struct _DEVICE_OBJECT *v69; // r10
  struct _DEVICE_OBJECT *v70; // rcx
  struct _DEVICE_OBJECT *v71; // r11
  unsigned int v72; // edx
  char v73; // bl
  struct _DRIVER_OBJECT *DriverObject; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  ULONG_PTR FastIoQueryBasicInfo; // r14
  void *v77; // r13
  void *v78; // rbx
  size_t v79; // r8
  PCUNICODE_STRING v80; // rsi
  wchar_t *Buffer; // rcx
  unsigned __int16 v82; // ax
  __int64 v83; // rax
  PVOID v84; // r15
  _QWORD *v85; // rsi
  _QWORD *v86; // r9
  PDEVICE_OBJECT v87; // rsi
  __int64 v88; // rcx
  __int64 v89; // rax
  void *Silo; // rax
  NTSTATUS SetSpecificExtension; // eax
  _DWORD *v92; // rsi
  PVOID v93; // rax
  __int64 MostRecentlyUsedName; // rdx
  NTSTATUS updated; // eax
  bool v96; // r14
  char v97; // bl
  ACCESS_MASK v98; // eax
  PFILE_OBJECT v99; // rcx
  ULONG_PTR FastIoQueryNetworkOpenInfo; // r14
  void *v101; // r13
  NTSTATUS v102; // eax
  NTSTATUS XxxInformation; // eax
  int v104; // ecx
  __int64 v105; // rcx
  KEVENT *p_Event; // r13
  __int64 v107; // rcx
  PUNICODE_STRING v108; // rcx
  wchar_t *v109; // r14
  wchar_t *v110; // rcx
  __int64 v111; // rax
  _QWORD *v112; // rsi
  ULONG_PTR v113; // rdx
  __int64 v114; // r8
  int v115; // ecx
  unsigned __int64 v116; // rax
  __int64 v117; // r9
  unsigned int v119; // ecx
  __int64 v120; // rcx
  _QWORD *v121; // rbx
  _DWORD *CurrentIrql; // r8
  unsigned __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rax
  int v126; // ecx
  NTSTATUS v127; // eax
  bool v128; // zf
  _DWORD *v129; // rsi
  unsigned __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rdx
  char v133; // cl
  int v134; // ecx
  int v135; // ecx
  BOOLEAN v136; // si
  unsigned __int64 v137; // rcx
  bool v138; // al
  unsigned __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // esi
  _DWORD *DevicePDO; // rax
  void *v142; // rsi
  unsigned __int64 DeviceType; // rax
  __int64 v144; // rcx
  ULONG ActiveConsoleId; // esi
  unsigned __int64 v146; // rax
  int v147; // esi
  char v148; // al
  PACCESS_TOKEN ClientToken; // rcx
  __int64 v150; // rdx
  PFILE_OBJECT v151; // rbx
  void *v152; // rcx
  ULONG_PTR Vpb; // rcx
  __int64 v154; // r13
  struct _LIST_ENTRY *v155; // rsi
  unsigned int GrantedAccess; // [rsp+40h] [rbp-168h]
  char v157[4]; // [rsp+60h] [rbp-148h] BYREF
  NTSTATUS AccessStatus; // [rsp+64h] [rbp-144h] BYREF
  unsigned __int8 v159; // [rsp+68h] [rbp-140h]
  PVOID v160; // [rsp+70h] [rbp-138h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-130h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+80h] [rbp-128h]
  int v163; // [rsp+88h] [rbp-120h]
  ACCESS_MASK v164; // [rsp+8Ch] [rbp-11Ch] BYREF
  __int64 v165; // [rsp+90h] [rbp-118h]
  PPRIVILEGE_SET Privileges; // [rsp+98h] [rbp-110h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A0h] [rbp-108h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-100h]
  PUNICODE_STRING AbsoluteObjectName; // [rsp+B0h] [rbp-F8h]
  unsigned int v170; // [rsp+B8h] [rbp-F0h]
  struct _ECP_LIST *v171; // [rsp+C0h] [rbp-E8h]
  PVOID Object; // [rsp+C8h] [rbp-E0h] BYREF
  char v173; // [rsp+D0h] [rbp-D8h]
  _DWORD Size[3]; // [rsp+D4h] [rbp-D4h] BYREF
  PVOID P; // [rsp+E0h] [rbp-C8h] BYREF
  _DWORD *v176; // [rsp+E8h] [rbp-C0h] BYREF
  PVOID v177; // [rsp+F0h] [rbp-B8h]
  _QWORD *v178; // [rsp+F8h] [rbp-B0h]
  int v179; // [rsp+100h] [rbp-A8h]
  _QWORD *v180; // [rsp+108h] [rbp-A0h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+110h] [rbp-98h] BYREF
  struct _DEVICE_OBJECT *v182; // [rsp+120h] [rbp-88h]
  UNICODE_STRING ObjectTypeName; // [rsp+128h] [rbp-80h] BYREF
  __int128 v184; // [rsp+138h] [rbp-70h] BYREF
  __int64 v185; // [rsp+148h] [rbp-60h]
  _BYTE *v186; // [rsp+150h] [rbp-58h]
  void *v187; // [rsp+158h] [rbp-50h]
  __int64 v188; // [rsp+160h] [rbp-48h]
  struct _LIST_ENTRY v189; // [rsp+168h] [rbp-40h] BYREF

  v159 = a4;
  v11 = a3;
  *(_QWORD *)&Size[1] = a3;
  v12 = BugCheckParameter2;
  v182 = (struct _DEVICE_OBJECT *)BugCheckParameter2;
  AbsoluteObjectName = a6;
  v13 = a7;
  SourceString = a7;
  v188 = a8;
  v178 = a10;
  v14 = a11;
  v180 = a11;
  v164 = 0;
  AccessStatus = 0;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v184 = 0LL;
  v185 = 0LL;
  v179 = 0;
  LOBYTE(v163) = 0;
  Size[0] = 0;
  ObjectTypeName = 0LL;
  Privileges = 0LL;
  v177 = 0LL;
  v171 = 0LL;
  P = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  v15 = 4;
  RtlInitUnicodeString(&ObjectTypeName, L"File");
  while ( 1 )
  {
    v16 = 0x60010000110040LL;
    v17 = 0x1080020084LL;
    *v14 = 0LL;
    FileObject = 0LL;
    if ( !a8 || *(_WORD *)a8 != 8 || *(_WORD *)(a8 + 2) != 224 )
      return 3221225508LL;
    v18 = (struct _DEVICE_OBJECT *)v12;
    v160 = v12;
    if ( *(_DWORD *)(a8 + 32) == 1 )
    {
      *(_DWORD *)(a8 + 32) = -1096154543;
      *(_QWORD *)(a8 + 40) = v12;
      *(_DWORD *)(a8 + 16) = 0;
      PsReferenceSiloContext(v12);
      return 0LL;
    }
    if ( (*(_DWORD *)(a8 + 152) & 0x10) != 0 )
    {
      v137 = v12[18];
      if ( *(_QWORD *)(a8 + 24) == 2684354563LL )
      {
        if ( (unsigned int)v137 > 0x24 )
          goto LABEL_431;
        if ( !_bittest64(&v17, v137) )
        {
          *(_DWORD *)(a8 + 16) = -1073741192;
          return 3221226104LL;
        }
      }
      else
      {
        LOBYTE(v17) = (unsigned int)v137 <= 0x24 && _bittest64(&v17, v137);
        v138 = (unsigned int)v137 <= 0x36 && _bittest64(&v16, v137);
        if ( !(_BYTE)v17 && !v138 )
        {
LABEL_431:
          *(_DWORD *)(a8 + 16) = -1073741192;
          return 3221226104LL;
        }
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(a8 + 152) & 8, v17, *(_QWORD *)(a8 + 168));
        AccessStatus = result;
        if ( (int)result < 0 )
          goto LABEL_248;
      }
    }
    v19 = *(_QWORD *)(a8 + 40);
    if ( v19 )
    {
      v18 = *(struct _DEVICE_OBJECT **)(v19 + 8);
      v160 = v18;
    }
    if ( v18->DeviceType == 7 )
    {
      DeviceObject = v18;
      AttachedDevice = v18;
      v66 = v18;
      v67 = v18;
      v68 = v18;
      v69 = v18;
      do
      {
        v70 = v66;
        v71 = v67;
        if ( v68->Vpb )
          break;
        AttachedDevice = v69->AttachedDevice;
        v68 = AttachedDevice;
        DeviceObject = AttachedDevice;
        v66 = AttachedDevice;
        v70 = AttachedDevice;
        v67 = AttachedDevice;
        v71 = AttachedDevice;
        v69 = AttachedDevice;
      }
      while ( AttachedDevice );
      if ( AttachedDevice && v70 != v18 )
      {
        *(_DWORD *)(a8 + 152) |= 2u;
        v18 = v71;
        v160 = v71;
      }
    }
    result = IopCheckDeviceAndDriver(a8, (ULONG_PTR)v18);
    AccessStatus = result;
    if ( (int)result < 0 )
      goto LABEL_248;
    if ( (v18->DeviceObjectExtension->ExtensionFlags & 0x400) != 0 && !*(_QWORD *)(a8 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(a8 + 64) & 0x40000) == 0 )
      {
        DevicePDO = IopGetDevicePDO((__int64)v18);
        v142 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            ObfDereferenceObject(v142);
            IopDecrementDeviceObjectRef((ULONG_PTR)v18, 0);
            *(_DWORD *)(a8 + 16) = -1073741790;
            return 3221225506LL;
          }
          ObfDereferenceObject(v142);
        }
      }
      v13 = SourceString;
    }
    RemainingDesiredAccess = v11->RemainingDesiredAccess;
    if ( RemainingDesiredAccess < 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 19);
    if ( (RemainingDesiredAccess & 0x40000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 20);
    if ( (RemainingDesiredAccess & 0x20000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 21);
    if ( (RemainingDesiredAccess & 0x10000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 22);
    v11->RemainingDesiredAccess = RemainingDesiredAccess & 0xFFFFFFF;
    OriginalDesiredAccess = v11->OriginalDesiredAccess;
    if ( OriginalDesiredAccess < 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 19);
    if ( (OriginalDesiredAccess & 0x40000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 20);
    if ( (OriginalDesiredAccess & 0x20000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 21);
    if ( (OriginalDesiredAccess & 0x10000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 22);
    v11->OriginalDesiredAccess = OriginalDesiredAccess & 0xFFFFFFF;
    *(_OWORD *)((char *)v11->AuxData + 8) = *(_OWORD *)((char *)IoFileObjectType + 76);
    v24 = v11->RemainingDesiredAccess;
    v170 = v24;
    LOBYTE(v21) = v159 || (*(_DWORD *)(a8 + 84) & 1) != 0;
    IopCheckBackupRestorePrivilege(v11, a8 + 64, v21, *(unsigned int *)(a8 + 88));
    if ( *(_BYTE *)(a8 + 136) && !v13->Length || (v11->Flags & 0x100) != 0 )
    {
      v24 |= v11->PreviouslyGrantedAccess;
      v170 = v24;
    }
    v25 = *(_QWORD *)(a8 + 40);
    LOBYTE(v26) = v163;
    if ( v25 && (*(_DWORD *)(v25 + 80) & 0x400000) != 0 )
    {
      v26 = (unsigned __int8)v163;
      if ( !v13->Length )
        v26 = 1;
      v163 = v26;
    }
    v27 = v159;
    if ( (v159 || (*(_DWORD *)(a8 + 84) & 1) != 0) && (!v25 || (_BYTE)v26) && !*(_BYTE *)(a8 + 136) )
    {
      v28 = v15 & 0xDF;
      Characteristics = v18->Characteristics;
      if ( v13->Length )
      {
        if ( (Characteristics & 0x20100) != 0x20000 && v159 )
        {
          v157[0] = 0;
          SeIsAppContainerOrIdentifyLevelContext(&v11->SubjectSecurityContext);
          if ( v157[0] )
          {
            Object = Privileges;
            LODWORD(DeviceObject) = 0;
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
            SeLockSubjectContext(&v11->SubjectSecurityContext);
            v136 = SeAccessCheck(
                     *((PSECURITY_DESCRIPTOR *)v160 + 34),
                     &v11->SubjectSecurityContext,
                     1u,
                     v24 | 0x20,
                     0,
                     (PPRIVILEGE_SET *)&Object,
                     (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                     1,
                     &v164,
                     (PNTSTATUS)&DeviceObject);
            if ( Object )
            {
              SeAppendPrivileges(v11, (PPRIVILEGE_SET)Object);
              CmSiFreeMemory((PPRIVILEGE_SET)Object);
            }
            SeUnlockSubjectContext(&v11->SubjectSecurityContext);
            ExReleaseResourceLite(&IopSecurityResource);
            KeLeaveCriticalRegionThread();
            v15 = (v28 ^ v136) & 1 ^ v28;
            v18 = (struct _DEVICE_OBJECT *)v160;
            goto LABEL_44;
          }
          v18 = (struct _DEVICE_OBJECT *)v160;
        }
        if ( (v11->Flags & 1) != 0 )
        {
          v15 = v28 | 1;
LABEL_44:
          if ( (v15 & 0x20) != 0 )
            SeUnlockSubjectContext(&v11->SubjectSecurityContext);
          if ( (v15 & 1) == 0 )
            goto LABEL_292;
          v27 = v159;
          goto LABEL_48;
        }
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        v148 = SeFastTraverseCheck((__int64)v18->SecurityDescriptor, (__int64)v11, 32);
        v15 = (v28 ^ v148) & 1 ^ v28;
        if ( (v148 & 1) == 0 )
        {
          Privileges = 0LL;
          SeLockSubjectContext(&v11->SubjectSecurityContext);
          v15 = ((v15 | 0x20) ^ SeAccessCheck(
                                  v18->SecurityDescriptor,
                                  &v11->SubjectSecurityContext,
                                  1u,
                                  0x20u,
                                  0,
                                  &Privileges,
                                  (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                  1,
                                  &v164,
                                  &AccessStatus)) & 1 ^ (v15 | 0x20);
          if ( Privileges )
          {
            SeAppendPrivileges(v11, Privileges);
            CmSiFreeMemory(Privileges);
          }
        }
      }
      else
      {
        v96 = 0;
        if ( (Characteristics & 0x40001) != 0 && (v24 & 0xFFEDFF7F) != 0 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
          {
            v146 = PsGetCurrentServerSilo();
            v147 = PsGetServerSiloServiceSessionId(v146);
            if ( v147 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
              v96 = 1;
          }
        }
        Privileges = 0LL;
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SeLockSubjectContext(&v11->SubjectSecurityContext);
        v97 = v28 | 0x20;
        if ( !v96 )
          goto LABEL_233;
        ClientToken = v11->SubjectSecurityContext.ClientToken;
        if ( !ClientToken )
          ClientToken = v11->SubjectSecurityContext.PrimaryToken;
        if ( SeTokenIsAdmin(ClientToken) )
        {
LABEL_233:
          v18 = (struct _DEVICE_OBJECT *)v160;
          v15 = (v97 ^ SeAccessCheck(
                         *((PSECURITY_DESCRIPTOR *)v160 + 34),
                         &v11->SubjectSecurityContext,
                         (v97 & 0x20) != 0,
                         v24,
                         0,
                         &Privileges,
                         (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                         1,
                         &v164,
                         &AccessStatus)) & 1 ^ v97;
          if ( Privileges )
          {
            SeAppendPrivileges(v11, Privileges);
            CmSiFreeMemory(Privileges);
          }
          if ( (v15 & 1) != 0 )
          {
            v98 = v164;
            v11->PreviouslyGrantedAccess |= v164;
            v11->RemainingDesiredAccess &= ~(v98 | 0x2000000);
            *(_BYTE *)(a8 + 136) = 1;
          }
        }
        else
        {
          v15 = v97 & 0xFE;
          AccessStatus = -1073741790;
          v18 = (struct _DEVICE_OBJECT *)v160;
        }
        SeOpenObjectAuditAlarmWithTransaction(
          &ObjectTypeName,
          v18,
          AbsoluteObjectName,
          v18->SecurityDescriptor,
          v11,
          0,
          v15 & 1,
          1,
          0LL,
          &v11->GenerateOnClose);
      }
      ExReleaseResourceLite(&IopSecurityResource);
      KeLeaveCriticalRegionThread();
      goto LABEL_44;
    }
LABEL_48:
    if ( *(_BYTE *)(a8 + 137) || *(_BYTE *)(a8 + 138) )
      v30 = 64;
    else
      v30 = 0;
    v31 = v30 | v15 & 0xBF;
    v32 = SourceString;
    if ( SourceString->Length || *(_QWORD *)(a8 + 40) || ((unsigned __int8)~(v31 >> 6) & ((v24 & 0xFEE1FF7F) == 0)) == 0 )
      v15 = v31 & 0xF7;
    else
      v15 = v31 | 8;
    v33 = 0LL;
    v165 = 0LL;
    v34 = *(_QWORD *)(a8 + 40);
    if ( !v34 || (*(_DWORD *)(v34 + 80) & 0x800) != 0 )
    {
      v35 = v18;
      DeviceObject = v18;
      v36 = v18;
      if ( v18->Vpb && (v15 & 8) == 0 )
      {
        if ( (v18->Characteristics & 0x100) != 0
          && (v18->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v27 || (*(_DWORD *)(a8 + 84) & 1) != 0)
          && (v34 || SourceString->Length)
          && !(_BYTE)v163 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v18,
                  v18,
                  *(struct _ACCESS_STATE **)&Size[1],
                  v24,
                  *(_DWORD *)(a8 + 88),
                  0LL,
                  &v164,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_292;
          v32 = SourceString;
        }
        v37 = IopCheckVpbMounted(a8, (ULONG_PTR)v18, (__int64)v32, &AccessStatus);
        v33 = v37;
        v165 = v37;
        if ( !v37 )
          return (unsigned int)AccessStatus;
        v35 = *(PDEVICE_OBJECT *)(v37 + 8);
        DeviceObject = v35;
        v36 = v35;
      }
      if ( (*(_DWORD *)(a8 + 152) & 1) != 0 )
      {
        v15 |= 2u;
      }
      else if ( v36->AttachedDevice )
      {
        v35 = IoGetAttachedDevice(v35);
        DeviceObject = v35;
      }
    }
    else
    {
      v35 = v182;
      DeviceObject = v182;
      if ( *(_QWORD *)(v34 + 16) )
      {
        v33 = *(_QWORD *)(v34 + 16);
        v165 = v33;
        if ( (v18->Characteristics & 0x100) != 0
          && (v18->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v27 || (*(_DWORD *)(a8 + 84) & 1) != 0)
          && !(_BYTE)v163 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v18,
                  v18,
                  *(struct _ACCESS_STATE **)&Size[1],
                  v24,
                  *(_DWORD *)(a8 + 88),
                  0LL,
                  &v164,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_292;
        }
        IopIncrementVpbRefCount(v33, 1);
      }
      if ( (*(_DWORD *)(a8 + 152) & 1) != 0 )
      {
        if ( v33 )
        {
          v35 = *(PDEVICE_OBJECT *)(v33 + 8);
          DeviceObject = v35;
        }
        v15 |= 2u;
      }
    }
    if ( (v18->Characteristics & 0x40001) != 0 && (v18->Flags & 0x600100) == 0 && (v18->Characteristics & 0x100) == 0 )
    {
      v157[0] = 0;
      SeIsAppContainerOrIdentifyLevelContext((PSECURITY_SUBJECT_CONTEXT)(*(_QWORD *)&Size[1] + 32LL));
      if ( v157[0] )
      {
        if ( !v33 )
          goto LABEL_292;
        if ( (*(_DWORD *)(*(_QWORD *)(v33 + 8) + 48LL) & 0x20000) == 0 )
        {
          IopDereferenceVpbAndFree(v33);
LABEL_292:
          IopDecrementDeviceObjectRef((ULONG_PTR)v18, 0);
          return 3221225506LL;
        }
      }
    }
    if ( (v15 & 2) != 0 )
    {
      AccessStatus = IopCheckTopDeviceHint(&DeviceObject, a8, (v15 & 8) != 0, SourceString);
      if ( AccessStatus < 0 )
      {
        if ( v33 )
          IopDereferenceVpbAndFree(v33);
        IopDecrementDeviceObjectRef((ULONG_PTR)v18, 0);
        return (unsigned int)AccessStatus;
      }
      v35 = DeviceObject;
    }
    v38 = *(_DWORD *)(a8 + 152);
    if ( (v38 & 0x10) != 0 )
      *(_DWORD *)(a8 + 152) = v38 & 0xFFFFFFEF;
    if ( ((v35->Characteristics & 0x100) != 0 || IopRequireDeviceAccessCheck && (v18->Characteristics & 0x100000) != 0)
      && (v159 || (*(_DWORD *)(a8 + 84) & 1) != 0)
      && (*(_QWORD *)(a8 + 40) || SourceString->Length)
      && !(_BYTE)v163 )
    {
      Privileges = 0LL;
      if ( !IopCreateSecurityCheck(
              (__int64)v18,
              v35,
              *(struct _ACCESS_STATE **)&Size[1],
              v24,
              *(_DWORD *)(a8 + 88),
              0LL,
              &v164,
              AbsoluteObjectName,
              &ObjectTypeName,
              (__int64)CurrentThread,
              1) )
      {
        IopDecrementDeviceObjectRef((ULONG_PTR)v18, 0);
        if ( v33 )
          IopDereferenceVpbAndFree(v33);
        return 3221225506LL;
      }
    }
    Irp = IopAllocateIrpExReturn((__int64)v35, (unsigned __int8)v35->StackSize, 0LL);
    v40 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef((ULONG_PTR)v160, 0);
      if ( v33 )
        IopDereferenceVpbAndFree(v33);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    v41 = v159;
    *(_BYTE *)(Irp + 64) = v159;
    *(_DWORD *)(Irp + 16) = 2180;
    *(_QWORD *)&v184 = a9;
    *((_QWORD *)&v184 + 1) = *(_QWORD *)&Size[1];
    LODWORD(v185) = v24;
    HIDWORD(v185) = *(_DWORD *)(a8 + 64);
    v42 = *(_QWORD *)(Irp + 184) - 72LL;
    v186 = (_BYTE *)v42;
    *(_BYTE *)(v42 + 3) = 0;
    v43 = *(_DWORD *)(a8 + 120);
    if ( v43 )
    {
      *(_BYTE *)v42 = v43 == 1 ? 1 : 19;
      *(_QWORD *)(v42 + 32) = *(_QWORD *)(a8 + 128);
    }
    else
    {
      *(_BYTE *)v42 = 0;
      *(_DWORD *)(v42 + 32) = *(_DWORD *)(a8 + 80);
      v44 = *(_BYTE *)(a8 + 84);
      *(_BYTE *)(v42 + 2) = v44;
      if ( (a5 & 0x40) == 0 )
        *(_BYTE *)(v42 + 2) = v44 | 0x80;
    }
    *(_QWORD *)(v40 + 88) = *(_QWORD *)(a8 + 56);
    *(_QWORD *)(v40 + 24) = *(_QWORD *)(a8 + 72);
    *(_DWORD *)(v42 + 16) = *(_DWORD *)(a8 + 64) & 0xFFFFFF | (*(_DWORD *)(a8 + 88) << 24);
    *(_WORD *)(v42 + 24) = *(_WORD *)(a8 + 68);
    *(_WORD *)(v42 + 26) = *(_WORD *)(a8 + 70);
    *(_QWORD *)(v42 + 8) = &v184;
    *(_QWORD *)(v40 + 112) = *(_QWORD *)(a8 + 168);
    *(_QWORD *)(v40 + 72) = BugCheckParameter4;
    *(_QWORD *)(v40 + 8) = 0LL;
    *(_BYTE *)(v40 + 65) = 0;
    *(_BYTE *)(v40 + 68) = 0;
    *(_QWORD *)(v40 + 80) = 0LL;
    *(_QWORD *)(v40 + 104) = 0LL;
    *(_QWORD *)(v40 + 160) = 0LL;
    if ( *(_BYTE *)(a8 + 137) )
      break;
    GrantedAccess = v24;
    v45 = v160;
    AccessStatus = IopAllocRealFileObject(
                     (__int64)&FileObject,
                     (__int64)v35,
                     (__int64)v160,
                     a5,
                     v41,
                     a8,
                     v178,
                     0,
                     GrantedAccess);
    if ( AccessStatus < 0 )
    {
      IoFreeIrp((PIRP)v40);
      IopDecrementDeviceObjectRef((ULONG_PTR)v45, 0);
      if ( v165 )
        IopDereferenceVpbAndFree(v165);
      v99 = FileObject;
      if ( FileObject )
      {
        FileObject->DeviceObject = 0LL;
        ObfDereferenceObject(v99);
      }
      goto LABEL_247;
    }
    v46 = FileObject;
LABEL_78:
    if ( (v15 & 8) != 0 )
      v46->Flags |= 0x800u;
    v47 = *(_QWORD *)(a8 + 216);
    if ( (v47 & 1) != 0 )
    {
      v72 = 32;
LABEL_138:
      IopSetFileObjectExtensionFlag((__int64)v46, v72);
      goto LABEL_82;
    }
    if ( (v47 & 2) != 0 )
    {
      v72 = 64;
      goto LABEL_138;
    }
LABEL_82:
    *(_QWORD *)(v40 + 192) = v46;
    *(_QWORD *)(v42 + 48) = v46;
    Length = SourceString->Length;
    if ( SourceString->Length )
    {
      if ( Length < 0x38u )
      {
        Length = 56;
      }
      else if ( Length < 0x78u )
      {
        Length = 120;
      }
      else if ( Length < 0xF8u )
      {
        Length = 248;
      }
      v46->FileName.MaximumLength = Length;
      Pool2 = ExAllocatePool2(0x100uLL, Length, 0x6D4E6F49u);
      v46->FileName.Buffer = (wchar_t *)Pool2;
      if ( !Pool2 )
      {
        IoFreeIrp((PIRP)v40);
        IopDecrementDeviceObjectRef((ULONG_PTR)v160, 0);
        if ( v165 )
          IopDereferenceVpbAndFree(v165);
        v46->DeviceObject = 0LL;
        if ( *(_BYTE *)(a8 + 137) )
          IopDeleteFileObjectExtension((__int64)v46);
        else
          ObfDereferenceObject(v46);
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString(&v46->FileName, SourceString);
    if ( *(_BYTE *)(a8 + 137) )
    {
      v157[0] = 0;
      AccessStatus = IopQueryInformation(a8, DeviceObject, v40, v42, v157);
      if ( AccessStatus < 0 || v157[0] )
      {
        v104 = *(_DWORD *)(v40 + 48);
        *(_DWORD *)(a8 + 16) = v104;
        *(_QWORD *)(a8 + 24) = *(_QWORD *)(v40 + 56);
        if ( v104 == 260 )
        {
          v152 = *(void **)(v40 + 160);
          if ( v152 )
          {
            ExFreePoolWithTag(v152, 0);
            *(_QWORD *)(v40 + 160) = 0LL;
            *(_QWORD *)(a8 + 40) = 0LL;
          }
        }
        if ( v46->FileName.Length )
          ExFreePoolWithTag(v46->FileName.Buffer, 0);
        IopDeleteFileObjectExtension((__int64)v46);
        IopDecrementDeviceObjectRef((ULONG_PTR)v160, 0);
        if ( v165 )
        {
          v105 = v165;
          goto LABEL_281;
        }
LABEL_282:
        IoFreeIrp((PIRP)v40);
        return (unsigned int)AccessStatus;
      }
      PsGetCurrentServerSiloGlobals();
      v79 = v46->FileName.Length;
      v80 = SourceString;
      if ( (_WORD)v79 != SourceString->Length || memcmp(v46->FileName.Buffer, SourceString->Buffer, v79) )
      {
        Buffer = v46->FileName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          RtlInitUnicodeString(&v46->FileName, 0LL);
        }
        v82 = v80->Length;
        if ( v80->Length )
        {
          if ( v82 < 0x38u )
          {
            v82 = 56;
          }
          else if ( v82 >= 0x78u )
          {
            if ( v82 < 0xF8u )
              v82 = 248;
          }
          else
          {
            v82 = 120;
          }
          v46->FileName.MaximumLength = v82;
          v83 = ExAllocatePool2(0x100uLL, v82, 0x6D4E6F49u);
          v46->FileName.Buffer = (wchar_t *)v83;
          if ( !v83 )
          {
            IopDeleteFileObjectExtension((__int64)v46);
            IopDecrementDeviceObjectRef((ULONG_PTR)v160, 0);
            if ( v165 )
              IopDereferenceVpbAndFree(v165);
            IoFreeIrp((PIRP)v40);
            return 3221225626LL;
          }
          RtlCopyUnicodeString(&v46->FileName, v80);
        }
      }
      v84 = v160;
      v50 = DeviceObject;
      AccessStatus = IopAllocRealFileObject(
                       (__int64)&FileObject,
                       (__int64)DeviceObject,
                       (__int64)v160,
                       a5,
                       v159,
                       a8,
                       v178,
                       1,
                       v170);
      if ( AccessStatus < 0 )
      {
        v151 = FileObject;
        if ( FileObject->FileName.Length )
          ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
        IopDeleteFileObjectExtension((__int64)v151);
        IopDecrementDeviceObjectRef((ULONG_PTR)v84, 0);
        if ( v165 )
        {
          v105 = v165;
LABEL_281:
          IopDereferenceVpbAndFree(v105);
        }
        goto LABEL_282;
      }
      v46 = FileObject;
      *(_QWORD *)(v42 + 48) = FileObject;
      *(_QWORD *)(v40 + 192) = v46;
    }
    else
    {
      v50 = DeviceObject;
    }
    if ( !*(_DWORD *)(a8 + 120) )
    {
      v51 = 0LL;
      if ( (*(_DWORD *)(v40 + 16) & 0x80) != 0 )
        v51 = *(struct _ECP_LIST **)(v40 + 112);
      v52 = -1073741811;
      if ( (*(_DWORD *)(v40 + 16) & 0x80) != 0 )
        v52 = 0;
      AccessStatus = v52;
      if ( v51 )
      {
        if ( IopSymlinkGetECP(v51, &P) != -1073741275 )
        {
          MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName((__int64)P);
          if ( !*(_WORD *)(MostRecentlyUsedName + 4) )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v40,
                        AbsoluteObjectName->Length - SourceString->Length,
                        *(_WORD *)(MostRecentlyUsedName + 2));
            AccessStatus = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v40 + 48) = updated;
              *(_QWORD *)(v40 + 56) = 0LL;
              v15 &= ~4u;
            }
          }
        }
      }
    }
    KeInitializeEvent(&v46->Event, NotificationEvent, 0);
    *(_QWORD *)(a8 + 8) = v46;
    if ( (v15 & 4) != 0 )
    {
      IopQueueThreadIrp(v40);
      if ( *(char *)(v40 + 71) >= 0 && (v53 = *(_BYTE **)(v40 + 200)) != 0LL && (*v53 & 2) != 0 )
      {
        v189 = 0LL;
        v189 = *(struct _LIST_ENTRY *)(*(_QWORD *)(v40 + 200) + 24LL);
        v155 = IoSetActivityIdThread(&v189);
        v55 = IofCallDriver(DeviceObject, (PIRP)v40);
        IoSetActivityIdThread(v155);
      }
      else
      {
        v55 = IofCallDriver(v50, (PIRP)v40);
      }
      AccessStatus = v55;
    }
    else
    {
      v55 = AccessStatus;
    }
    if ( v55 == 259 )
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
        v15 &= ~0x80u;
      else
        v15 |= 0x80u;
      v46 = FileObject;
      p_Event = &FileObject->Event;
      while ( 1 )
      {
        AccessStatus = KeWaitForSingleObject(p_Event, Executive, 0, v15 >> 7, 0LL);
        if ( AccessStatus != 257 )
          break;
        CurrentIrql = (_DWORD *)KeGetCurrentIrql();
        v176 = CurrentIrql;
        __writecr8(1uLL);
        if ( KiIrqlFlags )
        {
          KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 1);
          LOBYTE(CurrentIrql) = (_BYTE)v176;
        }
        v46 = FileObject;
        if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
          || !FileObject->Event.Header.SignalState && *(_BYTE *)(v40 + 68) )
        {
          if ( KiIrqlFlags )
          {
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
            LOBYTE(CurrentIrql) = (_BYTE)v176;
          }
          __writecr8((unsigned __int8)CurrentIrql);
          IopCancelAlertedRequest(&v46->Event, (PIRP)v40);
          break;
        }
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
          LOBYTE(CurrentIrql) = (_BYTE)v176;
        }
        __writecr8((unsigned __int8)CurrentIrql);
      }
      AccessStatus = BugCheckParameter4[0];
    }
    v56 = *(_DWORD *)(v40 + 16) & 0x80;
    if ( v56 )
    {
      v57 = *(struct _ECP_LIST **)(v40 + 112);
      v171 = v57;
    }
    else
    {
      v57 = v171;
    }
    v58 = -1073741811;
    if ( v56 )
      v58 = 0;
    AccessStatus = v58;
    v59 = *(_DWORD *)(a8 + 84) & 8;
    v60 = v59 != 0;
    if ( *(_DWORD *)(v40 + 48) == 260 )
    {
      v177 = *(PVOID *)(v40 + 160);
      if ( !v57 || IopSymlinkGetECP(v57, &P) == -1073741275 )
      {
        AccessStatus = IopSymlinkCreateECP((PIRP)v40, (__int64)&P);
        if ( AccessStatus < 0 )
        {
          *(_QWORD *)(v40 + 56) = 0LL;
          *(_DWORD *)(v40 + 48) = AccessStatus;
        }
        else
        {
          v125 = (__int64)v171;
          if ( v171 )
          {
LABEL_361:
            if ( *(_DWORD *)(v40 + 48) != 260 )
              goto LABEL_110;
            v128 = v59 == 0;
            v129 = v177;
            if ( !v128 && v125 )
              v60 = IopCheckAndUpdateStopOnSymlinkEcp(v125, *(_DWORD *)(v40 + 56), (__int64)v177);
            IopSymlinkProcessReparse((PIRP)v40);
            v130 = *(_QWORD *)(v40 + 56) - 2684354563LL;
            if ( v130 > 0x16 )
              goto LABEL_110;
            v131 = 4194817LL;
            if ( !_bittest64(&v131, v130) )
              goto LABEL_110;
            if ( *(int *)(v40 + 48) >= 0 )
            {
              v132 = *((unsigned __int16 *)v129 + 3);
              v133 = 0;
              if ( !(_WORD)v132 )
                v133 = 16;
              v15 = v15 & 0xEF | v133;
              if ( !(_WORD)v132 || *(wchar_t *)((char *)SourceString->Buffer + SourceString->Length - v132) == 58 )
              {
                v134 = *(_DWORD *)(a8 + 64);
                if ( (v134 & 0x41) == 0 && !*v186 )
                {
                  if ( *v129 == -1610612733 )
                    goto LABEL_373;
                  if ( *v129 != -1610612724 )
                    goto LABEL_425;
                  if ( (int)v129[4] < 0 )
                  {
LABEL_373:
                    v135 = v134 | 1;
                  }
                  else
                  {
                    if ( (v129[4] & 0x40000000) == 0 )
                      goto LABEL_425;
                    v135 = v134 | 0x40;
                  }
                  *(_DWORD *)(a8 + 64) = v135;
                }
              }
            }
LABEL_425:
            if ( !v60 )
            {
              ExFreePoolWithTag(v129, 0);
              v177 = 0LL;
            }
            goto LABEL_110;
          }
          v126 = *(_DWORD *)(v40 + 16) & 0x80;
          if ( v126 )
            v171 = *(struct _ECP_LIST **)(v40 + 112);
          v127 = -1073741811;
          if ( v126 )
            v127 = 0;
          AccessStatus = v127;
        }
      }
      v125 = (__int64)v171;
      goto LABEL_361;
    }
LABEL_110:
    if ( !*(_DWORD *)(v40 + 48) && !*(_DWORD *)(a8 + 120) )
    {
      AccessStatus = IopSymlinkPropagateToExtensionIfNeeded(v46, v171, AbsoluteObjectName);
      if ( AccessStatus < 0 )
      {
        IoCancelFileOpen(DeviceObject, v46);
        *(_QWORD *)(v40 + 56) = 0LL;
        *(_DWORD *)(v40 + 48) = AccessStatus;
      }
    }
    if ( v171 )
      *(_QWORD *)(a8 + 168) = v171;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v40 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v46->Event.Header.SignalState = 1;
    if ( (v15 & 4) != 0 )
    {
      *(_QWORD *)(v40 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v40);
    }
    if ( (*(_BYTE *)(v40 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v40 + 24), 0);
    IoFreeIrp((PIRP)v40);
    v61 = BugCheckParameter4[1];
    *(_QWORD *)(a8 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      if ( (v46->Flags & 0x200000) != 0 )
      {
        ObfDereferenceObject(v46);
      }
      else
      {
        if ( v46->FileName.Length )
        {
          ExFreePoolWithTag(v46->FileName.Buffer, 0);
          v46->FileName.Length = 0;
        }
        v46->DeviceObject = 0LL;
        ObfDereferenceObject(v46);
        IopDecrementDeviceObjectRef((ULONG_PTR)v160, 0);
        if ( v165 )
          IopDereferenceVpbAndFree(v165);
      }
      *(_QWORD *)(a8 + 8) = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(a8 + 16) = AccessStatus;
      return result;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(v46);
      if ( DeviceObject != RelatedDeviceObject )
      {
        Vpb = (ULONG_PTR)v46->Vpb;
        v154 = v165;
        if ( Vpb != v165 )
        {
          if ( Vpb )
            IopIncrementVpbRefCount(Vpb, 1);
          if ( v154 )
            IopDereferenceVpbAndFree(v154);
        }
      }
      if ( (v15 & 0x40) == 0 )
      {
        *v180 = v46;
        *(_DWORD *)(a8 + 32) = -1096154543;
        PsReferenceSiloContext(v46);
        RelatedFileObject = v46->RelatedFileObject;
        if ( (!RelatedFileObject || (RelatedFileObject->Flags & 0x400000) != 0)
          && !v46->FileName.Length
          && (RelatedDeviceObject->DeviceType == 3
           || RelatedDeviceObject->DeviceType == 8
           || RelatedDeviceObject->DeviceType == 9
           || RelatedDeviceObject->DeviceType == 32) )
        {
          v46->Flags |= 0x400000u;
        }
        result = LODWORD(BugCheckParameter4[0]);
        *(_DWORD *)(a8 + 16) = BugCheckParameter4[0];
        return result;
      }
      if ( *(_BYTE *)(a8 + 137) )
      {
        if ( *(_BYTE *)(a8 + 208) )
        {
          XxxInformation = IopQueryXxxInformation((ULONG_PTR)v46, *(_QWORD *)(a8 + 112), a8 + 204, 1);
        }
        else
        {
          v73 = 0;
          DriverObject = RelatedDeviceObject->DriverObject;
          FastIoDispatch = DriverObject->FastIoDispatch;
          if ( !*(_BYTE *)(a8 + 139) )
          {
            P = 0LL;
            if ( FastIoDispatch )
              FastIoQueryBasicInfo = (ULONG_PTR)FastIoDispatch->FastIoQueryBasicInfo;
            else
              FastIoQueryBasicInfo = 0LL;
            v180 = (_QWORD *)FastIoQueryBasicInfo;
            if ( FastIoQueryBasicInfo )
            {
              v77 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject)
                  ? (void *)VfFastIoSnapState(DriverObject)
                  : 0LL;
              v187 = v77;
              LOBYTE(v62) = 1;
              v73 = guard_dispatch_icall_no_overrides(v46, v62);
              v173 = v73;
              if ( v77 )
                VfFastIoCheckState(v77, FastIoQueryBasicInfo);
            }
            if ( v73 )
            {
              AccessStatus = BugCheckParameter4[0];
            }
            else
            {
              v78 = (void *)ExAllocatePool2(0x40uLL, 0x28uLL, 0x20206F49u);
              P = v78;
              if ( v78 )
              {
                AccessStatus = IopQueryXxxInformation((ULONG_PTR)v46, (__int64)v78, (__int64)Size, 1);
                if ( AccessStatus >= 0 )
                  memmove(*(void **)(a8 + 96), v78, Size[0]);
                ExFreePoolWithTag(v78, 0);
              }
              else
              {
                AccessStatus = -1073741670;
              }
            }
            goto LABEL_164;
          }
          if ( FastIoDispatch )
          {
            if ( FastIoDispatch->SizeOfFastIoDispatch > 0x70 )
            {
              FastIoQueryNetworkOpenInfo = (ULONG_PTR)FastIoDispatch->FastIoQueryNetworkOpenInfo;
              if ( FastIoQueryNetworkOpenInfo )
              {
                v101 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(RelatedDeviceObject->DriverObject)
                     ? (void *)VfFastIoSnapState(DriverObject)
                     : 0LL;
                LOBYTE(v62) = 1;
                v73 = guard_dispatch_icall_no_overrides(v46, v62);
                if ( v101 )
                  VfFastIoCheckState(v101, FastIoQueryNetworkOpenInfo);
              }
            }
          }
          if ( v73 )
            goto LABEL_164;
          v102 = IopQueryXxxInformation((ULONG_PTR)v46, *(_QWORD *)(a8 + 104), (__int64)Size, 1);
          AccessStatus = v102;
          if ( v102 != -1073741811 && v102 != -1073741822 )
            goto LABEL_164;
          XxxInformation = IopGetNetworkOpenInformation((ULONG_PTR)v46);
        }
        AccessStatus = XxxInformation;
      }
LABEL_164:
      *(_DWORD *)(a8 + 32) = -1096154543;
      IopCloseFile(0LL, v46, 1LL, 1LL);
      ObfDereferenceObject(v46);
      *(_QWORD *)(a8 + 8) = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(a8 + 16) = AccessStatus;
      return result;
    }
    if ( (v61 & 0xFFFFFFFFFFFFFFFDuLL) == 0
      || (v123 = v61 - 2684354563u, v61 - 2684354563u <= 0x16) && (v124 = 4194817LL, _bittest64(&v124, v123)) && !v60 )
    {
      v108 = AbsoluteObjectName;
      if ( AbsoluteObjectName->MaximumLength < v46->FileName.Length )
      {
        v109 = (wchar_t *)ExAllocatePool2(0x100uLL, v46->FileName.Length, 0x63466F49u);
        if ( !v109 )
        {
          *(_DWORD *)(a8 + 16) = -1073741670;
          return 3221225626LL;
        }
        v110 = AbsoluteObjectName->Buffer;
        if ( v110 )
          ExFreePoolWithTag(v110, 0);
        v108 = AbsoluteObjectName;
        AbsoluteObjectName->Buffer = v109;
        v108->MaximumLength = v46->FileName.Length;
      }
      RtlCopyUnicodeString(v108, &v46->FileName);
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 )
      {
        v111 = 4194817LL;
        if ( _bittest64(&v111, BugCheckParameter4[1] - 2684354563u) )
          *(_QWORD *)(a8 + 40) = 0LL;
      }
    }
    if ( v46->FileName.Length )
    {
      ExFreePoolWithTag(v46->FileName.Buffer, 0);
      v46->FileName.Length = 0;
    }
    v46->DeviceObject = 0LL;
    ObfDereferenceObject(v46);
    *(_QWORD *)(a8 + 8) = 0LL;
    v112 = v160;
    IopDecrementDeviceObjectRef((ULONG_PTR)v160, 0);
    if ( v165 )
      IopDereferenceVpbAndFree(v165);
    v113 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(a8 + 40) = 0LL;
      v114 = 4194817LL;
      if ( v113 - 2684354563u <= 0x16 && _bittest64(&v114, v113 - 2684354563u) )
      {
        v115 = *(_DWORD *)(a8 + 152) | 0x10;
        *(_DWORD *)(a8 + 152) = v115;
        v116 = *((unsigned int *)v112 + 18);
        if ( (unsigned int)v116 <= 0x24 && (v117 = 0x1080020084LL, _bittest64(&v117, v116)) )
          v119 = v115 | 8;
        else
          v119 = v115 & 0xFFFFFFF7;
        *(_DWORD *)(a8 + 152) = v119;
      }
      if ( *(_BYTE *)(a8 + 136) )
        KeBugCheckEx(0xF9u, (ULONG_PTR)v112, (ULONG_PTR)DeviceObject, (ULONG_PTR)AbsoluteObjectName, v113);
      if ( (*(_DWORD *)(v112[39] + 32LL) & 0x800) == 0 )
      {
        v120 = *(_QWORD *)&Size[1];
        *(_QWORD *)(*(_QWORD *)&Size[1] + 16LL) = *(unsigned int *)(*(_QWORD *)&Size[1] + 24LL);
        *(_DWORD *)(v120 + 12) &= ~0x100u;
      }
      if ( v113 - 2684354563u <= 0x16 && _bittest64(&v114, v113 - 2684354563u) && v60 )
      {
        *(_QWORD *)(a8 + 24) = v177;
        *(_DWORD *)(a8 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v113 == 2684354585 || v113 == 2 )
      {
        v121 = v178;
        v121[1] = PsGetParentSilo(v178[1]);
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v179 > 0x20 )
      return 3221225473LL;
    v11 = *(struct _ACCESS_STATE **)&Size[1];
    v13 = SourceString;
    v14 = v180;
    v12 = (unsigned int *)v182;
  }
  v85 = *(_QWORD **)(a8 + 144);
  memset_0(v85, 0, 0x110uLL);
  v46 = (PFILE_OBJECT)(v85 + 6);
  FileObject = (PFILE_OBJECT)(v85 + 6);
  *((_BYTE *)v85 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v85);
  *v85 = 1LL;
  if ( (a5 & 0x40) == 0 )
    *((_DWORD *)v85 + 32) |= 0x20000u;
  v46->Type = 5;
  *((_WORD *)v85 + 25) = 216;
  v85[14] = *(_QWORD *)(a8 + 40);
  v85[7] = v160;
  v86 = v85 + 6;
  v87 = DeviceObject;
  AccessStatus = IopRetrieveTransactionParametersFromOpenPacket(DeviceObject, a8, v170, v86);
  if ( AccessStatus < 0 )
  {
LABEL_296:
    IoFreeIrp((PIRP)v40);
    IopDecrementDeviceObjectRef((ULONG_PTR)v160, 0);
    if ( !v165 )
      goto LABEL_247;
    v107 = v165;
    goto LABEL_298;
  }
  if ( (*(_DWORD *)(a8 + 152) & 0x24) != 0x20
    || !v159
    || (v87->Flags & 0x40000) == 0
    && ((DeviceType = v87->DeviceType, (unsigned int)DeviceType > 0x35)
     || (v144 = 0x20000100100108LL, !_bittest64(&v144, DeviceType)))
    || (AccessStatus = IopRetrieveTransactionParameters((__int64)v87, a8, v170, (__int64)v46), AccessStatus >= 0) )
  {
    if ( !PsIsHostSilo(v178[1])
      || (v88 = (__int64)v46->RelatedFileObject) != 0 && (v89 = IoGetSilo(v88), !PsIsHostSilo(v89)) )
    {
      v176 = 0LL;
      if ( v46->RelatedFileObject && PsIsServerSilo(v178[1]) )
        Silo = (void *)IoGetSilo(v150);
      else
        Silo = (void *)v178[1];
      Object = Silo;
      if ( !PsIsHostSilo((__int64)Silo) )
      {
        AccessStatus = PsAcquireSiloHardReference(Object);
        if ( AccessStatus < 0 )
          goto LABEL_296;
        SetSpecificExtension = IopGetSetSpecificExtension((__int64)v46, 7, 0x10u, 1, &v176, 0LL);
        AccessStatus = SetSpecificExtension;
        if ( SetSpecificExtension < 0 )
        {
          PsReleaseSiloHardReference(Object);
          SetSpecificExtension = AccessStatus;
        }
        v92 = v176;
        if ( SetSpecificExtension < 0 )
          goto LABEL_296;
        *v176 = 16;
        v93 = Object;
        *((_QWORD *)v92 + 1) = Object;
        v92[1] |= 1u;
        ObfReferenceObjectWithTag(v93, 0x70536F49u);
      }
    }
    goto LABEL_78;
  }
  IoFreeIrp((PIRP)v40);
  IopDecrementDeviceObjectRef((ULONG_PTR)v160, 0);
  if ( v165 )
  {
    v107 = v165;
LABEL_298:
    IopDereferenceVpbAndFree(v107);
  }
LABEL_247:
  result = (unsigned int)AccessStatus;
LABEL_248:
  *(_DWORD *)(a8 + 16) = result;
  return result;
}
