/*
 * XREFs of sub_1800941D0 @ 0x1800941D0
 * Callers:
 *     sub_180094AD0 @ 0x180094AD0 (sub_180094AD0.c)
 * Callees:
 *     sub_180040FA4 @ 0x180040FA4 (sub_180040FA4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_1800941D0(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  _DWORD *v4; // rcx
  unsigned int *v5; // rdx
  char result; // al

  v3 = a2;
  v4 = (_DWORD *)(a1 + 8);
  v5 = (unsigned int *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 56) || (result = sub_180040FA4(v4, v5)) == 0 )
  {
    *(_OWORD *)v5 = *(_OWORD *)v4;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v3 + 192LL))(
               v3,
               *v5,
               *(unsigned int *)(a1 + 28),
               *(unsigned int *)(a1 + 32),
               *(_DWORD *)(a1 + 36));
  }
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}
