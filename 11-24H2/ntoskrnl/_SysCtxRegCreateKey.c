/*
 * XREFs of _SysCtxRegCreateKey @ 0x140A496BC
 * Callers:
 *     _PnpOpenPropertiesKey @ 0x14097E830 (_PnpOpenPropertiesKey.c)
 *     _PnpCtxRegCreateKey @ 0x140A49664 (_PnpCtxRegCreateKey.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x140928644 (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall SysCtxRegCreateKey(
        __int64 a1,
        void *a2,
        const WCHAR *a3,
        ULONG a4,
        ACCESS_MASK a5,
        void *a6,
        __int64 a7,
        HANDLE *a8,
        ULONG *a9)
{
  if ( a1 )
    return RegRtlCreateKeyTransacted(a2, a3, a4, a5, a6, 0, a8, a9, *(_QWORD *)(a1 + 8));
  else
    return RegRtlCreateKeyTransacted(a2, a3, a4, a5, a6, 0, a8, a9, 0LL);
}
