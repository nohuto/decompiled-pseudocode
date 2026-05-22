/*
 * XREFs of ?InternalRelease@?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7A4
 * Callers:
 *     ?Create@InputSystemInternalServerConnection@@SA?AV?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18000C608 (-Create@InputSystemInternalServerConnection@@SA-AV-$ComPtr@VInputSystemInternalServerConnection@.c)
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18000D33C (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?Create@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18007F7B4 (-Create@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClientConnection@.c)
 *     ?GetForCurrentThread@InputSystemInternalClientConnection@@SA?AV?$ComPtr@VInputSystemInternalClientConnection@@@WRL@Microsoft@@XZ @ 0x18008D580 (-GetForCurrentThread@InputSystemInternalClientConnection@@SA-AV-$ComPtr@VInputSystemInternalClie.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x180093150 (--1DWMCursor@@MEAA@XZ.c)
 *     ??1?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x18009975C (--1-$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800C9A10 (--0InputProcess@@AEAA@XZ.c)
 *     ??1InputProcess@@UEAA@XZ @ 0x1800C9C08 (--1InputProcess@@UEAA@XZ.c)
 *     ??1CursorSuppressionProcessor@@UEAA@XZ @ 0x180144FEC (--1CursorSuppressionProcessor@@UEAA@XZ.c)
 *     ??4?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConnection@@@Z @ 0x180145050 (--4-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVInputSystemServerConne.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18008D760 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::InternalRelease(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  unsigned int result; // eax
  Microsoft::Bamo::BaseBamoConnection *v2; // rdx

  result = 0;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::Bamo::BaseBamoConnection::Release(v2);
  }
  return result;
}
