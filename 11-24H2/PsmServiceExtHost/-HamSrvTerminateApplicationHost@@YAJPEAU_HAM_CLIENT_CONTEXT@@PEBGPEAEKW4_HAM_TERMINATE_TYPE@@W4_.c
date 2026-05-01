/*
 * XREFs of ?HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180057850
 * Callers:
 *     ?HampInProcTerminateApplicationHost@@YAJPEAXPEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180071DA0 (-HampInProcTerminateApplicationHost@@YAJPEAXPEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REA.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007744 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800090C0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009D50 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x18001E7A4 (-HampAppTryReferenceMixedHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800363B8 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA04 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180057BA0 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180057CEC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_tlgWrapperByVa.c)
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x1800583EC (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateApplicationHost(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        signed int a5,
        unsigned int a6,
        _QWORD *a7)
{
  const unsigned __int16 *v8; // r14
  char *v11; // r15
  int v12; // ebx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  struct _HAM_APPLICATION *v17; // rax
  struct _HAM_APPLICATION *v18; // r14
  struct _RM_HAM_ACTIVITY_HOST *v19; // rax
  __int64 v20; // rdi
  struct _HAM_ACTIVITY *FirstActivity; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  _BYTE v24[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-ACh] BYREF
  const unsigned __int16 *v26; // [rsp+58h] [rbp-A8h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  char *v28; // [rsp+68h] [rbp-98h] BYREF
  const unsigned __int16 *v29; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[144]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[464]; // [rsp+110h] [rbp+10h] BYREF
  char v32; // [rsp+2E0h] [rbp+1E0h] BYREF

  v26 = a2;
  v8 = a2;
  memset_0(v30, 0, 0x88uLL);
  memset_0(v31, 0, 0x218uLL);
  v25 = 0;
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E82B0,
      byte_1800D524C);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v30);
  v11 = (char *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *(unsigned __int8 *)(a1 + 164) + 1196);
  v12 = HampAppInfoValidateAndCapture(v8, a3, a4, *(_DWORD *)(a1 + 168), (struct _HAM_APPLICATION_INFO *)v31);
  if ( v12 < 0 )
    goto LABEL_5;
  v11 = &v32;
  if ( (unsigned int)(a5 - 1) > 2 || a6 - 1 > 0x1AFE || a7 && !*a7 )
  {
    v12 = -1073741811;
    goto LABEL_5;
  }
  v17 = HampAppFind(
          (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL)
                                          - 48LL * *(unsigned __int8 *)(a1 + 164)
                                          - 16),
          (struct _HAM_APPLICATION_INFO *)v31);
  v18 = v17;
  if ( !v17 )
  {
    v12 = -1073741275;
    goto LABEL_17;
  }
  v19 = HampAppTryReferenceMixedHost(v17);
  v20 = (__int64)v19;
  if ( !v19 )
  {
    v12 = -1073741275;
    goto LABEL_37;
  }
  HampHostAcquireLockExclusiveEx(v19, 0);
  FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)v20);
  while ( 1 )
  {
    if ( !FirstActivity )
    {
      v12 = -1073741275;
      goto LABEL_35;
    }
    if ( *((_QWORD *)FirstActivity + 64) == *(_QWORD *)(v20 + 816)
      && *((_BYTE *)FirstActivity + 562) != 4
      && (*((_DWORD *)FirstActivity + 28) & 0x10000) != 0 )
    {
      break;
    }
    v22 = *((_QWORD *)FirstActivity + 12);
    v23 = *((_QWORD *)FirstActivity + 10);
    FirstActivity = 0LL;
    if ( v22 != v23 + 608 )
      FirstActivity = (struct _HAM_ACTIVITY *)(v22 - 96);
  }
  v12 = HampHostQueueTerminateEx(v20, a5, a6, (struct _HAM_CLIENT_CONTEXT *)a1, 1, 0, a7, &v25);
  if ( v12 < 0 )
  {
LABEL_35:
    HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)v20);
    goto LABEL_36;
  }
  HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)v20);
  if ( v25 )
    HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(v20 + 704));
  v12 = 0;
LABEL_36:
  RmHamHostDereference((struct _RM_HAM_ACTIVITY_HOST *)v20);
LABEL_37:
  CemRcObjectDereference(v18);
LABEL_17:
  v8 = v26;
LABEL_5:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v27 = *(_DWORD *)(a1 + 168);
    v25 = a6;
    v24[0] = a5;
    v28 = v11;
    v29 = v8;
    LODWORD(v26) = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v13,
      (unsigned int)&unk_1800D4C78,
      v14,
      v15,
      (__int64)&v26,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)v24,
      (__int64)&v25);
  }
  return (unsigned int)v12;
}
