/*
 * XREFs of ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x18001AB94
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18003ABE0 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x18003B168 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 *     ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ @ 0x18003B810 (-UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18003DE40 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ @ 0x18001A988 (-HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?GetCurrentBaseColor@CSystemBackdropVisual@@QEBAKXZ @ 0x18001ABF8 (-GetCurrentBaseColor@CSystemBackdropVisual@@QEBAKXZ.c)
 *     ?GetAccentBackground@CAccent@@SAJPEAK@Z @ 0x1800523A0 (-GetAccentBackground@CAccent@@SAJPEAK@Z.c)
 */

unsigned int __fastcall CTopLevelWindow::GetCaptionColor(CTopLevelWindow *this)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  CSystemBackdropVisual *v6; // rcx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 210);
  if ( !v1 )
    return CTopLevelWindow::GetSolidColorCaptionColor(this);
  v3 = v1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( !v4 )
    {
LABEL_6:
      v6 = (CSystemBackdropVisual *)*((_QWORD *)this + 40);
      if ( v6 )
        return CSystemBackdropVisual::GetCurrentBaseColor(v6);
      return CTopLevelWindow::GetSolidColorCaptionColor(this);
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return 0;
      goto LABEL_6;
    }
    return CTopLevelWindow::GetSolidColorCaptionColor(this);
  }
  if ( !*((_QWORD *)this + 37)
    || CTopLevelWindow::HasCaptionAreaColorOverride(this)
    || (int)CAccent::GetAccentBackground(&v8) < 0 )
  {
    return CTopLevelWindow::GetSolidColorCaptionColor(this);
  }
  return v8;
}
