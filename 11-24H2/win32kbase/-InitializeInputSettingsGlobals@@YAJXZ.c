/*
 * XREFs of ?InitializeInputSettingsGlobals@@YAJXZ @ 0x14023D9B4
 * Callers:
 *     ?InitializeInputGlobals@@YAJXZ @ 0x14023D618 (-InitializeInputGlobals@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall InitializeInputSettingsGlobals(__int64 a1)
{
  __int64 v1; // rdi
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int64 result; // rax
  __int128 v5; // xmm1
  __int128 v6; // [rsp+28h] [rbp-E0h]
  __int128 Src_8; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v8; // [rsp+48h] [rbp-C0h]
  __int128 v9; // [rsp+58h] [rbp-B0h]
  const wchar_t *v10; // [rsp+68h] [rbp-A0h]
  __int64 v11; // [rsp+70h] [rbp-98h]
  const wchar_t *v12; // [rsp+78h] [rbp-90h]
  __int64 v13; // [rsp+80h] [rbp-88h]
  const wchar_t *v14; // [rsp+88h] [rbp-80h]
  int v15; // [rsp+90h] [rbp-78h]
  int v16; // [rsp+94h] [rbp-74h]
  const wchar_t *v17; // [rsp+98h] [rbp-70h]
  int v18; // [rsp+A0h] [rbp-68h]
  int v19; // [rsp+A4h] [rbp-64h]
  const wchar_t *v20; // [rsp+A8h] [rbp-60h]
  __int64 v21; // [rsp+B0h] [rbp-58h]
  const wchar_t *v22; // [rsp+B8h] [rbp-50h]
  int v23; // [rsp+C0h] [rbp-48h]
  int v24; // [rsp+C4h] [rbp-44h]
  const wchar_t *v25; // [rsp+C8h] [rbp-40h]
  int v26; // [rsp+D0h] [rbp-38h]
  int v27; // [rsp+D4h] [rbp-34h]
  const wchar_t *v28; // [rsp+D8h] [rbp-30h]
  const wchar_t *v29; // [rsp+E0h] [rbp-28h]
  const wchar_t *v30; // [rsp+E8h] [rbp-20h]
  unsigned __int64 v31; // [rsp+F0h] [rbp-18h]
  const wchar_t *v32; // [rsp+F8h] [rbp-10h]
  int v33; // [rsp+100h] [rbp-8h]
  int v34; // [rsp+104h] [rbp-4h]
  const wchar_t *v35; // [rsp+108h] [rbp+0h]
  __int64 v36; // [rsp+110h] [rbp+8h]
  const wchar_t *v37; // [rsp+118h] [rbp+10h]
  __int64 v38; // [rsp+120h] [rbp+18h]
  const wchar_t *v39; // [rsp+128h] [rbp+20h]
  __int64 v40; // [rsp+130h] [rbp+28h]

  *((_QWORD *)&Src_8 + 1) = 0LL;
  v29 = 0LL;
  v1 = W32GetUserSessionState(a1) + 17392;
  v31 = 0LL;
  *((_QWORD *)&v8 + 1) = 0x100000001LL;
  *(_QWORD *)&Src_8 = L"PanningDisabled";
  *(_QWORD *)&v8 = L"Inertia";
  *(_QWORD *)&v9 = L"Bouncing";
  v10 = L"Friction";
  v12 = L"TouchModeN_DtapDist";
  v14 = L"TouchModeN_DtapTime";
  v17 = L"TouchGate";
  v20 = L"TouchModeN_HoldTime_Animation";
  v22 = L"TouchModeN_HoldTime_BeforeAnimation";
  v25 = L"TouchMode_hold";
  v28 = L"Mobile_Inertia_Enabled";
  v30 = L"Minimum_Velocity";
  v32 = L"Thumb_Flick_Enabled";
  v35 = L"Left_Edgy_Enabled";
  v37 = L"Right_Edgy_Enabled";
  v39 = L"DualPressAndHold_Enabled";
  *((_QWORD *)&v9 + 1) = 0x100000001LL;
  v11 = 0x3200000032LL;
  v13 = 0x3200000032LL;
  v15 = 50;
  v16 = 50;
  v18 = 1;
  v19 = 1;
  v21 = 0x3200000032LL;
  v23 = 50;
  v24 = 50;
  v26 = 1;
  v27 = 1;
  v33 = 1;
  v34 = 1;
  v36 = 0x100000001LL;
  v38 = 0x100000001LL;
  v40 = 0x100000001LL;
  memmove((void *)v1, &Src_8, 0x100uLL);
  *(_QWORD *)(v1 + 264) = v1;
  *(_QWORD *)(v1 + 272) = L"MultiTouchEnabled";
  *(_DWORD *)(v1 + 280) = 1;
  *(_DWORD *)(v1 + 284) = 1;
  *(_QWORD *)(v1 + 296) = v1 + 272;
  *(_QWORD *)&Src_8 = L"AAPThreshold";
  *((_QWORD *)&Src_8 + 1) = 0x200000002LL;
  *((_QWORD *)&v9 + 1) = 0x3200000032LL;
  *(_QWORD *)&v8 = L"CursorSpeed";
  *((_QWORD *)&v8 + 1) = 0xA0000000ALL;
  *(_QWORD *)&v9 = L"FeedbackIntensity";
  v10 = L"ClickForceSensitivity";
  v12 = L"LeaveOnWithMouse";
  v14 = L"FeedbackEnabled";
  v17 = L"TapsEnabled";
  v20 = L"TapAndDrag";
  v22 = L"TwoFingerTapEnabled";
  v25 = L"RightClickZoneEnabled";
  v28 = L"HonorMouseAccelSetting";
  v30 = L"PanEnabled";
  v32 = L"ZoomEnabled";
  v35 = L"ScrollDirection";
  v37 = L"RightClickZoneWidth";
  v39 = L"RightClickZoneHeight";
  v11 = 0x3200000032LL;
  v13 = 0x100000001LL;
  v15 = 1;
  v16 = 1;
  v18 = 1;
  v19 = 1;
  v21 = 0x100000001LL;
  v23 = 1;
  v24 = 1;
  v26 = 1;
  v27 = 1;
  v29 = 0LL;
  v31 = 0x100000001LL;
  v33 = 1;
  v34 = 1;
  v36 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  memmove((void *)(v1 + 304), &Src_8, 0x100uLL);
  *(_QWORD *)(v1 + 568) = v1 + 304;
  *(_QWORD *)&Src_8 = L"Splash";
  *((_QWORD *)&Src_8 + 1) = 0x3200000032LL;
  *(_QWORD *)&v8 = L"DblDist";
  *(_QWORD *)&v9 = L"DblTime";
  v10 = L"TapTime";
  *((_QWORD *)&v8 + 1) = 0x3200000032LL;
  *((_QWORD *)&v9 + 1) = 0x12C0000012CLL;
  v11 = 0x6400000064LL;
  v13 = 0x12C0000012CLL;
  v12 = L"WaitTime";
  v14 = L"HoldTime";
  v18 = 1;
  v15 = 2300;
  v16 = 2300;
  v17 = L"FlickMode";
  v20 = L"FlickTolerance";
  v22 = L"LeftEdgyEnabled";
  v25 = L"RightEdgyEnabled";
  v19 = 1;
  v21 = 0x3200000032LL;
  v23 = 1;
  v24 = 1;
  v26 = 1;
  v27 = 1;
  memmove((void *)(v1 + 704), &Src_8, 0xA0uLL);
  *(_QWORD *)(v1 + 872) = v1 + 704;
  *((_QWORD *)&Src_8 + 1) = 0x4846455758C33841LL;
  *(_QWORD *)&Src_8 = L"Left";
  *((_QWORD *)&v8 + 1) = L"UpLeft";
  v10 = L"Up";
  v13 = (__int64)L"UpRight";
  v17 = L"Right";
  v21 = (__int64)L"DownRight";
  v25 = L"Down";
  v29 = L"DownLeft";
  *(_QWORD *)&v8 = 0x9F7145B888BB26B8uLL;
  *(_QWORD *)&v9 = 0x47F38E42CEFA51BCLL;
  *((_QWORD *)&v9 + 1) = 0xEBDFECA56A8CB1ACuLL;
  v11 = 0x450285124653D974LL;
  v12 = (const wchar_t *)0x8090833CF6D41AA0LL;
  v14 = (const wchar_t *)0x47F38E42CEFA51BCLL;
  v15 = 1787605420;
  v16 = -337646427;
  v18 = -1033389858;
  v19 = 1336411790;
  v20 = (const wchar_t *)0x4E301EF93B324FABLL;
  v22 = (const wchar_t *)0x47F38E42CEFA51BCLL;
  v23 = 1787605420;
  v24 = -337646427;
  v26 = 1142583377;
  v27 = 1129805542;
  v28 = (const wchar_t *)0xF7C82D37F0853D9BLL;
  v30 = (const wchar_t *)0x47F38E42CEFA51BCLL;
  v31 = 0xEBDFECA56A8CB1ACuLL;
  memmove((void *)(v1 + 880), &Src_8, 0xC0uLL);
  *(_QWORD *)(v1 + 1080) = v1 + 880;
  *((_QWORD *)&Src_8 + 1) = 0x800000008LL;
  *(_QWORD *)&Src_8 = L"Latency";
  *(_QWORD *)&v8 = L"SampleTime";
  *((_QWORD *)&v8 + 1) = 0x800000008LL;
  *(_QWORD *)&v9 = L"UseHWTimeStamp";
  v2 = v8;
  DWORD2(v9) = 1;
  *(_OWORD *)(v1 + 1088) = Src_8;
  HIDWORD(v9) = 1;
  v3 = v9;
  *((_QWORD *)&Src_8 + 1) = 0LL;
  *(_OWORD *)(v1 + 1104) = v2;
  DWORD2(v8) = 1;
  *(_OWORD *)(v1 + 1120) = v3;
  *(_QWORD *)(v1 + 1144) = v1 + 1088;
  *(_QWORD *)&Src_8 = L"SguiMode";
  *(_QWORD *)&v8 = L"HoldMode";
  *(_QWORD *)&v9 = L"MouseInputResolutionX";
  v10 = L"MouseInputResolutionY";
  v12 = L"MouseInputFrequency";
  v14 = L"EraseEnable";
  v17 = L"RightMaskEnable";
  HIDWORD(v8) = 1;
  *((_QWORD *)&v9 + 1) = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  v15 = 1;
  v16 = 1;
  v18 = 1;
  v19 = 1;
  memmove((void *)(v1 + 576), &Src_8, 0x70uLL);
  *(_QWORD *)(v1 + 696) = v1 + 576;
  *(_QWORD *)&v6 = L"Color";
  *((_QWORD *)&v6 + 1) = 0x8000000080000000uLL;
  *(_OWORD *)(v1 + 1152) = v6;
  *(_QWORD *)(v1 + 1176) = v1 + 1152;
  *(_DWORD *)(v1 + 1240) = 16;
  *(_DWORD *)(v1 + 1244) = 8;
  *(_DWORD *)(v1 + 1248) = 8;
  *(_QWORD *)(v1 + 1252) = 1LL;
  *(_QWORD *)(v1 + 1260) = 105LL;
  *(_QWORD *)(v1 + 1268) = 8229LL;
  *(_QWORD *)(v1 + 1276) = 175LL;
  *(_QWORD *)(v1 + 1284) = 33LL;
  *(double *)&v8 = DOUBLE_0_5;
  *(double *)&v9 = DOUBLE_0_5;
  *((_QWORD *)&v8 + 1) = 1LL;
  *((_QWORD *)&v9 + 1) = 1LL;
  *(__m128i *)(v1 + 1184) = _mm_load_si128((const __m128i *)&_xmm);
  result = 0LL;
  v5 = v9;
  v10 = *(const wchar_t **)&DOUBLE_0_5;
  *(_OWORD *)(v1 + 1200) = v8;
  *(_QWORD *)&v3 = v10;
  *(_OWORD *)(v1 + 1216) = v5;
  *(_QWORD *)(v1 + 1232) = v3;
  return result;
}
