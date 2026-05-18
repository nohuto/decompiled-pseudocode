/*
 * XREFs of sub_1800151A0 @ 0x1800151A0
 * Callers:
 *     sub_180016E68 @ 0x180016E68 (sub_180016E68.c)
 *     sub_18005187C @ 0x18005187C (sub_18005187C.c)
 *     sub_18007AF80 @ 0x18007AF80 (sub_18007AF80.c)
 *     sub_18007B904 @ 0x18007B904 (sub_18007B904.c)
 *     sub_18008138C @ 0x18008138C (sub_18008138C.c)
 *     sub_180082320 @ 0x180082320 (sub_180082320.c)
 * Callees:
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 */

_QWORD *__fastcall sub_1800151A0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  volatile signed __int32 *v6; // rcx

  v2 = a2[1];
  v4 = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    v4 = *a2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
    v5 = v2;
  }
  *a1 = v4;
  v6 = (volatile signed __int32 *)a1[1];
  a1[1] = v5;
  if ( v6 )
    sub_180010544(v6);
  return a1;
}
