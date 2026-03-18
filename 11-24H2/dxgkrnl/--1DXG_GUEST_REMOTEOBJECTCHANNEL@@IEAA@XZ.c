/*
 * XREFs of ??1DXG_GUEST_REMOTEOBJECTCHANNEL@@IEAA@XZ @ 0x1402057DC
 * Callers:
 *     ?Delete@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAXXZ @ 0x140206B90 (-Delete@DXG_GUEST_REMOTEOBJECTCHANNEL@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::~DXG_GUEST_REMOTEOBJECTCHANNEL(DXG_GUEST_REMOTEOBJECTCHANNEL *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DXG_GUEST_REMOTEOBJECTCHANNEL::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
}
