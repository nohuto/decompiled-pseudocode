/*
 * XREFs of ?GetInputSiteId@BamoInputSiteElementProxy@@UEAA_KXZ @ 0x180045DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046B80 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180046BB8 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

__int64 __fastcall BamoInputSiteElementProxy::GetInputSiteId(BamoInputSiteElementProxy *this)
{
  __int64 v2; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v3; // rsi
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v6 = 0LL;
  v3 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v2 + 32);
  if ( !Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(v3) )
  {
    v6 = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v3);
  }
  v4 = *((_QWORD *)this + 6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v6);
  return v4;
}
