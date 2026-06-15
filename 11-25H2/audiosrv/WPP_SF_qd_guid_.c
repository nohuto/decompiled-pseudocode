/*
 * XREFs of WPP_SF_qd_guid_ @ 0x1800FE7E4
 * Callers:
 *     ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z @ 0x18007FD70 (-SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qd_guid_(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  __int64 v8; // [rsp+98h] [rbp+30h]
  va_list va2; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  v8 = va_arg(va2, _QWORD);
  return EtwTraceMessage(
           a1,
           43LL,
           &WPP_e846c6bb50ec3cebd8d62736219e1480_Traceguids,
           12LL,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           v8);
}
