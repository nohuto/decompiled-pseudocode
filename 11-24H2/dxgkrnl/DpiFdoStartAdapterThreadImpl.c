/*
 * XREFs of DpiFdoStartAdapterThreadImpl @ 0x14024772C
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x140247620 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x14002A8E8 (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003551C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x1400435E4 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     DxgkCompletePnPTransition @ 0x1401FCD58 (DxgkCompletePnPTransition.c)
 *     DxgkStartPnPTransition @ 0x1401FD198 (DxgkStartPnPTransition.c)
 *     DpiFdoStartNonLdaAdapter @ 0x14024802C (DpiFdoStartNonLdaAdapter.c)
 *     DpiDisableMsBddFallbackDriver @ 0x140249CE4 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x140249F1C (DpiEnableMsBddFallbackDriver.c)
 *     DpiPnpEnableVga @ 0x14024A8C4 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x14024A9D0 (DpiPnpNotifyGdi.c)
 *     DpiIndirectFindDeviceFromInstanceId @ 0x14024F850 (DpiIndirectFindDeviceFromInstanceId.c)
 *     DpiLdaStartAdapterInChain @ 0x140253970 (DpiLdaStartAdapterInChain.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1403F34AC (DpiAcquirePostDisplayInfoFromBgfx.c)
 */

__int64 __fastcall DpiFdoStartAdapterThreadImpl(_DWORD *a1, char a2, _BYTE *a3)
{
  char v5; // al
  __int64 v6; // r12
  unsigned int v7; // esi
  _DWORD *v8; // rdi
  bool v9; // r15
  int v10; // eax
  int v11; // r15d
  NTSTATUS v12; // eax
  int DeviceFromInstanceId; // eax
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r12
  NTSTATUS v17; // eax
  struct _DXGK_DIAG_HEADER *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned __int128 v21; // rax
  __int64 v22; // rdx
  _QWORD *started; // r13
  __int64 v24; // rdx
  unsigned int v25; // r12d
  __int64 v26; // r15
  __int64 v27; // rdi
  char v28; // cl
  char v29; // al
  __int64 v30; // rbx
  __int64 v31; // rcx
  int v32; // edx
  struct _DEVICE_OBJECT *v33; // rcx
  int v34; // eax
  bool v35; // al
  char v36; // cl
  struct _DEVICE_OBJECT *v37; // rcx
  __int64 v38; // rdi
  __int64 *v39; // rbx
  int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int Timeout; // [rsp+20h] [rbp-E0h]
  int Timeouta; // [rsp+20h] [rbp-E0h]
  __int64 v46; // [rsp+28h] [rbp-D8h]
  char v47; // [rsp+40h] [rbp-C0h]
  char v49; // [rsp+42h] [rbp-BEh]
  char v50; // [rsp+43h] [rbp-BDh]
  char v51; // [rsp+44h] [rbp-BCh]
  char v52; // [rsp+45h] [rbp-BBh]
  bool v53; // [rsp+50h] [rbp-B0h]
  __int64 v54; // [rsp+58h] [rbp-A8h]
  union _LARGE_INTEGER v55; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v56; // [rsp+68h] [rbp-98h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+78h] [rbp-88h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h] BYREF
  int v61; // [rsp+98h] [rbp-68h]
  _DWORD v62[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-58h]
  __int128 v64; // [rsp+B0h] [rbp-50h]
  __int64 v65; // [rsp+C0h] [rbp-40h]
  __int64 v66; // [rsp+C8h] [rbp-38h]
  int v67; // [rsp+D0h] [rbp-30h]
  int v68; // [rsp+D4h] [rbp-2Ch]
  __int64 v69; // [rsp+D8h] [rbp-28h]
  _DWORD v70[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v71; // [rsp+E8h] [rbp-18h]
  __int128 v72; // [rsp+F0h] [rbp-10h]
  __int64 v73; // [rsp+100h] [rbp+0h]
  __int64 v74; // [rsp+108h] [rbp+8h]
  int v75; // [rsp+110h] [rbp+10h]
  int v76; // [rsp+114h] [rbp+14h]
  int v77; // [rsp+118h] [rbp+18h]
  int v78; // [rsp+11Ch] [rbp+1Ch]

  v56 = a3;
  LOBYTE(v57) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(&v57, 0LL, 7u, 0);
  v5 = 0;
  v6 = v58;
  v7 = 0;
  v47 = 0;
  v8 = 0LL;
  v52 = *a3;
  v54 = v58;
  v60 = 0LL;
  v50 = 0;
  v49 = 0;
  v51 = 0;
  if ( !a1 )
  {
    v9 = 1;
LABEL_6:
    v53 = v9;
    goto LABEL_7;
  }
  v10 = *a1;
  v8 = a1;
  v11 = *a1;
  v60 = (__int64)a1;
  v9 = (v11 & 2) != 0;
  v53 = v9;
  if ( (v10 & 4) == 0 )
  {
    v5 = 0;
    v47 = 0;
    goto LABEL_6;
  }
  v5 = 1;
  v47 = 1;
LABEL_7:
  if ( byte_140160D1A )
  {
    WdLogSingleEntry1(4LL, 0LL);
    WdLogGlobalForLineNumber = 16989;
    goto LABEL_105;
  }
  if ( v5 )
  {
    v12 = KeWaitForSingleObject(&stru_140161360, Executive, 0, 0, 0LL);
    v7 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL, v12);
      WdLogGlobalForLineNumber = 17029;
      goto LABEL_105;
    }
    *((_WORD *)v8 + 261) = 0;
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)v8 + 2);
    DeviceFromInstanceId = DpiIndirectFindDeviceFromInstanceId(&DestinationString);
    v7 = DeviceFromInstanceId;
    if ( DeviceFromInstanceId < 0 )
    {
      WdLogSingleEntry1(2LL, DeviceFromInstanceId);
      WdLogGlobalForLineNumber = 17047;
      goto LABEL_105;
    }
    v14 = MEMORY[0x40];
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(MEMORY[0x40] + 152LL), PowerRelations);
    v15 = MEMORY[0xFFFFF78000000320];
    v55.QuadPart = -600000000LL;
    v16 = v15 * KeQueryTimeIncrement();
    v17 = KeWaitForSingleObject((PVOID)(v14 + 1288), Executive, 0, 0, &v55);
    v7 = v17;
    if ( v17 == 258 )
    {
      v18 = (struct _DXGK_DIAG_HEADER *)v62;
      v62[0] = 6;
      v63 = 0LL;
      v66 = 0LL;
      v62[1] = 64;
      v68 = 0;
      v65 = 0LL;
      v64 = 0LL;
      v67 = 129;
      v69 = 60000LL;
    }
    else
    {
      if ( v17 < 0 )
      {
        WdLogSingleEntry1(2LL, v17);
        WdLogGlobalForLineNumber = 17100;
        goto LABEL_105;
      }
      v19 = MEMORY[0xFFFFF78000000320];
      v20 = v19 * KeQueryTimeIncrement();
      v72 = 0LL;
      v71 = 0LL;
      v74 = 0LL;
      v70[0] = 6;
      v70[1] = 64;
      v76 = 0;
      v21 = (unsigned __int64)(v20 - v16) * (unsigned __int128)0x346DC5D63886594BuLL;
      v73 = 0LL;
      v18 = (struct _DXGK_DIAG_HEADER *)v70;
      v77 = *((_QWORD *)&v21 + 1) >> 11;
      v75 = 128;
      v78 = 0;
    }
    DxgkWriteDiagEntry(v18, 0x100000000uLL);
    v6 = v54;
  }
  started = DxgkStartPnPTransition(0LL, (!v9 + 2LL) << 32);
  if ( !started )
  {
    v7 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 17118;
    goto LABEL_105;
  }
  if ( v9 )
  {
    _InterlockedCompareExchange(&dword_140161110, 5, 4);
    LOBYTE(v22) = 1;
    DpiPnpEnableVga(0LL, v22, 0LL, v6);
  }
  AcquireMiniportListMutex();
  if ( !qword_140160FB8 )
  {
    WdLogSingleEntry1(2LL, -1073741823LL);
    WdLogGlobalForLineNumber = 17248;
  }
  if ( a2 )
  {
    byte_140160D62 = 1;
    LOBYTE(v24) = 1;
    DpiAcquirePostDisplayInfoFromBgfx(&xmmword_140160FC8, v24);
    dword_14016115C = 1;
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
    if ( qword_140160FB8 )
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)(qword_140160FB8 + 64) + 976LL))(
        *(_QWORD *)(*(_QWORD *)(qword_140160FB8 + 64) + 48LL),
        &xmmword_140161070);
    dword_140161110 = 1;
    v25 = 0;
  }
  else
  {
    if ( v9 && (unsigned int)(dword_140161110 - 4) <= 1 )
      DpiDisableMsBddFallbackDriver(v6);
    v25 = 1;
  }
  v26 = v60;
  do
  {
    v27 = qword_140160D48;
    if ( *(_QWORD *)v27 != v27 )
    {
      v28 = v47;
      do
      {
        v29 = *(_BYTE *)(v27 + 134);
        if ( v28 )
        {
          if ( v29 )
            goto LABEL_41;
        }
        else if ( !v29 )
        {
LABEL_41:
          KeWaitForSingleObject((PVOID)(v27 + 72), Executive, 0, 0, 0LL);
          v30 = *(_QWORD *)(v27 + 56);
          if ( *(_QWORD *)v30 != v30 )
          {
            do
            {
              if ( *(_DWORD *)(v30 + 16) != 1953656900 || *(_DWORD *)(v30 + 20) != 4 )
              {
                KeEnterCriticalRegion();
                if ( *(_BYTE *)(v30 + 484) )
                  DpiCheckForOutstandingD3Requests(v30);
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v30 + 168), 1u);
                if ( (v25 || *(_BYTE *)(*(_QWORD *)(v30 + 168) + 108LL))
                  && *(_DWORD *)(v30 + 236) == 1
                  && !*(_BYTE *)(v30 + 232) )
                {
                  if ( !*(_BYTE *)(v30 + 481) || v52 )
                  {
                    v31 = 0LL;
                    v60 = 0LL;
                    v32 = 0;
                    v61 = 0;
                    if ( v26 && *(_DWORD *)(v26 + 524) )
                    {
                      v31 = v26 + 528;
                      v32 = *(_DWORD *)(v26 + 524);
                    }
                    v46 = v31;
                    v33 = *(struct _DEVICE_OBJECT **)(v30 + 24);
                    Timeouta = v32;
                    LOBYTE(v32) = a2;
                    if ( *(_DWORD *)(v30 + 504) )
                      v34 = DpiLdaStartAdapterInChain(
                              (_DWORD)v33,
                              v32,
                              (_DWORD)started,
                              v54,
                              Timeouta,
                              v46,
                              (__int64)&v60);
                    else
                      v34 = DpiFdoStartNonLdaAdapter(v33, Timeouta, v46, (__int64)&v60);
                    v7 = v34;
                    if ( v34 != 1075708986 )
                    {
                      if ( v34 < 0 )
                      {
                        v37 = *(struct _DEVICE_OBJECT **)(v30 + 152);
                        *(_BYTE *)(v30 + 232) = 1;
                        IoInvalidateDeviceState(v37);
                      }
                      else
                      {
                        v35 = (v60 & 1) != 0 || (_BYTE)word_140160D1C && (v60 & 0x40) != 0;
                        v50 |= v35;
                        if ( (v60 & 2) == 0 || (v36 = 1, (v60 & 0x2000) != 0) )
                          v36 = 0;
                        v49 |= v36;
                        v51 |= (v60 & 0x4000) != 0;
                      }
                    }
                  }
                  else
                  {
                    *v56 = 1;
                  }
                }
                if ( *(_BYTE *)(v30 + 484) )
                  DpiEnableD3Requests(*(_QWORD *)(v30 + 24));
                ExReleaseResourceLite(*(PERESOURCE *)(v30 + 168));
                KeLeaveCriticalRegion();
              }
              v30 = *(_QWORD *)v30;
            }
            while ( *(_QWORD *)v30 != *(_QWORD *)(v27 + 56) );
          }
          KeReleaseMutex((PRKMUTEX)(v27 + 72), 0);
          v28 = v47;
        }
        v27 = *(_QWORD *)v27;
      }
      while ( *(_QWORD *)v27 != qword_140160D48 );
    }
    ++v25;
  }
  while ( v25 < 2 );
  if ( v53 && (unsigned int)(dword_140161110 - 1) <= 1 )
    DpiEnableMsBddFallbackDriver(started);
  if ( v49 )
  {
    v38 = qword_140160D48;
    if ( *(_QWORD *)v38 != v38 )
    {
      do
      {
        if ( *(_BYTE *)(v38 + 133) )
        {
          KeWaitForSingleObject((PVOID)(v38 + 72), Executive, 0, 0, 0LL);
          v39 = *(__int64 **)(v38 + 56);
          if ( (__int64 *)*v39 != v39 )
          {
            do
            {
              KeEnterCriticalRegion();
              if ( *((_BYTE *)v39 + 484) )
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v39[3] + 64) + 4232LL));
              ExAcquireResourceSharedLite((PERESOURCE)v39[21], 1u);
              if ( *((_DWORD *)v39 + 4) == 1953656900 && *((_DWORD *)v39 + 5) == 2 )
              {
                v40 = *((_DWORD *)v39 + 59);
                if ( v40 == 2 || *((_DWORD *)v39 + 60) == 2 && ((v40 - 3) & 0xFFFFFFFC) == 0 && v40 != 4 )
                  IoInvalidateDeviceRelations((PDEVICE_OBJECT)v39[19], PowerRelations);
              }
              if ( *((_BYTE *)v39 + 484) )
                DpiEnableD3Requests(v39[3]);
              ExReleaseResourceLite((PERESOURCE)v39[21]);
              KeLeaveCriticalRegion();
              v39 = (__int64 *)*v39;
            }
            while ( *v39 != *(_QWORD *)(v38 + 56) );
          }
          KeReleaseMutex((PRKMUTEX)(v38 + 72), 0);
        }
        v38 = *(_QWORD *)v38;
      }
      while ( *(_QWORD *)v38 != qword_140160D48 );
    }
  }
  ReleaseMiniportListMutex();
  if ( v50 || v51 )
  {
    LOBYTE(v41) = 1;
    LOBYTE(Timeout) = v47;
    DpiPnpNotifyGdi(0LL, v41, started, 0x100000000LL, Timeout, v54);
  }
  else if ( v53 )
  {
    LOBYTE(v41) = 1;
    LOBYTE(v42) = 1;
    DpiPnpEnableVga(v42, v41, started, v54);
  }
  else
  {
    DxgkCompletePnPTransition((struct _PNP_TRANS_TOKEN *)started);
  }
LABEL_105:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v57);
  return v7;
}
