/*
 * XREFs of sub_1800152A0 @ 0x1800152A0
 * Callers:
 *     sub_180016F68 @ 0x180016F68 (sub_180016F68.c)
 *     sub_1800519DC @ 0x1800519DC (sub_1800519DC.c)
 *     sub_18007B0E0 @ 0x18007B0E0 (sub_18007B0E0.c)
 *     sub_18007BA64 @ 0x18007BA64 (sub_18007BA64.c)
 *     sub_1800814EC @ 0x1800814EC (sub_1800814EC.c)
 *     sub_180082480 @ 0x180082480 (sub_180082480.c)
 * Callees:
 *     sub_180010644 @ 0x180010644 (sub_180010644.c)
 */

_QWORD *__fastcall sub_1800152A0(_QWORD *a1, __int64 *a2)
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
    sub_180010644(v6);
  return a1;
}
