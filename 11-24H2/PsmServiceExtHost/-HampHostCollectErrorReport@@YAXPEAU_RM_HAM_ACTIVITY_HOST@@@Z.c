/*
 * XREFs of ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180038178
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800253A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@35@Z @ 0x180001B5C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 *     ?HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006B08 (-HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HamAcquireEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006B20 (-HamAcquireEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x1800071A0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026DF0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180036B70 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180056FC4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x18005E7BC (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     ?HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@Z @ 0x18006D668 (-HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180090FDC (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x180091878 (-HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z.c)
 */

void __fastcall HampHostCollectErrorReport(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v1; // eax
  struct _RM_ACTIVITY_HOST *v2; // r12
  int v3; // esi
  __int64 v4; // r14
  __int64 v5; // rdi
  int v6; // r13d
  int IsSuspendWaiter; // eax
  int v9; // r8d
  int v10; // r9d
  int v11; // ecx
  int v12; // edx
  int v13; // r15d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // r8d
  int v18; // r9d
  int v19; // ecx
  int v20; // esi
  unsigned int v21; // edi
  int ProcessesInfo; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r8d
  int v28; // r9d
  void *v29; // rdi
  HANDLE *v30; // rsi
  __int64 v31; // [rsp+60h] [rbp-19h] BYREF
  __int64 v32; // [rsp+68h] [rbp-11h] BYREF
  const wchar_t *v33; // [rsp+70h] [rbp-9h] BYREF
  void *v34[2]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v35; // [rsp+88h] [rbp+Fh]
  int v36; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v37; // [rsp+E8h] [rbp+6Fh] BYREF
  int v38; // [rsp+F0h] [rbp+77h] BYREF
  int v39; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = *((unsigned __int16 *)a1 + 332);
  v2 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64);
  v36 = 0;
  v3 = 0;
  LODWORD(v4) = 0;
  LODWORD(v37) = v1;
  v38 = *((_DWORD *)a1 + 214);
  v5 = 1272LL;
  v35 = 0LL;
  if ( a1 )
    v5 = (__int64)a1 + 1208;
  v6 = 1;
  *(_OWORD *)v34 = 0LL;
  if ( (unsigned int)dword_1800E82B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E82B0,
      byte_1800D384A);
  if ( (*((_DWORD *)a1 + 166) & 0x30000) != 0x20000LL )
  {
    v20 = v37;
    goto LABEL_36;
  }
  IsSuspendWaiter = HampHostIsSuspendWaiter(a1);
  v11 = *((_DWORD *)a1 + 140);
  v12 = IsSuspendWaiter;
  v13 = 256;
  if ( v11 == 2 )
  {
    v14 = *((_DWORD *)a1 + 301);
    if ( (v14 & 0x80u) != 0 )
    {
      if ( (v14 & 0x100) != 0 )
        goto LABEL_16;
      *(_DWORD *)v5 |= 0x100u;
    }
    else
    {
      *(_DWORD *)v5 |= 0x180u;
    }
    goto LABEL_15;
  }
  if ( v11 == 4 && (*((_BYTE *)a1 + 1204) & 0x40) == 0 )
  {
    *(_DWORD *)v5 |= 0x40u;
LABEL_15:
    v3 = 1;
  }
LABEL_16:
  HampHostCheckUpdateSuspendWaitState(a1, v12, v9, v10);
  HamReleaseEnforcementLocks(a1);
  v6 = 0;
  if ( v3 )
  {
    v15 = *((_DWORD *)a1 + 140);
    if ( v15 == 2 )
    {
      RmpSystemChangePsmApplicationState(v2, 2LL, 0LL);
    }
    else if ( v15 == 4 )
    {
      RmpSystemFreezeHostJob(v2, 1u);
    }
    HamAcquireEnforcementLocks(a1);
    v16 = HampHostIsSuspendWaiter(a1);
    *(_DWORD *)v5 = 0;
    v19 = *((_DWORD *)a1 + 140);
    if ( v19 == 2 )
    {
      *((_DWORD *)a1 + 301) |= 0x180u;
    }
    else if ( v19 == 4 )
    {
      *((_DWORD *)a1 + 301) |= 0x40u;
    }
    HampHostCheckUpdateSuspendWaitState(a1, v16, v17, v18);
    HamReleaseEnforcementLocks(a1);
  }
  v20 = v37;
  v21 = v37 & 0xFFFFFF00;
  if ( (int)HampSystemCheckReportGameCoreHang(a1, (unsigned int)v37 & 0xFFFFFF00, &v36) >= 0 )
  {
    if ( v36 )
      goto LABEL_36;
    ProcessesInfo = RmHamHostGetProcessesInfo(v2, 0, 1, (struct _HAM_PROCESS_SNAPSHOT *)v34);
    LODWORD(v4) = v35;
    if ( ProcessesInfo >= 0 )
    {
      if ( (int)HampSystemReportHang(v23, v34[1], (unsigned int)v35, v21, v38) >= 0 )
        goto LABEL_36;
      v13 = 768;
    }
    else
    {
      v13 = 512;
    }
  }
  if ( (unsigned int)dword_1800E82B0 <= 4 )
    goto LABEL_39;
  if ( (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 0x400000000008LL) )
  {
    LOBYTE(v36) = *((_BYTE *)a1 + 560);
    v32 = *((_QWORD *)a1 - 4);
    v33 = (const wchar_t *)((char *)a1 + 24);
    v31 = 0x1000000LL;
    LODWORD(v37) = v20;
    v38 = v13;
    v39 = v25;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v24,
      (__int64)&unk_1800D38DE,
      v25,
      v26,
      (__int64)&v39,
      (__int64)&v38,
      &v33,
      (__int64)&v32,
      (__int64)&v36,
      (__int64)&v37,
      (__int64)&v31);
  }
LABEL_36:
  if ( (unsigned int)dword_1800E82B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 64LL) )
  {
    v37 = *((_QWORD *)a1 - 4);
    v36 = v20;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800E82B0,
      (unsigned int)&unk_1800D3B02,
      v27,
      v28,
      (__int64)&v37,
      (__int64)&v36);
  }
LABEL_39:
  v29 = v34[0];
  if ( (_DWORD)v4 )
  {
    v30 = (HANDLE *)v34[0];
    v4 = (unsigned int)v4;
    do
    {
      NtClose(*v30++);
      --v4;
    }
    while ( v4 );
  }
  if ( v29 )
    HampFreeHeap(v29);
  if ( v34[1] )
    HampFreeHeap(v34[1]);
  if ( !v6 )
    HamAcquireEnforcementLocks(a1);
  *((_QWORD *)a1 + 83) &= ~0x8000000000000uLL;
}
