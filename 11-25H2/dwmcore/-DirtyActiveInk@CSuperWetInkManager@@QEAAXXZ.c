/*
 * XREFs of ?DirtyActiveInk@CSuperWetInkManager@@QEAAXXZ @ 0x1801A8FE0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?DirtyOnNewData@CVisual@@QEAAXXZ @ 0x1801A9098 (-DirtyOnNewData@CVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSuperWetInkManager::DirtyActiveInk(CSuperWetInkManager *this)
{
  _QWORD *v1; // rsi
  char v2; // dl
  _QWORD *v3; // rdi
  CVisual **v5; // rdi
  CVisual **i; // rbx
  _DWORD *v7; // rcx
  __int64 (__fastcall *v8)(_DWORD *, unsigned int, __int64); // rax

  v1 = (_QWORD *)*((_QWORD *)this + 5);
  v2 = 0;
  v3 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v3 == v1 )
    goto LABEL_2;
  do
  {
    if ( *((_QWORD *)g_pComposition + 111) - v3[11] < 0xAuLL )
    {
      v7 = (_DWORD *)*v3;
      v8 = *(__int64 (__fastcall **)(_DWORD *, unsigned int, __int64))(*(_QWORD *)*v3 + 80LL);
      if ( v8 == CResource::NotifyOnChanged )
        CResource::NotifyOnChanged(v7, 0, 0LL);
      else
        v8(v7, 0, 0LL);
      v2 = 1;
    }
    v3 += 13;
  }
  while ( v3 != v1 );
  if ( !v2 )
  {
LABEL_2:
    v5 = (CVisual **)*((_QWORD *)this + 2);
    for ( i = (CVisual **)*((_QWORD *)this + 1); i != v5; ++i )
      CVisual::DirtyOnNewData(*i);
  }
}
