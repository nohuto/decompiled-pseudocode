/*
 * XREFs of ?RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ @ 0x1800C116C
 * Callers:
 *     ??1CGlobalLightSet@@EEAA@XZ @ 0x1800C0D2C (--1CGlobalLightSet@@EEAA@XZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800182E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18001DCB4 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A13B4 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGlobalLightSet::RemoveInteropVisualFromTree(CGlobalLightSet *this)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rdi
  volatile signed __int32 *v5; // rbx
  int v6; // eax
  VisualCollection *v7; // r15
  int inserted; // eax
  int v9; // eax
  int v10; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CBaseObject *v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 12) + 24LL);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 13);
    v4 = (unsigned int)(*(_DWORD *)(v3 + 72) - 1);
    if ( (int)v4 < 0 )
    {
      v7 = (VisualCollection *)(v2 + 32);
    }
    else
    {
      do
      {
        v5 = *(volatile signed __int32 **)(*(_QWORD *)(v3 + 48) + 8 * v4);
        v12 = (CBaseObject *)v5;
        if ( v5 )
        {
          _InterlockedIncrement(v5 + 2);
          v5 = (volatile signed __int32 *)v12;
        }
        v6 = VisualCollection::Remove((VisualCollection *)(v3 + 32), (struct CVisual *)v5);
        if ( v6 < 0 )
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x133,
            (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
            (const char *)(unsigned int)v6,
            v10);
        v7 = (VisualCollection *)(v2 + 32);
        inserted = VisualCollection::InsertRelative(
                     (VisualCollection *)(v2 + 32),
                     (unsigned __int64)v5,
                     *((struct CVisual **)this + 12),
                     1u,
                     v10);
        if ( inserted < 0 )
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x134,
            (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
            (const char *)(unsigned int)inserted,
            v10);
        Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease(&v12);
        v4 = (unsigned int)(v4 - 1);
      }
      while ( (int)v4 >= 0 );
    }
    v9 = VisualCollection::Remove(v7, *((struct CVisual **)this + 12));
    if ( v9 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x13E,
        (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
        (const char *)(unsigned int)v9,
        v10);
  }
}
