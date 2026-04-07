/*
 * XREFs of ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJKH@Z @ 0x1800B584C
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180050F20 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x18001985C (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009D234 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopWindowReplacement::_AddPPIRectangleInstruction(CDesktopWindowReplacement *this)
{
  int SystemMetrics; // ebx
  const char *v3; // r9
  unsigned int LastError; // ebx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  struct CSolidRectangleInstruction *v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]
  float v12[8]; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = 0LL;
  v12[0] = (float)(GetSystemMetrics(76) + 10);
  v12[2] = v12[0] + 4.0;
  SystemMetrics = GetSystemMetrics(79);
  if ( SystemMetrics )
  {
    v12[1] = (float)(SystemMetrics + GetSystemMetrics(77) - 14);
    v12[3] = v12[1] + 4.0;
    *(_QWORD *)&v11 = 0x3F8000003F800000LL;
    *((_QWORD *)&v11 + 1) = 0x3F8000003F800000LL;
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v10);
    v5 = CSolidRectangleInstruction::Create(&v10);
    LastError = v5;
    if ( v5 >= 0 )
    {
      *((_OWORD *)v10 + 2) = *(_OWORD *)v12;
      *((_OWORD *)v10 + 1) = v11;
      v5 = CRenderDataVisual::AddInstruction(this, v10, v6, v7);
      LastError = v5;
      if ( v5 >= 0 )
      {
        LastError = 0;
        goto LABEL_9;
      }
      v8 = 124LL;
    }
    else
    {
      v8 = 121LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x6E,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                  v3);
  }
LABEL_9:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v10);
  return LastError;
}
