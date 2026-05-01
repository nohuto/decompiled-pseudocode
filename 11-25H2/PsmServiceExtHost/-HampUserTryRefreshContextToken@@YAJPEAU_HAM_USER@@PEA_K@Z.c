/*
 * XREFs of ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180037EB8
 * Callers:
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025E50 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampSystemQueryUserContextToken@@YAJKPEAXPEA_K@Z @ 0x180037BEC (-HampSystemQueryUserContextToken@@YAJKPEAXPEA_K@Z.c)
 *     ?HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180037FC8 (-HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180038138 (-HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x180053980 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVal@$07@@U3@@-$_tlg.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 */

__int64 __fastcall HampUserTryRefreshContextToken(struct _HAM_USER *a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  char *v3; // r15
  ULONG v6; // r12d
  __int64 v7; // rsi
  int v8; // edi
  unsigned __int64 v9; // rax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h] BYREF
  char *v16; // [rsp+60h] [rbp-10h] BYREF
  ULONG v17; // [rsp+B0h] [rbp+40h] BYREF
  int v18; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int64 v19; // [rsp+C8h] [rbp+58h] BYREF

  v2 = *((_QWORD *)a1 + 20);
  v3 = (char *)a1 + 88;
  v19 = 0LL;
  v6 = *(_DWORD *)(v2 + 88);
  HampUserAcquireLockExclusive(a1);
  while ( 1 )
  {
    v7 = *((_QWORD *)a1 + 23);
    HampUserReleaseLockExclusive(a1);
    v8 = HampSystemQueryUserContextToken(v6, v3, &v19);
    if ( v8 < 0 )
      break;
    HampUserAcquireLockExclusive(a1);
    if ( v7 == *((_QWORD *)a1 + 23) )
    {
      v9 = v19;
      *((_DWORD *)a1 + 48) |= 2u;
      *((_QWORD *)a1 + 23) = v9;
      HampUserReleaseLockExclusive(a1);
      v8 = 0;
      *a2 = v19;
      break;
    }
  }
  if ( (unsigned int)dword_1800E72B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 8LL) )
  {
    v15 = *a2;
    v14 = v7;
    v16 = v3;
    v17 = v6;
    v18 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v10,
      (unsigned int)&unk_1800D637C,
      v11,
      v12,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14);
  }
  return (unsigned int)v8;
}
