/*
 * XREFs of CreateServiceSid @ 0x14040D708
 * Callers:
 *     DxgkHandleCcdDatabaseRequests @ 0x1402664B4 (DxgkHandleCcdDatabaseRequests.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140062824 (--1-$unique_storage@U-$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1-FreePoolWit.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

_QWORD *__fastcall CreateServiceSid(_QWORD *a1, ULONG *a2)
{
  ULONG v4; // eax
  __int64 v5; // r9
  void *Pool2; // rax
  void *v7; // rbx
  ULONG i; // ebp
  ULONG v9; // edi
  PULONG v10; // rax
  void *v12; // [rsp+20h] [rbp-38h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+28h] [rbp-30h] BYREF

  v4 = RtlLengthRequiredSid(6u);
  Pool2 = (void *)ExAllocatePool2(256LL, v4, 1265072196LL, v5);
  v12 = Pool2;
  v7 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    if ( RtlInitializeSid(Pool2, &IdentifierAuthority, 6u) >= 0 )
    {
      for ( i = 0; i < 6; ++i )
      {
        v9 = *a2;
        v10 = RtlSubAuthoritySid(v7, i);
        ++a2;
        *v10 = v9;
      }
      v12 = 0LL;
      *a1 = v7;
    }
    else
    {
      *a1 = 0LL;
    }
    __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&v12);
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
