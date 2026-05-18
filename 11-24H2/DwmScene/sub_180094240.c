/*
 * XREFs of sub_180094240 @ 0x180094240
 * Callers:
 *     sub_180094C30 @ 0x180094C30 (sub_180094C30.c)
 * Callees:
 *     sub_180094180 @ 0x180094180 (sub_180094180.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_180094240(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  char result; // al
  __int64 v7; // xmm1_8

  v3 = a2;
  v4 = a1 + 8;
  v5 = a1 + 32;
  if ( *(_BYTE *)(a1 + 80) || (result = sub_180094180((float *)v5, (float *)v4)) != 0 )
  {
    v7 = *(_QWORD *)(v4 + 16);
    *(_OWORD *)v5 = *(_OWORD *)v4;
    *(_QWORD *)(v5 + 16) = v7;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
  }
  *(_BYTE *)(a1 + 80) = 0;
  return result;
}
