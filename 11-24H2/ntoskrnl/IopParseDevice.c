/*
 * XREFs of IopParseDevice @ 0x14089F880
 * Callers:
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     IopParseFile @ 0x1409F4690 (IopParseFile.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     IopDequeueIrpFromThread @ 0x1402541C0 (IopDequeueIrpFromThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     IopGetDevicePDO @ 0x1402D488C (IopGetDevicePDO.c)
 *     IopCheckDeviceAndDriver @ 0x1402D4BF0 (IopCheckDeviceAndDriver.c)
 *     IopIncrementVpbRefCount @ 0x1402D5430 (IopIncrementVpbRefCount.c)
 *     IopDereferenceVpbAndFree @ 0x1402D68F8 (IopDereferenceVpbAndFree.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsGetCurrentProcessSessionId @ 0x140331630 (PsGetCurrentProcessSessionId.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     PsIsServerSilo @ 0x140349B68 (PsIsServerSilo.c)
 *     IopCheckSessionDeviceAccess @ 0x14034A630 (IopCheckSessionDeviceAccess.c)
 *     SeAccessCheck @ 0x14035A5B0 (SeAccessCheck.c)
 *     SeFastTraverseCheck @ 0x140365838 (SeFastTraverseCheck.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IopDeleteFileObjectExtension @ 0x1403C3010 (IopDeleteFileObjectExtension.c)
 *     PsReleaseSiloHardReference @ 0x1403C4750 (PsReleaseSiloHardReference.c)
 *     IoGetAttachedDevice @ 0x1403C4FC0 (IoGetAttachedDevice.c)
 *     IopCheckVpbMounted @ 0x1403F1EF0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1403F2340 (IopDecrementDeviceObjectRef.c)
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     IopGetSetSpecificExtension @ 0x140426ED0 (IopGetSetSpecificExtension.c)
 *     RtlGetActiveConsoleId @ 0x14042F190 (RtlGetActiveConsoleId.c)
 *     IoGetSilo @ 0x140431AC0 (IoGetSilo.c)
 *     IopSetFileObjectExtensionFlag @ 0x140434650 (IopSetFileObjectExtensionFlag.c)
 *     PsIsHostSilo @ 0x14043E2E0 (PsIsHostSilo.c)
 *     IopSymlinkGetECP @ 0x1404513D8 (IopSymlinkGetECP.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404566C0 (PsGetServerSiloServiceSessionId.c)
 *     IoSetActivityIdThread @ 0x14045C3B0 (IoSetActivityIdThread.c)
 *     PsAcquireSiloHardReference @ 0x14045E580 (PsAcquireSiloHardReference.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     IopCreateSecurityCheck @ 0x14046DA5C (IopCreateSecurityCheck.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140477F50 (IopSymlinkGetMostRecentlyUsedName.c)
 *     MmIsDriverVerifying @ 0x14049E430 (MmIsDriverVerifying.c)
 *     IopAllowRemoteDASD @ 0x1404CB370 (IopAllowRemoteDASD.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IoCancelFileOpen @ 0x1406F9E00 (IoCancelFileOpen.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x1406FAE54 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1408508E0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeLockSubjectContext @ 0x140868470 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408684D0 (SeUnlockSubjectContext.c)
 *     IopRetrieveTransactionParameters @ 0x140899830 (IopRetrieveTransactionParameters.c)
 *     IopAllocRealFileObject @ 0x14089A9B0 (IopAllocRealFileObject.c)
 *     IopCheckBackupRestorePrivilege @ 0x1408A1C40 (IopCheckBackupRestorePrivilege.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408A2820 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     SeTokenIsAdmin @ 0x1408E91E0 (SeTokenIsAdmin.c)
 *     IopQueryXxxInformation @ 0x14096A530 (IopQueryXxxInformation.c)
 *     IopSymlinkProcessReparse @ 0x14099D29C (IopSymlinkProcessReparse.c)
 *     IopSymlinkUpdateECP @ 0x14099DACC (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x14099DD9C (IopSymlinkCreateECP.c)
 *     SeAppendPrivileges @ 0x1409D2470 (SeAppendPrivileges.c)
 *     IopQueryInformation @ 0x1409D4F90 (IopQueryInformation.c)
 *     IopCheckTopDeviceHint @ 0x1409E3A30 (IopCheckTopDeviceHint.c)
 *     IopRetrieveTransactionParametersFromOpenPacket @ 0x140A13E40 (IopRetrieveTransactionParametersFromOpenPacket.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140A14EAC (SeIsAppContainerOrIdentifyLevelContext.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x140A3FC5C (IopSymlinkEnforceEnabledTypes.c)
 *     PsGetParentSilo @ 0x140A59700 (PsGetParentSilo.c)
 *     IopCancelAlertedRequest @ 0x140A7BD74 (IopCancelAlertedRequest.c)
 *     IopGetNetworkOpenInformation @ 0x140AAFFFC (IopGetNetworkOpenInformation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x140BA9450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BA97CC (VfFastIoSnapState.c)
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
  __int64 v53; // rdx
  __int64 v54; // r8
  _BYTE *v55; // rax
  NTSTATUS v57; // r13d
  int v58; // ecx
  struct _ECP_LIST *v59; // r8
  NTSTATUS v60; // eax
  int v61; // esi
  bool v62; // r13
  ULONG_PTR v63; // rcx
  __int64 v64; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  struct _FILE_OBJECT *RelatedFileObject; // rax
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  struct _DEVICE_OBJECT *v68; // r8
  struct _DEVICE_OBJECT *v69; // r9
  struct _DEVICE_OBJECT *v70; // rdx
  struct _DEVICE_OBJECT *v71; // r10
  struct _DEVICE_OBJECT *v72; // rcx
  struct _DEVICE_OBJECT *v73; // r11
  unsigned int v74; // edx
  char v75; // bl
  struct _DRIVER_OBJECT *DriverObject; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  ULONG_PTR FastIoQueryBasicInfo; // r14
  void *v79; // r13
  void *v80; // rbx
  size_t v81; // r8
  PCUNICODE_STRING v82; // rsi
  wchar_t *Buffer; // rcx
  __int16 v84; // ax
  __int64 v85; // rax
  PVOID v86; // r15
  _QWORD *v87; // rsi
  _QWORD *v88; // r9
  PDEVICE_OBJECT v89; // rsi
  __int64 v90; // rcx
  __int64 v91; // rax
  void *Silo; // rax
  NTSTATUS SetSpecificExtension; // eax
  _DWORD *v94; // rsi
  PVOID v95; // rax
  __int64 MostRecentlyUsedName; // rdx
  NTSTATUS updated; // eax
  bool v98; // r14
  char v99; // bl
  ACCESS_MASK v100; // eax
  PFILE_OBJECT v101; // rcx
  ULONG_PTR FastIoQueryNetworkOpenInfo; // r14
  void *v103; // r13
  NTSTATUS v104; // eax
  NTSTATUS XxxInformation; // eax
  int v106; // ecx
  __int64 v107; // rcx
  KEVENT *p_Event; // r13
  __int64 v109; // rcx
  PUNICODE_STRING v110; // rcx
  wchar_t *v111; // r14
  wchar_t *v112; // rcx
  __int64 v113; // rax
  _QWORD *v114; // rsi
  ULONG_PTR v115; // rdx
  __int64 v116; // r8
  int v117; // ecx
  unsigned __int64 v118; // rax
  __int64 v119; // r9
  unsigned int v121; // ecx
  __int64 v122; // rcx
  _QWORD *v123; // rbx
  _DWORD *CurrentIrql; // r8
  unsigned __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  int v128; // ecx
  NTSTATUS v129; // eax
  bool v130; // zf
  _DWORD *v131; // rsi
  unsigned __int64 v132; // rcx
  __int64 v133; // rax
  char v134; // cl
  int v135; // ecx
  int v136; // ecx
  BOOLEAN v137; // si
  unsigned __int64 v138; // rcx
  bool v139; // al
  unsigned __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // esi
  _DWORD *DevicePDO; // rax
  void *v143; // rsi
  unsigned __int64 DeviceType; // rax
  __int64 v145; // rcx
  int ActiveConsoleId; // esi
  unsigned __int64 v147; // rax
  int v148; // esi
  char v149; // al
  PACCESS_TOKEN ClientToken; // rcx
  __int64 v151; // rdx
  PFILE_OBJECT v152; // rbx
  void *v153; // rcx
  ULONG_PTR Vpb; // rcx
  __int64 v155; // r13
  struct _LIST_ENTRY *v156; // rsi
  unsigned int GrantedAccess; // [rsp+40h] [rbp-168h]
  char v158[4]; // [rsp+60h] [rbp-148h] BYREF
  NTSTATUS AccessStatus; // [rsp+64h] [rbp-144h] BYREF
  unsigned __int8 v160; // [rsp+68h] [rbp-140h]
  PVOID v161; // [rsp+70h] [rbp-138h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-130h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+80h] [rbp-128h]
  int v164; // [rsp+88h] [rbp-120h]
  ACCESS_MASK v165; // [rsp+8Ch] [rbp-11Ch] BYREF
  __int64 v166; // [rsp+90h] [rbp-118h]
  PPRIVILEGE_SET Privileges; // [rsp+98h] [rbp-110h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A0h] [rbp-108h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-100h]
  PUNICODE_STRING AbsoluteObjectName; // [rsp+B0h] [rbp-F8h]
  unsigned int v171; // [rsp+B8h] [rbp-F0h]
  struct _ECP_LIST *v172; // [rsp+C0h] [rbp-E8h]
  PVOID Object; // [rsp+C8h] [rbp-E0h] BYREF
  char v174; // [rsp+D0h] [rbp-D8h]
  _DWORD Size[3]; // [rsp+D4h] [rbp-D4h] BYREF
  PVOID P; // [rsp+E0h] [rbp-C8h] BYREF
  _DWORD *v177; // [rsp+E8h] [rbp-C0h] BYREF
  PVOID v178; // [rsp+F0h] [rbp-B8h]
  _QWORD *v179; // [rsp+F8h] [rbp-B0h]
  int v180; // [rsp+100h] [rbp-A8h]
  _QWORD *v181; // [rsp+108h] [rbp-A0h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+110h] [rbp-98h] BYREF
  struct _DEVICE_OBJECT *v183; // [rsp+120h] [rbp-88h]
  UNICODE_STRING ObjectTypeName; // [rsp+128h] [rbp-80h] BYREF
  __int128 v185; // [rsp+138h] [rbp-70h] BYREF
  __int64 v186; // [rsp+148h] [rbp-60h]
  _BYTE *v187; // [rsp+150h] [rbp-58h]
  void *v188; // [rsp+158h] [rbp-50h]
  __int64 v189; // [rsp+160h] [rbp-48h]
  struct _LIST_ENTRY v190; // [rsp+168h] [rbp-40h] BYREF

  v160 = a4;
  v11 = a3;
  *(_QWORD *)&Size[1] = a3;
  v12 = BugCheckParameter2;
  v183 = (struct _DEVICE_OBJECT *)BugCheckParameter2;
  AbsoluteObjectName = a6;
  v13 = a7;
  SourceString = a7;
  v189 = a8;
  v179 = a10;
  v14 = a11;
  v181 = a11;
  v165 = 0;
  AccessStatus = 0;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v185 = 0LL;
  v186 = 0LL;
  v180 = 0;
  LOBYTE(v164) = 0;
  Size[0] = 0;
  ObjectTypeName = 0LL;
  Privileges = 0LL;
  v178 = 0LL;
  v172 = 0LL;
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
    v161 = v12;
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
      v138 = v12[18];
      if ( *(_QWORD *)(a8 + 24) == 2684354563LL )
      {
        if ( (unsigned int)v138 > 0x24 )
          goto LABEL_431;
        if ( !_bittest64(&v17, v138) )
        {
          *(_DWORD *)(a8 + 16) = -1073741192;
          return 3221226104LL;
        }
      }
      else
      {
        LOBYTE(v17) = (unsigned int)v138 <= 0x24 && _bittest64(&v17, v138);
        v139 = (unsigned int)v138 <= 0x36 && _bittest64(&v16, v138);
        if ( !(_BYTE)v17 && !v139 )
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
      v161 = v18;
    }
    if ( v18->DeviceType == 7 )
    {
      DeviceObject = v18;
      AttachedDevice = v18;
      v68 = v18;
      v69 = v18;
      v70 = v18;
      v71 = v18;
      do
      {
        v72 = v68;
        v73 = v69;
        if ( v70->Vpb )
          break;
        AttachedDevice = v71->AttachedDevice;
        v70 = AttachedDevice;
        DeviceObject = AttachedDevice;
        v68 = AttachedDevice;
        v72 = AttachedDevice;
        v69 = AttachedDevice;
        v73 = AttachedDevice;
        v71 = AttachedDevice;
      }
      while ( AttachedDevice );
      if ( AttachedDevice && v72 != v18 )
      {
        *(_DWORD *)(a8 + 152) |= 2u;
        v18 = v73;
        v161 = v73;
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
        v143 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            ObfDereferenceObject(v143);
            IopDecrementDeviceObjectRef((ULONG_PTR)v18, 0);
            *(_DWORD *)(a8 + 16) = -1073741790;
            return 3221225506LL;
          }
          ObfDereferenceObject(v143);
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
    v171 = v24;
    LOBYTE(v21) = v160 || (*(_DWORD *)(a8 + 84) & 1) != 0;
    IopCheckBackupRestorePrivilege(v11, a8 + 64, v21, *(unsigned int *)(a8 + 88));
    if ( *(_BYTE *)(a8 + 136) && !v13->Length || (v11->Flags & 0x100) != 0 )
    {
      v24 |= v11->PreviouslyGrantedAccess;
      v171 = v24;
    }
    v25 = *(_QWORD *)(a8 + 40);
    LOBYTE(v26) = v164;
    if ( v25 && (*(_DWORD *)(v25 + 80) & 0x400000) != 0 )
    {
      v26 = (unsigned __int8)v164;
      if ( !v13->Length )
        v26 = 1;
      v164 = v26;
    }
    v27 = v160;
    if ( (v160 || (*(_DWORD *)(a8 + 84) & 1) != 0) && (!v25 || (_BYTE)v26) && !*(_BYTE *)(a8 + 136) )
    {
      v28 = v15 & 0xDF;
      Characteristics = v18->Characteristics;
      if ( v13->Length )
      {
        if ( (Characteristics & 0x20100) != 0x20000 && v160 )
        {
          v158[0] = 0;
          SeIsAppContainerOrIdentifyLevelContext(&v11->SubjectSecurityContext);
          if ( v158[0] )
          {
            Object = Privileges;
            LODWORD(DeviceObject) = 0;
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
            SeLockSubjectContext(&v11->SubjectSecurityContext);
            v137 = SeAccessCheck(
                     *((PSECURITY_DESCRIPTOR *)v161 + 34),
                     &v11->SubjectSecurityContext,
                     1u,
                     v24 | 0x20,
                     0,
                     (PPRIVILEGE_SET *)&Object,
                     (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                     1,
                     &v165,
                     (PNTSTATUS)&DeviceObject);
            if ( Object )
            {
              SeAppendPrivileges(v11, (PPRIVILEGE_SET)Object);
              CmSiFreeMemory((PPRIVILEGE_SET)Object);
            }
            SeUnlockSubjectContext(&v11->SubjectSecurityContext);
            ExReleaseResourceLite(&IopSecurityResource);
            KeLeaveCriticalRegionThread();
            v15 = (v28 ^ v137) & 1 ^ v28;
            v18 = (struct _DEVICE_OBJECT *)v161;
            goto LABEL_44;
          }
          v18 = (struct _DEVICE_OBJECT *)v161;
        }
        if ( (v11->Flags & 1) != 0 )
        {
          v15 = v28 | 1;
LABEL_44:
          if ( (v15 & 0x20) != 0 )
            SeUnlockSubjectContext(&v11->SubjectSecurityContext);
          if ( (v15 & 1) == 0 )
            goto LABEL_292;
          v27 = v160;
          goto LABEL_48;
        }
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        v149 = SeFastTraverseCheck((__int64)v18->SecurityDescriptor, (__int64)v11, 32);
        v15 = (v28 ^ v149) & 1 ^ v28;
        if ( (v149 & 1) == 0 )
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
                                  &v165,
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
        v98 = 0;
        if ( (Characteristics & 0x40001) != 0 && (v24 & 0xFFEDFF7F) != 0 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
          {
            v147 = PsGetCurrentServerSilo();
            v148 = PsGetServerSiloServiceSessionId(v147);
            if ( v148 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
              v98 = 1;
          }
        }
        Privileges = 0LL;
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SeLockSubjectContext(&v11->SubjectSecurityContext);
        v99 = v28 | 0x20;
        if ( !v98 )
          goto LABEL_233;
        ClientToken = v11->SubjectSecurityContext.ClientToken;
        if ( !ClientToken )
          ClientToken = v11->SubjectSecurityContext.PrimaryToken;
        if ( SeTokenIsAdmin(ClientToken) )
        {
LABEL_233:
          v18 = (struct _DEVICE_OBJECT *)v161;
          v15 = (v99 ^ SeAccessCheck(
                         *((PSECURITY_DESCRIPTOR *)v161 + 34),
                         &v11->SubjectSecurityContext,
                         (v99 & 0x20) != 0,
                         v24,
                         0,
                         &Privileges,
                         (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                         1,
                         &v165,
                         &AccessStatus)) & 1 ^ v99;
          if ( Privileges )
          {
            SeAppendPrivileges(v11, Privileges);
            CmSiFreeMemory(Privileges);
          }
          if ( (v15 & 1) != 0 )
          {
            v100 = v165;
            v11->PreviouslyGrantedAccess |= v165;
            v11->RemainingDesiredAccess &= ~(v100 | 0x2000000);
            *(_BYTE *)(a8 + 136) = 1;
          }
        }
        else
        {
          v15 = v99 & 0xFE;
          AccessStatus = -1073741790;
          v18 = (struct _DEVICE_OBJECT *)v161;
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
    v166 = 0LL;
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
          && !(_BYTE)v164 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v18,
                  v18,
                  *(struct _ACCESS_STATE **)&Size[1],
                  v24,
                  *(_DWORD *)(a8 + 88),
                  0LL,
                  &v165,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_292;
          v32 = SourceString;
        }
        v37 = IopCheckVpbMounted(a8, (ULONG_PTR)v18, (__int64)v32, &AccessStatus);
        v33 = v37;
        v166 = v37;
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
      v35 = v183;
      DeviceObject = v183;
      if ( *(_QWORD *)(v34 + 16) )
      {
        v33 = *(_QWORD *)(v34 + 16);
        v166 = v33;
        if ( (v18->Characteristics & 0x100) != 0
          && (v18->DeviceObjectExtension->ExtensionFlags & 0x800) == 0
          && (v27 || (*(_DWORD *)(a8 + 84) & 1) != 0)
          && !(_BYTE)v164 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v18,
                  v18,
                  *(struct _ACCESS_STATE **)&Size[1],
                  v24,
                  *(_DWORD *)(a8 + 88),
                  0LL,
                  &v165,
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
      v158[0] = 0;
      SeIsAppContainerOrIdentifyLevelContext((PSECURITY_SUBJECT_CONTEXT)(*(_QWORD *)&Size[1] + 32LL));
      if ( v158[0] )
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
      && (v160 || (*(_DWORD *)(a8 + 84) & 1) != 0)
      && (*(_QWORD *)(a8 + 40) || SourceString->Length)
      && !(_BYTE)v164 )
    {
      Privileges = 0LL;
      if ( !IopCreateSecurityCheck(
              (__int64)v18,
              v35,
              *(struct _ACCESS_STATE **)&Size[1],
              v24,
              *(_DWORD *)(a8 + 88),
              0LL,
              &v165,
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
      IopDecrementDeviceObjectRef((ULONG_PTR)v161, 0);
      if ( v33 )
        IopDereferenceVpbAndFree(v33);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    v41 = v160;
    *(_BYTE *)(Irp + 64) = v160;
    *(_DWORD *)(Irp + 16) = 2180;
    *(_QWORD *)&v185 = a9;
    *((_QWORD *)&v185 + 1) = *(_QWORD *)&Size[1];
    LODWORD(v186) = v24;
    HIDWORD(v186) = *(_DWORD *)(a8 + 64);
    v42 = *(_QWORD *)(Irp + 184) - 72LL;
    v187 = (_BYTE *)v42;
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
    *(_QWORD *)(v42 + 8) = &v185;
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
    v45 = v161;
    AccessStatus = IopAllocRealFileObject(
                     (__int64)&FileObject,
                     (__int64)v35,
                     (__int64)v161,
                     a5,
                     v41,
                     a8,
                     v179,
                     0,
                     GrantedAccess);
    if ( AccessStatus < 0 )
    {
      IoFreeIrp((PIRP)v40);
      IopDecrementDeviceObjectRef((ULONG_PTR)v45, 0);
      if ( v166 )
        IopDereferenceVpbAndFree(v166);
      v101 = FileObject;
      if ( FileObject )
      {
        FileObject->DeviceObject = 0LL;
        ObfDereferenceObject(v101);
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
      v74 = 32;
LABEL_138:
      IopSetFileObjectExtensionFlag((__int64)v46, v74);
      goto LABEL_82;
    }
    if ( (v47 & 2) != 0 )
    {
      v74 = 64;
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
      Pool2 = ExAllocatePool2(0x100uLL);
      v46->FileName.Buffer = (wchar_t *)Pool2;
      if ( !Pool2 )
      {
        IoFreeIrp((PIRP)v40);
        IopDecrementDeviceObjectRef((ULONG_PTR)v161, 0);
        if ( v166 )
          IopDereferenceVpbAndFree(v166);
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
      v158[0] = 0;
      AccessStatus = IopQueryInformation(a8, DeviceObject, v40, v42, v158);
      if ( AccessStatus < 0 || v158[0] )
      {
        v106 = *(_DWORD *)(v40 + 48);
        *(_DWORD *)(a8 + 16) = v106;
        *(_QWORD *)(a8 + 24) = *(_QWORD *)(v40 + 56);
        if ( v106 == 260 )
        {
          v153 = *(void **)(v40 + 160);
          if ( v153 )
          {
            ExFreePoolWithTag(v153, 0);
            *(_QWORD *)(v40 + 160) = 0LL;
            *(_QWORD *)(a8 + 40) = 0LL;
          }
        }
        if ( v46->FileName.Length )
          ExFreePoolWithTag(v46->FileName.Buffer, 0);
        IopDeleteFileObjectExtension((__int64)v46);
        IopDecrementDeviceObjectRef((ULONG_PTR)v161, 0);
        if ( v166 )
        {
          v107 = v166;
          goto LABEL_281;
        }
LABEL_282:
        IoFreeIrp((PIRP)v40);
        return (unsigned int)AccessStatus;
      }
      PsGetCurrentServerSiloGlobals();
      v81 = v46->FileName.Length;
      v82 = SourceString;
      if ( (_WORD)v81 != SourceString->Length || memcmp(v46->FileName.Buffer, SourceString->Buffer, v81) )
      {
        Buffer = v46->FileName.Buffer;
        if ( Buffer )
        {
          ExFreePoolWithTag(Buffer, 0);
          RtlInitUnicodeString(&v46->FileName, 0LL);
        }
        v84 = v82->Length;
        if ( v82->Length )
        {
          if ( (unsigned __int16)v84 < 0x38u )
          {
            v84 = 56;
          }
          else if ( (unsigned __int16)v84 >= 0x78u )
          {
            if ( (unsigned __int16)v84 < 0xF8u )
              v84 = 248;
          }
          else
          {
            v84 = 120;
          }
          v46->FileName.MaximumLength = v84;
          v85 = ExAllocatePool2(0x100uLL);
          v46->FileName.Buffer = (wchar_t *)v85;
          if ( !v85 )
          {
            IopDeleteFileObjectExtension((__int64)v46);
            IopDecrementDeviceObjectRef((ULONG_PTR)v161, 0);
            if ( v166 )
              IopDereferenceVpbAndFree(v166);
            IoFreeIrp((PIRP)v40);
            return 3221225626LL;
          }
          RtlCopyUnicodeString(&v46->FileName, v82);
        }
      }
      v86 = v161;
      v50 = DeviceObject;
      AccessStatus = IopAllocRealFileObject(
                       (__int64)&FileObject,
                       (__int64)DeviceObject,
                       (__int64)v161,
                       a5,
                       v160,
                       a8,
                       v179,
                       1,
                       v171);
      if ( AccessStatus < 0 )
      {
        v152 = FileObject;
        if ( FileObject->FileName.Length )
          ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
        IopDeleteFileObjectExtension((__int64)v152);
        IopDecrementDeviceObjectRef((ULONG_PTR)v86, 0);
        if ( v166 )
        {
          v107 = v166;
LABEL_281:
          IopDereferenceVpbAndFree(v107);
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
      IopQueueThreadIrp(v40, v53, v54);
      if ( *(char *)(v40 + 71) >= 0 && (v55 = *(_BYTE **)(v40 + 200)) != 0LL && (*v55 & 2) != 0 )
      {
        v190 = 0LL;
        v190 = *(struct _LIST_ENTRY *)(*(_QWORD *)(v40 + 200) + 24LL);
        v156 = IoSetActivityIdThread(&v190);
        v57 = IofCallDriver(DeviceObject, (PIRP)v40);
        IoSetActivityIdThread(v156);
      }
      else
      {
        v57 = IofCallDriver(v50, (PIRP)v40);
      }
      AccessStatus = v57;
    }
    else
    {
      v57 = AccessStatus;
    }
    if ( v57 == 259 )
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
        v177 = CurrentIrql;
        __writecr8(1uLL);
        if ( KiIrqlFlags )
        {
          KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 1);
          LOBYTE(CurrentIrql) = (_BYTE)v177;
        }
        v46 = FileObject;
        if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
          || !FileObject->Event.Header.SignalState && *(_BYTE *)(v40 + 68) )
        {
          if ( KiIrqlFlags )
          {
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
            LOBYTE(CurrentIrql) = (_BYTE)v177;
          }
          __writecr8((unsigned __int8)CurrentIrql);
          IopCancelAlertedRequest(&v46->Event, (PIRP)v40);
          break;
        }
        if ( KiIrqlFlags )
        {
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
          LOBYTE(CurrentIrql) = (_BYTE)v177;
        }
        __writecr8((unsigned __int8)CurrentIrql);
      }
      AccessStatus = BugCheckParameter4[0];
    }
    v58 = *(_DWORD *)(v40 + 16) & 0x80;
    if ( v58 )
    {
      v59 = *(struct _ECP_LIST **)(v40 + 112);
      v172 = v59;
    }
    else
    {
      v59 = v172;
    }
    v60 = -1073741811;
    if ( v58 )
      v60 = 0;
    AccessStatus = v60;
    v61 = *(_DWORD *)(a8 + 84) & 8;
    v62 = v61 != 0;
    if ( *(_DWORD *)(v40 + 48) == 260 )
    {
      v178 = *(PVOID *)(v40 + 160);
      if ( !v59 || IopSymlinkGetECP(v59, &P) == -1073741275 )
      {
        AccessStatus = IopSymlinkCreateECP((PIRP)v40, (__int64)&P);
        if ( AccessStatus < 0 )
        {
          *(_QWORD *)(v40 + 56) = 0LL;
          *(_DWORD *)(v40 + 48) = AccessStatus;
        }
        else
        {
          v127 = (__int64)v172;
          if ( v172 )
          {
LABEL_361:
            if ( *(_DWORD *)(v40 + 48) != 260 )
              goto LABEL_110;
            v130 = v61 == 0;
            v131 = v178;
            if ( !v130 && v127 )
              v62 = IopCheckAndUpdateStopOnSymlinkEcp(v127, *(_DWORD *)(v40 + 56), (__int64)v178);
            IopSymlinkProcessReparse((PIRP)v40);
            v132 = *(_QWORD *)(v40 + 56) - 2684354563LL;
            if ( v132 > 0x16 )
              goto LABEL_110;
            v133 = 4194817LL;
            if ( !_bittest64(&v133, v132) )
              goto LABEL_110;
            if ( *(int *)(v40 + 48) >= 0 )
            {
              v53 = *((unsigned __int16 *)v131 + 3);
              v134 = 0;
              if ( !(_WORD)v53 )
                v134 = 16;
              v15 = v15 & 0xEF | v134;
              if ( !(_WORD)v53 || *(wchar_t *)((char *)SourceString->Buffer + SourceString->Length - v53) == 58 )
              {
                v135 = *(_DWORD *)(a8 + 64);
                if ( (v135 & 0x41) == 0 && !*v187 )
                {
                  v53 = 2684354563LL;
                  if ( *v131 == -1610612733 )
                    goto LABEL_373;
                  if ( *v131 != -1610612724 )
                    goto LABEL_425;
                  if ( (int)v131[4] < 0 )
                  {
LABEL_373:
                    v136 = v135 | 1;
                  }
                  else
                  {
                    if ( (v131[4] & 0x40000000) == 0 )
                      goto LABEL_425;
                    v136 = v135 | 0x40;
                  }
                  *(_DWORD *)(a8 + 64) = v136;
                }
              }
            }
LABEL_425:
            if ( !v62 )
            {
              ExFreePoolWithTag(v131, 0);
              v178 = 0LL;
            }
            goto LABEL_110;
          }
          v128 = *(_DWORD *)(v40 + 16) & 0x80;
          if ( v128 )
          {
            v53 = *(_QWORD *)(v40 + 112);
            v172 = (struct _ECP_LIST *)v53;
          }
          v129 = -1073741811;
          if ( v128 )
            v129 = 0;
          AccessStatus = v129;
        }
      }
      v127 = (__int64)v172;
      goto LABEL_361;
    }
LABEL_110:
    if ( !*(_DWORD *)(v40 + 48) && !*(_DWORD *)(a8 + 120) )
    {
      AccessStatus = IopSymlinkPropagateToExtensionIfNeeded(v46, v172, AbsoluteObjectName);
      if ( AccessStatus < 0 )
      {
        IoCancelFileOpen(DeviceObject, v46);
        *(_QWORD *)(v40 + 56) = 0LL;
        *(_DWORD *)(v40 + 48) = AccessStatus;
      }
    }
    if ( v172 )
      *(_QWORD *)(a8 + 168) = v172;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v40 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v46->Event.Header.SignalState = 1;
    if ( (v15 & 4) != 0 )
    {
      *(_QWORD *)(v40 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v40, v53, (__int64)v59);
    }
    if ( (*(_BYTE *)(v40 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v40 + 24), 0);
    IoFreeIrp((PIRP)v40);
    v63 = BugCheckParameter4[1];
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
        IopDecrementDeviceObjectRef((ULONG_PTR)v161, 0);
        if ( v166 )
          IopDereferenceVpbAndFree(v166);
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
        v155 = v166;
        if ( Vpb != v166 )
        {
          if ( Vpb )
            IopIncrementVpbRefCount(Vpb, 1);
          if ( v155 )
            IopDereferenceVpbAndFree(v155);
        }
      }
      if ( (v15 & 0x40) == 0 )
      {
        *v181 = v46;
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
          v75 = 0;
          DriverObject = RelatedDeviceObject->DriverObject;
          FastIoDispatch = DriverObject->FastIoDispatch;
          if ( !*(_BYTE *)(a8 + 139) )
          {
            P = 0LL;
            if ( FastIoDispatch )
              FastIoQueryBasicInfo = (ULONG_PTR)FastIoDispatch->FastIoQueryBasicInfo;
            else
              FastIoQueryBasicInfo = 0LL;
            v181 = (_QWORD *)FastIoQueryBasicInfo;
            if ( FastIoQueryBasicInfo )
            {
              v79 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject)
                  ? (void *)VfFastIoSnapState(DriverObject)
                  : 0LL;
              v188 = v79;
              LOBYTE(v64) = 1;
              v75 = guard_dispatch_icall_no_overrides(v46, v64, *(_QWORD *)(a8 + 96), BugCheckParameter4);
              v174 = v75;
              if ( v79 )
                VfFastIoCheckState(v79, FastIoQueryBasicInfo);
            }
            if ( v75 )
            {
              AccessStatus = BugCheckParameter4[0];
            }
            else
            {
              v80 = (void *)ExAllocatePool2(0x40uLL);
              P = v80;
              if ( v80 )
              {
                AccessStatus = IopQueryXxxInformation((ULONG_PTR)v46, (__int64)v80, (__int64)Size, 1);
                if ( AccessStatus >= 0 )
                  memmove(*(void **)(a8 + 96), v80, Size[0]);
                ExFreePoolWithTag(v80, 0);
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
                v103 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(RelatedDeviceObject->DriverObject)
                     ? (void *)VfFastIoSnapState(DriverObject)
                     : 0LL;
                LOBYTE(v64) = 1;
                v75 = guard_dispatch_icall_no_overrides(v46, v64, *(_QWORD *)(a8 + 104), BugCheckParameter4);
                if ( v103 )
                  VfFastIoCheckState(v103, FastIoQueryNetworkOpenInfo);
              }
            }
          }
          if ( v75 )
            goto LABEL_164;
          v104 = IopQueryXxxInformation((ULONG_PTR)v46, *(_QWORD *)(a8 + 104), (__int64)Size, 1);
          AccessStatus = v104;
          if ( v104 != -1073741811 && v104 != -1073741822 )
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
    if ( (v63 & 0xFFFFFFFFFFFFFFFDuLL) == 0
      || (v125 = v63 - 2684354563u, v63 - 2684354563u <= 0x16) && (v126 = 4194817LL, _bittest64(&v126, v125)) && !v62 )
    {
      v110 = AbsoluteObjectName;
      if ( AbsoluteObjectName->MaximumLength < v46->FileName.Length )
      {
        v111 = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( !v111 )
        {
          *(_DWORD *)(a8 + 16) = -1073741670;
          return 3221225626LL;
        }
        v112 = AbsoluteObjectName->Buffer;
        if ( v112 )
          ExFreePoolWithTag(v112, 0);
        v110 = AbsoluteObjectName;
        AbsoluteObjectName->Buffer = v111;
        v110->MaximumLength = v46->FileName.Length;
      }
      RtlCopyUnicodeString(v110, &v46->FileName);
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 )
      {
        v113 = 4194817LL;
        if ( _bittest64(&v113, BugCheckParameter4[1] - 2684354563u) )
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
    v114 = v161;
    IopDecrementDeviceObjectRef((ULONG_PTR)v161, 0);
    if ( v166 )
      IopDereferenceVpbAndFree(v166);
    v115 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(a8 + 40) = 0LL;
      v116 = 4194817LL;
      if ( v115 - 2684354563u <= 0x16 && _bittest64(&v116, v115 - 2684354563u) )
      {
        v117 = *(_DWORD *)(a8 + 152) | 0x10;
        *(_DWORD *)(a8 + 152) = v117;
        v118 = *((unsigned int *)v114 + 18);
        if ( (unsigned int)v118 <= 0x24 && (v119 = 0x1080020084LL, _bittest64(&v119, v118)) )
          v121 = v117 | 8;
        else
          v121 = v117 & 0xFFFFFFF7;
        *(_DWORD *)(a8 + 152) = v121;
      }
      if ( *(_BYTE *)(a8 + 136) )
        KeBugCheckEx(0xF9u, (ULONG_PTR)v114, (ULONG_PTR)DeviceObject, (ULONG_PTR)AbsoluteObjectName, v115);
      if ( (*(_DWORD *)(v114[39] + 32LL) & 0x800) == 0 )
      {
        v122 = *(_QWORD *)&Size[1];
        *(_QWORD *)(*(_QWORD *)&Size[1] + 16LL) = *(unsigned int *)(*(_QWORD *)&Size[1] + 24LL);
        *(_DWORD *)(v122 + 12) &= ~0x100u;
      }
      if ( v115 - 2684354563u <= 0x16 && _bittest64(&v116, v115 - 2684354563u) && v62 )
      {
        *(_QWORD *)(a8 + 24) = v178;
        *(_DWORD *)(a8 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v115 == 2684354585 || v115 == 2 )
      {
        v123 = v179;
        v123[1] = PsGetParentSilo(v179[1]);
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v180 > 0x20 )
      return 3221225473LL;
    v11 = *(struct _ACCESS_STATE **)&Size[1];
    v13 = SourceString;
    v14 = v181;
    v12 = (unsigned int *)v183;
  }
  v87 = *(_QWORD **)(a8 + 144);
  memset_0(v87, 0, 0x110uLL);
  v46 = (PFILE_OBJECT)(v87 + 6);
  FileObject = (PFILE_OBJECT)(v87 + 6);
  *((_BYTE *)v87 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v87);
  *v87 = 1LL;
  if ( (a5 & 0x40) == 0 )
    *((_DWORD *)v87 + 32) |= 0x20000u;
  v46->Type = 5;
  *((_WORD *)v87 + 25) = 216;
  v87[14] = *(_QWORD *)(a8 + 40);
  v87[7] = v161;
  v88 = v87 + 6;
  v89 = DeviceObject;
  AccessStatus = IopRetrieveTransactionParametersFromOpenPacket(DeviceObject, a8, v171, v88);
  if ( AccessStatus < 0 )
  {
LABEL_296:
    IoFreeIrp((PIRP)v40);
    IopDecrementDeviceObjectRef((ULONG_PTR)v161, 0);
    if ( !v166 )
      goto LABEL_247;
    v109 = v166;
    goto LABEL_298;
  }
  if ( (*(_DWORD *)(a8 + 152) & 0x24) != 0x20
    || !v160
    || (v89->Flags & 0x40000) == 0
    && ((DeviceType = v89->DeviceType, (unsigned int)DeviceType > 0x35)
     || (v145 = 0x20000100100108LL, !_bittest64(&v145, DeviceType)))
    || (AccessStatus = IopRetrieveTransactionParameters((__int64)v89, a8, v171, (__int64)v46), AccessStatus >= 0) )
  {
    if ( !PsIsHostSilo(v179[1])
      || (v90 = (__int64)v46->RelatedFileObject) != 0 && (v91 = IoGetSilo(v90), !PsIsHostSilo(v91)) )
    {
      v177 = 0LL;
      if ( v46->RelatedFileObject && PsIsServerSilo(v179[1]) )
        Silo = (void *)IoGetSilo(v151);
      else
        Silo = (void *)v179[1];
      Object = Silo;
      if ( !PsIsHostSilo((__int64)Silo) )
      {
        AccessStatus = PsAcquireSiloHardReference(Object);
        if ( AccessStatus < 0 )
          goto LABEL_296;
        SetSpecificExtension = IopGetSetSpecificExtension((__int64)v46, 7, 16LL, 1, &v177, 0LL);
        AccessStatus = SetSpecificExtension;
        if ( SetSpecificExtension < 0 )
        {
          PsReleaseSiloHardReference(Object);
          SetSpecificExtension = AccessStatus;
        }
        v94 = v177;
        if ( SetSpecificExtension < 0 )
          goto LABEL_296;
        *v177 = 16;
        v95 = Object;
        *((_QWORD *)v94 + 1) = Object;
        v94[1] |= 1u;
        ObfReferenceObjectWithTag(v95, 0x70536F49u);
      }
    }
    goto LABEL_78;
  }
  IoFreeIrp((PIRP)v40);
  IopDecrementDeviceObjectRef((ULONG_PTR)v161, 0);
  if ( v166 )
  {
    v109 = v166;
LABEL_298:
    IopDereferenceVpbAndFree(v109);
  }
LABEL_247:
  result = (unsigned int)AccessStatus;
LABEL_248:
  *(_DWORD *)(a8 + 16) = result;
  return result;
}
