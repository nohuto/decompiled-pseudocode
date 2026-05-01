/*
 * XREFs of ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x1800063D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x180004624 (-ArActCheckRestart@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005978 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800059C8 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180006780 (-ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800067CC (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18000682C (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180044C40 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall ArHamCallback(struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a1)
{
  struct _AR_ACTIVITY *v2; // rbx
  __int64 v3; // rsi
  int v4; // ecx
  char *v5; // r14
  char v6; // r12
  int v7; // ecx
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  char v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+31h] [rbp-CFh] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v21[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  void *v23; // [rsp+110h] [rbp+10h]
  int v24; // [rsp+118h] [rbp+18h]
  int v25; // [rsp+11Ch] [rbp+1Ch]
  int *v26; // [rsp+120h] [rbp+20h]
  int v27; // [rsp+128h] [rbp+28h]
  int v28; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+138h] [rbp+38h]
  int v31; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v32; // [rsp+140h] [rbp+40h]
  int v33; // [rsp+148h] [rbp+48h]
  int v34; // [rsp+14Ch] [rbp+4Ch]
  char *v35; // [rsp+150h] [rbp+50h]
  int v36; // [rsp+158h] [rbp+58h]
  int v37; // [rsp+15Ch] [rbp+5Ch]
  char *v38; // [rsp+160h] [rbp+60h]
  int v39; // [rsp+168h] [rbp+68h]
  int v40; // [rsp+16Ch] [rbp+6Ch]
  int *v41; // [rsp+170h] [rbp+70h]
  int v42; // [rsp+178h] [rbp+78h]
  int v43; // [rsp+17Ch] [rbp+7Ch]

  memset_0(v21, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      &dword_1800E72B0,
      &unk_1800D0F3A);
  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  v2 = (struct _AR_ACTIVITY *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)v2 + 2);
  if ( _InterlockedIncrement64((volatile signed __int64 *)v2) <= 1 )
    __fastfail(0xEu);
  v4 = *((_DWORD *)a1 + 4);
  v5 = (char *)v2 + 32;
  v6 = *((_BYTE *)v2 + 32);
  if ( !v4 )
  {
    ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)v3);
    *v5 = 2;
    ArHostClearChangeInProgress((struct _AR_ACTIVITY_HOST *)v3);
    goto LABEL_8;
  }
  v7 = v4 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)v3);
      v9 = ArActClose(v2);
      ArHostClearChangeInProgress((struct _AR_ACTIVITY_HOST *)v3);
      goto LABEL_9;
    }
    if ( v8 != 1 )
    {
      v9 = -1073741811;
      goto LABEL_9;
    }
    ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)v3);
    ArHostClearChangeInProgress((struct _AR_ACTIVITY_HOST *)v3);
    ArActDereference(v2);
LABEL_8:
    v9 = 0;
    goto LABEL_9;
  }
  ArHostWaitForAndSetChangeInProgress((struct _AR_ACTIVITY_HOST *)v3);
  v9 = HamStopActivity(
         *(_QWORD *)((*(_QWORD *)(*((_QWORD *)v2 + 2) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 80),
         *((_QWORD *)v2 + 1));
  if ( v9 >= 0 )
  {
    *v5 = 0;
    v9 = 0;
  }
  ArHostClearChangeInProgress((struct _AR_ACTIVITY_HOST *)v3);
  if ( v9 >= 0 )
  {
    v9 = ArActCheckRestart(v2);
    if ( (unsigned int)dword_1800E72B0 > 4
      && (qword_1800E72C0 & 0x40) != 0
      && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
    {
      v17 = *((_QWORD *)v2 + 1);
      v15 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800E72B0,
        (unsigned int)&unk_1800D0EE6,
        v11,
        v12,
        (__int64)&v15,
        (__int64)&v17);
    }
  }
LABEL_9:
  RtlWakeAddressAll((char *)v2 + 32);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
  {
    v10 = *((_DWORD *)a1 + 4);
    v43 = 0;
    v40 = 0;
    v37 = 0;
    v34 = 0;
    v31 = 0;
    v28 = 0;
    v15 = v10;
    v14 = *v5;
    v18 = *(_QWORD *)(v3 + 584);
    v19 = *(_QWORD *)a1;
    v41 = &v15;
    v38 = &v13;
    v35 = &v14;
    v32 = &v18;
    v29 = &v19;
    v26 = &v16;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    v42 = 4;
    v33 = 8;
    v30 = 8;
    v27 = 4;
    EventDescriptor.Keyword = 8LL;
    v13 = v6;
    v16 = v9;
    v39 = 1;
    v36 = 1;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v23 = &unk_1800D0F63;
    UserData.Reserved = 2;
    v24 = 78;
    v25 = 1;
    LODWORD(v17) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
  }
  ArActDereference(v2);
  CempLockTrackerClearForThread(ArLockTrackerId);
}
