/*
 * XREFs of ?OnPeerRequestsConnectThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x18006C840
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800454A8 (--1-$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@X.c)
 *     ??0?$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoConnectionImpl@ISMBamos_AutoBamos@1@@Z @ 0x18006CA14 (--0-$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@P.c)
 *     ?LogOnPeerRequestsConnect@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXIIJ@Z @ 0x18008E218 (-LogOnPeerRequestsConnect@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXIIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::OnPeerRequestsConnectThunk(
        BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *this,
        unsigned int a2,
        unsigned int *a3,
        struct MsgString **a4)
{
  __int64 v7; // rbx
  BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *v8; // rcx
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  v7 = *((_QWORD *)this + 2);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>(
    v10,
    this,
    this);
  LODWORD(v7) = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, struct MsgString **))(*(_QWORD *)v7 + 104LL))(
                  v7,
                  a2,
                  a3,
                  a4);
  BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::LogOnPeerRequestsConnect(v8, a2, *a3, v7);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>::~CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>((__int64)v10);
  return (unsigned int)v7;
}
