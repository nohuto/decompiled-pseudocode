/*
 * XREFs of ?ValidateVisual@CImage@@UEAAJXZ @ 0x180050A10
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180050710 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x1800516D0 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CImage::ValidateVisual(CImage *this)
{
  int v2; // eax
  int v3; // ebx
  struct CBitmapSource *v4; // rcx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 v10; // rdx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v13; // [rsp+40h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 22) & 0x1000) == 0 )
    goto LABEL_10;
  v13 = 0LL;
  v2 = CRenderDataVisual::ClearInstructions(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x42u, 0LL);
LABEL_13:
    v10 = 51LL;
    goto LABEL_18;
  }
  v4 = (struct CBitmapSource *)*((_QWORD *)this + 36);
  if ( v4 )
  {
    v5 = CDrawNineGridInstruction::Create(v4, &v13);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1A4u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x46u, 0LL);
    }
    else
    {
      v8 = CRenderDataVisual::AddInstruction(this, v13, v6, v7);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x47u, 0LL);
    }
    if ( v13 )
      CBaseObject::Release(v13);
    if ( v3 < 0 )
      goto LABEL_13;
  }
  *((_DWORD *)this + 22) &= ~0x1000u;
LABEL_10:
  v3 = CRenderDataVisual::ValidateVisual(this);
  if ( v3 >= 0 )
    return 0LL;
  v10 = 55LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\image.cpp",
    (const char *)(unsigned int)v3,
    v11);
  return (unsigned int)v3;
}
