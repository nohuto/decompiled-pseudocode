/*
 * XREFs of ApiSetQueryApiSetPresence @ 0x1800EF740
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetResolveToHost @ 0x18005B040 (ApiSetResolveToHost.c)
 *     LdrpLogDllState @ 0x180070D00 (LdrpLogDllState.c)
 */

__int64 __fastcall ApiSetQueryApiSetPresence(unsigned __int16 *a1, char *a2)
{
  void *ApiSetMap; // rbx
  int v5; // ebx
  unsigned __int16 v6; // r8
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = 0LL;
  ApiSetMap = NtCurrentPeb()->ApiSetMap;
  LdrpLogDllState(0, (__int64)a1, 0x14D0u);
  v5 = ApiSetResolveToHost((__int64)ApiSetMap, a1, 0LL, a2, (__int64)&v8);
  if ( v5 >= 0 && *a2 )
  {
    if ( (_WORD)v8 )
      v6 = 5329;
    else
      v6 = 5330;
  }
  else
  {
    v6 = 5331;
  }
  LdrpLogDllState(0, (__int64)a1, v6);
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( !(_WORD)v8 )
  {
    if ( *a2 )
      *a2 = 0;
  }
  return 0LL;
}
