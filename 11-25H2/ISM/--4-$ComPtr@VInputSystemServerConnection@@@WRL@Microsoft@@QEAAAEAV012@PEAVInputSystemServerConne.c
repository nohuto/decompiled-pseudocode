/*
 * XREFs of ??4?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConnection@@@Z @ 0x180145050
 * Callers:
 *     ??$MakeAndInitialize@VCursorSuppressionProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@@YAJPEAPEAVCursorSuppressionProcessor@@$$QEAPEAVDWMInputRouter@@@Z @ 0x1801966F4 (--$MakeAndInitialize@VCursorSuppressionProcessor@@V1@PEAVDWMInputRouter@@@Details@WRL@Microsoft@.c)
 *     ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z @ 0x1801C09B4 (--0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z.c)
 * Callees:
 *     ?AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18000B4B8 (-AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7A4 (-InternalRelease@-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
Microsoft::Bamo::BaseBamoConnection **__fastcall Microsoft::WRL::ComPtr<InputSystemServerConnection>::operator=(
        Microsoft::Bamo::BaseBamoConnection **a1,
        Microsoft::Bamo::BaseBamoConnection *a2)
{
  Microsoft::Bamo::BaseBamoConnection *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      Microsoft::Bamo::BaseBamoConnection::AddRef(a2);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::InternalRelease(&v5);
  }
  return a1;
}
