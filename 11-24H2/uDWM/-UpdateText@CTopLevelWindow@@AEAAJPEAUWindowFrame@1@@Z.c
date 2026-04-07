/*
 * XREFs of ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x180031890
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180021694 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180021E28 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18002576C (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180030D08 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x180030F2C (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?Create@CDWriteText@@SAJPEAPEAV1@@Z @ 0x180031BBC (-Create@CDWriteText@@SAJPEAPEAV1@@Z.c)
 *     ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x180031CA4 (-GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z.c)
 *     ?BlendColors@@YAKKKM@Z @ 0x180033554 (-BlendColors@@YAKKKM@Z.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180055100 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::UpdateText(CTopLevelWindow *this, struct CTopLevelWindow::WindowFrame *a2)
{
  unsigned int v4; // edi
  struct CVisual *v5; // rdx
  int v7; // eax
  struct CVisual *v8; // rdx
  int inserted; // eax
  __int64 CaptionColor; // rsi
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  CBaseObject *v17; // rcx
  CBaseObject *v18[2]; // [rsp+30h] [rbp-98h] BYREF
  tagLOGFONTW v19; // [rsp+40h] [rbp-88h] BYREF

  v4 = 0;
  v5 = (struct CVisual *)*((_QWORD *)this + 65);
  if ( (*((_BYTE *)this + 584) & 8) == 0 )
  {
    if ( v5 )
    {
      v16 = CContainerVisual::RemoveChild(*((CContainerVisual **)this + 33), v5);
      v4 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x1B27u, 0LL);
      }
      else
      {
        v17 = (CBaseObject *)*((_QWORD *)this + 65);
        if ( v17 )
        {
          CBaseObject::Release(v17);
          *((_QWORD *)this + 65) = 0LL;
        }
        *((_QWORD *)this + 66) = 0LL;
      }
    }
    return v4;
  }
  if ( !v5 )
  {
    v18[0] = 0LL;
    v7 = CDWriteText::Create(v18);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1AF3u, 0LL);
      if ( v18[0] )
        CBaseObject::Release(v18[0]);
      return v4;
    }
    v8 = v18[0];
    *((_QWORD *)this + 66) = ((unsigned __int64)v18[0] + 168) & -(__int64)(v18[0] != 0LL);
    v18[0] = 0LL;
    *((_QWORD *)this + 65) = v8;
    inserted = CContainerVisual::InsertChildAfter(*((CContainerVisual **)this + 33), v8, 0LL);
    v4 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x1AF9u, 0LL);
      wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(v18);
      return v4;
    }
    CVisual::SetDirtyFlags(this, 0x10000);
  }
  CaptionColor = CTopLevelWindow::GetCaptionColor(this);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 66) + 32LL))(*((_QWORD *)this + 66), CaptionColor);
  if ( a2 )
  {
    v11 = *(unsigned int *)(*((_QWORD *)this + 89) + 196LL);
    if ( !(_DWORD)v11 )
    {
      v12 = BYTE2(CaptionColor) + 5 * BYTE1(CaptionColor) + 2 * (unsigned __int8)CaptionColor;
      if ( v12 > 0x400 == (unsigned __int8)BYTE2(*((_DWORD *)a2 + 458))
                        + 5 * BYTE1(*((_DWORD *)a2 + 458))
                        + 2 * (unsigned int)(unsigned __int8)*((_DWORD *)a2 + 458) > 0x400 )
      {
        v15 = 321LL;
        if ( v12 <= 0x400 )
          v15 = 292LL;
        ColorCache::GetColor(v15);
      }
      if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
        v11 = BlendColors(CaptionColor, v11, 0.40000001);
    }
    (***((void (__fastcall ****)(_QWORD, __int64))this + 66))(*((_QWORD *)this + 66), v11);
  }
  memset_0(&v19, 0, sizeof(v19));
  CWindowData::GetNonClientCaptionFont(*((CWindowData **)this + 89), &v19);
  (*(void (__fastcall **)(_QWORD, tagLOGFONTW *))(**((_QWORD **)this + 66) + 8LL))(*((_QWORD *)this + 66), &v19);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 66) + 16LL))(*((_QWORD *)this + 66));
  CVisual::SetRTLMirror(*((CVisual **)this + 65), (*((_DWORD *)this + 146) & 0x20000) != 0);
  v13 = *((_DWORD *)this + 146) >> 19;
  LOBYTE(v13) = (*((_DWORD *)this + 146) & 0x80000) != 0;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 66) + 24LL))(*((_QWORD *)this + 66), v13);
  v14 = *((_DWORD *)this + 146) >> 22;
  LOBYTE(v14) = (*((_DWORD *)this + 146) & 0x400000) != 0;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 66) + 40LL))(*((_QWORD *)this + 66), v14);
  return v4;
}
