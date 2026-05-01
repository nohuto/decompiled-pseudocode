/*
 * XREFs of ?CopyTo@AgileRef@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18001C63C
 * Callers:
 *     ?Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z @ 0x1800426F0 (-Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::AgileRef::CopyTo(
        Microsoft::WRL::AgileRef *this,
        const struct _GUID *a2,
        struct IUnknown **a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = 0LL;
  *a3 = 0LL;
  v4 = *(_QWORD *)this;
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *))(*(_QWORD *)v4 + 24LL))(v4, a2);
  return result;
}
