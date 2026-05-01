/*
 * XREFs of ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18003D1E8
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003EC6C (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C460 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C4BC (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     RmpWnfCreateStateNameForClient @ 0x18002EBE8 (RmpWnfCreateStateNameForClient.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x18003D0AC (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ?HampClientTypeReceivesCallbacks@@YAKW4_HAM_CLIENT_TYPE@@@Z @ 0x18003D5AC (-HampClientTypeReceivesCallbacks@@YAKW4_HAM_CLIENT_TYPE@@@Z.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x18003D5F0 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005627C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x1800662D0 (RmpWnfAllocateAndInitializePendingCallbackList.c)
 *     ?HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18006A84C (-HampClientSerializeActivities@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_CONNECTION_PARAMETER.c)
 *     ?HampClientValidateTokens@@YAJPEAX0@Z @ 0x180083924 (-HampClientValidateTokens@@YAJPEAX0@Z.c)
 */

__int64 __fastcall HampClientStart(
        struct _HAM_CLIENT_CONTEXT *a1,
        PSID pSid,
        HANDLE TokenHandle,
        unsigned int a4,
        unsigned int a5,
        struct _HAM_CLIENT_CONNECTION_PARAMETERS *a6)
{
  int v10; // r12d
  void *v11; // rdx
  int v12; // ecx
  unsigned int v13; // esi
  void *v14; // rcx
  int StateNameForClient; // edi
  void *v16; // rcx
  struct _HAM_CLIENT_CONNECTION_PARAMETERS *v17; // rbp
  int v18; // eax
  __int64 v19; // rcx
  int v21; // esi
  int v22; // r8d
  int v23; // r9d
  int v24; // ecx
  int v25; // ecx
  int v26; // r8d
  int v27; // ecx
  int v28; // [rsp+30h] [rbp-38h] BYREF
  int v29[3]; // [rsp+34h] [rbp-34h] BYREF
  int v30; // [rsp+70h] [rbp+8h] BYREF

  v30 = 0;
  v10 = 0;
  HampClientAcquireLockExclusive(a1);
  if ( *((_DWORD *)a1 + 50) )
  {
    if ( WaitForSingleObject(*((HANDLE *)a1 + 24), 0) )
    {
      StateNameForClient = -1073741504;
      v21 = 256;
LABEL_28:
      HampClientReleaseLockExclusive(a1);
      if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
      {
        v28 = v21;
        v29[0] = StateNameForClient;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1800E72B0,
          (unsigned int)&unk_1800D6048,
          v22,
          v23,
          (__int64)v29,
          (__int64)&v28);
      }
      return (unsigned int)StateNameForClient;
    }
    v30 = *((_DWORD *)a1 + 54);
    do
    {
      HampClientReleaseLockExclusive(a1);
      RtlWaitOnAddress((char *)a1 + 216, &v30, 4LL);
      HampClientAcquireLockExclusive(a1);
    }
    while ( *((_DWORD *)a1 + 54) == v30 );
    if ( *((_DWORD *)a1 + 50) )
    {
      StateNameForClient = -1073741504;
      v21 = 512;
      goto LABEL_28;
    }
  }
  if ( *((_DWORD *)a1 + 40) != a5 )
  {
    StateNameForClient = -1073741504;
    v21 = 768;
    goto LABEL_28;
  }
  v11 = (void *)*((_QWORD *)a1 + 23);
  if ( v11 )
  {
    StateNameForClient = HampClientValidateTokens(TokenHandle, v11);
    if ( StateNameForClient < 0 )
    {
      v21 = 1024;
      goto LABEL_28;
    }
  }
  if ( !(unsigned int)HampClientTypeReceivesCallbacks(*((unsigned __int8 *)a1 + 164)) || (*((_BYTE *)a1 + 144) & 1) != 0 )
    goto LABEL_5;
  if ( !v12 )
    goto LABEL_54;
  v24 = v12 - 1;
  if ( !v24 )
    goto LABEL_54;
  v25 = v24 - 1;
  if ( !v25 )
  {
    v13 = 64;
    v26 = 1;
    goto LABEL_40;
  }
  v27 = v25 - 1;
  if ( !v27 )
  {
LABEL_54:
    v13 = 64;
    goto LABEL_55;
  }
  if ( v27 != 3 )
  {
LABEL_5:
    v13 = 0;
    goto LABEL_6;
  }
  v13 = 544;
LABEL_55:
  v26 = 0;
LABEL_40:
  StateNameForClient = RmpWnfCreateStateNameForClient(pSid, v13, v26, (__int64)a1 + 120);
  if ( StateNameForClient < 0 )
  {
    v21 = 1280;
    goto LABEL_28;
  }
  StateNameForClient = RmpWnfAllocateAndInitializePendingCallbackList((char *)a1 + 128);
  if ( StateNameForClient < 0 )
  {
    v21 = 1536;
    goto LABEL_28;
  }
LABEL_6:
  v14 = (void *)*((_QWORD *)a1 + 23);
  if ( v14 )
    NtClose(v14);
  if ( TokenHandle )
  {
    StateNameForClient = RmpSystemDuplicateHandle(TokenHandle, 8u, (PHANDLE)a1 + 23);
    if ( StateNameForClient < 0 )
    {
      v21 = 1792;
      goto LABEL_28;
    }
  }
  v16 = (void *)*((_QWORD *)a1 + 24);
  if ( v16 )
    NtClose(v16);
  if ( a4 )
  {
    StateNameForClient = RmpSystemOpenProcess((void **)a1 + 24, 0x101000u, a4);
    if ( StateNameForClient < 0 )
    {
      v21 = 2048;
      goto LABEL_28;
    }
  }
  v17 = a6;
  if ( !*((_BYTE *)a1 + 164) )
  {
    StateNameForClient = HampClientSerializeActivities(a1, a6);
    if ( StateNameForClient < 0 )
    {
      v21 = 2304;
      goto LABEL_28;
    }
  }
  *((_DWORD *)a1 + 44) = a4;
  *((_DWORD *)a1 + 50) = 2 - (*((_WORD *)a1 + 110) != 0);
  v18 = *((_DWORD *)a1 + 36);
  if ( (v18 & 2) != 0 )
  {
    v10 = 1;
    *((_DWORD *)a1 + 36) = v18 & 0xFFFFFFFD;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  if ( v17 && v13 )
    *((_QWORD *)v17 + 3) = *((_QWORD *)a1 + 15);
  HampClientReleaseLockExclusive(a1);
  v19 = *((_QWORD *)a1 + 26);
  if ( v19 )
    TpWaitForTimer(v19, 1LL);
  StateNameForClient = 0;
  if ( v10 )
    CemRcObjectDereference(a1);
  return (unsigned int)StateNameForClient;
}
