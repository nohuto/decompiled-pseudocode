/*
 * XREFs of _freea @ 0x180043BE8
 * Callers:
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180042E04 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     <none>
 */

void __cdecl freea(void *Memory)
{
  _DWORD *v1; // rcx

  if ( Memory )
  {
    v1 = (char *)Memory - 16;
    if ( *v1 == 56797 )
      free(v1);
  }
}
