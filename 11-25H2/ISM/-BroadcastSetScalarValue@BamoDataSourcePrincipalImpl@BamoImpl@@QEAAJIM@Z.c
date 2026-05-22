/*
 * XREFs of ?BroadcastSetScalarValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIM@Z @ 0x1800FFF0C
 * Callers:
 *     ?BroadcastSetScalarValue@BamoDataSourcePrincipal@@UEAAJIM@Z @ 0x1800FFEB0 (-BroadcastSetScalarValue@BamoDataSourcePrincipal@@UEAAJIM@Z.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$EnumerateStubs@IM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IM@Z_NIM@Z @ 0x1800FE674 (--$EnumerateStubs@IM@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAJP6AJPEAVBamoStubImpl@12@IM@Z_NIM.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetScalarValue(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        __int64 a2,
        float a3)
{
  __int64 v3; // r8
  __int64 v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL) )
    return Microsoft::BamoImpl::BamoPrincipalImpl::EnumerateStubs<unsigned int,float>((__int64)this, a2, v3, a2, a3);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
    *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v4 + 32),
    0x87B20814,
    0);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x308C,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
    (const char *)0x87B20814LL);
  return 2276591636LL;
}
