/*
 * XREFs of ?HampSystemDplIsAppAllowedToRun@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x18008FD6C
 * Callers:
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800470F4 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemDplIsAppAllowedToRun(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  int IsAppAllowedToRun; // eax
  int v6; // [rsp+20h] [rbp-128h] BYREF
  int v7[3]; // [rsp+24h] [rbp-124h] BYREF
  _BYTE v8[256]; // [rsp+30h] [rbp-118h] BYREF

  v7[0] = 256;
  v3 = 0;
  v6 = 0;
  PsmGetPackageFullNameFromKey((char *)a1 + 24, v8, v7);
  IsAppAllowedToRun = CdplIsAppAllowedToRun(v8, &v6);
  if ( IsAppAllowedToRun < 0 )
    return IsAppAllowedToRun | 0xC0000000;
  else
    *a2 = v6 != 0;
  return v3;
}
