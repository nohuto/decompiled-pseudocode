/*
 * XREFs of KiIsThreadStateControlledByProcessor @ 0x1403A41C0
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1403A3DA8 (KiUpdateGlobalCpuSetConfiguration.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsThreadStateControlledByProcessor(__int64 a1, __int64 a2)
{
  int v2; // r8d
  char result; // al
  char v4; // dl

  v2 = *(unsigned __int8 *)(a1 + 388);
  if ( *(_DWORD *)(a1 + 536) != *(_DWORD *)(a2 + 36) )
    return 0;
  result = 1;
  if ( v2 != 2 && v2 != 3 )
  {
    if ( v2 != 5 )
      return 0;
    v4 = *(_BYTE *)(a1 + 112) & 7;
    if ( (unsigned __int8)(v4 - 3) <= 3u || v4 == 1 )
      return 0;
  }
  return result;
}
