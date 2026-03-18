/*
 * XREFs of rimIsExplicitRimUsagesMatchingUsages @ 0x1400C970C
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1400C8E60 (RIMIDECreateHIDDesc.c)
 *     rimCheckForExplicitRimConflictInProcess @ 0x1400C9648 (rimCheckForExplicitRimConflictInProcess.c)
 *     rimFindReferencedRimObj @ 0x1401D3D60 (rimFindReferencedRimObj.c)
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 *     RIMIDEIsCompatibleDevice @ 0x1401E6BC4 (RIMIDEIsCompatibleDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimIsExplicitRimUsagesMatchingUsages(__int64 a1, __int16 a2, __int16 a3)
{
  __int64 i; // rax
  __int64 v5; // r8

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(_DWORD *)(a1 + 88) )
      return 0LL;
    v5 = *(_QWORD *)(a1 + 96);
    if ( *(_WORD *)(v5 + 4 * i) == a3 && *(_WORD *)(v5 + 4 * i + 2) == a2 )
      break;
  }
  return 1LL;
}
