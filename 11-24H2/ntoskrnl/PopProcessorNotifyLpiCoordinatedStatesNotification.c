/*
 * XREFs of PopProcessorNotifyLpiCoordinatedStatesNotification @ 0x1405D2640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopProcessorNotifyLpiCoordinatedStatesNotification(__int64 a1, _DWORD *a2, __int64 a3, __int64 j)
{
  __int64 v4; // r11
  __int64 v5; // rdi
  __int64 i; // r8
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v9; // rax

  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 72);
  if ( !v4 || !*(_QWORD *)(v4 + 104) )
    return 3221225474LL;
  for ( i = 0LL; (unsigned int)i < *a2; i = (unsigned int)(i + 1) )
  {
    v7 = 0LL;
    for ( j = 24 * i; (unsigned int)v7 < a2[j + 22]; v7 = (unsigned int)(v7 + 1) )
    {
      v8 = *(_QWORD *)&a2[j + 24];
      v9 = *(_QWORD *)(v8 + 24 * v7);
      if ( v9 )
        *(_QWORD *)(v8 + 24 * v7) = *(_QWORD *)(v9 + 72);
    }
  }
  return (unsigned __int8)guard_dispatch_icall_no_overrides(v5, 36LL, a2, j * 4) == 0 ? 0xC00000BB : 0;
}
