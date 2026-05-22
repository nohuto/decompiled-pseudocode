/*
 * XREFs of ?OnPeerDisconnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@_N@Z @ 0x18006C8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800454A8 (--1-$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@X.c)
 *     ??0?$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoConnectionImpl@ISMBamos_AutoBamos@1@@Z @ 0x18006CA14 (--0-$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@P.c)
 *     ?LogOnPeerDisconnected@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXPEAVBamoPeer@2@@Z @ 0x18008F31C (-LogOnPeerDisconnected@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXPEAVBamoPeer@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::OnPeerDisconnectedThunk(
        BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        char a3)
{
  __int64 v4; // rdi
  struct ISMBamos_AutoBamos::BamoPeer *v5; // rbx
  BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *v6; // rcx
  __int64 v7; // r8
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)this + 2);
  v5 = (struct ISMBamos_AutoBamos::BamoPeer *)*((_QWORD *)a2 + 2);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>(
    v9,
    this,
    this);
  BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::LogOnPeerDisconnected(v6, v5);
  LOBYTE(v7) = a3;
  LODWORD(v5) = (*(__int64 (__fastcall **)(__int64, struct ISMBamos_AutoBamos::BamoPeer *, __int64))(*(_QWORD *)v4 + 120LL))(
                  v4,
                  v5,
                  v7);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>::~CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>((__int64)v9);
  return (unsigned int)v5;
}
