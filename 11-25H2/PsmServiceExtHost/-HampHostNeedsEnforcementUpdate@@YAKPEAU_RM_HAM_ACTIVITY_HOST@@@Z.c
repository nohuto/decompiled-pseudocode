/*
 * XREFs of ?HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029290
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002A900 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180029420 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     memcmp_0 @ 0x1800A77F6 (memcmp_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostNeedsEnforcementUpdate(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int128 v5; // xmm1
  struct _HAM_ACTIVITY *v7; // [rsp+30h] [rbp-59h] BYREF
  __int128 v8; // [rsp+38h] [rbp-51h] BYREF
  __int128 v9; // [rsp+48h] [rbp-41h]
  _OWORD Buf2[2]; // [rsp+58h] [rbp-31h] BYREF
  _OWORD Buf1[2]; // [rsp+78h] [rbp-11h] BYREF
  __int128 v12; // [rsp+98h] [rbp+Fh] BYREF
  __int128 v13; // [rsp+A8h] [rbp+1Fh]
  _OWORD v14[2]; // [rsp+B8h] [rbp+2Fh] BYREF

  v1 = *((_QWORD *)a1 + 83);
  v2 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  memset(v14, 0, sizeof(v14));
  v12 = 0LL;
  v13 = 0LL;
  if ( (v1 & 0x40000000000000LL) != 0 )
    return 1LL;
  if ( (v1 & 0x20000000000000LL) != 0 )
    return 1LL;
  HampHostComputeStaticEnforcementSettings(
    a1,
    (struct _RM_ENFORCEMENT_SETTINGS *)&v8,
    (struct _RM_COMMIT_THRESHOLDS *)v14,
    (struct _RM_COMMIT_THRESHOLDS *)&v12,
    &v7);
  if ( (*((_QWORD *)a1 + 83) & 0x80000000000000LL) != 0
    && (SDWORD2(v9) >= 2 || (BYTE12(v9) & 0x70) != 0 || (BYTE12(v9) & 8) != 0) )
  {
    return 1LL;
  }
  if ( *((struct _HAM_ACTIVITY **)a1 + 127) != v7 )
    return 1LL;
  v4 = 1192LL;
  if ( a1 )
    v4 = (__int64)a1 + 1128;
  v5 = *(_OWORD *)(v4 + 16);
  Buf1[0] = 0uLL;
  Buf1[1] = v5;
  Buf2[0] = 0uLL;
  Buf2[1] = v9;
  if ( memcmp_0(Buf1, Buf2, 0x20uLL) || v13 != __PAIR128__(*((_QWORD *)a1 + 108), *((_QWORD *)a1 + 109)) )
    return 1LL;
  if ( memcmp_0(v14, (char *)a1 + 888, 0x20uLL) )
    return 1;
  return v2;
}
