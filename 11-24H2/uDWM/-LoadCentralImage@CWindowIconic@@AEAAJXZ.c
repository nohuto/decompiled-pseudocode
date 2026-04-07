/*
 * XREFs of ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180008370
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180006834 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800079A0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800087D8 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x18001DE54 (-OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008CBC4 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18000AF00 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x180094FF0 (-SetSize@CVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800950D4 (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CWindowIconic::LoadCentralImage(CWindowIconic *this)
{
  unsigned int v1; // esi
  char v3; // bp
  int v4; // ecx
  int v5; // ecx
  struct tagSIZE *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rcx
  HICON v9; // rax
  int v10; // eax
  HICON hIcon; // [rsp+50h] [rbp+8h] BYREF
  CBaseObject *v13; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  hIcon = 0LL;
  v3 = 0;
  v13 = 0LL;
  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return v1;
      v6 = (struct tagSIZE *)*((_QWORD *)this + 3);
    }
    else
    {
      v7 = *((_DWORD *)this + 14) - 1;
      if ( v7 >= (int)*(double *)(*((_QWORD *)this + 8) + 48LL) )
        v7 = (int)*(double *)(*((_QWORD *)this + 8) + 48LL);
      v6 = *(struct tagSIZE **)(*((_QWORD *)this + 4) + 8LL * v7);
    }
    if ( !v6 )
      goto LABEL_22;
    CMILRefCountBase::AddRef((CMILRefCountBase *)v6);
  }
  else
  {
    v8 = *((_QWORD *)this + 10);
    v9 = *(HICON *)(v8 + 160);
    if ( v9 || (v9 = *(HICON *)(v8 + 152)) != 0LL )
    {
      hIcon = v9;
    }
    else
    {
      LoadIconWithScaleDown(0LL, (PCWSTR)0x7F00, 32, 32, &hIcon);
      v3 = 1;
    }
    if ( !hIcon )
      goto LABEL_22;
    v10 = CBitmapSource::Create(hIcon, &v13);
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xCCu, 0LL);
      v6 = (struct tagSIZE *)v13;
      goto LABEL_20;
    }
    v6 = (struct tagSIZE *)v13;
  }
  if ( v6 )
  {
    CVisual::SetSize(*((CVisual **)this + 12), v6 + 3);
    CImage::SetBitmapSource(*((CImage **)this + 12), (struct CBitmapSource *)v6);
LABEL_20:
    if ( v6 )
      CBaseObject::Release((CBaseObject *)v6);
  }
LABEL_22:
  if ( v3 )
    DestroyIcon(hIcon);
  return v1;
}
