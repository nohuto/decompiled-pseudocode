/*
 * XREFs of _QuerySendMessage @ 0x1402B182C
 * Callers:
 *     NtUserQuerySendMessage @ 0x14029A460 (NtUserQuerySendMessage.c)
 * Callees:
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1400A903C (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     IsPointerParentNotify @ 0x1400A9600 (IsPointerParentNotify.c)
 *     IsPointerInputMessageWithState @ 0x1401507E0 (IsPointerInputMessageWithState.c)
 */

_BOOL8 __fastcall QuerySendMessage(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  void *v7; // r8
  unsigned __int64 *v8; // r9
  __int64 *v9; // r10
  unsigned __int64 v10; // r11
  HWND v12; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int16 v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 552);
  if ( !v2 )
    return 0LL;
  v3 = *(_QWORD **)(v2 + 112);
  v4 = v3 ? *v3 : 0LL;
  *(_QWORD *)a2 = v4;
  v5 = *(_DWORD *)(v2 + 104);
  *(_DWORD *)(a2 + 8) = v5;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(v2 + 88);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(v2 + 96);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(v2 + 80);
  *(_QWORD *)(a2 + 36) = 0LL;
  if ( !IsPointerInputMessageWithState(v5) && !IsPointerParentNotify(v6, (__int16)v7) )
    return 1LL;
  v13 = 0;
  v15 = 0;
  v14 = 0;
  v12 = 0LL;
  return (unsigned int)MakePointerMessage(v10, v6, v7, v8, v9, &v13, &v15, &v14, &v12) != 0;
}
