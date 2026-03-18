/*
 * XREFs of ?OnPortConnectionFailed@BaseBamoConnection@Bamo@Microsoft@@MEAAJJIII@Z @ 0x18026F490
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x180270158 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::OnPortConnectionFailed(
        Microsoft::Bamo::BaseBamoConnection *this,
        int a2)
{
  Microsoft::Bamo::BaseBamoConnection::TrackError(this, a2);
  return 0LL;
}
