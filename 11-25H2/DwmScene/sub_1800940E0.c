/*
 * XREFs of sub_1800940E0 @ 0x1800940E0
 * Callers:
 *     sub_180094AD0 @ 0x180094AD0 (sub_180094AD0.c)
 * Callees:
 *     sub_180094020 @ 0x180094020 (sub_180094020.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_1800940E0(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  char result; // al
  __int64 v7; // xmm1_8

  v3 = a2;
  v4 = a1 + 8;
  v5 = a1 + 32;
  if ( *(_BYTE *)(a1 + 80) || (result = sub_180094020((float *)v5, (float *)v4)) != 0 )
  {
    v7 = *(_QWORD *)(v4 + 16);
    *(_OWORD *)v5 = *(_OWORD *)v4;
    *(_QWORD *)(v5 + 16) = v7;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
  }
  *(_BYTE *)(a1 + 80) = 0;
  return result;
}
