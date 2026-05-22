/*
 * XREFs of ?PushBack@?$NtList@VSipcSection@@@@QEAAXPEAVSipcSection@@@Z @ 0x18010DE10
 * Callers:
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x18010E020 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NtList<SipcSection>::PushBack(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax

  v2 = (_QWORD *)((a2 + 8) & -(__int64)(a2 != 0));
  result = *(_QWORD **)(a1 + 8);
  if ( *result != a1 )
    __fastfail(3u);
  *v2 = a1;
  *(_QWORD *)(((a2 + 8) & -(__int64)(a2 != 0)) + 8) = result;
  *result = v2;
  ++*(_DWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v2;
  return result;
}
