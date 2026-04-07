/*
 * XREFs of ?ValidateVisual@CLegacyNonClientBackground@@UEAAJXZ @ 0x180050590
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180050710 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18005093C (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009E810 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLegacyNonClientBackground::ValidateVisual(CLegacyNonClientBackground *this)
{
  struct CBaseLegacyMilBrushProxy *v2; // rcx
  int v3; // eax
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  CBaseObject *v7; // rbx
  int v8; // eax
  unsigned int v9; // esi
  int v10; // eax
  struct CBaseGeometryProxy *v12; // rdx
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v19; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 70) || !*((_QWORD *)this + 37) || !*((_QWORD *)this + 39) )
    goto LABEL_9;
  v2 = (struct CBaseLegacyMilBrushProxy *)*((_QWORD *)this + 38);
  if ( !v2 || (v12 = (struct CBaseGeometryProxy *)*((_QWORD *)this + 40)) == 0LL )
  {
LABEL_5:
    v19 = 0LL;
    v3 = CDrawGeometryInstruction::Create(
           *((struct CBaseLegacyMilBrushProxy **)this + 37),
           *((struct CBaseGeometryProxy **)this + 39),
           &v19);
    v6 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
        (const char *)(unsigned int)v3,
        v17);
      goto LABEL_15;
    }
    v7 = v19;
    v8 = CRenderDataVisual::AddInstruction(this, v19, v4, v5);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
        (const char *)(unsigned int)v8,
        v17);
      goto LABEL_21;
    }
    if ( v7 )
      CBaseObject::Release(v7);
LABEL_9:
    v10 = CRenderDataVisual::ValidateVisual(this);
    v6 = v10;
    if ( v10 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
      (const char *)(unsigned int)v10,
      v17);
    return v6;
  }
  v19 = 0LL;
  v13 = CDrawGeometryInstruction::Create(v2, v12, &v19);
  v6 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
      (const char *)(unsigned int)v13,
      v17);
LABEL_15:
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v19);
    return v6;
  }
  v7 = v19;
  v16 = CRenderDataVisual::AddInstruction(this, v19, v14, v15);
  v9 = v16;
  if ( v16 >= 0 )
  {
    if ( v7 )
      CBaseObject::Release(v7);
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x22,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\legacynonclientbackground.cpp",
    (const char *)(unsigned int)v16,
    v17);
LABEL_21:
  if ( v7 )
    CBaseObject::Release(v7);
  return v9;
}
