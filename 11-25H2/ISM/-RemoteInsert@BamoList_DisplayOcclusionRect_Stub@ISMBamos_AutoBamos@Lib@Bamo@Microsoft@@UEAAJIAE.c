/*
 * XREFs of ?RemoteInsert@BamoList_DisplayOcclusionRect_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013D100
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?RemoteInsert@BamoList_DisplayOcclusionRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013D160 (-RemoteInsert@BamoList_DisplayOcclusionRect_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Micros.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub::RemoteInsert(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub *this,
        unsigned int a2,
        const struct DisplayOcclusionRect *a3)
{
  Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 5) + 24LL));
  LODWORD(v5) = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_StubImpl::RemoteInsert(
                  (Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
