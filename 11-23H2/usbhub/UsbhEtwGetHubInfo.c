/*
 * XREFs of UsbhEtwGetHubInfo @ 0x1C0021B60
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C000B860 (UsbhHubProcessIsr.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005B848 (UsbhEtwLogHubEventWithExtraData.c)
 *     UsbhEtwLogHubException @ 0x1C005B93C (UsbhEtwLogHubException.c)
 *     UsbhEtwLogHubInformation @ 0x1C005BA60 (UsbhEtwLogHubInformation.c)
 *     UsbhEtwLogHubPastExceptions @ 0x1C005BB74 (UsbhEtwLogHubPastExceptions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhEtwGetHubInfo(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r8
  __int16 v3; // ax
  __int64 v5; // r10
  int v6; // eax
  unsigned __int16 *v7; // rcx
  int v8; // eax
  __int64 result; // rax

  v2 = (_DWORD *)(a2 + 12);
  *(_WORD *)a2 = *(_WORD *)(a1 + 2548);
  v3 = *(_WORD *)(a1 + 2550);
  *(_DWORD *)(a2 + 4) = 0;
  *(_WORD *)(a2 + 2) = v3;
  *(_DWORD *)(a2 + 8) = *(unsigned __int16 *)(a1 + 5208);
  v5 = 5LL;
  v6 = *(_DWORD *)(a2 + 4);
  if ( *(_WORD *)(a1 + 5208) )
    v6 = 1;
  v7 = (unsigned __int16 *)(a1 + 5210);
  *(_DWORD *)(a2 + 4) = v6;
  do
  {
    v8 = *v7;
    *v2 = v8;
    if ( v8 )
      ++*(_DWORD *)(a2 + 4);
    ++v2;
    ++v7;
    --v5;
  }
  while ( v5 );
  result = *(unsigned int *)(a1 + 2536);
  *(_DWORD *)(a2 + 32) = result;
  return result;
}
