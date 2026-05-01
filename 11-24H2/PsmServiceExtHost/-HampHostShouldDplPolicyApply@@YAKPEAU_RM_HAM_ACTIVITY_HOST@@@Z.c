/*
 * XREFs of ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180047074
 * Callers:
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002B258 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180046E98 (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@55@Z @ 0x180046F38 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U3@@-$_tlgWriteTe.c)
 *     ?HampSystemEdpIsManaged@@YAKXZ @ 0x1800472F0 (-HampSystemEdpIsManaged@@YAKXZ.c)
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x18004733C (-HampSystemCdplIsManaged@@YAKXZ.c)
 *     ?HampSystemDplIsAppAllowedToRun@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x1800901CC (-HampSystemDplIsAppAllowedToRun@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampSystemEdpGetEnterpriseContext@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAUEDP_ENTERPRISE_CONTEXT@@@Z @ 0x180090274 (-HampSystemEdpGetEnterpriseContext@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAUEDP_ENTERPRISE_CONTEXT@.c)
 *     ?HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z @ 0x1800902F0 (-HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z.c)
 *     ?HampSystemImpersonateUserForHost@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18009051C (-HampSystemImpersonateUserForHost@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostShouldDplPolicyApply(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // r13d
  unsigned int IsManaged; // ebx
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // r14
  char v8; // bl
  unsigned __int8 v9; // di
  __int64 v11; // rcx
  int v12; // eax
  wchar_t *v13; // rsi
  wchar_t *v14; // rcx
  wchar_t *v15; // r12
  unsigned int i; // edi
  struct EDP_ENTERPRISE_CONTEXT *v17; // [rsp+50h] [rbp-20h] BYREF
  wchar_t *Context; // [rsp+58h] [rbp-18h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h] BYREF
  const wchar_t *v20; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v21; // [rsp+B8h] [rbp+48h] BYREF
  wchar_t *String; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int8 v23; // [rsp+C8h] [rbp+58h] BYREF

  Context = 0LL;
  v2 = 0;
  v21 = 0;
  v17 = 0LL;
  String = 0LL;
  IsManaged = HampSystemCdplIsManaged();
  v4 = HampSystemEdpIsManaged();
  if ( IsManaged )
  {
    if ( (int)HampSystemDplIsAppAllowedToRun(a1, &v21) < 0 )
    {
      v7 = 1;
      v8 = 8;
      goto LABEL_5;
    }
    if ( !v21 )
    {
      v9 = 1;
      v8 = 8;
      v7 = 2;
      goto LABEL_6;
    }
    v7 = 3;
  }
  else
  {
    v7 = 0;
  }
  if ( !v4 )
  {
    v8 = 1;
LABEL_5:
    v9 = 0;
    goto LABEL_6;
  }
  if ( (int)HampSystemImpersonateUserForHost(a1) < 0 )
  {
    v8 = 0;
    goto LABEL_5;
  }
  v2 = 1;
  if ( (int)HampSystemEdpGetEnterpriseContext(a1, &v17) < 0 )
  {
    v8 = 2;
    goto LABEL_5;
  }
  v21 = 0;
  if ( (int)EdpUtilIsAppEnlightened(v17, &v21) < 0 )
  {
    v8 = 3;
    goto LABEL_5;
  }
  if ( v21 )
  {
    v8 = 4;
    goto LABEL_5;
  }
  v12 = HampSystemEdpQueryDplEnforcedPolicyOwnerIds((char *)a1 + 488, &String);
  v13 = String;
  if ( v12 >= 0 )
  {
    if ( String && *String )
    {
      v14 = String;
LABEL_32:
      v15 = wcstok_s(v14, L"|", &Context);
      if ( v15 )
      {
        for ( i = 0; ; ++i )
        {
          if ( i >= *(_DWORD *)(*(_QWORD *)v17 + 4LL) )
          {
            v14 = 0LL;
            goto LABEL_32;
          }
          if ( !_wcsicmp(v15, *(const wchar_t **)(*(_QWORD *)v17 + 16LL * i + 24)) )
            break;
        }
        v9 = 1;
        v8 = 7;
        goto LABEL_42;
      }
      v8 = 8;
    }
    else
    {
      v8 = 6;
    }
  }
  else
  {
    v8 = 5;
  }
  v9 = 0;
LABEL_42:
  if ( v13 )
    EdpFree(v13);
LABEL_6:
  if ( v17 )
    EdpUtilFreeEnterpriseContext();
  if ( v2 )
    RevertToSelf();
  if ( (unsigned int)dword_1800E82B0 > 5 )
  {
    LOBYTE(v21) = v7;
    LOBYTE(String) = v8;
    v11 = 32LL;
    v23 = v9;
    if ( a1 )
      v11 = (__int64)a1 - 32;
    v19 = *(_QWORD *)v11;
    v20 = (const wchar_t *)((char *)a1 + 24);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v11,
      byte_1800D3642,
      v5,
      v6,
      &v20,
      (__int64)&v19,
      (__int64)&v23,
      (__int64)&String,
      (__int64)&v21);
  }
  return v9;
}
