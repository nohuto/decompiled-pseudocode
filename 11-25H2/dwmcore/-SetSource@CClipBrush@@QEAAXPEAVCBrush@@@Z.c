/*
 * XREFs of ?SetSource@CClipBrush@@QEAAXPEAVCBrush@@@Z @ 0x18029FC9C
 * Callers:
 *     ?OnBrushChanged@CCompositionTextLine@@UEAAXXZ @ 0x1802A2C20 (-OnBrushChanged@CCompositionTextLine@@UEAAXXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180131C1C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CClipBrush::SetSource(struct CResource **this, struct CBrush *a2)
{
  char v4; // di
  signed int v5; // eax
  struct CResource *v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != this[13] )
  {
    v4 = 0;
    if ( a2 )
    {
      v5 = CResource::RegisterNotifier((CResource *)this, a2);
      if ( v5 < 0 )
        ModuleFailFastForHRESULT(v5, retaddr);
    }
    CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
    this[13] = a2;
    if ( a2
      && ((*(unsigned __int8 (__fastcall **)(struct CBrush *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 56LL)
       || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)this[13] + 64LL))(this[13], 125LL)) )
    {
      v4 = 1;
    }
    v6 = *this;
    *((_BYTE *)this + 96) = v4;
    (*((void (__fastcall **)(struct CResource **, __int64))v6 + 10))(this, 14LL);
  }
}
