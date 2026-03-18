/*
 * XREFs of PiPnpRtlObjectActionCallback @ 0x1408CBF70
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C5B30 (PiCMHandleIoctl.c)
 *     PnpGetObjectProperty @ 0x1408CA860 (PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAD38 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1408CE630 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1408CF0FC (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5C0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D2170 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D28C0 (PiDqPnPGetObjectProperty.c)
 *     _PnpGetObjectList @ 0x140934D64 (_PnpGetObjectList.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403F7C80 (RtlLookupElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiDrvDbUnmountNode @ 0x1406EF7B0 (PiDrvDbUnmountNode.c)
 *     KsepCacheLock @ 0x14082C0D4 (KsepCacheLock.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1408368AC (PiDmObjectGetCachedObjectReference.c)
 *     PnpGetObjectProperty @ 0x1408CA860 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CCF68 (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectRelease @ 0x1408CE5E0 (PiDmObjectRelease.c)
 *     PiDmObjectReleaseLock @ 0x1408CE958 (PiDmObjectReleaseLock.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408D0B70 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiDmGetObject @ 0x1408D1680 (PiDmGetObject.c)
 *     PiDmGetObjectList @ 0x1409501B0 (PiDmGetObjectList.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14095A5C0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14096AA90 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PiDmCacheDataFree @ 0x14096ACF4 (PiDmCacheDataFree.c)
 *     PiDmCacheDataEncode @ 0x14096AD40 (PiDmCacheDataEncode.c)
 *     PiDrvDbMountNode @ 0x140AB7FE4 (PiDrvDbMountNode.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlObjectActionCallback(PVOID a1, const WCHAR *a2, int a3, int a4, int a5, __int64 a6)
{
  unsigned int v6; // r11d
  unsigned int v8; // ebx
  _BYTE *v9; // rbx
  _DWORD *v10; // rsi
  int CachedObjectPropertyData; // r13d
  int v12; // r9d
  int Object; // r12d
  _DWORD *v14; // r14
  __int64 v15; // r10
  __int64 v16; // rax
  unsigned int i; // ecx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r11
  bool v21; // zf
  __int64 *v22; // r15
  char *v23; // rsi
  __int64 v24; // r12
  int v25; // eax
  GUID *v26; // r14
  void *v27; // r9
  int v28; // edx
  __int64 v29; // rax
  int v30; // ecx
  struct _ERESOURCE *v32; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v34; // r13
  int Flink; // r8d
  __int64 v36; // rcx
  const WCHAR *v37; // rax
  int v38; // eax
  unsigned __int16 v39; // dx
  __int64 v40; // r11
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v42; // r9d
  unsigned __int16 *v43; // r11
  unsigned __int16 v44; // dx
  int v45; // r10d
  struct _LIST_ENTRY *v46; // rbx
  unsigned __int64 v47; // rax
  volatile signed __int32 **v48; // rax
  volatile signed __int32 *v49; // r12
  unsigned int v50; // ebx
  unsigned int v51; // esi
  _QWORD *v52; // r8
  volatile signed __int32 *v53; // r13
  NTSTATUS v54; // r15d
  DEVPROPKEY **v55; // r14
  __int64 m; // rbx
  DEVPROPKEY *v57; // rdx
  __int64 v58; // rcx
  char v59; // si
  volatile signed __int32 *v60; // rdx
  unsigned int v61; // ecx
  int v62; // eax
  __int64 v63; // rax
  unsigned int v64; // eax
  int v65; // r9d
  int v66; // r9d
  int v67; // r9d
  int v68; // eax
  void *Pool2; // rsi
  int v70; // ebx
  unsigned int *v71; // rax
  const void *v72; // r12
  __int64 v73; // r15
  unsigned int v74; // r13d
  _DWORD *v75; // rax
  DEVPROPKEY **v76; // r14
  unsigned int v77; // esi
  __int64 n; // rbx
  DEVPROPKEY *v79; // rdx
  __int64 v80; // rax
  void *v81; // rbx
  __int64 v82; // rax
  __int64 v83; // r15
  bool v84; // di
  DEVPROPKEY **v85; // r14
  unsigned int v86; // esi
  DEVPROPKEY *v87; // rdx
  _DWORD *v88; // rsi
  unsigned int v89; // eax
  int v90; // eax
  PVOID v91; // rdi
  int v92; // eax
  int v93; // edx
  __int64 v94; // r9
  __int64 v95; // rcx
  unsigned int v96; // edi
  __int64 v97; // r9
  int v98; // eax
  int v99; // r14d
  bool v100; // di
  int v101; // eax
  unsigned int v102; // eax
  unsigned int v103; // ecx
  __int64 v104; // rcx
  bool v105; // cf
  unsigned int v106; // ecx
  unsigned int v107; // eax
  unsigned int v108; // ecx
  unsigned int v109; // eax
  char *v110; // r13
  _QWORD *j; // r14
  int v112; // eax
  int ObjectList; // eax
  char *v114; // rdx
  int ObjectProperty; // eax
  GUID *v116; // [rsp+28h] [rbp-D8h]
  __int64 v117; // [rsp+60h] [rbp-A0h] BYREF
  char v118[4]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v119; // [rsp+6Ch] [rbp-94h]
  __int64 v120; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  __int64 v122; // [rsp+80h] [rbp-80h]
  __int64 v123; // [rsp+88h] [rbp-78h]
  GUID *Guid; // [rsp+90h] [rbp-70h]
  const WCHAR *v125; // [rsp+98h] [rbp-68h]
  PVOID v126[2]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  int v128; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v129; // [rsp+C8h] [rbp-38h]
  PVOID v130; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *Buffer; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v132; // [rsp+F0h] [rbp-10h] BYREF
  char v133[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v134; // [rsp+100h] [rbp+0h]
  int k; // [rsp+108h] [rbp+8h]
  int v136; // [rsp+10Ch] [rbp+Ch]

  v6 = a3;
  v119 = a3;
  v125 = a2;
  v8 = -1073741822;
  v126[0] = a1;
  if ( a4 == 8 )
  {
    if ( a5 == 1 )
    {
      v9 = *(_BYTE **)(a6 + 48);
      v10 = *(_DWORD **)(a6 + 64);
      CachedObjectPropertyData = -1073741802;
      v12 = *(_DWORD *)(a6 + 56);
      Object = -1073741802;
      v14 = *(_DWORD **)(a6 + 40);
      v15 = *(_QWORD *)(a6 + 32);
      v16 = *(_QWORD *)(a6 + 24);
      v130 = 0LL;
      LODWORD(v120) = 0;
      v118[0] = 0;
      v128 = 0;
      LODWORD(v117) = 0;
      if ( v9 )
      {
        if ( !v12 )
          v9 = 0LL;
      }
      else
      {
        v12 = 0;
      }
      if ( a3 < 7 && !v16 )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= 3 )
            goto LABEL_22;
          v18 = 7LL * i;
          v19 = *(__int64 *)((char *)&off_140001A20 + v18 * 8);
          if ( *(_DWORD *)(v19 + 16) == *(_DWORD *)(v15 + 16) )
          {
            v20 = *(_QWORD *)v19 - *(_QWORD *)v15;
            if ( *(_QWORD *)v19 == *(_QWORD *)v15 )
              v20 = *(_QWORD *)(v19 + 8) - *(_QWORD *)(v15 + 8);
            v21 = v20 == 0;
            v6 = v119;
            if ( v21 && v119 == *(_DWORD *)&byte_140001A18[v18 * 8] )
              break;
          }
        }
        v22 = &PiDmAggregatedBooleanDefs[v18];
        if ( &PiDmAggregatedBooleanDefs[v18] )
        {
          *v14 = 17;
          *v10 = 1;
          if ( v12 )
          {
            Object = PiDmGetObject(v6, v125, &v130);
            if ( Object < 0 )
            {
              v6 = v119;
              goto LABEL_22;
            }
            v23 = (char *)v130;
            v24 = v22[6];
            KsepCacheLock((unsigned __int64 *)v130);
            v25 = *(_DWORD *)&v23[v24];
            if ( v25 != 0x80000000 )
            {
LABEL_20:
              *v9 = (v25 <= 0) - 1;
              Object = 0;
              goto LABEL_21;
            }
            v25 = v117;
            v110 = &v23[qword_1400023B8[5 * *((int *)v22 + 10)]];
            for ( j = *(_QWORD **)v110; ; j = (_QWORD *)*j )
            {
              if ( j == (_QWORD *)v110 )
              {
                *(_DWORD *)&v23[v24] = v25;
                CachedObjectPropertyData = -1073741802;
                goto LABEL_20;
              }
              v114 = (char *)j - qword_1400023C8[5 * *((int *)v22 + 10)];
              ObjectProperty = PnpGetObjectProperty(
                                 *(_QWORD **)&PiPnpRtlCtx,
                                 *((const WCHAR **)v114 + 2),
                                 *((_DWORD *)v114 + 7),
                                 0LL,
                                 0LL,
                                 v22[1],
                                 &v120,
                                 v118,
                                 1u,
                                 (__int64)&v128,
                                 0);
              if ( ObjectProperty < 0 )
              {
                if ( ObjectProperty != -1073741275 )
                {
                  CachedObjectPropertyData = -1073741802;
                  Object = ObjectProperty;
LABEL_21:
                  PiDmObjectReleaseLock((ULONG_PTR)v23);
                  PiDmObjectRelease(v23);
                  v6 = v119;
                  goto LABEL_22;
                }
                v25 = v117;
              }
              else
              {
                v25 = v117;
                if ( (_DWORD)v120 == 17 && v118[0] == -1 )
                {
                  v25 = v117 + 1;
                  LODWORD(v117) = v117 + 1;
                }
              }
            }
          }
          Object = -1073741789;
          goto LABEL_32;
        }
      }
LABEL_22:
      if ( Object != -1073741802 )
      {
LABEL_32:
        v8 = -1073741536;
        *(_DWORD *)a6 = Object;
        return v8;
      }
      v8 = 0;
      if ( (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
        goto LABEL_106;
      v26 = *(GUID **)(a6 + 48);
      v27 = *(void **)(a6 + 32);
      v28 = *(_DWORD *)(a6 + 56);
      v123 = *(_QWORD *)(a6 + 64);
      v122 = *(_QWORD *)(a6 + 40);
      v29 = *(_QWORD *)(a6 + 24);
      LODWORD(v117) = v28;
      Guid = v26;
      P = v27;
      *(_QWORD *)&DestinationString.Length = 0LL;
      if ( v26 )
      {
        if ( !v28 )
          v26 = 0LL;
        Guid = v26;
      }
      else
      {
        LODWORD(v117) = 0;
      }
      v30 = -1073741789;
      HIDWORD(v117) = -1073741789;
      if ( (int)v6 >= 7 || v29 )
        goto LABEL_29;
      v32 = 0LL;
      switch ( v6 )
      {
        case 3u:
          v32 = &PiDmDeviceInterfaceManager;
          break;
        case 1u:
          v32 = (struct _ERESOURCE *)&PiDmDeviceManager;
          break;
        case 2u:
          v32 = (struct _ERESOURCE *)&PiDmDeviceInstallerClassManager;
          break;
        case 4u:
          v32 = (struct _ERESOURCE *)&PiDmDeviceInterfaceClassManager;
          break;
        case 5u:
          v32 = (struct _ERESOURCE *)&PiDmDeviceContainerManager;
          break;
        case 6u:
          v32 = (struct _ERESOURCE *)&PiDmDevicePanelManager;
          break;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(v32, 1u);
      v132 = 0LL;
      memset_0(v133, 0, 0x68uLL);
      v34 = (__int64)v125;
      Buffer = &v132;
      if ( v125 )
      {
        Flink = (int)v32[2].SystemResourcesList.Flink;
        v134 = (__int64)v125;
        v129 = 0LL;
        v36 = 0x7FFFLL;
        v136 = Flink;
        v37 = v125;
        do
        {
          if ( !*v37 )
            break;
          ++v37;
          --v36;
        }
        while ( v36 );
        v38 = -1073741811;
        if ( v36 )
        {
          v38 = 0;
          *((_QWORD *)&v129 + 1) = v125;
          v39 = 2 * (0x7FFF - v36);
          v40 = (__int64)v125;
          LOWORD(v129) = v39;
        }
        else
        {
          v40 = *((_QWORD *)&v129 + 1);
          v39 = v129;
        }
        if ( v38 >= 0 )
        {
          if ( Flink == 3 )
          {
            if ( v39 <= 8u )
              goto LABEL_102;
            LOWORD(v129) = v39 - 8;
            *((_QWORD *)&v129 + 1) = v40 + 8;
          }
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          v45 = v44 >> 1;
          v46 = CurrentServerSiloGlobals[75].Flink;
          for ( k = 0; v45; v42 = (unsigned __int16)v47 + 65599 * v42 )
          {
            v47 = *v43++;
            --v45;
            if ( (unsigned int)v47 >= 0x61 )
            {
              if ( (unsigned int)v47 > 0x7A )
              {
                if ( v46 && (unsigned __int16)v47 >= 0xC0u )
                  LOWORD(v47) = *((_WORD *)&v46->Flink
                                + (v47 & 0xF)
                                + *((unsigned __int16 *)&v46->Flink
                                  + ((unsigned __int8)v47 >> 4)
                                  + (unsigned int)*((unsigned __int16 *)&v46->Flink + (v47 >> 8))))
                              + v47;
              }
              else
              {
                LOWORD(v47) = v47 - 32;
              }
            }
          }
          k = v42;
          v48 = (volatile signed __int32 **)RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)&v32[1], &Buffer);
          if ( v48 )
          {
            v49 = *v48;
            if ( *v48 )
            {
              _InterlockedIncrement(v49 + 2);
              ExReleaseResourceLite(v32);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v50 = v119;
              v51 = 3;
              v52 = P;
              if ( v119 == 3 && *((_DWORD *)P + 4) == 2 )
              {
                v80 = *(_QWORD *)P - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
                if ( *(_QWORD *)P == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
                  v80 = *((_QWORD *)P + 1) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
                if ( !v80 )
                {
                  if ( (int)PiDmObjectGetCachedObjectReference(
                              3u,
                              v34,
                              (void *)v49,
                              (__int64)&DEVPKEY_Device_InstanceId,
                              &DestinationString) >= 0 )
                  {
                    v81 = *(void **)&DestinationString.Length;
                    CachedObjectPropertyData = PiDmObjectGetCachedObjectPropertyData(
                                                 *(_DWORD *)(*(_QWORD *)&DestinationString.Length + 28LL),
                                                 *(_QWORD *)(*(_QWORD *)&DestinationString.Length + 16LL),
                                                 *(int *)&DestinationString.Length,
                                                 (int)P,
                                                 v122,
                                                 v26,
                                                 v117,
                                                 v123);
                    PiDmObjectRelease(v81);
                    PiDmObjectRelease((PVOID)v49);
                    v30 = HIDWORD(v117);
                    v6 = v119;
                    goto LABEL_29;
                  }
                  v52 = P;
                }
              }
              *(_QWORD *)&DestinationString.Length = v49;
              v53 = v49;
              v54 = -1073741802;
              switch ( v50 )
              {
                case 1u:
                  v55 = &PiDmCachedDeviceKeys;
                  v51 = 10;
                  break;
                case 3u:
                  v55 = &PiDmCachedDeviceInterfaceKeys;
                  v51 = 1;
                  break;
                case 5u:
                  v55 = &PiDmCachedDeviceContainerKeys;
                  break;
                default:
LABEL_76:
                  CachedObjectPropertyData = v54;
                  PiDmObjectRelease((PVOID)v49);
                  v30 = HIDWORD(v117);
                  v6 = v119;
LABEL_29:
                  if ( CachedObjectPropertyData < 0
                    && CachedObjectPropertyData != -1073741772
                    && CachedObjectPropertyData != -1073741275
                    && CachedObjectPropertyData != v30 )
                  {
                    v8 = 0;
LABEL_106:
                    if ( !*(_QWORD *)(a6 + 16) )
                      PiPnpRtlCacheObjectBaseKey(v126[0], v125, v6);
                    return v8;
                  }
                  goto LABEL_31;
              }
              for ( m = 0LL; ; m = (unsigned int)(m + 1) )
              {
                if ( (unsigned int)m >= v51 )
                  goto LABEL_76;
                v57 = v55[3 * m];
                if ( *((_DWORD *)v52 + 4) == v57->pid )
                {
                  v58 = *v52 - *(_QWORD *)&v57->fmtid.Data1;
                  if ( *v52 == *(_QWORD *)&v57->fmtid.Data1 )
                    v58 = v52[1] - *(_QWORD *)v57->fmtid.Data4;
                  if ( !v58 )
                    break;
                }
              }
              if ( v49 )
              {
                v59 = 0;
              }
              else
              {
                v54 = PiDmGetObject(v119, v125, &DestinationString);
                if ( v54 < 0 )
                  goto LABEL_76;
                v53 = *(volatile signed __int32 **)&DestinationString.Length;
                v59 = 1;
              }
              PiDmObjectAcquireSharedLock(v53);
              v60 = &v53[6 * m];
              v61 = *((_DWORD *)v60 + 28);
              if ( v61 <= 1 )
              {
                v54 = -1073741802;
                goto LABEL_74;
              }
              v54 = 0;
              DestinationString = 0LL;
              if ( v61 == 6 )
              {
                v62 = *((_DWORD *)v60 + 30);
                if ( v62 == 18 )
                {
                  *(_DWORD *)v122 = 18;
                  v63 = -1LL;
                  do
                    v21 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)v60 + 16) + 16LL) + 2 * v63++ + 2) == 0;
                  while ( !v21 );
                  v64 = 2 * v63 + 2;
                  *(_DWORD *)v123 = v64;
                  if ( (unsigned int)v117 < v64 )
                    goto LABEL_73;
                  memmove(Guid, *(const void **)(*((_QWORD *)v60 + 16) + 16LL), v64);
LABEL_74:
                  PiDmObjectReleaseLock((ULONG_PTR)v53);
                  if ( v59 )
                    PiDmObjectRelease((PVOID)v53);
                  goto LABEL_76;
                }
                if ( v62 != 13 )
                {
                  v54 = -1073741595;
                  goto LABEL_74;
                }
                v105 = (unsigned int)v117 < 0x10;
                *(_DWORD *)v122 = 13;
                *(_DWORD *)v123 = 16;
                if ( !v105 )
                {
                  RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(*((_QWORD *)v60 + 16) + 16LL));
                  v54 = RtlGUIDFromString(&DestinationString, Guid);
                  goto LABEL_74;
                }
              }
              else
              {
                v103 = v61 - 2;
                if ( !v103 )
                {
                  v54 = -1073741275;
                  goto LABEL_74;
                }
                v106 = v103 - 1;
                if ( v106 )
                {
                  v108 = v106 - 1;
                  if ( v108 )
                  {
                    if ( v108 != 1 )
                    {
                      v54 = -1073741595;
                      goto LABEL_74;
                    }
                    *(_DWORD *)v122 = *((_DWORD *)v60 + 30);
                    v109 = *((_DWORD *)v60 + 31);
                    *(_DWORD *)v123 = v109;
                    if ( (unsigned int)v117 >= v109 )
                    {
                      memmove(Guid, *((const void **)v60 + 16), v109);
                      goto LABEL_74;
                    }
                  }
                  else
                  {
                    v105 = (unsigned int)v117 < 0x10;
                    *(_DWORD *)v122 = 13;
                    *(_DWORD *)v123 = 16;
                    if ( !v105 )
                    {
                      *Guid = *(GUID *)(v60 + 30);
                      goto LABEL_74;
                    }
                  }
                }
                else
                {
                  *(_DWORD *)v122 = *((_DWORD *)v60 + 30);
                  v107 = *((_DWORD *)v60 + 31);
                  *(_DWORD *)v123 = v107;
                  if ( (unsigned int)v117 >= v107 )
                  {
                    memmove(Guid, (const void *)(v60 + 32), v107);
                    goto LABEL_74;
                  }
                }
              }
LABEL_73:
              v54 = HIDWORD(v117);
              goto LABEL_74;
            }
          }
        }
      }
LABEL_102:
      ExReleaseResourceLite(v32);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      CachedObjectPropertyData = -1073741772;
LABEL_31:
      Object = CachedObjectPropertyData;
      goto LABEL_32;
    }
    if ( (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
      return v8;
    if ( *(int *)a6 >= 0 )
    {
      v21 = *(_QWORD *)(a6 + 24) == 0LL;
      v71 = *(unsigned int **)(a6 + 64);
      v72 = *(const void **)(a6 + 48);
      v73 = *(_QWORD *)(a6 + 32);
      v126[0] = 0LL;
      v74 = *v71;
      v75 = *(_DWORD **)(a6 + 40);
      v117 = 0LL;
      P = 0LL;
      LODWORD(v120) = *v75;
      if ( v21 )
      {
        switch ( a3 )
        {
          case 1:
            v76 = &PiDmCachedDeviceKeys;
            v77 = 10;
            goto LABEL_96;
          case 3:
            v76 = &PiDmCachedDeviceInterfaceKeys;
            v77 = 1;
            goto LABEL_96;
          case 5:
            v76 = &PiDmCachedDeviceContainerKeys;
            v77 = 3;
LABEL_96:
            for ( n = 0LL; (unsigned int)n < v77; n = (unsigned int)(n + 1) )
            {
              v79 = v76[3 * n];
              if ( *(_DWORD *)(v73 + 16) == v79->pid )
              {
                v95 = *(_QWORD *)v73 - *(_QWORD *)&v79->fmtid.Data1;
                if ( *(_QWORD *)v73 == *(_QWORD *)&v79->fmtid.Data1 )
                  v95 = *(_QWORD *)(v73 + 8) - *(_QWORD *)v79->fmtid.Data4;
                if ( !v95 )
                {
                  if ( (int)PiDmGetObject((unsigned int)a3, v125, v126) < 0 )
                    return 0;
                  v88 = v126[0];
                  KsepCacheLock((unsigned __int64 *)v126[0]);
                  v96 = v88[6 * n + 28];
                  if ( v96 > 1 )
                  {
                    v99 = v120;
                    v100 = 0;
                  }
                  else
                  {
                    v97 = LODWORD(v76[3 * n + 1]);
                    v98 = HIDWORD(v76[3 * n + 1]);
                    v99 = v120;
                    PiDmCacheDataEncode((unsigned int)v120, v72, v74, v97, v98, &v88[6 * n + 28]);
                    v100 = v96 == 0;
                  }
                  PiDmObjectReleaseLock((ULONG_PTR)v88);
                  if ( !v100 )
                    goto LABEL_135;
                  v101 = PnpGetObjectProperty(
                           0x5A706E50u,
                           v74,
                           (__int64)v125,
                           v119,
                           0LL,
                           0LL,
                           v73,
                           &v117,
                           &P,
                           (unsigned int *)&v117 + 1,
                           0x10000);
                  if ( v101 == -1073741275 )
                  {
                    LODWORD(v117) = 0;
                    v91 = P;
                    if ( P )
                    {
                      ExFreePoolWithTag(P, 0x5A706E50u);
                      v91 = 0LL;
                    }
                    v102 = 0;
                  }
                  else
                  {
                    v91 = P;
                    if ( v101 < 0 )
                      goto LABEL_132;
                    v102 = HIDWORD(v117);
                  }
                  if ( v102 != v74 || (_DWORD)v117 != v99 )
                    goto LABEL_132;
                  if ( v91 )
                  {
                    if ( !v72 )
                      goto LABEL_132;
                  }
                  else if ( v72 )
                  {
                    goto LABEL_132;
                  }
                  if ( !v102 )
                    goto LABEL_133;
                  if ( v91 )
                  {
                    if ( !memcmp(v91, v72, v102) )
                      goto LABEL_133;
                    goto LABEL_132;
                  }
                  goto LABEL_135;
                }
              }
            }
            break;
        }
      }
      return 0;
    }
    if ( *(_DWORD *)a6 != -1073741275 )
      return 0;
    v82 = *(_QWORD *)(a6 + 24);
    v83 = *(_QWORD *)(a6 + 32);
    v84 = 0;
    v126[0] = 0LL;
    LODWORD(v117) = 0;
    P = 0LL;
    LODWORD(v120) = 0;
    if ( v82 )
      return 0;
    switch ( a3 )
    {
      case 1:
        v85 = &PiDmCachedDeviceKeys;
        v86 = 10;
        break;
      case 3:
        v85 = &PiDmCachedDeviceInterfaceKeys;
        v86 = 1;
        break;
      case 5:
        v85 = &PiDmCachedDeviceContainerKeys;
        v86 = 3;
        break;
      default:
        return 0;
    }
    for ( n = 0LL; ; n = (unsigned int)(n + 1) )
    {
      if ( (unsigned int)n >= v86 )
        return 0;
      v87 = v85[3 * n];
      if ( *(_DWORD *)(v83 + 16) == v87->pid )
      {
        v104 = *(_QWORD *)v83 - *(_QWORD *)&v87->fmtid.Data1;
        if ( *(_QWORD *)v83 == *(_QWORD *)&v87->fmtid.Data1 )
          v104 = *(_QWORD *)(v83 + 8) - *(_QWORD *)v87->fmtid.Data4;
        if ( !v104 )
          break;
      }
    }
    if ( (int)PiDmGetObject((unsigned int)a3, a2, v126) < 0 )
      return 0;
    v88 = v126[0];
    KsepCacheLock((unsigned __int64 *)v126[0]);
    v89 = v88[6 * n + 28];
    if ( v89 <= 1 )
    {
      v88[6 * n + 28] = 2;
      v84 = v89 == 0;
    }
    PiDmObjectReleaseLock((ULONG_PTR)v88);
    if ( !v84 )
    {
LABEL_135:
      PiDmObjectRelease(v88);
      return 0;
    }
    v90 = PnpGetObjectProperty(
            0x5A706E50u,
            0,
            (__int64)a2,
            v119,
            0LL,
            0LL,
            v83,
            &v117,
            &P,
            (unsigned int *)&v120,
            0x10000);
    if ( v90 == -1073741275 )
    {
      LODWORD(v117) = 0;
      v91 = P;
      if ( P )
      {
        ExFreePoolWithTag(P, 0x5A706E50u);
        v91 = 0LL;
      }
      v92 = 0;
    }
    else
    {
      v91 = P;
      if ( v90 < 0 )
        goto LABEL_132;
      v92 = v120;
    }
    if ( !(_DWORD)v117 && !v92 && !v91 )
      goto LABEL_135;
LABEL_132:
    KsepCacheLock((unsigned __int64 *)v88);
    PiDmCacheDataFree(&v88[4 * n + 28 + 2 * n]);
    PiDmObjectReleaseLock((ULONG_PTR)v88);
LABEL_133:
    if ( v91 )
      ExFreePoolWithTag(v91, 0x5A706E50u);
    goto LABEL_135;
  }
  v65 = a4 - 3;
  if ( !v65 )
  {
    if ( a3 != 7 )
      return v8;
    if ( a5 != 1 )
    {
      if ( *(_QWORD *)(a6 + 8) == 1LL )
      {
        if ( *(int *)a6 >= 0 )
          *(_BYTE *)(a6 + 32) = 1;
        else
          PiDrvDbUnmountNode(a2);
        *(_QWORD *)(a6 + 8) = 0LL;
      }
      return v8;
    }
    ObjectList = PiDrvDbMountNode(a2);
    v8 = ObjectList;
    if ( ObjectList >= 0 )
    {
      *(_QWORD *)(a6 + 8) = 1LL;
      return v8;
    }
    goto LABEL_228;
  }
  v66 = v65 - 1;
  if ( !v66 )
  {
    if ( a3 == 7 )
    {
      if ( a5 == 1 )
      {
        v112 = PiDrvDbUnmountNode(a2);
        v8 = v112;
        if ( v112 < 0 )
        {
          *(_DWORD *)a6 = v112;
          return (unsigned int)-1073741536;
        }
      }
      else if ( *(_DWORD *)a6 == -1073741772 )
      {
        *(_DWORD *)a6 = 0;
        return (unsigned int)-1073741536;
      }
    }
    return v8;
  }
  v67 = v66 - 1;
  if ( !v67 )
  {
    if ( a5 != 1 || (*(_DWORD *)(a6 + 56) & 0x10000) != 0 )
      return v8;
    v93 = *(_DWORD *)(a6 + 40);
    v94 = *(_QWORD *)(a6 + 32);
    if ( a3 >= 7 )
      return 0;
    v116 = *(GUID **)(a6 + 48);
    v126[0] = *(PVOID *)(a6 + 16);
    v126[1] = *(PVOID *)(a6 + 24);
    ObjectList = PiDmGetObjectList(
                   a3,
                   (unsigned int)PiDmPnpObjectMatchCallback,
                   (unsigned int)v126,
                   v94,
                   v93,
                   (__int64)v116);
    if ( ObjectList == -1073741802 )
      return 0;
LABEL_228:
    *(_DWORD *)a6 = ObjectList;
    return (unsigned int)-1073741536;
  }
  if ( v67 != 4 )
    return v8;
  if ( a5 != 1 )
  {
    if ( *(int *)a6 < 0 )
      return v8;
    PiDmObjectUpdateCachedObjectProperty(
      a3,
      (int)a2,
      a3,
      *(_QWORD *)(a6 + 24),
      *(_QWORD *)(a6 + 32),
      *(_DWORD *)(a6 + 40),
      *(void **)(a6 + 48),
      *(_DWORD *)(a6 + 56));
    return 0;
  }
  v8 = 0;
  if ( (*(_DWORD *)(a6 + 60) & 0x20000) != 0 )
    goto LABEL_192;
  v68 = *(_DWORD *)(a6 + 56);
  Pool2 = 0LL;
  v117 = 0LL;
  if ( v68 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return v8;
    v6 = v119;
  }
  v70 = PnpGetObjectProperty(
          *(_QWORD **)&PiPnpRtlCtx,
          a2,
          v6,
          *(void **)(a6 + 16),
          *(const WCHAR **)(a6 + 24),
          *(_QWORD *)(a6 + 32),
          &v117,
          Pool2,
          *(_DWORD *)(a6 + 56),
          (__int64)&v117 + 4,
          0);
  if ( v70 < 0 )
    goto LABEL_263;
  if ( v117 != __PAIR64__(*(_DWORD *)(a6 + 56), *(_DWORD *)(a6 + 40)) )
  {
LABEL_90:
    v8 = 0;
    goto LABEL_188;
  }
  if ( memcmp(Pool2, *(const void **)(a6 + 48), HIDWORD(v117)) )
  {
LABEL_263:
    if ( v70 != -1073741275 || *(_DWORD *)(a6 + 40) || *(_DWORD *)(a6 + 56) )
      goto LABEL_90;
  }
  *(_DWORD *)a6 = v70;
  v8 = -1073741536;
LABEL_188:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x47706E50u);
  if ( !v8 )
  {
    v6 = v119;
    a1 = v126[0];
LABEL_192:
    if ( !*(_QWORD *)(a6 + 16) )
      PiPnpRtlCacheObjectBaseKey(a1, a2, v6);
  }
  return v8;
}
