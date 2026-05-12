/*
 * XREFs of RaidFillTcgLockingInfo @ 0x14008C26C
 * Callers:
 *     RaidAssignTcgNamespaceLockingObject @ 0x14008AC00 (RaidAssignTcgNamespaceLockingObject.c)
 *     RaidAssignTcgRangeLockingObject @ 0x14008AF58 (RaidAssignTcgRangeLockingObject.c)
 *     RaidFillTcgLockingObjects @ 0x14008C304 (RaidFillTcgLockingObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidFillTcgLockingInfo(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  char result; // al

  v2 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)a2 = v2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 12);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 28);
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_DWORD *)(a2 + 4) = 1;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a2 + 48) = *(_QWORD *)(a1 + 56);
  }
  else if ( *(_DWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a2 + 4) = 2;
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 72);
  }
  else if ( !v2 )
  {
    *(_QWORD *)(a2 + 48) = -1LL;
  }
  *(_DWORD *)(a2 + 56) = 1;
  if ( *(_BYTE *)(a1 + 64) && *(_BYTE *)(a1 + 65) )
  {
    if ( *(_BYTE *)(a1 + 66) && *(_BYTE *)(a1 + 67) )
    {
      *(_DWORD *)(a2 + 56) = 3;
    }
    else if ( *(_BYTE *)(a1 + 68) )
    {
      *(_DWORD *)(a2 + 56) = 2;
    }
  }
  result = *(_BYTE *)(a1 + 69);
  *(_BYTE *)(a2 + 60) = result;
  return result;
}
