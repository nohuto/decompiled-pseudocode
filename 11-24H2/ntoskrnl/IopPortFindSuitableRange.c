/*
 * XREFs of IopPortFindSuitableRange @ 0x140723B20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFindRange @ 0x140A201D0 (RtlFindRange.c)
 */

char __fastcall IopPortFindSuitableRange(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r10
  char v3; // r9
  __int64 v6; // r11
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8

  v2 = a2[5];
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 16);
  if ( !v6 )
  {
    a2[1] = *a2;
    return 1;
  }
  v8 = a2[4];
  if ( (*(_DWORD *)(v8 + 40) & 0xFFFFFFFD) == 0 || (*(_DWORD *)(v8 + 44) & 1) != 0 )
    v3 = 1;
  v9 = a2[2];
  v10 = a2[3];
  if ( v9 <= v10
    && ((int)RtlFindRange(
               a1[6],
               v9,
               v10,
               v6,
               *(_QWORD *)(v2 + 24),
               *(_DWORD *)(v2 + 36) & 1,
               v3,
               a1[41],
               a1[42],
               (__int64)a2) >= 0
     || (unsigned __int8)guard_dispatch_icall_no_overrides(a1, a2)) )
  {
    a2[1] = *a2 - 1LL + *(_QWORD *)(a2[5] + 16LL);
    return 1;
  }
  return 0;
}
