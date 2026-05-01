/*
 * XREFs of ?HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z @ 0x1800902F0
 * Callers:
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180047074 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemEdpQueryDplEnforcedPolicyOwnerIds(PSID Sid, unsigned __int16 **a2)
{
  int v4; // ebx
  unsigned __int16 *v5; // rcx
  int v7; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v8; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[384]; // [rsp+40h] [rbp-C0h] BYREF

  v7 = 0;
  v8 = 0LL;
  memset_0(v10, 0, 0x176uLL);
  *(_QWORD *)&UnicodeString.Length = 24510464LL;
  UnicodeString.Buffer = (PWSTR)v10;
  RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
  v4 = EdpDplPolicyEnabledForUser(UnicodeString.Buffer, &v7);
  if ( v4 < 0 )
    goto LABEL_4;
  if ( !v7 )
  {
    *a2 = 0LL;
    v4 = 0;
LABEL_4:
    v5 = v8;
    goto LABEL_5;
  }
  v4 = EdpQueryDplEnforcedPolicyOwnerIds(UnicodeString.Buffer, &v8);
  if ( v4 < 0 )
    goto LABEL_4;
  v5 = 0LL;
  *a2 = v8;
  v4 = 0;
  v8 = 0LL;
LABEL_5:
  if ( v5 )
    EdpFree(v5);
  return (unsigned int)v4;
}
