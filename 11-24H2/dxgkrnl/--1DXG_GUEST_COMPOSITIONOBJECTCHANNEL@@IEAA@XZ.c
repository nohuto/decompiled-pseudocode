/*
 * XREFs of ??1DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@IEAA@XZ @ 0x140205790
 * Callers:
 *     ?Delete@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXXZ @ 0x140206B60 (-Delete@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::~DXG_GUEST_COMPOSITIONOBJECTCHANNEL(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &DXG_GUEST_COMPOSITIONOBJECTCHANNEL::`vftable';
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
    *((_QWORD *)this + 1) = 0LL;
  }
}
