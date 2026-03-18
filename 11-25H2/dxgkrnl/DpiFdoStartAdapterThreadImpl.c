/*
 * XREFs of DpiFdoStartAdapterThreadImpl @ 0x14024092C
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x140240820 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A148 (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400354D0 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140043904 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     DxgkCompletePnPTransition @ 0x1401F6448 (DxgkCompletePnPTransition.c)
 *     DxgkStartPnPTransition @ 0x1401F6848 (DxgkStartPnPTransition.c)
 *     DpiFdoStartNonLdaAdapter @ 0x140241228 (DpiFdoStartNonLdaAdapter.c)
 *     DpiDisableMsBddFallbackDriver @ 0x140242EE4 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x14024311C (DpiEnableMsBddFallbackDriver.c)
 *     DpiPnpEnableVga @ 0x140243AB4 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x140243BC0 (DpiPnpNotifyGdi.c)
 *     DpiIndirectFindDeviceFromInstanceId @ 0x140248A20 (DpiIndirectFindDeviceFromInstanceId.c)
 *     DpiLdaStartAdapterInChain @ 0x14024CB40 (DpiLdaStartAdapterInChain.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1403F96D0 (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

__int64 __fastcall DpiFdoStartAdapterThreadImpl(_DWORD *a1, char a2, _BYTE *a3)
{
  char v4; // r12
  __int64 v6; // rdi
  unsigned int v7; // esi
  _DWORD *v8; // r13
  char v9; // al
  bool v10; // r15
  NTSTATUS v11; // eax
  int DeviceFromInstanceId; // eax
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r12
  NTSTATUS v16; // eax
  struct _DXGK_DIAG_HEADER *v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int128 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned int v23; // r12d
  __int64 v24; // rdi
  char v25; // cl
  char v26; // al
  __int64 v27; // rbx
  __int64 v28; // rcx
  int v29; // edx
  struct _DEVICE_OBJECT *v30; // rcx
  int v31; // eax
  bool v32; // al
  char v33; // cl
  struct _DEVICE_OBJECT *v34; // rcx
  __int64 v35; // rdi
  __int64 *v36; // rbx
  int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int Timeout; // [rsp+20h] [rbp-E0h]
  int Timeouta; // [rsp+20h] [rbp-E0h]
  __int64 v43; // [rsp+28h] [rbp-D8h]
  char v44; // [rsp+40h] [rbp-C0h]
  char v46; // [rsp+42h] [rbp-BEh]
  char v47; // [rsp+43h] [rbp-BDh]
  char v48; // [rsp+44h] [rbp-BCh]
  char v49; // [rsp+45h] [rbp-BBh]
  bool v50; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+58h] [rbp-A8h]
  struct _PNP_TRANS_TOKEN *started; // [rsp+60h] [rbp-A0h]
  union _LARGE_INTEGER v53; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v54; // [rsp+70h] [rbp-90h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v55; // [rsp+78h] [rbp-88h] BYREF
  __int64 v56; // [rsp+80h] [rbp-80h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v58; // [rsp+98h] [rbp-68h] BYREF
  int v59; // [rsp+A0h] [rbp-60h]
  _DWORD v60[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-48h]
  __int128 v62; // [rsp+C0h] [rbp-40h]
  __int64 v63; // [rsp+D0h] [rbp-30h]
  __int64 v64; // [rsp+D8h] [rbp-28h]
  int v65; // [rsp+E0h] [rbp-20h]
  int v66; // [rsp+E4h] [rbp-1Ch]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  _DWORD v68[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v69; // [rsp+F8h] [rbp-8h]
  __int128 v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+110h] [rbp+10h]
  __int64 v72; // [rsp+118h] [rbp+18h]
  int v73; // [rsp+120h] [rbp+20h]
  int v74; // [rsp+124h] [rbp+24h]
  int v75; // [rsp+128h] [rbp+28h]
  int v76; // [rsp+12Ch] [rbp+2Ch]

  v54 = a3;
  v4 = a2;
  LOBYTE(v55) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(&v55, 0LL, 7u, 0);
  v6 = v56;
  v7 = 0;
  v51 = v56;
  v8 = 0LL;
  v44 = 0;
  v9 = 0;
  v47 = 0;
  v46 = 0;
  v48 = 0;
  v49 = *a3;
  if ( !a1 )
  {
    v10 = 1;
LABEL_6:
    v50 = v10;
    goto LABEL_7;
  }
  v8 = a1;
  v10 = (*a1 & 2) != 0;
  v50 = v10;
  if ( (*a1 & 4) == 0 )
  {
    v9 = 0;
    v44 = 0;
    goto LABEL_6;
  }
  v9 = 1;
  v44 = 1;
LABEL_7:
  if ( byte_14015DD5A )
  {
    WdLogSingleEntry1(4LL, 0LL);
    WdLogGlobalForLineNumber = 16745;
    goto LABEL_104;
  }
  if ( v9 )
  {
    v11 = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    v7 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 16785;
      goto LABEL_104;
    }
    *((_WORD *)v8 + 261) = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)v8 + 2);
    DeviceFromInstanceId = DpiIndirectFindDeviceFromInstanceId(&DestinationString);
    v7 = DeviceFromInstanceId;
    if ( DeviceFromInstanceId < 0 )
    {
      WdLogSingleEntry1(2LL, DeviceFromInstanceId);
      WdLogGlobalForLineNumber = 16803;
      goto LABEL_104;
    }
    v13 = MEMORY[0x40];
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(MEMORY[0x40] + 152LL), PowerRelations);
    v14 = MEMORY[0xFFFFF78000000320];
    v53.QuadPart = -600000000LL;
    v15 = v14 * KeQueryTimeIncrement();
    v16 = KeWaitForSingleObject((PVOID)(v13 + 1288), Executive, 0, 0, &v53);
    v7 = v16;
    if ( v16 == 258 )
    {
      v17 = (struct _DXGK_DIAG_HEADER *)v60;
      v60[0] = 6;
      v61 = 0LL;
      v64 = 0LL;
      v60[1] = 64;
      v66 = 0;
      v63 = 0LL;
      v62 = 0LL;
      v65 = 129;
      v67 = 60000LL;
    }
    else
    {
      if ( v16 < 0 )
      {
        WdLogSingleEntry1(2LL, v16);
        WdLogGlobalForLineNumber = 16856;
        goto LABEL_104;
      }
      v18 = MEMORY[0xFFFFF78000000320];
      v19 = v18 * KeQueryTimeIncrement();
      v70 = 0LL;
      v69 = 0LL;
      v72 = 0LL;
      v68[0] = 6;
      v68[1] = 64;
      v74 = 0;
      v20 = (unsigned __int64)(v19 - v15) * (unsigned __int128)0x346DC5D63886594BuLL;
      v71 = 0LL;
      v17 = (struct _DXGK_DIAG_HEADER *)v68;
      v75 = *((_QWORD *)&v20 + 1) >> 11;
      v73 = 128;
      v76 = 0;
    }
    DxgkWriteDiagEntry(v17, 0x100000000uLL);
    v6 = v51;
    v4 = a2;
  }
  started = (struct _PNP_TRANS_TOKEN *)DxgkStartPnPTransition(0LL, (!v10 + 2LL) << 32);
  if ( !started )
  {
    v7 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 16874;
    goto LABEL_104;
  }
  if ( v10 )
  {
    _InterlockedCompareExchange(&dword_14015E150, 5, 4);
    LOBYTE(v21) = 1;
    DpiPnpEnableVga(0LL, v21, 0LL, v6);
  }
  AcquireMiniportListMutex();
  if ( !qword_14015DFF8 )
  {
    WdLogSingleEntry1(2LL, -1073741823LL);
    WdLogGlobalForLineNumber = 17004;
  }
  if ( v4 )
  {
    byte_14015DDA2 = 1;
    LOBYTE(v22) = 1;
    DpiAcquirePostDisplayInfoFromBgfx(&xmmword_14015E008, v22);
    dword_14015E19C = 1;
    *((_OWORD *)&DpGlobals + 55) = *(_OWORD *)((char *)&DpGlobals + 712);
    *((_OWORD *)&DpGlobals + 56) = *(_OWORD *)((char *)&DpGlobals + 728);
    *((_OWORD *)&DpGlobals + 57) = *(_OWORD *)((char *)&DpGlobals + 744);
    *((_OWORD *)&DpGlobals + 58) = *(_OWORD *)((char *)&DpGlobals + 760);
    *((_OWORD *)&DpGlobals + 59) = *(_OWORD *)((char *)&DpGlobals + 776);
    *((_OWORD *)&DpGlobals + 60) = *(_OWORD *)((char *)&DpGlobals + 792);
    *((_OWORD *)&DpGlobals + 61) = *(_OWORD *)((char *)&DpGlobals + 808);
    *((_OWORD *)&DpGlobals + 62) = *(_OWORD *)((char *)&DpGlobals + 824);
    *((_OWORD *)&DpGlobals + 63) = *(_OWORD *)((char *)&DpGlobals + 840);
    *((_OWORD *)&DpGlobals + 64) = *(_OWORD *)((char *)&DpGlobals + 856);
    if ( qword_14015DFF8 )
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)(qword_14015DFF8 + 64) + 976LL))(
        *(_QWORD *)(*(_QWORD *)(qword_14015DFF8 + 64) + 48LL),
        &xmmword_14015E0B0);
    dword_14015E150 = 1;
    v23 = 0;
  }
  else
  {
    if ( v10 && (unsigned int)(dword_14015E150 - 4) <= 1 )
      DpiDisableMsBddFallbackDriver(v6);
    v23 = 1;
  }
  do
  {
    v24 = qword_14015DD88;
    if ( *(_QWORD *)v24 != v24 )
    {
      v25 = v44;
      do
      {
        v26 = *(_BYTE *)(v24 + 134);
        if ( v25 )
        {
          if ( v26 )
            goto LABEL_40;
        }
        else if ( !v26 )
        {
LABEL_40:
          KeWaitForSingleObject((PVOID)(v24 + 72), Executive, 0, 0, 0LL);
          v27 = *(_QWORD *)(v24 + 56);
          if ( *(_QWORD *)v27 != v27 )
          {
            do
            {
              if ( *(_DWORD *)(v27 + 16) != 1953656900 || *(_DWORD *)(v27 + 20) != 4 )
              {
                KeEnterCriticalRegion();
                if ( *(_BYTE *)(v27 + 484) )
                  DpiCheckForOutstandingD3Requests(v27);
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v27 + 168), 1u);
                if ( (v23 || *(_BYTE *)(*(_QWORD *)(v27 + 168) + 108LL))
                  && *(_DWORD *)(v27 + 236) == 1
                  && !*(_BYTE *)(v27 + 232) )
                {
                  if ( !*(_BYTE *)(v27 + 481) || v49 )
                  {
                    v28 = 0LL;
                    v58 = 0LL;
                    v29 = 0;
                    v59 = 0;
                    if ( v8 && v8[131] )
                    {
                      v28 = (__int64)(v8 + 132);
                      v29 = v8[131];
                    }
                    v43 = v28;
                    v30 = *(struct _DEVICE_OBJECT **)(v27 + 24);
                    Timeouta = v29;
                    LOBYTE(v29) = a2;
                    if ( *(_DWORD *)(v27 + 504) )
                      v31 = DpiLdaStartAdapterInChain(
                              (_DWORD)v30,
                              v29,
                              (_DWORD)started,
                              v51,
                              Timeouta,
                              v43,
                              (__int64)&v58);
                    else
                      v31 = DpiFdoStartNonLdaAdapter(v30, Timeouta, v43, (__int64)&v58);
                    v7 = v31;
                    if ( v31 != 1075708986 )
                    {
                      if ( v31 < 0 )
                      {
                        v34 = *(struct _DEVICE_OBJECT **)(v27 + 152);
                        *(_BYTE *)(v27 + 232) = 1;
                        IoInvalidateDeviceState(v34);
                      }
                      else
                      {
                        v32 = (v58 & 1) != 0 || (_BYTE)word_14015DD5C && (v58 & 0x40) != 0;
                        v47 |= v32;
                        if ( (v58 & 2) == 0 || (v33 = 1, (v58 & 0x2000) != 0) )
                          v33 = 0;
                        v46 |= v33;
                        v48 |= (v58 & 0x4000) != 0;
                      }
                    }
                  }
                  else
                  {
                    *v54 = 1;
                  }
                }
                if ( *(_BYTE *)(v27 + 484) )
                  DpiEnableD3Requests(*(_QWORD *)(v27 + 24));
                ExReleaseResourceLite(*(PERESOURCE *)(v27 + 168));
                KeLeaveCriticalRegion();
              }
              v27 = *(_QWORD *)v27;
            }
            while ( *(_QWORD *)v27 != *(_QWORD *)(v24 + 56) );
          }
          KeReleaseMutex((PRKMUTEX)(v24 + 72), 0);
          v25 = v44;
        }
        v24 = *(_QWORD *)v24;
      }
      while ( *(_QWORD *)v24 != qword_14015DD88 );
    }
    ++v23;
  }
  while ( v23 < 2 );
  if ( v50 && (unsigned int)(dword_14015E150 - 1) <= 1 )
    DpiEnableMsBddFallbackDriver(v51);
  if ( v46 )
  {
    v35 = qword_14015DD88;
    if ( *(_QWORD *)v35 != v35 )
    {
      do
      {
        if ( *(_BYTE *)(v35 + 133) )
        {
          KeWaitForSingleObject((PVOID)(v35 + 72), Executive, 0, 0, 0LL);
          v36 = *(__int64 **)(v35 + 56);
          if ( (__int64 *)*v36 != v36 )
          {
            do
            {
              KeEnterCriticalRegion();
              if ( *((_BYTE *)v36 + 484) )
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v36[3] + 64) + 4232LL));
              ExAcquireResourceSharedLite((PERESOURCE)v36[21], 1u);
              if ( *((_DWORD *)v36 + 4) == 1953656900 && *((_DWORD *)v36 + 5) == 2 )
              {
                v37 = *((_DWORD *)v36 + 59);
                if ( v37 == 2 || *((_DWORD *)v36 + 60) == 2 && ((v37 - 3) & 0xFFFFFFFC) == 0 && v37 != 4 )
                  IoInvalidateDeviceRelations((PDEVICE_OBJECT)v36[19], PowerRelations);
              }
              if ( *((_BYTE *)v36 + 484) )
                DpiEnableD3Requests(v36[3]);
              ExReleaseResourceLite((PERESOURCE)v36[21]);
              KeLeaveCriticalRegion();
              v36 = (__int64 *)*v36;
            }
            while ( *v36 != *(_QWORD *)(v35 + 56) );
          }
          KeReleaseMutex((PRKMUTEX)(v35 + 72), 0);
        }
        v35 = *(_QWORD *)v35;
      }
      while ( *(_QWORD *)v35 != qword_14015DD88 );
    }
  }
  ReleaseMiniportListMutex();
  if ( v47 || v48 )
  {
    LOBYTE(v38) = 1;
    LOBYTE(Timeout) = v44;
    DpiPnpNotifyGdi(0LL, v38, started, 0x100000000LL, Timeout, v51);
  }
  else if ( v50 )
  {
    LOBYTE(v38) = 1;
    LOBYTE(v39) = 1;
    DpiPnpEnableVga(v39, v38, started, v51);
  }
  else
  {
    DxgkCompletePnPTransition(started);
  }
LABEL_104:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v55);
  return v7;
}
