/*
 * XREFs of ?GetUnmarshalClass@FtmBase@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAXK1KPEAU4@@Z @ 0x180033630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::FtmBase::GetUnmarshalClass(
        Microsoft::WRL::FtmBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        struct _GUID *a7)
{
  __int64 v7; // rcx

  v7 = *((_QWORD *)this + 3);
  if ( v7 )
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void *, _QWORD, void *, unsigned int, struct _GUID *))(*(_QWORD *)v7 + 24LL))(
             v7,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  else
    return 2147942414LL;
}
