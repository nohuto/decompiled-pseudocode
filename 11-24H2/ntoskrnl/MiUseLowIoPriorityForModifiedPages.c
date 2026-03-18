/*
 * XREFs of MiUseLowIoPriorityForModifiedPages @ 0x1402D1508
 * Callers:
 *     MiModifiedPageWriter @ 0x1402CF990 (MiModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402D10D4 (MiStoreUpdateMemoryConditions.c)
 *     MiAdjustModifiedPageLoad @ 0x1402D2864 (MiAdjustModifiedPageLoad.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1402D15D0 (MiGetAvailablePagesBelowPriority.c)
 */

_BOOL8 __fastcall MiUseLowIoPriorityForModifiedPages(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v3; // r9
  unsigned int v4; // r10d
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r11
  __int64 v7; // rax
  _DWORD *v8; // r9
  unsigned int v9; // ecx
  __int64 v10; // rax

  if ( *(_DWORD *)(a1 + 832) )
    return 0LL;
  if ( *(_DWORD *)(a1 + 1200) )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 18512);
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6LL);
  v5 = v1 >> 2;
  v6 = AvailablePagesBelowPriority;
  if ( *(_QWORD *)(v3 + 19616) >= 3 * v5 || AvailablePagesBelowPriority <= 0x40000 && AvailablePagesBelowPriority <= v5 )
    return 0LL;
  v7 = *(_QWORD *)(v3 + 17600);
  v8 = (_DWORD *)(v3 + 7204);
  v9 = *(_DWORD *)(v7 + 44);
  v10 = 7LL;
  do
  {
    v4 += *v8++;
    --v10;
  }
  while ( v10 );
  return (v9 < v4 ? v4 - v9 : 0) < v6 >> 2;
}
