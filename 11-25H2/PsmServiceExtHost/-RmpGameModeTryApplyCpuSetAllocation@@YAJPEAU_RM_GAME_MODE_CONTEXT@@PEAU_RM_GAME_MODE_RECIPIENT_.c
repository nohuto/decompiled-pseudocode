/*
 * XREFs of ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008D2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005627C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180060FEC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18008B610 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 *     ?RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18008B958 (-RmpCpuSetManagerReleaseProcessRegistrationEx@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCE.c)
 *     ?RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z @ 0x18008BCF0 (-RmpCpuSetManagerSetProcessDefaultMaskForGameMode@@YAJPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@K@Z.c)
 *     ?RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z @ 0x180090FC8 (-RmpSystemSetProcessConstrainedCpuSets@@YAJPEAXE@Z.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x180091078 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 */

__int64 __fastcall RmpGameModeTryApplyCpuSetAllocation(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // ebx
  struct _RM_GAME_MODE_CONTEXT *v4; // r14
  int v5; // edi
  char v6; // r13
  HANDLE *v7; // r12
  __int64 v8; // r8
  __int64 v9; // r9
  struct _RM_CPU_SET_PROCESS_REGISTRATION *v10; // r15
  unsigned int v11; // r14d
  int v12; // r14d
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rcx
  __int64 v16; // rdx
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+198h] [rbp+98h] BYREF
  int v33; // [rsp+1A0h] [rbp+A0h] BYREF
  PVOID P; // [rsp+1A8h] [rbp+A8h] BYREF

  P = 0LL;
  v2 = 0;
  v4 = a1;
  if ( *((_DWORD *)a2 + 26) && (*((_BYTE *)a2 + 144) & 2) == 0 )
  {
    v5 = 255;
    goto LABEL_35;
  }
  v6 = 1;
  RmpAcquireGlobalLock();
  v7 = (HANDLE *)((char *)a2 + 40);
  v5 = RmpCpuSetManagerRegisterProcessWithAllocation(
         *((struct _RM_CPU_SET_MANAGER ***)v4 + 5),
         *((HANDLE *)a2 + 5),
         *((struct _RM_CPU_SET_ALLOCATION **)v4 + 15),
         &P);
  if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
  {
    v32 = *((_DWORD *)a2 + 27);
    v33 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E7278,
      byte_1800D825F,
      v8,
      v9,
      (__int64)&v33,
      (__int64)&v32);
  }
  v10 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)P;
  if ( v5 >= 0 )
  {
    v11 = *((_DWORD *)a2 + 35);
    if ( (v11 & 2) != 0 || (v11 & 1) != 0 && (*((_BYTE *)a2 + 171) & 2) == 0 )
    {
      v12 = (v11 >> 3) & 1;
      v5 = RmpCpuSetManagerSetProcessDefaultMaskForGameMode((struct _RM_CPU_SET_PROCESS_REGISTRATION *)P, v12);
      if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
      {
        v33 = *((_DWORD *)a2 + 27);
        v32 = v12;
        LODWORD(P) = v5;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1800E7278,
          byte_1800D8062,
          v13,
          v14,
          (__int64)&P,
          (__int64)&v33,
          (__int64)&v32);
      }
      if ( v5 < 0 )
      {
        v4 = a1;
        goto LABEL_27;
      }
      v2 = 1;
    }
    v4 = a1;
    v15 = &v30;
    v16 = 2LL;
    v17 = (_OWORD *)(*((_QWORD *)a1 + 15) + 104LL);
    do
    {
      v18 = v17[1];
      *(_OWORD *)v15 = *v17;
      v19 = v17[2];
      *((_OWORD *)v15 + 1) = v18;
      v20 = v17[3];
      *((_OWORD *)v15 + 2) = v19;
      v21 = v17[4];
      *((_OWORD *)v15 + 3) = v20;
      v22 = v17[5];
      *((_OWORD *)v15 + 4) = v21;
      v23 = v17[6];
      *((_OWORD *)v15 + 5) = v22;
      v24 = v17[7];
      v17 += 8;
      *((_OWORD *)v15 + 6) = v23;
      v15 += 16;
      *((_OWORD *)v15 - 1) = v24;
      --v16;
    }
    while ( v16 );
    RmpReleaseGlobalLock();
    v6 = 0;
    if ( (*((_BYTE *)a2 + 140) & 0x10) == 0 )
      goto LABEL_23;
    v5 = RmpSystemSetProcessConstrainedCpuSets(*v7, 1u);
    if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
    {
      v32 = *((_DWORD *)a2 + 27);
      v33 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1800E7278,
        byte_1800D80A9,
        v25,
        v26,
        (__int64)&v33,
        (__int64)&v32);
    }
    if ( v5 >= 0 )
    {
LABEL_23:
      if ( *((_DWORD *)a2 + 26) != 1 )
        *((_QWORD *)a2 + 15) = v30;
      *((_BYTE *)a2 + 171) |= 2u;
      v2 = 0;
      *((_QWORD *)a2 + 19) = v10;
      v10 = 0LL;
      v5 = 0;
    }
  }
LABEL_27:
  if ( v10 )
  {
    if ( !v6 )
      RmpAcquireGlobalLock();
    RmpCpuSetManagerReleaseProcessRegistrationEx((struct _RM_CPU_SET_MANAGER *)(*(_QWORD *)v4 + 680LL), v10, 1);
  }
  else if ( !v6 )
  {
    goto LABEL_33;
  }
  RmpReleaseGlobalLock();
LABEL_33:
  if ( v2 )
    v5 = RmpSystemSetProcessDefaultCpuSets(*v7, 0LL);
LABEL_35:
  if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
  {
    v32 = *((_DWORD *)a2 + 27);
    v33 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E7278,
      byte_1800D80EA,
      v27,
      v28,
      (__int64)&v33,
      (__int64)&v32);
  }
  return (unsigned int)v5;
}
