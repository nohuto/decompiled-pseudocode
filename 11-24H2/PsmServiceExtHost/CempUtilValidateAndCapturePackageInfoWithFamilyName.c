/*
 * XREFs of CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x18003F3A4
 * Callers:
 *     CempUtilValidateAndCapturePackageInfo @ 0x18003F254 (CempUtilValidateAndCapturePackageInfo.c)
 *     ?HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x180068998 (-HamSrvGetInterruptiveUIStateForAumid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18006CC48 (-HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SU.c)
 *     ?HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18007FA58 (-HamSrvGetPackageInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 * Callees:
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall CempUtilValidateAndCapturePackageInfoWithFamilyName(
        __int64 a1,
        void *a2,
        unsigned int a3,
        int a4,
        __int64 a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // rdx
  _WORD *v12; // rcx
  __int16 v13; // ax
  _WORD *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  _OWORD v26[8]; // [rsp+20h] [rbp-F8h] BYREF
  _OWORD v27[4]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-38h]
  int v29; // [rsp+E8h] [rbp-30h]

  if ( a3 >= 0xC && (v9 = 0, RtlValidSid(a2)) && RtlLengthSid(a2) == a3 )
  {
    memset_0(v26, 0, 0xCCuLL);
    v10 = a1 - (_QWORD)v26;
    v11 = 65LL;
    v12 = v26;
    do
    {
      if ( v11 == -2147483581 )
        break;
      v13 = *(_WORD *)((char *)v12 + v10);
      if ( !v13 )
        break;
      *v12++ = v13;
      --v11;
    }
    while ( v11 );
    v14 = v12 - 1;
    if ( v11 )
      v14 = v12;
    *v14 = 0;
    RtlCopySid(0x44u, (char *)v27 + 4, a2);
    v29 = a4;
    v15 = v26[1];
    *(_OWORD *)a5 = v26[0];
    v16 = v26[2];
    *(_OWORD *)(a5 + 16) = v15;
    v17 = v26[3];
    *(_OWORD *)(a5 + 32) = v16;
    v18 = v26[4];
    *(_OWORD *)(a5 + 48) = v17;
    v19 = v26[5];
    *(_OWORD *)(a5 + 64) = v18;
    v20 = v26[6];
    *(_OWORD *)(a5 + 80) = v19;
    *(_OWORD *)(a5 + 96) = v20;
    *(_OWORD *)(a5 + 112) = v26[7];
    v21 = v28;
    v22 = v27[1];
    *(_OWORD *)(a5 + 128) = v27[0];
    v23 = v27[2];
    *(_OWORD *)(a5 + 144) = v22;
    v24 = v27[3];
    *(_OWORD *)(a5 + 160) = v23;
    *(_OWORD *)(a5 + 176) = v24;
    *(_QWORD *)(a5 + 192) = v21;
    *(_DWORD *)(a5 + 200) = v29;
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v9;
}
