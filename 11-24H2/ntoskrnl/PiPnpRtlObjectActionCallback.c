/*
 * XREFs of PiPnpRtlObjectActionCallback @ 0x1408CC090
 * Callers:
 *     _PnpGetObjectList @ 0x1408BB7D0 (_PnpGetObjectList.c)
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1408CE4D0 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1408CF120 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x1408CF5E0 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D1D9C (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D24E0 (PiDqPnPGetObjectProperty.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlLookupElementGenericTableAvl @ 0x1403FA3F0 (RtlLookupElementGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiDrvDbUnmountNode @ 0x1406F9260 (PiDrvDbUnmountNode.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1408B7070 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmCacheDataFree @ 0x1408B8C20 (PiDmCacheDataFree.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1408B8C6C (PiDmObjectUpdateCachedObjectProperty.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     PiDmGetObject @ 0x1408C95A0 (PiDmGetObject.c)
 *     PiPnpRtlCacheObjectBaseKey @ 0x1408C9D00 (PiPnpRtlCacheObjectBaseKey.c)
 *     PnpGetObjectProperty @ 0x1408CA950 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiDmObjectAcquireSharedLock @ 0x1408CE46C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14099AAC0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmGetObjectList @ 0x1409C4C90 (PiDmGetObjectList.c)
 *     PiDmCacheDataEncode @ 0x140A483AC (PiDmCacheDataEncode.c)
 *     PiDrvDbMountNode @ 0x140AB7184 (PiDrvDbMountNode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlObjectActionCallback(PVOID a1, unsigned __int16 *a2, __int64 a3, int a4, int a5, __int64 a6)
{
  int v6; // r11d
  unsigned int v8; // ebx
  _BYTE *v9; // rbx
  _DWORD *v10; // rsi
  int CachedObjectPropertyData; // r13d
  int v12; // edx
  int Object; // r12d
  _DWORD *v14; // r14
  __int64 v15; // r10
  __int64 v16; // rax
  unsigned int i; // ecx
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r11
  bool v21; // zf
  __int64 *v22; // r15
  char *v23; // rsi
  __int64 v24; // r12
  int v25; // eax
  GUID *v26; // r14
  void *v27; // r9
  int v28; // r12d
  __int64 v29; // rax
  int v30; // ecx
  struct _ERESOURCE *v32; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *v34; // r13
  int Flink; // r8d
  __int64 v36; // rcx
  unsigned __int16 *v37; // rax
  int v38; // eax
  unsigned __int16 v39; // dx
  unsigned __int16 *v40; // r11
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v42; // r9d
  unsigned __int16 *v43; // r11
  unsigned __int16 v44; // dx
  int v45; // r10d
  struct _LIST_ENTRY *v46; // rbx
  unsigned __int64 v47; // rax
  volatile signed __int32 **v48; // rax
  volatile signed __int32 *v49; // r15
  unsigned int v50; // ebx
  unsigned int v51; // esi
  _QWORD *v52; // r8
  volatile signed __int32 *v53; // r13
  int v54; // r12d
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
  unsigned int v68; // eax
  wchar_t *Pool2; // rsi
  int v70; // ebx
  unsigned int *v71; // rax
  const void *v72; // r12
  __int64 v73; // r15
  unsigned int v74; // r13d
  _DWORD *v75; // rax
  DEVPROPKEY **v76; // r14
  unsigned int v77; // esi
  unsigned int n; // ebx
  DEVPROPKEY *v79; // rdx
  __int64 v80; // rax
  void *v81; // rbx
  __int64 v82; // r15
  bool v83; // r12
  DEVPROPKEY **v84; // r14
  unsigned int v85; // esi
  unsigned int ii; // ebx
  DEVPROPKEY *v87; // rdx
  unsigned __int64 *v88; // rcx
  int v89; // edx
  __int64 v90; // r9
  __int64 v91; // rcx
  unsigned __int64 *v92; // rsi
  unsigned int v93; // edi
  __int64 v94; // r9
  int v95; // eax
  int v96; // r14d
  bool v97; // di
  int v98; // eax
  PVOID v99; // rdi
  unsigned int v100; // eax
  unsigned int v101; // ecx
  __int64 v102; // rcx
  unsigned __int64 *v103; // rdi
  unsigned int v104; // eax
  int v105; // eax
  PVOID v106; // rsi
  int v107; // eax
  bool v108; // cf
  unsigned int v109; // ecx
  unsigned int v110; // eax
  unsigned int v111; // ecx
  unsigned int v112; // eax
  char *v113; // r13
  _QWORD *j; // r14
  int v115; // eax
  int ObjectList; // eax
  char *v117; // rdx
  int ObjectProperty; // eax
  GUID *v119; // [rsp+28h] [rbp-D8h]
  __int64 v120; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t v121[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v122; // [rsp+6Ch] [rbp-94h]
  __int64 v123; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  __int64 v125; // [rsp+80h] [rbp-80h]
  __int64 v126; // [rsp+88h] [rbp-78h]
  GUID *Guid; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v128; // [rsp+98h] [rbp-68h]
  PVOID v129[2]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  int v131; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v132; // [rsp+C8h] [rbp-38h]
  PVOID v133; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *Buffer; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v135; // [rsp+F0h] [rbp-10h] BYREF
  char v136[8]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int16 *v137; // [rsp+100h] [rbp+0h]
  int k; // [rsp+108h] [rbp+8h]
  int v139; // [rsp+10Ch] [rbp+Ch]

  v6 = a3;
  v122 = a3;
  v128 = a2;
  v8 = -1073741822;
  v129[0] = a1;
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
      v133 = 0LL;
      LODWORD(v123) = 0;
      LOBYTE(v121[0]) = 0;
      v131 = 0;
      LODWORD(v120) = 0;
      if ( v9 )
      {
        if ( !v12 )
          v9 = 0LL;
      }
      else
      {
        v12 = 0;
      }
      if ( (int)a3 < 7 && !v16 )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= 3 )
            goto LABEL_22;
          v18 = 7LL * i;
          v19 = *(__int64 *)((char *)&off_140001B20 + v18 * 8);
          if ( *(_DWORD *)(v19 + 16) == *(_DWORD *)(v15 + 16) )
          {
            v20 = *(_QWORD *)v19 - *(_QWORD *)v15;
            if ( *(_QWORD *)v19 == *(_QWORD *)v15 )
              v20 = *(_QWORD *)(v19 + 8) - *(_QWORD *)(v15 + 8);
            v21 = v20 == 0;
            v6 = v122;
            if ( v21 && v122 == *(_DWORD *)&byte_140001B18[v18 * 8] )
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
            Object = PiDmGetObject(v6, v128, &v133);
            if ( Object < 0 )
            {
              v6 = v122;
              goto LABEL_22;
            }
            v23 = (char *)v133;
            v24 = v22[6];
            KsepCacheLock((unsigned __int64 *)v133);
            v25 = *(_DWORD *)&v23[v24];
            if ( v25 != 0x80000000 )
            {
LABEL_20:
              *v9 = (v25 <= 0) - 1;
              Object = 0;
              goto LABEL_21;
            }
            v25 = v120;
            v113 = &v23[qword_140002C18[5 * *((int *)v22 + 10)]];
            for ( j = *(_QWORD **)v113; ; j = (_QWORD *)*j )
            {
              if ( j == (_QWORD *)v113 )
              {
                *(_DWORD *)&v23[v24] = v25;
                CachedObjectPropertyData = -1073741802;
                goto LABEL_20;
              }
              v117 = (char *)j - qword_140002C28[5 * *((int *)v22 + 10)];
              ObjectProperty = PnpGetObjectProperty(
                                 *(_QWORD **)&PiPnpRtlCtx,
                                 *((WCHAR **)v117 + 2),
                                 *((_DWORD *)v117 + 7),
                                 0LL,
                                 0LL,
                                 v22[1],
                                 &v123,
                                 v121,
                                 1u,
                                 (__int64)&v131,
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
                  v6 = v122;
                  goto LABEL_22;
                }
                v25 = v120;
              }
              else
              {
                v25 = v120;
                if ( (_DWORD)v123 == 17 && LOBYTE(v121[0]) == 0xFF )
                {
                  v25 = v120 + 1;
                  LODWORD(v120) = v120 + 1;
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
      v126 = *(_QWORD *)(a6 + 64);
      v125 = *(_QWORD *)(a6 + 40);
      v29 = *(_QWORD *)(a6 + 24);
      LODWORD(v120) = v28;
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
        v28 = 0;
        LODWORD(v120) = 0;
      }
      v30 = -1073741789;
      HIDWORD(v120) = -1073741789;
      if ( v6 >= 7 || v29 )
        goto LABEL_29;
      v32 = 0LL;
      switch ( v6 )
      {
        case 3:
          v32 = &PiDmDeviceInterfaceManager;
          break;
        case 1:
          v32 = (struct _ERESOURCE *)&PiDmDeviceManager;
          break;
        case 2:
          v32 = (struct _ERESOURCE *)&PiDmDeviceInstallerClassManager;
          break;
        case 4:
          v32 = (struct _ERESOURCE *)&PiDmDeviceInterfaceClassManager;
          break;
        case 5:
          v32 = (struct _ERESOURCE *)&PiDmDeviceContainerManager;
          break;
        case 6:
          v32 = (struct _ERESOURCE *)&PiDmDevicePanelManager;
          break;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(v32, 1u);
      v135 = 0LL;
      memset_0(v136, 0, 0x68uLL);
      v34 = v128;
      Buffer = &v135;
      if ( v128 )
      {
        Flink = (int)v32[2].SystemResourcesList.Flink;
        v137 = v128;
        v132 = 0LL;
        v36 = 0x7FFFLL;
        v139 = Flink;
        v37 = v128;
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
          *((_QWORD *)&v132 + 1) = v128;
          v39 = 2 * (0x7FFF - v36);
          v40 = v128;
          LOWORD(v132) = v39;
        }
        else
        {
          v40 = (unsigned __int16 *)*((_QWORD *)&v132 + 1);
          v39 = v132;
        }
        if ( v38 >= 0 )
        {
          if ( Flink == 3 )
          {
            if ( v39 <= 8u )
              goto LABEL_108;
            LOWORD(v132) = v39 - 8;
            *((_QWORD *)&v132 + 1) = v40 + 4;
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
              KeLeaveCriticalRegionThread();
              v50 = v122;
              v51 = 3;
              v52 = P;
              if ( v122 == 3 && *((_DWORD *)P + 4) == 2 )
              {
                v80 = *(_QWORD *)P - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
                if ( *(_QWORD *)P == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
                  v80 = *((_QWORD *)P + 1) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
                if ( !v80 )
                {
                  if ( (int)PiDmObjectGetCachedObjectReference(
                              3u,
                              (__int64)v34,
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
                                                 v125,
                                                 v26,
                                                 v28,
                                                 v126);
                    PiDmObjectRelease(v81);
                    goto LABEL_77;
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
LABEL_77:
                  PiDmObjectRelease((PVOID)v49);
                  v30 = HIDWORD(v120);
                  v6 = v122;
LABEL_29:
                  if ( CachedObjectPropertyData < 0
                    && CachedObjectPropertyData != -1073741772
                    && CachedObjectPropertyData != -1073741275
                    && CachedObjectPropertyData != v30 )
                  {
                    v8 = 0;
LABEL_106:
                    if ( !*(_QWORD *)(a6 + 16) )
                      PiPnpRtlCacheObjectBaseKey((__int64)v129[0], v128, v6, (_QWORD *)(a6 + 16));
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
                v54 = PiDmGetObject(v122, v128, &DestinationString);
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
                  *(_DWORD *)v125 = 18;
                  v63 = -1LL;
                  do
                    v21 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)v60 + 16) + 16LL) + 2 * v63++ + 2) == 0;
                  while ( !v21 );
                  v64 = 2 * v63 + 2;
                  *(_DWORD *)v126 = v64;
                  if ( (unsigned int)v120 < v64 )
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
                v108 = (unsigned int)v120 < 0x10;
                *(_DWORD *)v125 = 13;
                *(_DWORD *)v126 = 16;
                if ( !v108 )
                {
                  RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(*((_QWORD *)v60 + 16) + 16LL));
                  v54 = RtlGUIDFromString(&DestinationString, Guid);
                  goto LABEL_74;
                }
              }
              else
              {
                v101 = v61 - 2;
                if ( !v101 )
                {
                  v54 = -1073741275;
                  goto LABEL_74;
                }
                v109 = v101 - 1;
                if ( v109 )
                {
                  v111 = v109 - 1;
                  if ( v111 )
                  {
                    if ( v111 != 1 )
                    {
                      v54 = -1073741595;
                      goto LABEL_74;
                    }
                    *(_DWORD *)v125 = *((_DWORD *)v60 + 30);
                    v112 = *((_DWORD *)v60 + 31);
                    *(_DWORD *)v126 = v112;
                    if ( (unsigned int)v120 >= v112 )
                    {
                      memmove(Guid, *((const void **)v60 + 16), v112);
                      goto LABEL_74;
                    }
                  }
                  else
                  {
                    v108 = (unsigned int)v120 < 0x10;
                    *(_DWORD *)v125 = 13;
                    *(_DWORD *)v126 = 16;
                    if ( !v108 )
                    {
                      *Guid = *(GUID *)(v60 + 30);
                      goto LABEL_74;
                    }
                  }
                }
                else
                {
                  *(_DWORD *)v125 = *((_DWORD *)v60 + 30);
                  v110 = *((_DWORD *)v60 + 31);
                  *(_DWORD *)v126 = v110;
                  if ( (unsigned int)v120 >= v110 )
                  {
                    memmove(Guid, (const void *)(v60 + 32), v110);
                    goto LABEL_74;
                  }
                }
              }
LABEL_73:
              v54 = HIDWORD(v120);
              goto LABEL_74;
            }
          }
        }
      }
LABEL_108:
      ExReleaseResourceLite(v32);
      KeLeaveCriticalRegionThread();
      CachedObjectPropertyData = -1073741772;
LABEL_31:
      Object = CachedObjectPropertyData;
      goto LABEL_32;
    }
    if ( (*(_DWORD *)(a6 + 72) & 0x10000) != 0 )
      return v8;
    if ( *(int *)a6 >= 0 )
    {
      v71 = *(unsigned int **)(a6 + 64);
      v72 = *(const void **)(a6 + 48);
      v73 = *(_QWORD *)(a6 + 32);
      v129[0] = 0LL;
      v74 = *v71;
      v75 = *(_DWORD **)(a6 + 40);
      v120 = 0LL;
      P = 0LL;
      LODWORD(v123) = *v75;
      if ( !*(_QWORD *)(a6 + 24) )
      {
        switch ( (_DWORD)a3 )
        {
          case 1:
            v76 = &PiDmCachedDeviceKeys;
            v77 = 10;
            break;
          case 3:
            v76 = &PiDmCachedDeviceInterfaceKeys;
            v77 = 1;
            break;
          case 5:
            v76 = &PiDmCachedDeviceContainerKeys;
            v77 = 3;
            break;
          default:
            return 0;
        }
        for ( n = 0; ; ++n )
        {
          if ( n >= v77 )
            return 0;
          v79 = v76[3 * n];
          if ( *(_DWORD *)(v73 + 16) == v79->pid )
          {
            v91 = *(_QWORD *)v73 - *(_QWORD *)&v79->fmtid.Data1;
            if ( *(_QWORD *)v73 == *(_QWORD *)&v79->fmtid.Data1 )
              v91 = *(_QWORD *)(v73 + 8) - *(_QWORD *)v79->fmtid.Data4;
            if ( !v91 )
              break;
          }
        }
        if ( (int)PiDmGetObject(a3, v128, v129) >= 0 )
        {
          v92 = (unsigned __int64 *)v129[0];
          KsepCacheLock((unsigned __int64 *)v129[0]);
          v93 = v92[3 * n + 14];
          if ( v93 > 1 )
          {
            v96 = v123;
            v97 = 0;
          }
          else
          {
            v94 = LODWORD(v76[3 * n + 1]);
            v95 = HIDWORD(v76[3 * n + 1]);
            v96 = v123;
            PiDmCacheDataEncode((unsigned int)v123, v72, v74, v94, v95, &v92[3 * n + 14]);
            v97 = v93 == 0;
          }
          PiDmObjectReleaseLock((ULONG_PTR)v92);
          if ( !v97 )
            goto LABEL_128;
          v98 = PnpGetObjectProperty(
                  0x5A706E50u,
                  v74,
                  v128,
                  v122,
                  0LL,
                  0LL,
                  v73,
                  (int *)&v120,
                  &P,
                  (unsigned int *)&v120 + 1,
                  0x10000);
          v99 = P;
          if ( v98 == -1073741275 )
          {
            LODWORD(v120) = 0;
            if ( P )
            {
              ExFreePoolWithTag(P, 0x5A706E50u);
              v99 = 0LL;
            }
            v100 = 0;
          }
          else
          {
            if ( v98 < 0 )
              goto LABEL_125;
            v100 = HIDWORD(v120);
          }
          if ( v100 != v74 || (_DWORD)v120 != v96 )
            goto LABEL_125;
          if ( v99 )
          {
            if ( v72 )
            {
LABEL_151:
              if ( !v100 )
                goto LABEL_126;
              if ( v99 )
              {
                if ( memcmp(v99, v72, v100) )
                  goto LABEL_125;
LABEL_126:
                if ( v99 )
                  ExFreePoolWithTag(v99, 0x5A706E50u);
              }
LABEL_128:
              v88 = v92;
              goto LABEL_129;
            }
          }
          else if ( !v72 )
          {
            goto LABEL_151;
          }
LABEL_125:
          KsepCacheLock(v92);
          PiDmCacheDataFree((__int64)&v92[2 * n + 14 + n]);
          PiDmObjectReleaseLock((ULONG_PTR)v92);
          goto LABEL_126;
        }
      }
      return 0;
    }
    if ( *(_DWORD *)a6 != -1073741275 )
      return 0;
    v82 = *(_QWORD *)(a6 + 32);
    v83 = 0;
    v129[0] = 0LL;
    LODWORD(v120) = 0;
    P = 0LL;
    LODWORD(v123) = 0;
    if ( *(_QWORD *)(a6 + 24) )
      return 0;
    switch ( (_DWORD)a3 )
    {
      case 1:
        v84 = &PiDmCachedDeviceKeys;
        v85 = 10;
        break;
      case 3:
        v84 = &PiDmCachedDeviceInterfaceKeys;
        v85 = 1;
        break;
      case 5:
        v84 = &PiDmCachedDeviceContainerKeys;
        v85 = 3;
        break;
      default:
        return 0;
    }
    for ( ii = 0; ; ++ii )
    {
      if ( ii >= v85 )
        return 0;
      v87 = v84[3 * ii];
      if ( *(_DWORD *)(v82 + 16) == v87->pid )
      {
        v102 = *(_QWORD *)v82 - *(_QWORD *)&v87->fmtid.Data1;
        if ( *(_QWORD *)v82 == *(_QWORD *)&v87->fmtid.Data1 )
          v102 = *(_QWORD *)(v82 + 8) - *(_QWORD *)v87->fmtid.Data4;
        if ( !v102 )
          break;
      }
    }
    if ( (int)PiDmGetObject(a3, a2, v129) < 0 )
      return 0;
    v103 = (unsigned __int64 *)v129[0];
    KsepCacheLock((unsigned __int64 *)v129[0]);
    v104 = v103[3 * ii + 14];
    if ( v104 <= 1 )
    {
      LODWORD(v103[3 * ii + 14]) = 2;
      v83 = v104 == 0;
    }
    PiDmObjectReleaseLock((ULONG_PTR)v103);
    if ( !v83 )
    {
LABEL_171:
      v88 = v103;
LABEL_129:
      PiDmObjectRelease(v88);
      return 0;
    }
    v105 = PnpGetObjectProperty(
             0x5A706E50u,
             0,
             a2,
             v122,
             0LL,
             0LL,
             v82,
             (int *)&v120,
             &P,
             (unsigned int *)&v123,
             0x10000);
    v106 = P;
    if ( v105 == -1073741275 )
    {
      LODWORD(v120) = 0;
      if ( P )
      {
        ExFreePoolWithTag(P, 0x5A706E50u);
        v106 = 0LL;
      }
      v107 = 0;
    }
    else
    {
      if ( v105 < 0 )
      {
LABEL_169:
        KsepCacheLock(v103);
        PiDmCacheDataFree((__int64)&v103[2 * ii + 14 + ii]);
        PiDmObjectReleaseLock((ULONG_PTR)v103);
        if ( v106 )
          ExFreePoolWithTag(v106, 0x5A706E50u);
        goto LABEL_171;
      }
      v107 = v123;
    }
    if ( !(_DWORD)v120 && !v107 && !v106 )
      goto LABEL_171;
    goto LABEL_169;
  }
  v65 = a4 - 3;
  if ( !v65 )
  {
    if ( (_DWORD)a3 != 7 )
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
    goto LABEL_222;
  }
  v66 = v65 - 1;
  if ( !v66 )
  {
    if ( (_DWORD)a3 == 7 )
    {
      if ( a5 == 1 )
      {
        v115 = PiDrvDbUnmountNode(a2);
        v8 = v115;
        if ( v115 < 0 )
        {
          *(_DWORD *)a6 = v115;
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
    v89 = *(_DWORD *)(a6 + 40);
    v90 = *(_QWORD *)(a6 + 32);
    if ( (int)a3 >= 7 )
      return 0;
    v119 = *(GUID **)(a6 + 48);
    v129[0] = *(PVOID *)(a6 + 16);
    v129[1] = *(PVOID *)(a6 + 24);
    ObjectList = PiDmGetObjectList(
                   a3,
                   (unsigned int)PiDmPnpObjectMatchCallback,
                   (unsigned int)v129,
                   v90,
                   v89,
                   (__int64)v119);
    if ( ObjectList == -1073741802 )
      return 0;
LABEL_222:
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
      (__int64)a2,
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
    goto LABEL_194;
  v68 = *(_DWORD *)(a6 + 56);
  Pool2 = 0LL;
  v120 = 0LL;
  if ( v68 )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v68, 0x47706E50u);
    if ( !Pool2 )
      return v8;
    v6 = v122;
  }
  v70 = PnpGetObjectProperty(
          *(_QWORD **)&PiPnpRtlCtx,
          a2,
          v6,
          *(void **)(a6 + 16),
          *(const WCHAR **)(a6 + 24),
          *(_QWORD *)(a6 + 32),
          &v120,
          Pool2,
          *(_DWORD *)(a6 + 56),
          (__int64)&v120 + 4,
          0);
  if ( v70 < 0 )
    goto LABEL_267;
  if ( v120 != __PAIR64__(*(_DWORD *)(a6 + 56), *(_DWORD *)(a6 + 40)) )
  {
LABEL_91:
    v8 = 0;
    goto LABEL_190;
  }
  if ( memcmp(Pool2, *(const void **)(a6 + 48), HIDWORD(v120)) )
  {
LABEL_267:
    if ( v70 != -1073741275 || *(_DWORD *)(a6 + 40) || *(_DWORD *)(a6 + 56) )
      goto LABEL_91;
  }
  *(_DWORD *)a6 = v70;
  v8 = -1073741536;
LABEL_190:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x47706E50u);
  if ( !v8 )
  {
    v6 = v122;
    a1 = v129[0];
LABEL_194:
    if ( !*(_QWORD *)(a6 + 16) )
      PiPnpRtlCacheObjectBaseKey((__int64)a1, a2, v6, (_QWORD *)(a6 + 16));
  }
  return v8;
}
