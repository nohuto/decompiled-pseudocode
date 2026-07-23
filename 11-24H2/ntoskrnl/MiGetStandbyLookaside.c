/*
 * XREFs of MiGetStandbyLookaside @ 0x140301F40
 * Callers:
 *     MiSynchronizeFastPageInsert @ 0x140301300 (MiSynchronizeFastPageInsert.c)
 *     MiRebuildStandbyLookasideList @ 0x1403E73E0 (MiRebuildStandbyLookasideList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetStandbyLookaside(__int64 *a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v4; // r11
  unsigned __int8 v6; // dl

  v2 = *a1;
  v3 = *((unsigned int *)a1 + 7);
  if ( !a2 )
    return (v3 << 9) + v2 + 7744;
  if ( a2 == 1 )
    return (v3 << 9) + v2 + 11840;
  v4 = *((int *)a1 + 9);
  if ( (int)v4 >= 9 )
    return *(_QWORD *)(v2 + 16)
         + 57216LL * *((unsigned int *)a1 + 6)
         + ((v3 + 8LL * *((unsigned __int8 *)a1 + 32) + 13) << 9);
  v6 = 0;
  if ( (_DWORD)v4 == 8 )
    v6 = *((_BYTE *)a1 + 40);
  return *(_QWORD *)(232 * v4 + 57216LL * *((unsigned int *)a1 + 6) + *(_QWORD *)(v2 + 16) + 15760)
       + ((v3 + 8LL * v6) << 9);
}
