/*
 * XREFs of ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x18008E4FC
 * Callers:
 *     ??1CEffectBrush@@MEAA@XZ @ 0x18008D34C (--1CEffectBrush@@MEAA@XZ.c)
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18008D754 (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EFFECTBRUSH_SETTEMPLATE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x18008F428 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18008FCF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CEffectBrush::ReleaseResources(CEffectBrush *this)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  unsigned int v4; // eax
  __int64 *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rbx

  v1 = *((_QWORD *)this + 10);
  if ( v1 )
  {
    *(_DWORD *)(v1 + 40) = 0;
    DynArrayImpl<0>::ShrinkToSize(v1 + 16, 24LL);
    *(_BYTE *)(v1 + 200) = 1;
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 80);
  }
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 80) = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
  }
  v4 = *((_DWORD *)this + 40);
  v5 = (__int64 *)((char *)this + 136);
  if ( v4 )
  {
    v6 = 0LL;
    v7 = v4;
    do
    {
      v8 = *v5;
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v6 + *v5));
      *(_QWORD *)(v6 + v8) = 0LL;
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  *((_DWORD *)this + 40) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 136, 8LL);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 16);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 14));
  *((_QWORD *)this + 14) = 0LL;
}
