/*
 * XREFs of ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x140053904
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x14018CABC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x14021E2F0 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140053C20 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ApiSetEditionMagnificationMousePosition @ 0x140053D10 (ApiSetEditionMagnificationMousePosition.c)
 *     ?GetPrimaryRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140053D70 (-GetPrimaryRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall CMouseProcessor::GetMouseCoordinateAbsolute(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  char v13; // si
  __int128 *UnionRegion; // rax
  __int128 v15; // xmm0
  int v16; // eax
  unsigned int v17; // edx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 UserSessionState; // rdi
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  _BYTE v32[720]; // [rsp+20h] [rbp-5E8h] BYREF
  _BYTE v33[720]; // [rsp+2F0h] [rbp-318h] BYREF
  __int128 v34; // [rsp+5C0h] [rbp-48h]

  if ( (a4 & 2) != 0 )
  {
    v13 = 1;
    UnionRegion = (__int128 *)InputConfig::Mouse::GetUnionRegion(v32);
  }
  else
  {
    v13 = 0;
    UnionRegion = (__int128 *)InputConfig::Mouse::GetPrimaryRegion(v33);
  }
  v15 = *UnionRegion;
  v34 = v15;
  v16 = a2 * (DWORD2(v15) - v15);
  *a5 = v16;
  if ( v16 < 0 )
  {
    *a6 = -(unsigned __int16)-(__int16)v16;
    v17 = -((unsigned int)-*a5 >> 16);
  }
  else
  {
    *a6 = (unsigned __int16)v16;
    v17 = (unsigned __int16)HIWORD(*a5);
  }
  v18 = a3 * (HIDWORD(v15) - DWORD1(v15));
  *a5 = v17;
  a5[1] = v18;
  if ( v18 < 0 )
  {
    a6[1] = -(unsigned __int16)-(__int16)v18;
    v19 = -((unsigned int)-a5[1] >> 16);
  }
  else
  {
    a6[1] = (unsigned __int16)v18;
    v19 = (unsigned __int16)HIWORD(a5[1]);
  }
  a5[1] = v19;
  if ( v13 )
  {
    *a5 += v15;
    a5[1] = v19 + DWORD1(v15);
  }
  *(_QWORD *)&v34 = 0LL;
  result = 0LL;
  *(_QWORD *)(a1 + 36) = 0LL;
  if ( (a9 & 1) == 0 || (a4 & 0x20) != 0 )
    result = ApiSetEditionMagnificationMousePosition(a5);
  if ( (a9 & 4) == 0 )
  {
    UserSessionState = W32GetUserSessionState(v19);
    v23 = *(unsigned int *)(W32GetUserSessionState(v22) + 14724);
    *(_DWORD *)(UserSessionState + 24 * v23 + 14728) = a2 | 0xFFFF0000;
    v24 = W32GetUserSessionState(v23);
    v26 = *(unsigned int *)(W32GetUserSessionState(v25) + 14724);
    *(_DWORD *)(v24 + 24 * v26 + 14732) = a3 | 0xFFFF0000;
    v27 = W32GetUserSessionState(v26);
    *(_DWORD *)(v27 + 24 * (*(unsigned int *)(W32GetUserSessionState(v28) + 14724) + 614LL)) = a7;
    v29 = W32GetUserSessionState(a7);
    *(_QWORD *)(v29 + 24LL * *(unsigned int *)(W32GetUserSessionState(v30) + 14724) + 14744) = a8;
    LODWORD(v29) = ((unsigned __int8)*(_DWORD *)(W32GetUserSessionState(a8) + 14724) + 1) & 0x3F;
    result = W32GetUserSessionState(v31);
    *(_DWORD *)(result + 14724) = v29;
  }
  return result;
}
