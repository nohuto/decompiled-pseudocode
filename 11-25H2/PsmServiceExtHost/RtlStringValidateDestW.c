/*
 * XREFs of RtlStringValidateDestW @ 0x18007F0F8
 * Callers:
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001D9AC (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18003D79C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringValidateDestW(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return 3221225485LL;
  return result;
}
