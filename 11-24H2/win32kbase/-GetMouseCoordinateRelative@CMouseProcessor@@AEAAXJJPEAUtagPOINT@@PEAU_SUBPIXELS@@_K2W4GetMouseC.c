/*
 * XREFs of ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x14018CBCC
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x14018CABC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x140053C20 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1400BAA98 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::GetMouseCoordinateRelative(
        CMouseProcessor *a1,
        int a2,
        int a3,
        struct tagPOINT *a4,
        struct _SUBPIXELS *a5,
        unsigned int a6,
        __int64 a7,
        char a8)
{
  __int64 result; // rax
  __m128i *UnionRegion; // rax
  __int64 v12; // rcx
  __m128i v13; // xmm6
  int v14; // edi
  __int64 UserSessionState; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // edi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  _OWORD v32[44]; // [rsp+48h] [rbp-C0h] BYREF
  int v33; // [rsp+360h] [rbp+258h] BYREF
  int v34; // [rsp+368h] [rbp+260h] BYREF

  v34 = a3;
  v33 = a2;
  CMouseProcessor::ApplyAccelerationToDelta(a1, a2, a3, *a4, (a8 & 2) != 0, a5, &v33, &v34);
  switch ( *((_DWORD *)a1 + 754) )
  {
    case 1:
      goto LABEL_6;
    case 2:
      a4->x -= v34;
      result = (unsigned int)v33;
      goto LABEL_7;
    case 3:
      a4->x -= v33;
      result = (unsigned int)(a4->y - v34);
      break;
    case 4:
      a4->x += v34;
      result = (unsigned int)(a4->y - v33);
      break;
    default:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2954LL);
LABEL_6:
      a4->x += v33;
      result = (unsigned int)v34;
LABEL_7:
      a4->y += result;
      goto LABEL_8;
  }
  a4->y = result;
LABEL_8:
  if ( (a8 & 4) == 0 )
  {
    UnionRegion = (__m128i *)InputConfig::Mouse::GetUnionRegion(v32);
    v12 = UnionRegion->m128i_u32[2];
    v13 = *UnionRegion;
    LOWORD(v12) = v12 - _mm_cvtsi128_si32(*UnionRegion) - 1;
    v14 = LOWORD(a4->x) | ((unsigned __int16)v12 << 16);
    UserSessionState = W32GetUserSessionState(v12);
    v17 = W32GetUserSessionState(v16);
    v18 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v13, 12));
    *(_DWORD *)(UserSessionState + 24LL * *(unsigned int *)(v17 + 14724) + 14728) = v14;
    LOWORD(v18) = v18 - _mm_cvtsi128_si32(_mm_srli_si128(v13, 4)) - 1;
    v19 = LOWORD(a4->y) | ((unsigned __int16)v18 << 16);
    v20 = W32GetUserSessionState(v18);
    v22 = *(unsigned int *)(W32GetUserSessionState(v21) + 14724);
    *(_DWORD *)(v20 + 24 * v22 + 14732) = v19;
    v23 = W32GetUserSessionState(v22);
    v25 = W32GetUserSessionState(v24);
    v26 = a6;
    *(_DWORD *)(v23 + 24 * (*(unsigned int *)(v25 + 14724) + 614LL)) = a6;
    v27 = W32GetUserSessionState(v26);
    v29 = W32GetUserSessionState(v28);
    v30 = a7;
    *(_QWORD *)(v27 + 24LL * *(unsigned int *)(v29 + 14724) + 14744) = a7;
    LODWORD(v27) = ((unsigned __int8)*(_DWORD *)(W32GetUserSessionState(v30) + 14724) + 1) & 0x3F;
    result = W32GetUserSessionState(v31);
    *(_DWORD *)(result + 14724) = v27;
  }
  return result;
}
