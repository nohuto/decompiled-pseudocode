/*
 * XREFs of ?ValidateVisual@CLegacyNonClientBackground@@UEAAJXZ @ 0x180072370
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001F770 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180024618 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800280B0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLegacyNonClientBackground::ValidateVisual(CLegacyNonClientBackground *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct CBaseLegacyMilBrushProxy *v5; // rcx
  int v6; // eax
  CBaseObject *v7; // rbx
  int v8; // eax
  unsigned int v9; // esi
  struct CBaseGeometryProxy *v10; // rdx
  int v11; // eax
  CBaseObject *v12; // rbx
  int v13; // eax
  int v14; // esi
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v17; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 58) || !*((_QWORD *)this + 31) || !*((_QWORD *)this + 33) )
    goto LABEL_3;
  v5 = (struct CBaseLegacyMilBrushProxy *)*((_QWORD *)this + 32);
  if ( v5 )
  {
    v10 = (struct CBaseGeometryProxy *)*((_QWORD *)this + 34);
    if ( v10 )
    {
      v17 = 0LL;
      v11 = CDrawGeometryInstruction::Create(v5, v10, &v17);
      v3 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x21,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
          (const char *)(unsigned int)v11,
          v15);
      }
      else
      {
        v12 = v17;
        v13 = CRenderDataVisual::AddInstruction(this, v17);
        v14 = v13;
        if ( v13 >= 0 )
        {
          if ( v12 )
            CBaseObject::Release(v12);
          goto LABEL_7;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x22,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
          (const char *)(unsigned int)v13,
          v15);
        v3 = v14;
      }
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v17);
      return v3;
    }
  }
LABEL_7:
  v17 = 0LL;
  v6 = CDrawGeometryInstruction::Create(
         *((struct CBaseLegacyMilBrushProxy **)this + 31),
         *((struct CBaseGeometryProxy **)this + 33),
         &v17);
  v3 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
      (const char *)(unsigned int)v6,
      v15);
    if ( v17 )
      CBaseObject::Release(v17);
    return v3;
  }
  v7 = v17;
  v8 = CRenderDataVisual::AddInstruction(this, v17);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( v7 )
      CBaseObject::Release(v7);
LABEL_3:
    v2 = CRenderDataVisual::ValidateVisual(this);
    v3 = v2;
    if ( v2 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
      (const char *)(unsigned int)v2,
      v15);
    return v3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
    (const char *)(unsigned int)v8,
    v15);
  if ( v7 )
    CBaseObject::Release(v7);
  return v9;
}
