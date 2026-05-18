/*
 * XREFs of sub_180025490 @ 0x180025490
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

_DWORD *__fastcall sub_180025490(__int64 a1, _DWORD *a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL))(a1);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, 0LL) )
    *a2 &= ~2u;
  return a2;
}
