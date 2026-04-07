/*
 * XREFs of ?RemoveAll@VisualCollection@@QEAAXXZ @ 0x1800263F4
 * Callers:
 *     ?RemoveAllChildren@CContainerVisual@@QEAAXXZ @ 0x180021904 (-RemoveAllChildren@CContainerVisual@@QEAAXXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180025870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAllChildren@CContainerVisualProxy@@QEAAJXZ @ 0x1800258E8 (-RemoveAllChildren@CContainerVisualProxy@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A44DC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall VisualCollection::RemoveAll(VisualCollection *this)
{
  char *v2; // rdi
  __int64 v3; // rsi
  CBaseObject *v4; // rcx
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 8) )
  {
    ++*((_DWORD *)this + 10);
    v2 = (char *)this + 8;
    v3 = 0LL;
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8 * v3) + 56LL))(
        *(_QWORD *)(*(_QWORD *)v2 + 8 * v3),
        0LL);
      v4 = *(CBaseObject **)(*(_QWORD *)v2 + 8 * v3);
      if ( v4 )
      {
        CBaseObject::Release(v4);
        *(_QWORD *)(*(_QWORD *)v2 + 8 * v3) = 0LL;
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *((_DWORD *)this + 8) );
    v5 = CContainerVisualProxy::RemoveAllChildren(*(CContainerVisualProxy **)(*(_QWORD *)this + 16LL));
    if ( v5 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x14E,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualcollection.cpp",
        (const char *)(unsigned int)v5,
        v6);
    *((_DWORD *)v2 + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)v2, 8u);
  }
}
