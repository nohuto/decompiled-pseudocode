/*
 * XREFs of ?DrawGrabber@GhostDivider@@AEAAXXZ @ 0x180152308
 * Callers:
 *     ?Solidify@GhostDivider@@UEAAXXZ @ 0x1801EAB10 (-Solidify@GhostDivider@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsLightTheme@CImmersiveColor@@SA_NXZ @ 0x1801524B4 (-IsLightTheme@CImmersiveColor@@SA_NXZ.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1801524EC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GhostDivider::DrawGrabber(GhostDivider *this)
{
  int v2; // r8d
  int v3; // eax
  int v4; // ecx
  int v5; // r9d
  int v6; // r10d
  float v7; // xmm0_4
  int v8; // ecx
  float v9; // xmm0_4
  int v10; // r14d
  int v11; // r8d
  int v12; // r9d
  bool IsLightTheme; // al
  unsigned int Color; // eax
  __int64 v15; // rsi
  unsigned int v16; // ebx
  __int64 *v17; // r15
  __int64 (__fastcall *v18)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rdi
  int v19; // eax
  __int64 v20; // [rsp+40h] [rbp-20h]
  int v21; // [rsp+48h] [rbp-18h] BYREF
  int v22; // [rsp+4Ch] [rbp-14h]
  int v23; // [rsp+50h] [rbp-10h]
  int v24; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v2 = *((_DWORD *)this + 21) / 2;
  v3 = *((_DWORD *)this + 22);
  v4 = *((_DWORD *)this + 18);
  v5 = v3 / 2;
  v6 = (int)(float)((float)(36 * v4) / 100.0);
  v7 = (float)(3 * v4);
  v8 = v6 / 2;
  v9 = v7 / 100.0;
  v10 = (int)v9;
  if ( v2 <= v3 / 2 )
  {
    v11 = v2 - (int)v9 / 2;
    v12 = v5 - v8;
    v23 = v11 + v10;
    v24 = v12 + v6;
  }
  else
  {
    v11 = v2 - v8;
    v12 = v5 - (int)v9 / 2;
    v23 = v11 + v6;
    v24 = v12 + v10;
  }
  v22 = v12;
  v21 = v11;
  IsLightTheme = CImmersiveColor::IsLightTheme();
  Color = CImmersiveColor::GetColor(!IsLightTheme + 218);
  v15 = *((_QWORD *)this + 6);
  v16 = Color;
  v17 = (__int64 *)((char *)this + 56);
  v18 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v15 + 104LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v17);
  LODWORD(v20) = v23 - v21;
  HIDWORD(v20) = v24 - v22;
  v19 = v18(v15, 0LL, v16, v20, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v17);
  if ( v19 >= 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v17 + 240LL))(*v17);
    (*(void (__fastcall **)(__int64, int *, _QWORD, _QWORD))(*(_QWORD *)*v17 + 24LL))(*v17, &v21, 0LL, 0LL);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x192,
      (int)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)v19);
  }
}
