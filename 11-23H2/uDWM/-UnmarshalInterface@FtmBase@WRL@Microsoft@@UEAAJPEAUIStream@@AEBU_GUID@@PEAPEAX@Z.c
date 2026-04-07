/*
 * XREFs of ?UnmarshalInterface@FtmBase@WRL@Microsoft@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A6050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::FtmBase::UnmarshalInterface(
        Microsoft::WRL::FtmBase *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, struct IStream *, const struct _GUID *, void **))(*(_QWORD *)v4 + 48LL))(
             v4,
             a2,
             a3,
             a4);
  else
    return 2147942414LL;
}
