/*
 * XREFs of ?ProcessSetEnabled@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONLIGHT_SETENABLED@@@Z @ 0x1800C0FB8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z @ 0x1800C1028 (-UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionLight::ProcessSetEnabled(
        CCompositionLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONLIGHT_SETENABLED *a3)
{
  char v3; // al
  struct CVisual *v5; // rax

  v3 = *((_BYTE *)a3 + 8);
  if ( *((_BYTE *)this + 170) != v3 )
  {
    *((_BYTE *)this + 170) = v3;
    v5 = (struct CVisual *)(*(__int64 (__fastcall **)(CCompositionLight *, struct CResourceTable *))(*(_QWORD *)this + 200LL))(
                             this,
                             a2);
    CCompositionLight::UpdateRegistrationWithCompositor(this, v5);
    (*(void (__fastcall **)(CCompositionLight *, __int64))(*(_QWORD *)this + 80LL))(this, 5LL);
    (*(void (__fastcall **)(CCompositionLight *, __int64))(*(_QWORD *)this + 80LL))(this, 1LL);
  }
  return 0LL;
}
