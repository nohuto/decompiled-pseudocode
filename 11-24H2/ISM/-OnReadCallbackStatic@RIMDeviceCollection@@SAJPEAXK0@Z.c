/*
 * XREFs of ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x18004A120
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x180086850 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 * Callees:
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x18004A18C (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009AA0C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::OnReadCallbackStatic(RIMDeviceCollection *a1, int a2, void *a3)
{
  int Event; // eax
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v5 = 2147549183LL;
    v6 = 447LL;
LABEL_7:
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v5,
      v7);
    return 0LL;
  }
  if ( !a1 )
  {
    v5 = 2147942487LL;
    v6 = 438LL;
    goto LABEL_7;
  }
  Event = RIMDeviceCollection::OnReadEvent(a1);
  if ( Event < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1BA,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)Event,
      v7);
  return 0LL;
}
