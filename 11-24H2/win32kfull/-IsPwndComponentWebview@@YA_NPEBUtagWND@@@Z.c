/*
 * XREFs of ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1402AAFFC
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x14026DA08 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     NtUserNavigateFocus @ 0x140299E00 (NtUserNavigateFocus.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F63C8 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetParent @ 0x1401789D8 (_GetParent.c)
 */

bool __fastcall IsPwndComponentWebview(const struct tagWND *a1)
{
  struct tagWND *Host; // rax
  __int64 Parent; // rax

  Host = CoreWindowProp::GetHost(a1);
  return Host && (Parent = GetParent(Host)) != 0 && (*(_BYTE *)(*(_QWORD *)(Parent + 40) + 233LL) & 8) != 0;
}
