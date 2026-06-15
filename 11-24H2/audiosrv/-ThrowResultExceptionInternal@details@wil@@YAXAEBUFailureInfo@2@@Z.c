/*
 * XREFs of ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800AA130
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800A9CF8 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn wil::details::ThrowResultExceptionInternal(
        wil::details *this,
        const struct wil::FailureInfo *a2)
{
  void **pExceptionObject; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v3; // [rsp+28h] [rbp-D0h]
  _BYTE v4[152]; // [rsp+38h] [rbp-C0h] BYREF
  __int128 v5; // [rsp+D0h] [rbp-28h]
  __int128 v6; // [rsp+E0h] [rbp-18h]

  pExceptionObject = &wil::ResultException::`vftable';
  v3 = 0LL;
  v5 = 0LL;
  wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)v4, this);
  v6 = 0LL;
  throw (wil::ResultException *)&pExceptionObject;
}
