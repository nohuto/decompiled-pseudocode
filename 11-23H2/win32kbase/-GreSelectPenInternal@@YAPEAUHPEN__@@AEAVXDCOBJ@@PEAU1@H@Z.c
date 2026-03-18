/*
 * XREFs of ?GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0150A60
 * Callers:
 *     GreSelectPen @ 0x1C0150E10 (GreSelectPen.c)
 * Callees:
 *     GreDCSelectPen @ 0x1C00067B0 (GreDCSelectPen.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0043040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

__int64 __fastcall GreSelectPenInternal(DC **a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  struct OBJECT *v6; // rbx
  __int64 v7; // rax

  v3 = 0LL;
  if ( a3 )
    return GreDCSelectPen(*a1, a2);
  v6 = *a1;
  v7 = SGDGetSessionState(a1);
  if ( (*((_DWORD *)GdiHandleManager::GetEntryFromObject(
                      *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v7 + 24) + 8008LL),
                      v6)
        + 2) & 0xFFFFFFFE) != 0 )
    return GreDCSelectPen(*a1, a2);
  return v3;
}
