/*
 * XREFs of ?UnsuppressInputOfType@CInputObserverManager@@UEAAJPEAVBamoInputObserverManagerStub@@W4InputObserverType@InputObservation@@PEAVBamoInputObserverClientProxy@@@Z @ 0x180139110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputObserverManager::UnsuppressInputOfType(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rcx

  v4 = (__int64)*(&qword_1802519E0 + a3);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 40LL))(v4, a2, a4);
  else
    return 2147942487LL;
}
