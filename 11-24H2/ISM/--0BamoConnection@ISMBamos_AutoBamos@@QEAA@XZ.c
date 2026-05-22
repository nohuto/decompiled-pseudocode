/*
 * XREFs of ??0BamoConnection@ISMBamos_AutoBamos@@QEAA@XZ @ 0x18009773C
 * Callers:
 *     ??$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalServerConnection@@@Z @ 0x18000CF28 (--$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 *     ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x180097648 (--$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ??0InputSystemInternalClientConnection@@IEAA@XZ @ 0x18012DBDC (--0InputSystemInternalClientConnection@@IEAA@XZ.c)
 * Callees:
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180090258 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

ISMBamos_AutoBamos::BamoConnection *__fastcall ISMBamos_AutoBamos::BamoConnection::BamoConnection(
        ISMBamos_AutoBamos::BamoConnection *this)
{
  *(_QWORD *)this = &ISMBamos_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (ISMBamos_AutoBamos::BamoConnection *)((char *)this + 8),
    this);
  *((_QWORD *)this + 1) = &BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::`vftable';
  return this;
}
