/*
 * XREFs of ?ReleaseCopyBuffers@CWICBitmapRealization@@UEAAJXZ @ 0x1802E2870
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWICBitmapRealization::ReleaseCopyBuffers(CWICBitmapRealization *this)
{
  __int64 (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rcx
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this - 8);
  if ( v1 )
  {
    v7 = 0LL;
    v2 = (**v1)(v1, &IID_IWICDecoderBitmapSource, &v7);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
      v3 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x93u, 0LL);
      ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v7);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x91,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\bitmaps/WICBitmapRealization.h",
        (const char *)(unsigned int)v2);
    }
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x99u, 0LL);
  }
  return v3;
}
