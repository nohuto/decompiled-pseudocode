/*
 * XREFs of sub_1800D28BC @ 0x1800D28BC
 * Callers:
 *     sub_18002838C @ 0x18002838C (sub_18002838C.c)
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 */

int __fastcall sub_1800D28BC(__int64 *a1)
{
  __int64 v1; // rdi
  int v2; // esi
  char v3; // bl
  int result; // eax

  v1 = *a1;
  sub_180011C30(*a1);
  v2 = --*(_DWORD *)(v1 + 176);
  v3 = *(_BYTE *)(v1 + 180);
  result = Mtx_unlock((_Mtx_t)v1);
  if ( v3 )
  {
    if ( !v2 )
      return Cnd_signal((_Cnd_t)(v1 + 32));
  }
  else if ( v2 == -2 )
  {
    return Cnd_broadcast((_Cnd_t)(v1 + 104));
  }
  return result;
}
