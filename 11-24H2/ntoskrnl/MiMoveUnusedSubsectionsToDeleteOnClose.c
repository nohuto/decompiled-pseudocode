/*
 * XREFs of MiMoveUnusedSubsectionsToDeleteOnClose @ 0x14067357C
 * Callers:
 *     MiPrepareDeleteOnClose @ 0x1406736D0 (MiPrepareDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14067374C (MiProcessDeleteOnClose.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMoveUnusedSubsectionsToDeleteOnClose(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 i; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // r8

  v2 = 0;
  for ( i = a2 + 128; i; i = *(_QWORD *)(i + 16) )
  {
    if ( *(_QWORD *)(i + 8)
      && !*(_QWORD *)(i + 80)
      && (*(_DWORD *)(i + 32) & 0x10000) == 0
      && (*(_DWORD *)(i + 32) & 0x80000) != 0 )
    {
      v5 = (_QWORD *)(i + 88);
      v6 = *(_QWORD *)(i + 88);
      if ( *(_QWORD *)(v6 + 8) != i + 88
        || (v7 = *(_QWORD **)(i + 96), (_QWORD *)*v7 != v5)
        || (*v7 = v6,
            *(_QWORD *)(v6 + 8) = v7,
            v8 = (_QWORD *)(a1 + 1992),
            v9 = *(_QWORD *)(a1 + 1992),
            *(_QWORD *)(v9 + 8) != a1 + 1992) )
      {
        __fastfail(3u);
      }
      *v5 = v9;
      *(_QWORD *)(i + 96) = v8;
      *(_QWORD *)(v9 + 8) = v5;
      v2 = 1;
      *v8 = v5;
    }
  }
  return v2;
}
