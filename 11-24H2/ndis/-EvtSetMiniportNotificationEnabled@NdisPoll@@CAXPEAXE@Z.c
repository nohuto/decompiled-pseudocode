/*
 * XREFs of ?EvtSetMiniportNotificationEnabled@NdisPoll@@CAXPEAXE@Z @ 0x140003C30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall NdisPoll::EvtSetMiniportNotificationEnabled(_QWORD *a1, char a2)
{
  void (__fastcall *v2)(__int64, int *); // rax
  __int64 v3; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF
  bool v5; // [rsp+34h] [rbp+Ch]
  char v6; // [rsp+35h] [rbp+Dh]

  v2 = (void (__fastcall *)(__int64, int *))a1[77];
  v3 = a1[76];
  v5 = a2 != 0;
  v6 = 0;
  v4 = 393600;
  v2(v3, &v4);
}
