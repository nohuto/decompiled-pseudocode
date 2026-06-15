/*
 * XREFs of AudioDGPublishApoTelemetry @ 0x140046980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x1400469D0 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 */

__int64 __fastcall AudioDGPublishApoTelemetry(__int64 a1, const unsigned __int16 *a2, struct _GUID *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct _GUID v6; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *a3;
  v3 = PublishApoTelemetry(a2, &v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE7,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\rpc.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
