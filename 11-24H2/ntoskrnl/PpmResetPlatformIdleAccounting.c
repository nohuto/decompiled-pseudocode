/*
 * XREFs of PpmResetPlatformIdleAccounting @ 0x1405CC8C0
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x140748780 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140A2E800 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PpmResetPlatformIdleAccounting(int *a1)
{
  unsigned int v1; // edi
  int v2; // esi
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax

  v1 = a1[1];
  v2 = *a1;
  memset_0(a1, 0, (v1 << 10) + 40);
  if ( v1 )
  {
    v4 = a1 + 60;
    v5 = v1;
    do
    {
      *(v4 - 22) = -1LL;
      v6 = v4;
      v7 = 26LL;
      do
      {
        *v6 = -1LL;
        v6 += 4;
        --v7;
      }
      while ( v7 );
      v4 += 128;
      --v5;
    }
    while ( v5 );
  }
  a1[1] = v1;
  *a1 = v2 + 1;
  result = MEMORY[0xFFFFF78000000008];
  a1[6] = 0;
  *((_QWORD *)a1 + 4) = result;
  return result;
}
