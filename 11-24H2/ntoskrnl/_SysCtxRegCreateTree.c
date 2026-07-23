/*
 * XREFs of _SysCtxRegCreateTree @ 0x140928A64
 * Callers:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C5740 (_PnpCtxGetCachedNodeBaseKey.c)
 * Callees:
 *     _RegRtlCreateTreeTransacted @ 0x1409282E4 (_RegRtlCreateTreeTransacted.c)
 */

__int64 __fastcall SysCtxRegCreateTree(
        __int64 a1,
        void *a2,
        const wchar_t *a3,
        ULONG a4,
        ACCESS_MASK DesiredAccess,
        void *a6,
        __int64 a7,
        HANDLE *KeyHandle,
        ULONG *a9)
{
  if ( a1 )
    return RegRtlCreateTreeTransacted(a2, a3, a4, DesiredAccess, a6, 0, KeyHandle, a9, *(_QWORD *)(a1 + 8));
  else
    return RegRtlCreateTreeTransacted(a2, a3, a4, DesiredAccess, a6, 0, KeyHandle, a9, 0LL);
}
