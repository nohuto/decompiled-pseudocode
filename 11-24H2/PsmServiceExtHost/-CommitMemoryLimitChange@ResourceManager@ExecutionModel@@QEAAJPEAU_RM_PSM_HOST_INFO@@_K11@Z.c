/*
 * XREFs of ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K11@Z @ 0x180023D68
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180024340 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x18005DDB8 (-RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z.c)
 * Callees:
 *     ??R?$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z @ 0x180018940 (--R-$hash@U_RM_PSM_HOST_INFO@@@utl@@QEBA_KAEBU_RM_PSM_HOST_INFO@@@Z.c)
 *     ??R?$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z @ 0x18005DFC4 (--R-$equal_to@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NAEBU_RM_PSM_HOST_INFO@@0@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@444@Z @ 0x180066D74 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CommitMemoryLimitChange(
        ExecutionModel::ResourceManager *this,
        struct _RM_PSM_HOST_INFO *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // r15
  int v15; // ebx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rcx
  int v22; // [rsp+50h] [rbp-41h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-39h] BYREF
  __int64 v24; // [rsp+60h] [rbp-31h] BYREF
  __int64 v25; // [rsp+68h] [rbp-29h] BYREF
  __int64 v26; // [rsp+70h] [rbp-21h] BYREF
  __int128 v27; // [rsp+78h] [rbp-19h] BYREF
  unsigned __int64 v28; // [rsp+88h] [rbp-9h]

  v27 = 0LL;
  v28 = 0LL;
  if ( *((_QWORD *)this + 23) )
  {
    v9 = utl::hash<_RM_PSM_HOST_INFO>::operator()((__int64)this, (unsigned __int64)a2);
    LOBYTE(v10) = *((_BYTE *)this + 200);
    v11 = v9;
    v12 = *((_QWORD *)this + 23) + 16 * (v9 & ((8LL << v10) - 1));
    v13 = *(_QWORD **)v12;
    if ( *(_QWORD *)v12 )
    {
      v14 = **(_QWORD ***)(v12 + 8);
      while ( v13 != v14 )
      {
        if ( v13[2] >= v11 )
        {
          if ( v13[2] > v11 )
            break;
          if ( (unsigned __int8)utl::equal_to<_RM_PSM_HOST_INFO>::operator()(v10, a2, v13 + 3) )
          {
            if ( v13 == (_QWORD *)((char *)this + 168) )
              break;
            v17 = v13[73];
            v28 = a5;
            *(_QWORD *)&v27 = a3;
            *((_QWORD *)&v27 + 1) = a4;
            v18 = RtlPublishWnfStateData(v17, 0LL, &v27, 24LL, 0LL);
            v15 = v18;
            if ( (unsigned int)dword_1800E82B0 > 5 )
            {
              v21 = *((_QWORD *)a2 + 68);
              v22 = v18;
              v23 = a5;
              v24 = a4;
              v25 = a3;
              v26 = v21;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                v21,
                (unsigned int)&unk_1800D78C1,
                v19,
                v20,
                (__int64)&v22,
                (__int64)&v26,
                (__int64)&v25,
                (__int64)&v24,
                (__int64)&v23);
            }
            if ( v15 >= 0 )
              break;
            return (unsigned int)v15;
          }
        }
        v13 = (_QWORD *)*v13;
      }
    }
  }
  return 0;
}
