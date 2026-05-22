/*
 * XREFs of ?OnPeerRequestsConnect@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x180072F10
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPeerRequestsConnect(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        unsigned int a2,
        unsigned int *a3,
        struct MsgString **a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  unsigned int v11; // ebx
  Microsoft::BamoImpl::BamoImplObject *v13; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v13,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 24));
  v10 = (_QWORD *)*((_QWORD *)this + 1);
  v11 = 0;
  *a3 = 0;
  *a4 = 0LL;
  if ( v10[8] )
    v11 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, unsigned int *, struct MsgString **))(*v10 + 32LL))(
            v10,
            a2,
            a3,
            a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v13, v8, v9);
  return v11;
}
