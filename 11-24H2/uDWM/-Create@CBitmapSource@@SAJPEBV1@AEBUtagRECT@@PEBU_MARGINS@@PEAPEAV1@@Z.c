/*
 * XREFs of ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180025AD8
 * Callers:
 *     ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x18000CEC8 (-GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000D3F8 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180025354 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 * Callees:
 *     ??0CBitmapSource@@IEAA@XZ @ 0x180025BC4 (--0CBitmapSource@@IEAA@XZ.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(
        const struct CBitmapSource *a1,
        const struct tagRECT *a2,
        const struct _MARGINS *a3,
        struct CBitmapSource **a4)
{
  unsigned int v5; // edi
  CBitmapSource *v9; // rax
  CBitmapSource *v10; // rax
  CBitmapSource *v11; // rbx
  CMILRefCountBase *v12; // rcx
  CBaseObject *v13; // rdx
  int v14; // eax
  int v15; // eax

  v5 = 0;
  v9 = (CBitmapSource *)DefaultHeap::AllocClear(0x68uLL);
  if ( v9 && (v10 = CBitmapSource::CBitmapSource(v9), (v11 = v10) != 0LL) )
  {
    v12 = (CMILRefCountBase *)*((_QWORD *)a1 + 2);
    v13 = (CBaseObject *)*((_QWORD *)v10 + 2);
    *((_QWORD *)v10 + 2) = v12;
    if ( v12 )
      CMILRefCountBase::AddRef(v12);
    if ( v13 )
      CBaseObject::Release(v13);
    v14 = 0;
    *((struct tagRECT *)v11 + 5) = *a2;
    if ( *((_DWORD *)v11 + 22) - *((_DWORD *)v11 + 20) >= 0 )
      v14 = *((_DWORD *)v11 + 22) - *((_DWORD *)v11 + 20);
    *((_DWORD *)v11 + 6) = v14;
    v15 = 0;
    if ( *((_DWORD *)v11 + 23) - *((_DWORD *)v11 + 21) >= 0 )
      v15 = *((_DWORD *)v11 + 23) - *((_DWORD *)v11 + 21);
    *((_DWORD *)v11 + 7) = v15;
    if ( a3 )
      *((struct _MARGINS *)v11 + 2) = *a3;
    *a4 = v11;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB0u, 0LL);
  }
  return v5;
}
