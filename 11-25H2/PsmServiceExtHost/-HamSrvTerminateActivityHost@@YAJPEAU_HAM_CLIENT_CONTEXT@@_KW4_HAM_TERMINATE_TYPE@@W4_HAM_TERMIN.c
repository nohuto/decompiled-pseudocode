/*
 * XREFs of ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x180062DD0
 * Callers:
 *     HamRpcSrvTerminateActivityHost @ 0x180071420 (HamRpcSrvTerminateActivityHost.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180018280 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18001A65C (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x18003B650 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK.c)
 *     ?HamSrvAreTerminateParametersValid@@YAKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180063148 (-HamSrvAreTerminateParametersValid@@YAKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateActivityHost(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5,
        int a6,
        int a7)
{
  unsigned int v11; // edi
  __int64 v12; // rax
  ULONG v13; // eax
  bool v15; // zf
  struct _HAM_ACTIVITY *v16; // rax
  struct _HAM_ACTIVITY *v17; // rdi
  int v18; // ebx
  unsigned int v19; // eax
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h]
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  void *v32; // [rsp+120h] [rbp+20h]
  int v33; // [rsp+128h] [rbp+28h]
  int v34; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v35; // [rsp+130h] [rbp+30h]
  int v36; // [rsp+138h] [rbp+38h]
  int v37; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v38; // [rsp+140h] [rbp+40h]
  int v39; // [rsp+148h] [rbp+48h]
  int v40; // [rsp+14Ch] [rbp+4Ch]
  char *v41; // [rsp+150h] [rbp+50h]
  int v42; // [rsp+158h] [rbp+58h]
  int v43; // [rsp+15Ch] [rbp+5Ch]
  unsigned int *v44; // [rsp+160h] [rbp+60h]
  int v45; // [rsp+168h] [rbp+68h]
  int v46; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v47; // [rsp+170h] [rbp+70h]
  int v48; // [rsp+178h] [rbp+78h]
  int v49; // [rsp+17Ch] [rbp+7Ch]
  __int64 *v50; // [rsp+180h] [rbp+80h]
  int v51; // [rsp+188h] [rbp+88h]
  int v52; // [rsp+18Ch] [rbp+8Ch]
  int *v53; // [rsp+190h] [rbp+90h]
  int v54; // [rsp+198h] [rbp+98h]
  int v55; // [rsp+19Ch] [rbp+9Ch]
  int *v56; // [rsp+1A0h] [rbp+A0h]
  int v57; // [rsp+1A8h] [rbp+A8h]
  int v58; // [rsp+1ACh] [rbp+ACh]

  v25 = a2;
  memset_0(v30, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D429F);
  if ( a5 )
    v21 = *a5;
  else
    v21 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v30);
  if ( !HampClientIsActive(a1) )
  {
    v11 = -1073741661;
    goto LABEL_9;
  }
  if ( !(unsigned int)HamSrvAreTerminateParametersValid(a3, a4, a5) )
  {
    v11 = -1073741811;
    goto LABEL_9;
  }
  if ( a3 != 2 )
  {
    v15 = a6 == 0;
    goto LABEL_19;
  }
  v19 = a4 & 0xFFFFFF00;
  if ( (a4 & 0xFFFFFF00) != 0x100 && v19 != 3328 )
  {
    v15 = v19 == 5120;
LABEL_19:
    if ( !v15 )
    {
      v11 = -1073741776;
      goto LABEL_9;
    }
  }
  if ( (a7 & 1) == a7 )
  {
    v16 = HampActFindForClient(a1, a2);
    v17 = v16;
    if ( v16 )
    {
      v18 = HampActTerminate((__int64)v16, a3, a4, a5, a6, a7);
      CemRcObjectDereference(v17);
      v11 = 0;
      if ( v18 < 0 )
        v11 = v18;
    }
    else
    {
      v11 = -1073741275;
    }
  }
  else
  {
    v11 = -1073741580;
  }
LABEL_9:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
  {
    v22 = a7;
    v23 = a6;
    if ( a5 )
      v12 = *a5;
    else
      v12 = 0LL;
    v58 = 0;
    v55 = 0;
    v52 = 0;
    v49 = 0;
    v46 = 0;
    v43 = 0;
    v40 = 0;
    v37 = 0;
    v26 = v12;
    v27 = v21;
    v28 = v25;
    v56 = &v22;
    v53 = &v23;
    v50 = &v26;
    v47 = &v27;
    v44 = &v24;
    v41 = &v20;
    v38 = &v28;
    v35 = &v25;
    *(_DWORD *)&EventDescriptor.Level = 516;
    v42 = 1;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    v57 = 4;
    v54 = 4;
    v51 = 8;
    v48 = 8;
    v45 = 4;
    v39 = 8;
    v36 = 4;
    EventDescriptor.Keyword = 8LL;
    v24 = a4;
    v20 = a3;
    LODWORD(v25) = v11;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    v13 = *(unsigned __int16 *)off_1800E72B8;
    v34 = 1;
    UserData.Size = v13;
    v32 = &unk_1800D363E;
    UserData.Reserved = 2;
    v33 = 138;
    LODWORD(v21) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
  return v11;
}
