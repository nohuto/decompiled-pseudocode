/*
 * XREFs of FindRSAccess @ 0x140001910
 * Callers:
 *     RegRSAccess @ 0x1400010AC (RegRSAccess.c)
 *     RawFieldAccess @ 0x140001978 (RawFieldAccess.c)
 *     AccessBaseField @ 0x14000C680 (AccessBaseField.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindRSAccess(int a1)
{
  KIRQL v2; // al
  __int64 i; // rbx

  v2 = ExAcquireSpinLockShared(&RSAccessLock);
  for ( i = gpRSAccessHead; i; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 8) == a1 )
      break;
  }
  ExReleaseSpinLockShared(&RSAccessLock, v2);
  return i;
}
