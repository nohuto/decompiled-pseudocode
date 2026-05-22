/*
 * XREFs of ?UpdateObservationState@?$CBaseInputObserverServer@$0L@@@AEAAXXZ @ 0x180137890
 * Callers:
 *     ?RegisterObserverClient@?$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1801376B0 (-RegisterObserverClient@-$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@.c)
 *     ?UnregisterObserverClient@?$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1801377B0 (-UnregisterObserverClient@-$CBaseInputObserverServer@$0L@@@UEAAJPEAVBamoInputObserverManagerStub.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseInputObserverServer<11>::UpdateObservationState(__int64 a1)
{
  __int64 v1; // r8

  v1 = 1LL;
  if ( *(_QWORD *)(a1 + 176) )
  {
    v1 = 2LL;
    if ( *(_DWORD *)(a1 + 224) )
      v1 = 4LL;
  }
  return NtMITSetInputObservationState(1LL, 4LL, v1);
}
