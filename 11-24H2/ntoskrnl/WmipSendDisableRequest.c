/*
 * XREFs of WmipSendDisableRequest @ 0x140A2CD30
 * Callers:
 *     WmipDisableCollectOrEvent @ 0x140A2CCC0 (WmipDisableCollectOrEvent.c)
 * Callees:
 *     WmipDoDisableRequest @ 0x1409AF864 (WmipDoDisableRequest.c)
 */

__int64 __fastcall WmipSendDisableRequest(_DWORD *a1, char a2)
{
  __int64 result; // rax
  int v4; // edx
  __int64 v5; // r8
  int v6; // edx
  int v7; // edx

  result = 0LL;
  if ( a2 )
  {
    v4 = a1[22];
    v5 = 2LL;
    if ( !v4 )
      return result;
    v6 = v4 - 1;
    a1[22] = v6;
  }
  else
  {
    --a1[23];
    v5 = 4LL;
    v6 = a1[23];
  }
  if ( !v6 )
  {
    v7 = a1[4];
    if ( (v7 & (unsigned int)v5) == 0 )
    {
      a1[4] = v5 | v7;
      return WmipDoDisableRequest(a1, a2, v5);
    }
  }
  return result;
}
