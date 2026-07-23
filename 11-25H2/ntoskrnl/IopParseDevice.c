/*
 * XREFs of IopParseDevice @ 0x14085F1F0
 * Callers:
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     IopParseFile @ 0x1409F4AF0 (IopParseFile.c)
 * Callees:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x140252C50 (IopDequeueIrpFromThread.c)
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDevice @ 0x1402A1E80 (IoGetAttachedDevice.c)
 *     IopCheckVpbMounted @ 0x1402FE890 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FED30 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x1402FF290 (IopCheckDeviceAndDriver.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsServerSilo @ 0x1403104CC (PsIsServerSilo.c)
 *     RtlGetActiveConsoleId @ 0x1403117E0 (RtlGetActiveConsoleId.c)
 *     IopGetDevicePDO @ 0x14035AF78 (IopGetDevicePDO.c)
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     SeFastTraverseCheck @ 0x14036C4C4 (SeFastTraverseCheck.c)
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     IopDeleteFileObjectExtension @ 0x140371E50 (IopDeleteFileObjectExtension.c)
 *     PsReleaseSiloHardReference @ 0x140373EC0 (PsReleaseSiloHardReference.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     IopIncrementVpbRefCount @ 0x14041F710 (IopIncrementVpbRefCount.c)
 *     PsGetCurrentProcessSessionId @ 0x140425EC0 (PsGetCurrentProcessSessionId.c)
 *     IopGetSetSpecificExtension @ 0x14042F260 (IopGetSetSpecificExtension.c)
 *     IopCheckSessionDeviceAccess @ 0x140433938 (IopCheckSessionDeviceAccess.c)
 *     IoGetSilo @ 0x1404352E0 (IoGetSilo.c)
 *     IopSetFileObjectExtensionFlag @ 0x1404383F0 (IopSetFileObjectExtensionFlag.c)
 *     PsIsHostSilo @ 0x14043DF70 (PsIsHostSilo.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     IopDereferenceVpbAndFree @ 0x140441A14 (IopDereferenceVpbAndFree.c)
 *     IopSymlinkGetECP @ 0x14044FBB0 (IopSymlinkGetECP.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404565D0 (PsGetServerSiloServiceSessionId.c)
 *     IoSetActivityIdThread @ 0x14045CC40 (IoSetActivityIdThread.c)
 *     PsAcquireSiloHardReference @ 0x14045F3C0 (PsAcquireSiloHardReference.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     IopCreateSecurityCheck @ 0x14046F3F0 (IopCreateSecurityCheck.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140478170 (IopSymlinkGetMostRecentlyUsedName.c)
 *     MmIsDriverVerifying @ 0x14049F5C0 (MmIsDriverVerifying.c)
 *     IopAllowRemoteDASD @ 0x1404CB634 (IopAllowRemoteDASD.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IoCancelFileOpen @ 0x1406EE040 (IoCancelFileOpen.c)
 *     IopCheckAndUpdateStopOnSymlinkEcp @ 0x1406EF018 (IopCheckAndUpdateStopOnSymlinkEcp.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140854730 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopRetrieveTransactionParameters @ 0x14085A150 (IopRetrieveTransactionParameters.c)
 *     IopAllocRealFileObject @ 0x14085A290 (IopAllocRealFileObject.c)
 *     IopCheckBackupRestorePrivilege @ 0x140861600 (IopCheckBackupRestorePrivilege.c)
 *     IopQueryInformation @ 0x140861A40 (IopQueryInformation.c)
 *     IopRetrieveTransactionParametersFromOpenPacket @ 0x140861C74 (IopRetrieveTransactionParametersFromOpenPacket.c)
 *     IopCheckTopDeviceHint @ 0x140861D00 (IopCheckTopDeviceHint.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140861F50 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PsGetParentSilo @ 0x140862140 (PsGetParentSilo.c)
 *     IopSymlinkProcessReparse @ 0x140862168 (IopSymlinkProcessReparse.c)
 *     SeAppendPrivileges @ 0x140862AC0 (SeAppendPrivileges.c)
 *     IopQueryXxxInformation @ 0x1408C1900 (IopQueryXxxInformation.c)
 *     SeTokenIsAdmin @ 0x1408D9E10 (SeTokenIsAdmin.c)
 *     IopSymlinkUpdateECP @ 0x1408EBA30 (IopSymlinkUpdateECP.c)
 *     IopSymlinkCreateECP @ 0x1408ED964 (IopSymlinkCreateECP.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408EFBD0 (IopSymlinkPropagateToExtensionIfNeeded.c)
 *     SeLockSubjectContext @ 0x1409163C0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140916420 (SeUnlockSubjectContext.c)
 *     IopCancelAlertedRequest @ 0x1409868F0 (IopCancelAlertedRequest.c)
 *     IopSymlinkEnforceEnabledTypes @ 0x140A3B4CC (IopSymlinkEnforceEnabledTypes.c)
 *     IopGetNetworkOpenInformation @ 0x140AAB068 (IopGetNetworkOpenInformation.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x140B99470 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140B997F8 (VfFastIoSnapState.c)
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
  unsigned __int8 v11; // si
  struct _ACCESS_STATE *v12; // r13
  unsigned int *v13; // r15
  _QWORD *v14; // r14
  unsigned __int8 v15; // bl
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  PVOID v19; // r14
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // r8
  int RemainingDesiredAccess; // eax
  int OriginalDesiredAccess; // eax
  unsigned int v25; // r15d
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // r8d
  char v29; // bl
  int v30; // eax
  char v31; // al
  unsigned __int8 v32; // bl
  PCUNICODE_STRING v33; // r8
  __int64 v34; // r13
  __int64 v35; // rdx
  PDEVICE_OBJECT v36; // rsi
  PDEVICE_OBJECT v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  __int64 Irp; // rax
  __int64 v41; // r9
  __int64 v42; // r14
  unsigned __int8 v43; // dl
  __int64 v44; // r13
  int v45; // eax
  char v46; // al
  PVOID v47; // r15
  PFILE_OBJECT v48; // r15
  __int64 v49; // rax
  unsigned __int16 Length; // ax
  struct _DEVICE_OBJECT *v51; // rsi
  struct _ECP_LIST *v52; // r8
  NTSTATUS v53; // eax
  _BYTE *v54; // rax
  NTSTATUS v56; // r13d
  int v57; // ecx
  struct _ECP_LIST *v58; // r8
  NTSTATUS v59; // eax
  int v60; // esi
  bool v61; // r13
  ULONG_PTR v62; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  struct _FILE_OBJECT *RelatedFileObject; // rax
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  struct _DEVICE_OBJECT *v66; // rdx
  struct _DEVICE_OBJECT *v67; // r10
  PVOID v68; // rcx
  void *v69; // r11
  unsigned int v70; // edx
  char v71; // bl
  struct _DRIVER_OBJECT *DriverObject; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  ULONG_PTR FastIoQueryBasicInfo; // r13
  void *v75; // r14
  void *v76; // rbx
  __int64 Pool2; // rax
  __int64 v78; // r9
  size_t v79; // r8
  PCUNICODE_STRING v80; // rax
  wchar_t *Buffer; // rcx
  __int16 v82; // ax
  __int64 v83; // rax
  PVOID v84; // r15
  _QWORD *v85; // rsi
  _QWORD *v86; // r9
  PDEVICE_OBJECT v87; // rsi
  __int64 v88; // rcx
  __int64 Silo; // rax
  void *v90; // rax
  NTSTATUS SetSpecificExtension; // eax
  _DWORD *v92; // rsi
  PVOID v93; // rax
  __int64 v94; // r9
  __int64 v95; // r9
  __int64 MostRecentlyUsedName; // rdx
  NTSTATUS updated; // eax
  __int64 v98; // r9
  ULONG_PTR FastIoQueryNetworkOpenInfo; // r13
  void *v100; // r14
  NTSTATUS v101; // eax
  NTSTATUS XxxInformation; // eax
  bool v103; // r14
  char v104; // bl
  ACCESS_MASK v105; // eax
  __int64 v106; // r9
  PFILE_OBJECT v107; // rcx
  int v108; // ecx
  __int64 v109; // r9
  __int64 v110; // rcx
  KEVENT *p_Event; // r13
  __int64 v112; // r9
  __int64 v113; // rax
  __int64 v114; // rcx
  PUNICODE_STRING v115; // rcx
  wchar_t *v116; // r14
  wchar_t *v117; // rcx
  __int64 v118; // r14
  __int64 v119; // r9
  _QWORD *v120; // rsi
  __int64 v121; // r9
  ULONG_PTR v122; // rdx
  int v123; // ecx
  unsigned __int64 v124; // rax
  __int64 v125; // r9
  unsigned int v127; // ecx
  _QWORD *v128; // rbx
  __int64 v129; // rcx
  int v130; // ecx
  NTSTATUS v131; // eax
  unsigned __int64 v132; // rcx
  __int64 v133; // rax
  PVOID v134; // r8
  __int64 v135; // rdx
  char v136; // cl
  int v137; // ecx
  int v138; // ecx
  __int64 v139; // rcx
  unsigned __int64 v140; // rcx
  bool v141; // al
  unsigned __int64 CurrentServerSilo; // rax
  int ServerSiloServiceSessionId; // esi
  _DWORD *DevicePDO; // rax
  void *v145; // rsi
  __int64 v146; // r9
  _DWORD *CurrentIrql; // r8
  unsigned __int64 DeviceType; // rax
  __int64 v149; // rcx
  ULONG ActiveConsoleId; // esi
  unsigned __int64 v151; // rax
  int v152; // esi
  char v153; // al
  PACCESS_TOKEN ClientToken; // rcx
  BOOLEAN v155; // si
  __int64 v156; // rdx
  __int64 v157; // r9
  PFILE_OBJECT v158; // rbx
  __int64 v159; // r9
  void *v160; // rcx
  ULONG_PTR Vpb; // rcx
  __int64 v162; // r13
  struct _LIST_ENTRY *v163; // rsi
  __int64 v164; // r9
  unsigned int GrantedAccess; // [rsp+40h] [rbp-168h]
  bool v166; // [rsp+60h] [rbp-148h] BYREF
  unsigned __int8 v167; // [rsp+61h] [rbp-147h]
  NTSTATUS AccessStatus; // [rsp+64h] [rbp-144h] BYREF
  PVOID v169; // [rsp+68h] [rbp-140h]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-138h] BYREF
  int v171; // [rsp+78h] [rbp-130h]
  ACCESS_MASK v172; // [rsp+7Ch] [rbp-12Ch] BYREF
  PCUNICODE_STRING SourceString; // [rsp+80h] [rbp-128h]
  __int64 v174; // [rsp+88h] [rbp-120h]
  PPRIVILEGE_SET Privileges; // [rsp+90h] [rbp-118h] BYREF
  PFILE_OBJECT FileObject; // [rsp+98h] [rbp-110h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-108h]
  PUNICODE_STRING AbsoluteObjectName; // [rsp+A8h] [rbp-100h]
  unsigned int v179; // [rsp+B0h] [rbp-F8h]
  struct _ECP_LIST *v180; // [rsp+B8h] [rbp-F0h]
  PVOID v181; // [rsp+C0h] [rbp-E8h]
  PVOID Object; // [rsp+C8h] [rbp-E0h] BYREF
  char v183; // [rsp+D0h] [rbp-D8h]
  _DWORD Size[3]; // [rsp+D4h] [rbp-D4h] BYREF
  PVOID P; // [rsp+E0h] [rbp-C8h] BYREF
  _DWORD *v186; // [rsp+E8h] [rbp-C0h] BYREF
  _QWORD *v187; // [rsp+F0h] [rbp-B8h]
  int v188; // [rsp+F8h] [rbp-B0h]
  _QWORD *v189; // [rsp+100h] [rbp-A8h]
  ULONG_PTR BugCheckParameter4[2]; // [rsp+108h] [rbp-A0h] BYREF
  struct _DEVICE_OBJECT *v191; // [rsp+118h] [rbp-90h]
  UNICODE_STRING ObjectTypeName; // [rsp+120h] [rbp-88h] BYREF
  __int128 v193; // [rsp+130h] [rbp-78h] BYREF
  __int64 v194; // [rsp+140h] [rbp-68h]
  _BYTE *v195; // [rsp+148h] [rbp-60h]
  void *v196; // [rsp+150h] [rbp-58h]
  __int64 v197; // [rsp+158h] [rbp-50h]
  struct _LIST_ENTRY v198; // [rsp+160h] [rbp-48h] BYREF

  v11 = a4;
  v167 = a4;
  v12 = a3;
  *(_QWORD *)&Size[1] = a3;
  v13 = BugCheckParameter2;
  v191 = (struct _DEVICE_OBJECT *)BugCheckParameter2;
  AbsoluteObjectName = a6;
  SourceString = a7;
  v197 = a8;
  v187 = a10;
  v14 = a11;
  v189 = a11;
  v172 = 0;
  AccessStatus = 0;
  *(_OWORD *)BugCheckParameter4 = 0LL;
  v193 = 0LL;
  v194 = 0LL;
  v188 = 0;
  LOBYTE(v171) = 0;
  Size[0] = 0;
  ObjectTypeName = 0LL;
  Privileges = 0LL;
  v181 = 0LL;
  v180 = 0LL;
  P = 0LL;
  if ( a2 != IoFileObjectType )
    return 3221225508LL;
  CurrentThread = KeGetCurrentThread();
  v15 = 4;
  RtlInitUnicodeString(&ObjectTypeName, L"File");
  while ( 1 )
  {
    v16 = 0x60010000110040LL;
    v17 = 2684354563LL;
    v18 = 0x1080020084LL;
    *v14 = 0LL;
    FileObject = 0LL;
    if ( !a8 || *(_WORD *)a8 != 8 || *(_WORD *)(a8 + 2) != 224 )
      return 3221225508LL;
    v19 = v13;
    v169 = v13;
    if ( *(_DWORD *)(a8 + 32) == 1 )
    {
      *(_DWORD *)(a8 + 32) = -1096154543;
      *(_QWORD *)(a8 + 40) = v13;
      *(_DWORD *)(a8 + 16) = 0;
      PsReferenceSiloContext(v13);
      return 0LL;
    }
    if ( (*(_DWORD *)(a8 + 152) & 0x10) != 0 )
    {
      v140 = v13[18];
      if ( *(_QWORD *)(a8 + 24) == 2684354563LL )
      {
        if ( (unsigned int)v140 > 0x24 )
          goto LABEL_417;
        if ( !_bittest64(&v18, v140) )
        {
          *(_DWORD *)(a8 + 16) = -1073741192;
          return 3221226104LL;
        }
      }
      else
      {
        LOBYTE(v18) = (unsigned int)v140 <= 0x24 && _bittest64(&v18, v140);
        v141 = (unsigned int)v140 <= 0x36 && _bittest64(&v16, v140);
        if ( !(_BYTE)v18 && !v141 )
        {
LABEL_417:
          *(_DWORD *)(a8 + 16) = -1073741192;
          return 3221226104LL;
        }
        result = IopSymlinkEnforceEnabledTypes(*(_BYTE *)(a8 + 152) & 8, v18, *(_QWORD *)(a8 + 168));
        AccessStatus = result;
        if ( (int)result < 0 )
          goto LABEL_264;
      }
    }
    v20 = *(_QWORD *)(a8 + 40);
    if ( v20 )
    {
      v19 = *(PVOID *)(v20 + 8);
      v169 = v19;
    }
    if ( *((_DWORD *)v19 + 18) == 7 )
    {
      DeviceObject = (PDEVICE_OBJECT)v19;
      AttachedDevice = (struct _DEVICE_OBJECT *)v19;
      v17 = (__int64)v19;
      v16 = (__int64)v19;
      v66 = (struct _DEVICE_OBJECT *)v19;
      v67 = (struct _DEVICE_OBJECT *)v19;
      do
      {
        v68 = (PVOID)v17;
        v69 = (void *)v16;
        if ( v66->Vpb )
          break;
        AttachedDevice = v67->AttachedDevice;
        v66 = AttachedDevice;
        DeviceObject = AttachedDevice;
        v17 = (__int64)AttachedDevice;
        v68 = AttachedDevice;
        v16 = (__int64)AttachedDevice;
        v69 = AttachedDevice;
        v67 = AttachedDevice;
      }
      while ( AttachedDevice );
      if ( AttachedDevice && v68 != v19 )
      {
        *(_DWORD *)(a8 + 152) |= 2u;
        v19 = v69;
        v169 = v69;
      }
    }
    result = IopCheckDeviceAndDriver(a8, (ULONG_PTR)v19, v17, v16);
    AccessStatus = result;
    if ( (int)result < 0 )
      goto LABEL_264;
    if ( (*(_DWORD *)(*((_QWORD *)v19 + 39) + 32LL) & 0x400) != 0 && !*(_QWORD *)(a8 + 40) )
    {
      CurrentServerSilo = PsGetCurrentServerSilo();
      ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(CurrentServerSilo);
      if ( ServerSiloServiceSessionId != (unsigned int)PsGetCurrentProcessSessionId()
        || IopSessionZeroAccessCheckEnabled && (*(_DWORD *)(a8 + 64) & 0x40000) == 0 )
      {
        DevicePDO = IopGetDevicePDO((__int64)v19);
        v145 = DevicePDO;
        if ( DevicePDO )
        {
          if ( !IopCheckSessionDeviceAccess((__int64)DevicePDO) )
          {
            ObfDereferenceObject(v145);
            IopDecrementDeviceObjectRef((ULONG_PTR)v19, 0, 0LL, v146);
            *(_DWORD *)(a8 + 16) = -1073741790;
            return 3221225506LL;
          }
          ObfDereferenceObject(v145);
        }
      }
      v11 = v167;
    }
    RemainingDesiredAccess = v12->RemainingDesiredAccess;
    if ( RemainingDesiredAccess < 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 19);
    if ( (RemainingDesiredAccess & 0x40000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 20);
    if ( (RemainingDesiredAccess & 0x20000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 21);
    if ( (RemainingDesiredAccess & 0x10000000) != 0 )
      RemainingDesiredAccess |= *((_DWORD *)IoFileObjectType + 22);
    v12->RemainingDesiredAccess = RemainingDesiredAccess & 0xFFFFFFF;
    OriginalDesiredAccess = v12->OriginalDesiredAccess;
    if ( OriginalDesiredAccess < 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 19);
    if ( (OriginalDesiredAccess & 0x40000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 20);
    if ( (OriginalDesiredAccess & 0x20000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 21);
    if ( (OriginalDesiredAccess & 0x10000000) != 0 )
      OriginalDesiredAccess |= *((_DWORD *)IoFileObjectType + 22);
    v12->OriginalDesiredAccess = OriginalDesiredAccess & 0xFFFFFFF;
    *(_OWORD *)((char *)v12->AuxData + 8) = *(_OWORD *)((char *)IoFileObjectType + 76);
    v25 = v12->RemainingDesiredAccess;
    v179 = v25;
    LOBYTE(v22) = v11 || (*(_DWORD *)(a8 + 84) & 1) != 0;
    IopCheckBackupRestorePrivilege(v12, a8 + 64, v22, *(unsigned int *)(a8 + 88));
    if ( *(_BYTE *)(a8 + 136) && !SourceString->Length || (v12->Flags & 0x100) != 0 )
    {
      v25 |= v12->PreviouslyGrantedAccess;
      v179 = v25;
    }
    v27 = *(_QWORD *)(a8 + 40);
    LOBYTE(v28) = v171;
    if ( v27 && (*(_DWORD *)(v27 + 80) & 0x400000) != 0 )
    {
      v28 = (unsigned __int8)v171;
      if ( !SourceString->Length )
        v28 = 1;
      v171 = v28;
    }
    if ( (v11 || (*(_DWORD *)(a8 + 84) & 1) != 0) && (!v27 || (_BYTE)v28) && !*(_BYTE *)(a8 + 136) )
    {
      v29 = v15 & 0xDF;
      v30 = *((_DWORD *)v19 + 13);
      if ( SourceString->Length )
      {
        if ( (v30 & 0x20100) != 0x20000 && v11 )
        {
          v166 = 0;
          SeIsAppContainerOrIdentifyLevelContext(&v12->SubjectSecurityContext);
          if ( v166 )
          {
            Object = Privileges;
            LODWORD(DeviceObject) = 0;
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
            SeLockSubjectContext(&v12->SubjectSecurityContext);
            v155 = SeAccessCheck(
                     *((PSECURITY_DESCRIPTOR *)v169 + 34),
                     &v12->SubjectSecurityContext,
                     1u,
                     v25 | 0x20,
                     0,
                     (PPRIVILEGE_SET *)&Object,
                     (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                     1,
                     &v172,
                     (PNTSTATUS)&DeviceObject);
            if ( Object )
            {
              SeAppendPrivileges(v12, (PPRIVILEGE_SET)Object);
              CmSiFreeMemory((PPRIVILEGE_SET)Object);
            }
            SeUnlockSubjectContext(&v12->SubjectSecurityContext);
            ExReleaseResourceLite(&IopSecurityResource);
            KeLeaveCriticalRegionThread((__int64)CurrentThread);
            v15 = (v29 ^ v155) & 1 ^ v29;
            v19 = v169;
LABEL_44:
            if ( (v15 & 0x20) != 0 )
              SeUnlockSubjectContext(&v12->SubjectSecurityContext);
            if ( (v15 & 1) == 0 )
              goto LABEL_393;
            goto LABEL_47;
          }
          v19 = v169;
        }
        if ( (v12->Flags & 1) != 0 )
        {
          v15 = v29 | 1;
          goto LABEL_44;
        }
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        v153 = SeFastTraverseCheck(*((_QWORD *)v19 + 34), (__int64)v12, 32);
        v15 = (v29 ^ v153) & 1 ^ v29;
        if ( (v153 & 1) == 0 )
        {
          Privileges = 0LL;
          SeLockSubjectContext(&v12->SubjectSecurityContext);
          v15 = ((v15 | 0x20) ^ SeAccessCheck(
                                  *((PSECURITY_DESCRIPTOR *)v19 + 34),
                                  &v12->SubjectSecurityContext,
                                  1u,
                                  0x20u,
                                  0,
                                  &Privileges,
                                  (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                                  1,
                                  &v172,
                                  &AccessStatus)) & 1 ^ (v15 | 0x20);
          if ( Privileges )
          {
            SeAppendPrivileges(v12, Privileges);
            CmSiFreeMemory(Privileges);
          }
        }
      }
      else
      {
        v103 = 0;
        if ( (v30 & 0x40001) != 0 && (v25 & 0xFFEDFF7F) != 0 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          if ( ActiveConsoleId != (unsigned int)PsGetCurrentProcessSessionId() )
          {
            v151 = PsGetCurrentServerSilo();
            v152 = PsGetServerSiloServiceSessionId(v151);
            if ( v152 != (unsigned int)PsGetCurrentProcessSessionId() && !IopAllowRemoteDASD() )
              v103 = 1;
          }
        }
        Privileges = 0LL;
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SeLockSubjectContext(&v12->SubjectSecurityContext);
        v104 = v29 | 0x20;
        if ( !v103 )
          goto LABEL_253;
        ClientToken = v12->SubjectSecurityContext.ClientToken;
        if ( !ClientToken )
          ClientToken = v12->SubjectSecurityContext.PrimaryToken;
        if ( SeTokenIsAdmin(ClientToken) )
        {
LABEL_253:
          v19 = v169;
          v15 = (v104 ^ SeAccessCheck(
                          *((PSECURITY_DESCRIPTOR *)v169 + 34),
                          &v12->SubjectSecurityContext,
                          (v104 & 0x20) != 0,
                          v25,
                          0,
                          &Privileges,
                          (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
                          1,
                          &v172,
                          &AccessStatus)) & 1 ^ v104;
          if ( Privileges )
          {
            SeAppendPrivileges(v12, Privileges);
            CmSiFreeMemory(Privileges);
          }
          if ( (v15 & 1) != 0 )
          {
            v105 = v172;
            v12->PreviouslyGrantedAccess |= v172;
            v12->RemainingDesiredAccess &= ~(v105 | 0x2000000);
            *(_BYTE *)(a8 + 136) = 1;
          }
        }
        else
        {
          v15 = v104 & 0xFE;
          AccessStatus = -1073741790;
          v19 = v169;
        }
        SeOpenObjectAuditAlarmWithTransaction(
          &ObjectTypeName,
          v19,
          AbsoluteObjectName,
          *((PSECURITY_DESCRIPTOR *)v19 + 34),
          v12,
          0,
          v15 & 1,
          1,
          0LL,
          &v12->GenerateOnClose);
      }
      ExReleaseResourceLite(&IopSecurityResource);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      goto LABEL_44;
    }
LABEL_47:
    if ( *(_BYTE *)(a8 + 137) || *(_BYTE *)(a8 + 138) )
      v31 = 64;
    else
      v31 = 0;
    v32 = v31 | v15 & 0xBF;
    v33 = SourceString;
    if ( SourceString->Length || *(_QWORD *)(a8 + 40) || ((unsigned __int8)~(v32 >> 6) & ((v25 & 0xFEE1FF7F) == 0)) == 0 )
      v15 = v32 & 0xF7;
    else
      v15 = v32 | 8;
    v34 = 0LL;
    v174 = 0LL;
    v35 = *(_QWORD *)(a8 + 40);
    if ( !v35 || (*(_DWORD *)(v35 + 80) & 0x800) != 0 )
    {
      v36 = (PDEVICE_OBJECT)v19;
      DeviceObject = (PDEVICE_OBJECT)v19;
      v37 = (PDEVICE_OBJECT)v19;
      if ( *((_QWORD *)v19 + 7) && (v15 & 8) == 0 )
      {
        if ( (*((_DWORD *)v19 + 13) & 0x100) != 0
          && (*(_DWORD *)(*((_QWORD *)v19 + 39) + 32LL) & 0x800) == 0
          && (v167 || (*(_DWORD *)(a8 + 84) & 1) != 0)
          && (v35 || SourceString->Length)
          && !(_BYTE)v171 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v19,
                  v19,
                  *(struct _ACCESS_STATE **)&Size[1],
                  v25,
                  *(_DWORD *)(a8 + 88),
                  0LL,
                  &v172,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_393;
          v33 = SourceString;
        }
        v38 = IopCheckVpbMounted(a8, (ULONG_PTR)v19, (__int64)v33, &AccessStatus);
        v34 = v38;
        v174 = v38;
        if ( !v38 )
          return (unsigned int)AccessStatus;
        v36 = *(PDEVICE_OBJECT *)(v38 + 8);
        DeviceObject = v36;
        v37 = v36;
      }
      if ( (*(_DWORD *)(a8 + 152) & 1) != 0 )
      {
        v15 |= 2u;
      }
      else if ( v37->AttachedDevice )
      {
        v36 = IoGetAttachedDevice(v36);
        DeviceObject = v36;
      }
    }
    else
    {
      v36 = v191;
      DeviceObject = v191;
      if ( *(_QWORD *)(v35 + 16) )
      {
        v34 = *(_QWORD *)(v35 + 16);
        v174 = v34;
        if ( (*((_DWORD *)v19 + 13) & 0x100) != 0
          && (*(_DWORD *)(*((_QWORD *)v19 + 39) + 32LL) & 0x800) == 0
          && (v167 || (*(_DWORD *)(a8 + 84) & 1) != 0)
          && !(_BYTE)v171 )
        {
          Privileges = 0LL;
          if ( !IopCreateSecurityCheck(
                  (__int64)v19,
                  v19,
                  *(struct _ACCESS_STATE **)&Size[1],
                  v25,
                  *(_DWORD *)(a8 + 88),
                  0LL,
                  &v172,
                  AbsoluteObjectName,
                  &ObjectTypeName,
                  (__int64)CurrentThread,
                  0) )
            goto LABEL_393;
        }
        IopIncrementVpbRefCount(v34, 1);
      }
      if ( (*(_DWORD *)(a8 + 152) & 1) != 0 )
      {
        if ( v34 )
        {
          v36 = *(PDEVICE_OBJECT *)(v34 + 8);
          DeviceObject = v36;
        }
        v15 |= 2u;
      }
    }
    if ( (*((_DWORD *)v19 + 13) & 0x40001) != 0
      && (*((_DWORD *)v19 + 12) & 0x600100) == 0
      && (*((_DWORD *)v19 + 13) & 0x100) == 0 )
    {
      v166 = 0;
      SeIsAppContainerOrIdentifyLevelContext((PSECURITY_SUBJECT_CONTEXT)(*(_QWORD *)&Size[1] + 32LL));
      if ( v166 )
      {
        if ( !v34 )
          goto LABEL_393;
        if ( (*(_DWORD *)(*(_QWORD *)(v34 + 8) + 48LL) & 0x20000) == 0 )
        {
          IopDereferenceVpbAndFree(v34);
LABEL_393:
          IopDecrementDeviceObjectRef((ULONG_PTR)v19, 0, 0LL, v26);
          return 3221225506LL;
        }
      }
    }
    if ( (v15 & 2) != 0 )
    {
      AccessStatus = IopCheckTopDeviceHint(&DeviceObject, a8, (v15 & 8) != 0, SourceString);
      if ( AccessStatus < 0 )
      {
        if ( v34 )
          IopDereferenceVpbAndFree(v34);
        IopDecrementDeviceObjectRef((ULONG_PTR)v19, 0, 0LL, v94);
        return (unsigned int)AccessStatus;
      }
      v36 = DeviceObject;
    }
    v39 = *(_DWORD *)(a8 + 152);
    if ( (v39 & 0x10) != 0 )
      *(_DWORD *)(a8 + 152) = v39 & 0xFFFFFFEF;
    if ( ((v36->Characteristics & 0x100) != 0 || IopRequireDeviceAccessCheck && (*((_DWORD *)v19 + 13) & 0x100000) != 0)
      && (v167 || (*(_DWORD *)(a8 + 84) & 1) != 0)
      && (*(_QWORD *)(a8 + 40) || SourceString->Length)
      && !(_BYTE)v171 )
    {
      Privileges = 0LL;
      if ( !IopCreateSecurityCheck(
              (__int64)v19,
              v36,
              *(struct _ACCESS_STATE **)&Size[1],
              v25,
              *(_DWORD *)(a8 + 88),
              0LL,
              &v172,
              AbsoluteObjectName,
              &ObjectTypeName,
              (__int64)CurrentThread,
              1) )
      {
        IopDecrementDeviceObjectRef((ULONG_PTR)v19, 0, 0LL, v95);
        if ( v34 )
          IopDereferenceVpbAndFree(v34);
        return 3221225506LL;
      }
    }
    Irp = IopAllocateIrpExReturn((__int64)v36, (unsigned __int8)v36->StackSize, 0LL);
    v42 = Irp;
    if ( !Irp )
    {
      IopDecrementDeviceObjectRef((ULONG_PTR)v169, 0, 0LL, v41);
      if ( v34 )
        IopDereferenceVpbAndFree(v34);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 152) = CurrentThread;
    v43 = v167;
    *(_BYTE *)(Irp + 64) = v167;
    *(_DWORD *)(Irp + 16) = 2180;
    *(_QWORD *)&v193 = a9;
    *((_QWORD *)&v193 + 1) = *(_QWORD *)&Size[1];
    LODWORD(v194) = v25;
    HIDWORD(v194) = *(_DWORD *)(a8 + 64);
    v44 = *(_QWORD *)(Irp + 184) - 72LL;
    v195 = (_BYTE *)v44;
    *(_BYTE *)(v44 + 3) = 0;
    v45 = *(_DWORD *)(a8 + 120);
    if ( v45 )
    {
      *(_BYTE *)v44 = v45 == 1 ? 1 : 19;
      *(_QWORD *)(v44 + 32) = *(_QWORD *)(a8 + 128);
    }
    else
    {
      *(_BYTE *)v44 = 0;
      *(_DWORD *)(v44 + 32) = *(_DWORD *)(a8 + 80);
      v46 = *(_BYTE *)(a8 + 84);
      *(_BYTE *)(v44 + 2) = v46;
      if ( (a5 & 0x40) == 0 )
        *(_BYTE *)(v44 + 2) = v46 | 0x80;
    }
    *(_QWORD *)(v42 + 88) = *(_QWORD *)(a8 + 56);
    *(_QWORD *)(v42 + 24) = *(_QWORD *)(a8 + 72);
    *(_DWORD *)(v44 + 16) = *(_DWORD *)(a8 + 64) & 0xFFFFFF | (*(_DWORD *)(a8 + 88) << 24);
    *(_WORD *)(v44 + 24) = *(_WORD *)(a8 + 68);
    *(_WORD *)(v44 + 26) = *(_WORD *)(a8 + 70);
    *(_QWORD *)(v44 + 8) = &v193;
    *(_QWORD *)(v42 + 112) = *(_QWORD *)(a8 + 168);
    *(_QWORD *)(v42 + 72) = BugCheckParameter4;
    *(_QWORD *)(v42 + 8) = 0LL;
    *(_BYTE *)(v42 + 65) = 0;
    *(_BYTE *)(v42 + 68) = 0;
    *(_QWORD *)(v42 + 80) = 0LL;
    *(_QWORD *)(v42 + 104) = 0LL;
    *(_QWORD *)(v42 + 160) = 0LL;
    if ( *(_BYTE *)(a8 + 137) )
      break;
    GrantedAccess = v25;
    v47 = v169;
    AccessStatus = IopAllocRealFileObject(
                     (__int64)&FileObject,
                     (__int64)v36,
                     (__int64)v169,
                     a5,
                     v43,
                     a8,
                     v187,
                     0,
                     GrantedAccess);
    if ( AccessStatus < 0 )
    {
      IoFreeIrp((PIRP)v42);
      IopDecrementDeviceObjectRef((ULONG_PTR)v47, 0, 0LL, v106);
      if ( v174 )
        IopDereferenceVpbAndFree(v174);
      v107 = FileObject;
      if ( FileObject )
      {
        FileObject->DeviceObject = 0LL;
        ObfDereferenceObject(v107);
      }
      goto LABEL_263;
    }
    v48 = FileObject;
LABEL_78:
    if ( (v15 & 8) != 0 )
      v48->Flags |= 0x800u;
    v49 = *(_QWORD *)(a8 + 216);
    if ( (v49 & 1) != 0 )
    {
      v70 = 32;
LABEL_135:
      IopSetFileObjectExtensionFlag((__int64)v48, v70);
      goto LABEL_82;
    }
    if ( (v49 & 2) != 0 )
    {
      v70 = 64;
      goto LABEL_135;
    }
LABEL_82:
    *(_QWORD *)(v42 + 192) = v48;
    *(_QWORD *)(v44 + 48) = v48;
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
      v48->FileName.MaximumLength = Length;
      Pool2 = ExAllocatePool2(0x100uLL);
      v48->FileName.Buffer = (wchar_t *)Pool2;
      if ( !Pool2 )
      {
        IoFreeIrp((PIRP)v42);
        IopDecrementDeviceObjectRef((ULONG_PTR)v169, 0, 0LL, v78);
        if ( v174 )
          IopDereferenceVpbAndFree(v174);
        v48->DeviceObject = 0LL;
        if ( *(_BYTE *)(a8 + 137) )
        {
          IopDeleteFileObjectExtension((__int64)v48);
          return 3221225626LL;
        }
        ObfDereferenceObject(v48);
        return 3221225626LL;
      }
    }
    RtlCopyUnicodeString(&v48->FileName, SourceString);
    if ( !*(_BYTE *)(a8 + 137) )
    {
      v51 = DeviceObject;
      goto LABEL_85;
    }
    v166 = 0;
    AccessStatus = IopQueryInformation(a8, DeviceObject, v42, v44, &v166);
    if ( AccessStatus < 0 || v166 )
    {
      v108 = *(_DWORD *)(v42 + 48);
      *(_DWORD *)(a8 + 16) = v108;
      *(_QWORD *)(a8 + 24) = *(_QWORD *)(v42 + 56);
      if ( v108 == 260 )
      {
        v160 = *(void **)(v42 + 160);
        if ( v160 )
        {
          ExFreePoolWithTag(v160, 0);
          *(_QWORD *)(v42 + 160) = 0LL;
          *(_QWORD *)(a8 + 40) = 0LL;
        }
      }
      if ( v48->FileName.Length )
        ExFreePoolWithTag(v48->FileName.Buffer, 0);
      IopDeleteFileObjectExtension((__int64)v48);
      IopDecrementDeviceObjectRef((ULONG_PTR)v169, 0, 0LL, v109);
      if ( v174 )
      {
        v110 = v174;
        goto LABEL_282;
      }
LABEL_283:
      IoFreeIrp((PIRP)v42);
      return (unsigned int)AccessStatus;
    }
    PsGetCurrentServerSiloGlobals();
    v79 = v48->FileName.Length;
    v80 = SourceString;
    if ( (_WORD)v79 == SourceString->Length )
    {
      if ( !memcmp(v48->FileName.Buffer, SourceString->Buffer, v79) )
        goto LABEL_185;
      v80 = SourceString;
    }
    Buffer = v48->FileName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      RtlInitUnicodeString(&v48->FileName, 0LL);
      v80 = SourceString;
    }
    v82 = v80->Length;
    if ( v82 )
    {
      if ( (unsigned __int16)v82 < 0x38u )
      {
        v82 = 56;
      }
      else if ( (unsigned __int16)v82 >= 0x78u )
      {
        if ( (unsigned __int16)v82 < 0xF8u )
          v82 = 248;
      }
      else
      {
        v82 = 120;
      }
      v48->FileName.MaximumLength = v82;
      v83 = ExAllocatePool2(0x100uLL);
      v48->FileName.Buffer = (wchar_t *)v83;
      if ( !v83 )
      {
        IopDeleteFileObjectExtension((__int64)v48);
        IopDecrementDeviceObjectRef((ULONG_PTR)v169, 0, 0LL, v157);
        if ( v174 )
          IopDereferenceVpbAndFree(v174);
        IoFreeIrp((PIRP)v42);
        return 3221225626LL;
      }
      RtlCopyUnicodeString(&v48->FileName, SourceString);
    }
LABEL_185:
    v84 = v169;
    v51 = DeviceObject;
    AccessStatus = IopAllocRealFileObject(
                     (__int64)&FileObject,
                     (__int64)DeviceObject,
                     (__int64)v169,
                     a5,
                     v167,
                     a8,
                     v187,
                     1,
                     v179);
    if ( AccessStatus < 0 )
    {
      v158 = FileObject;
      if ( FileObject->FileName.Length )
        ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
      IopDeleteFileObjectExtension((__int64)v158);
      IopDecrementDeviceObjectRef((ULONG_PTR)v84, 0, 0LL, v159);
      if ( v174 )
      {
        v110 = v174;
LABEL_282:
        IopDereferenceVpbAndFree(v110);
      }
      goto LABEL_283;
    }
    v48 = FileObject;
    *(_QWORD *)(v44 + 48) = FileObject;
    *(_QWORD *)(v42 + 192) = v48;
LABEL_85:
    if ( !*(_DWORD *)(a8 + 120) )
    {
      v52 = 0LL;
      if ( (*(_DWORD *)(v42 + 16) & 0x80) != 0 )
        v52 = *(struct _ECP_LIST **)(v42 + 112);
      v53 = -1073741811;
      if ( (*(_DWORD *)(v42 + 16) & 0x80) != 0 )
        v53 = 0;
      AccessStatus = v53;
      if ( v52 )
      {
        if ( IopSymlinkGetECP(v52, &P) != -1073741275 )
        {
          MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName((__int64)P);
          if ( !*(_WORD *)(MostRecentlyUsedName + 4) )
          {
            updated = IopSymlinkUpdateECP(
                        (PIRP)v42,
                        AbsoluteObjectName->Length - SourceString->Length,
                        *(_WORD *)(MostRecentlyUsedName + 2));
            AccessStatus = updated;
            if ( updated < 0 )
            {
              *(_DWORD *)(v42 + 48) = updated;
              *(_QWORD *)(v42 + 56) = 0LL;
              v15 &= ~4u;
            }
          }
        }
      }
    }
    KeInitializeEvent(&v48->Event, NotificationEvent, 0);
    *(_QWORD *)(a8 + 8) = v48;
    if ( (v15 & 4) != 0 )
    {
      IopQueueThreadIrp(v42);
      if ( *(char *)(v42 + 71) >= 0 && (v54 = *(_BYTE **)(v42 + 200)) != 0LL && (*v54 & 2) != 0 )
      {
        v198 = 0LL;
        v198 = *(struct _LIST_ENTRY *)(*(_QWORD *)(v42 + 200) + 24LL);
        v163 = IoSetActivityIdThread(&v198);
        v56 = IofCallDriver(DeviceObject, (PIRP)v42);
        IoSetActivityIdThread(v163);
      }
      else
      {
        v56 = IofCallDriver(v51, (PIRP)v42);
      }
      AccessStatus = v56;
    }
    else
    {
      v56 = AccessStatus;
    }
    if ( v56 == 259 )
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
        v15 &= ~0x80u;
      else
        v15 |= 0x80u;
      v48 = FileObject;
      p_Event = &FileObject->Event;
      while ( 1 )
      {
        AccessStatus = KeWaitForSingleObject(p_Event, Executive, 0, v15 >> 7, 0LL);
        if ( AccessStatus != 257 )
          break;
        CurrentIrql = (_DWORD *)KeGetCurrentIrql();
        v186 = CurrentIrql;
        __writecr8(1uLL);
        if ( KiIrqlFlags )
        {
          KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 1);
          LOBYTE(CurrentIrql) = (_BYTE)v186;
        }
        v48 = FileObject;
        if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0
          || !FileObject->Event.Header.SignalState && *(_BYTE *)(v42 + 68) )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
          __writecr8((unsigned __int8)v186);
          IopCancelAlertedRequest(&v48->Event, (PIRP)v42);
          break;
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
        __writecr8((unsigned __int8)v186);
      }
      AccessStatus = BugCheckParameter4[0];
    }
    v57 = *(_DWORD *)(v42 + 16) & 0x80;
    if ( v57 )
    {
      v58 = *(struct _ECP_LIST **)(v42 + 112);
      v180 = v58;
    }
    else
    {
      v58 = v180;
    }
    v59 = -1073741811;
    if ( v57 )
      v59 = 0;
    AccessStatus = v59;
    v60 = *(_DWORD *)(a8 + 84) & 8;
    v61 = v60 != 0;
    if ( *(_DWORD *)(v42 + 48) == 260 )
    {
      v181 = *(PVOID *)(v42 + 160);
      if ( v58 && IopSymlinkGetECP(v58, &P) != -1073741275 )
        goto LABEL_349;
      AccessStatus = IopSymlinkCreateECP((PIRP)v42, (__int64)&P);
      v129 = (__int64)v180;
      if ( AccessStatus < 0 )
      {
        *(_QWORD *)(v42 + 56) = 0LL;
        *(_DWORD *)(v42 + 48) = AccessStatus;
      }
      else if ( !v180 )
      {
        v130 = *(_DWORD *)(v42 + 16) & 0x80;
        if ( v130 )
          v180 = *(struct _ECP_LIST **)(v42 + 112);
        v131 = -1073741811;
        if ( v130 )
          v131 = 0;
        AccessStatus = v131;
LABEL_349:
        v129 = (__int64)v180;
      }
      if ( *(_DWORD *)(v42 + 48) != 260 )
        goto LABEL_104;
      v166 = v60 != 0;
      if ( v60 )
      {
        v166 = 1;
        if ( v129 )
          v166 = IopCheckAndUpdateStopOnSymlinkEcp(v129, *(_DWORD *)(v42 + 56), (__int64)v181);
      }
      IopSymlinkProcessReparse((PIRP)v42);
      v132 = *(_QWORD *)(v42 + 56) - 2684354563LL;
      if ( v132 > 0x16 || (v133 = 4194817LL, !_bittest64(&v133, v132)) )
      {
        v61 = v166;
        goto LABEL_104;
      }
      v134 = v181;
      if ( *(int *)(v42 + 48) >= 0 )
      {
        v135 = *((unsigned __int16 *)v181 + 3);
        v136 = 0;
        if ( !(_WORD)v135 )
          v136 = 16;
        v15 = v15 & 0xEF | v136;
        if ( !(_WORD)v135 || *(wchar_t *)((char *)SourceString->Buffer + SourceString->Length - v135) == 58 )
        {
          v137 = *(_DWORD *)(a8 + 64);
          if ( (v137 & 0x41) == 0 && !*v195 )
          {
            if ( *(_DWORD *)v181 == -1610612733 )
              goto LABEL_362;
            if ( *(_DWORD *)v181 == -1610612724 )
            {
              if ( *((int *)v181 + 4) < 0 )
              {
LABEL_362:
                v138 = v137 | 1;
                goto LABEL_410;
              }
              if ( (*((_DWORD *)v181 + 4) & 0x40000000) != 0 )
              {
                v138 = v137 | 0x40;
LABEL_410:
                *(_DWORD *)(a8 + 64) = v138;
              }
            }
          }
        }
      }
      v61 = v166;
      if ( !v166 )
      {
        ExFreePoolWithTag(v134, 0);
        v181 = 0LL;
      }
    }
LABEL_104:
    if ( !*(_DWORD *)(v42 + 48) && !*(_DWORD *)(a8 + 120) )
    {
      AccessStatus = IopSymlinkPropagateToExtensionIfNeeded(v48, v180, AbsoluteObjectName);
      if ( AccessStatus < 0 )
      {
        IoCancelFileOpen(DeviceObject, v48);
        *(_QWORD *)(v42 + 56) = 0LL;
        *(_DWORD *)(v42 + 48) = AccessStatus;
      }
    }
    if ( v180 )
      *(_QWORD *)(a8 + 168) = v180;
    *(_OWORD *)BugCheckParameter4 = *(_OWORD *)(v42 + 48);
    AccessStatus = _mm_cvtsi128_si32(*(__m128i *)BugCheckParameter4);
    v48->Event.Header.SignalState = 1;
    if ( (v15 & 4) != 0 )
    {
      *(_QWORD *)(v42 + 152) = CurrentThread;
      IopDequeueIrpFromThread((_QWORD *)v42);
    }
    if ( (*(_BYTE *)(v42 + 16) & 0x30) == 0x30 )
      ExFreePoolWithTag(*(PVOID *)(v42 + 24), 0);
    IoFreeIrp((PIRP)v42);
    v62 = BugCheckParameter4[1];
    *(_QWORD *)(a8 + 24) = BugCheckParameter4[1];
    if ( AccessStatus < 0 )
    {
      if ( (v48->Flags & 0x200000) != 0 )
      {
        ObfDereferenceObject(v48);
      }
      else
      {
        if ( v48->FileName.Length )
        {
          ExFreePoolWithTag(v48->FileName.Buffer, 0);
          v48->FileName.Length = 0;
        }
        v48->DeviceObject = 0LL;
        ObfDereferenceObject(v48);
        IopDecrementDeviceObjectRef((ULONG_PTR)v169, 0, 0LL, v98);
        if ( v174 )
          IopDereferenceVpbAndFree(v174);
      }
      *(_QWORD *)(a8 + 8) = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(a8 + 16) = AccessStatus;
      return result;
    }
    if ( AccessStatus != 260 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(v48);
      if ( DeviceObject != RelatedDeviceObject )
      {
        Vpb = (ULONG_PTR)v48->Vpb;
        v162 = v174;
        if ( Vpb != v174 )
        {
          if ( Vpb )
            IopIncrementVpbRefCount(Vpb, 1);
          if ( v162 )
            IopDereferenceVpbAndFree(v162);
        }
      }
      if ( (v15 & 0x40) == 0 )
      {
        *v189 = v48;
        *(_DWORD *)(a8 + 32) = -1096154543;
        PsReferenceSiloContext(v48);
        RelatedFileObject = v48->RelatedFileObject;
        if ( (!RelatedFileObject || (RelatedFileObject->Flags & 0x400000) != 0)
          && !v48->FileName.Length
          && (RelatedDeviceObject->DeviceType == 3
           || RelatedDeviceObject->DeviceType == 8
           || RelatedDeviceObject->DeviceType == 9
           || RelatedDeviceObject->DeviceType == 32) )
        {
          v48->Flags |= 0x400000u;
        }
        result = LODWORD(BugCheckParameter4[0]);
        *(_DWORD *)(a8 + 16) = BugCheckParameter4[0];
        return result;
      }
      if ( *(_BYTE *)(a8 + 137) )
      {
        if ( *(_BYTE *)(a8 + 208) )
        {
          XxxInformation = IopQueryXxxInformation((ULONG_PTR)v48, *(_QWORD *)(a8 + 112), a8 + 204, 1);
        }
        else
        {
          v71 = 0;
          DriverObject = RelatedDeviceObject->DriverObject;
          FastIoDispatch = DriverObject->FastIoDispatch;
          if ( !*(_BYTE *)(a8 + 139) )
          {
            P = 0LL;
            if ( FastIoDispatch )
              FastIoQueryBasicInfo = (ULONG_PTR)FastIoDispatch->FastIoQueryBasicInfo;
            else
              FastIoQueryBasicInfo = 0LL;
            v189 = (_QWORD *)FastIoQueryBasicInfo;
            if ( FastIoQueryBasicInfo )
            {
              v75 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject)
                  ? (void *)VfFastIoSnapState(DriverObject)
                  : 0LL;
              v196 = v75;
              v71 = guard_dispatch_icall_no_overrides(v48);
              v183 = v71;
              if ( v75 )
                VfFastIoCheckState(v75, FastIoQueryBasicInfo);
            }
            if ( v71 )
            {
              AccessStatus = BugCheckParameter4[0];
            }
            else
            {
              v76 = (void *)ExAllocatePool2(0x40uLL);
              P = v76;
              if ( v76 )
              {
                AccessStatus = IopQueryXxxInformation((ULONG_PTR)v48, (__int64)v76, (__int64)Size, 1);
                if ( AccessStatus >= 0 )
                  memmove(*(void **)(a8 + 96), v76, Size[0]);
                ExFreePoolWithTag(v76, 0);
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
                v100 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(RelatedDeviceObject->DriverObject)
                     ? (void *)VfFastIoSnapState(DriverObject)
                     : 0LL;
                v71 = guard_dispatch_icall_no_overrides(v48);
                if ( v100 )
                  VfFastIoCheckState(v100, FastIoQueryNetworkOpenInfo);
              }
            }
          }
          if ( v71 )
            goto LABEL_164;
          v101 = IopQueryXxxInformation((ULONG_PTR)v48, *(_QWORD *)(a8 + 104), (__int64)Size, 1);
          AccessStatus = v101;
          if ( v101 != -1073741811 && v101 != -1073741822 )
            goto LABEL_164;
          XxxInformation = IopGetNetworkOpenInformation((ULONG_PTR)v48);
        }
        AccessStatus = XxxInformation;
      }
LABEL_164:
      *(_DWORD *)(a8 + 32) = -1096154543;
      IopCloseFile(0LL, v48, 1LL, 1LL);
      ObfDereferenceObject(v48);
      *(_QWORD *)(a8 + 8) = 0LL;
      result = (unsigned int)AccessStatus;
      *(_DWORD *)(a8 + 16) = AccessStatus;
      return result;
    }
    if ( (v62 & 0xFFFFFFFFFFFFFFFDuLL) == 0
      || (v118 = 4194817LL, v62 - 2684354563u <= 0x16) && _bittest64(&v118, v62 - 2684354563u) && !v61 )
    {
      v115 = AbsoluteObjectName;
      if ( AbsoluteObjectName->MaximumLength < v48->FileName.Length )
      {
        v116 = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( !v116 )
        {
          *(_DWORD *)(a8 + 16) = -1073741670;
          return 3221225626LL;
        }
        v117 = AbsoluteObjectName->Buffer;
        if ( v117 )
          ExFreePoolWithTag(v117, 0);
        v115 = AbsoluteObjectName;
        AbsoluteObjectName->Buffer = v116;
        v115->MaximumLength = v48->FileName.Length;
      }
      RtlCopyUnicodeString(v115, &v48->FileName);
      v118 = 4194817LL;
      if ( BugCheckParameter4[1] - 2684354563u <= 0x16 && _bittest64(&v118, BugCheckParameter4[1] - 2684354563u) )
        *(_QWORD *)(a8 + 40) = 0LL;
    }
    if ( v48->FileName.Length )
    {
      ExFreePoolWithTag(v48->FileName.Buffer, 0);
      v48->FileName.Length = 0;
    }
    v48->DeviceObject = 0LL;
    ObfDereferenceObject(v48);
    *(_QWORD *)(a8 + 8) = 0LL;
    v120 = v169;
    IopDecrementDeviceObjectRef((ULONG_PTR)v169, 0, 0LL, v121);
    if ( v174 )
      IopDereferenceVpbAndFree(v174);
    v122 = BugCheckParameter4[1];
    if ( BugCheckParameter4[1] != 1 )
    {
      *(_QWORD *)(a8 + 40) = 0LL;
      if ( v122 - 2684354563u <= 0x16 && _bittest64(&v118, v122 - 2684354563u) )
      {
        v123 = *(_DWORD *)(a8 + 152) | 0x10;
        *(_DWORD *)(a8 + 152) = v123;
        v124 = *((unsigned int *)v120 + 18);
        if ( (unsigned int)v124 <= 0x24 && (v125 = 0x1080020084LL, _bittest64(&v125, v124)) )
          v127 = v123 | 8;
        else
          v127 = v123 & 0xFFFFFFF7;
        *(_DWORD *)(a8 + 152) = v127;
      }
      if ( *(_BYTE *)(a8 + 136) )
        KeBugCheckEx(0xF9u, (ULONG_PTR)v120, (ULONG_PTR)DeviceObject, (ULONG_PTR)AbsoluteObjectName, v122);
      if ( (*(_DWORD *)(v120[39] + 32LL) & 0x800) == 0 )
      {
        v139 = *(_QWORD *)&Size[1];
        *(_QWORD *)(*(_QWORD *)&Size[1] + 16LL) = *(unsigned int *)(*(_QWORD *)&Size[1] + 24LL);
        *(_DWORD *)(v139 + 12) &= ~0x100u;
      }
      if ( v122 - 2684354563u <= 0x16 && _bittest64(&v118, v122 - 2684354563u) && v61 )
      {
        *(_QWORD *)(a8 + 24) = v181;
        *(_DWORD *)(a8 + 16) = -2147483603;
        return 2147483693LL;
      }
      else if ( v122 == 2684354585 || v122 == 2 )
      {
        v128 = v187;
        v128[1] = PsGetParentSilo(v187[1]);
        return 872LL;
      }
      else
      {
        return 260LL;
      }
    }
    if ( (unsigned int)++v188 > 0x20 )
      return 3221225473LL;
    v12 = *(struct _ACCESS_STATE **)&Size[1];
    v11 = v167;
    v14 = v189;
    v13 = (unsigned int *)v191;
  }
  v85 = *(_QWORD **)(a8 + 144);
  memset_0(v85, 0, 0x110uLL);
  v48 = (PFILE_OBJECT)(v85 + 6);
  FileObject = (PFILE_OBJECT)(v85 + 6);
  *((_BYTE *)v85 + 24) = ObHeaderCookie ^ *((_BYTE *)IoFileObjectType + 40) ^ BYTE1(v85);
  *v85 = 1LL;
  if ( (a5 & 0x40) == 0 )
    *((_DWORD *)v85 + 32) |= 0x20000u;
  v48->Type = 5;
  *((_WORD *)v85 + 25) = 216;
  v85[14] = *(_QWORD *)(a8 + 40);
  v85[7] = v169;
  v86 = v85 + 6;
  v87 = DeviceObject;
  AccessStatus = IopRetrieveTransactionParametersFromOpenPacket(DeviceObject, a8, v179, v86);
  if ( AccessStatus >= 0 )
  {
    if ( (*(_DWORD *)(a8 + 152) & 0x24) == 0x20
      && v167
      && ((v87->Flags & 0x40000) != 0
       || (DeviceType = v87->DeviceType, (unsigned int)DeviceType <= 0x35)
       && (v149 = 0x20000100100108LL, _bittest64(&v149, DeviceType)))
      && (AccessStatus = IopRetrieveTransactionParameters((__int64)v87, a8, v179, (__int64)v48), AccessStatus < 0) )
    {
      IoFreeIrp((PIRP)v42);
      IopDecrementDeviceObjectRef((ULONG_PTR)v169, 0, 0LL, v164);
      if ( !v174 )
        goto LABEL_263;
      v114 = v174;
    }
    else
    {
      if ( PsIsHostSilo(v187[1]) )
      {
        v88 = (__int64)v48->RelatedFileObject;
        if ( !v88 )
          goto LABEL_78;
        Silo = IoGetSilo(v88);
        if ( PsIsHostSilo(Silo) )
          goto LABEL_78;
      }
      v186 = 0LL;
      if ( v48->RelatedFileObject && PsIsServerSilo(v187[1]) )
        v90 = (void *)IoGetSilo(v156);
      else
        v90 = (void *)v187[1];
      Object = v90;
      if ( PsIsHostSilo((__int64)v90) )
        goto LABEL_78;
      AccessStatus = PsAcquireSiloHardReference(Object);
      if ( AccessStatus >= 0 )
      {
        SetSpecificExtension = IopGetSetSpecificExtension((__int64)v48, 7, 16LL, 1, &v186, 0LL);
        AccessStatus = SetSpecificExtension;
        if ( SetSpecificExtension < 0 )
        {
          PsReleaseSiloHardReference(Object);
          SetSpecificExtension = AccessStatus;
        }
        v92 = v186;
        if ( SetSpecificExtension >= 0 )
        {
          *v186 = 16;
          v93 = Object;
          *((_QWORD *)v92 + 1) = Object;
          v92[1] |= 1u;
          ObfReferenceObjectWithTag(v93, 0x70536F49u);
          goto LABEL_78;
        }
      }
      IoFreeIrp((PIRP)v42);
      IopDecrementDeviceObjectRef((ULONG_PTR)v169, 0, 0LL, v119);
      v113 = v174;
      if ( !v174 )
      {
        result = (unsigned int)AccessStatus;
        *(_DWORD *)(a8 + 16) = AccessStatus;
        return result;
      }
LABEL_295:
      v114 = v113;
    }
    IopDereferenceVpbAndFree(v114);
    goto LABEL_263;
  }
  IoFreeIrp((PIRP)v42);
  IopDecrementDeviceObjectRef((ULONG_PTR)v169, 0, 0LL, v112);
  v113 = v174;
  if ( v174 )
    goto LABEL_295;
LABEL_263:
  result = (unsigned int)AccessStatus;
LABEL_264:
  *(_DWORD *)(a8 + 16) = result;
  return result;
}
