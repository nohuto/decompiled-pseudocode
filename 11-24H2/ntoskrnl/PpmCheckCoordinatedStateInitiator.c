/*
 * XREFs of PpmCheckCoordinatedStateInitiator @ 0x1405CB4DC
 * Callers:
 *     PpmCheckCoordinatedStateInitiator @ 0x1405CB4DC (PpmCheckCoordinatedStateInitiator.c)
 *     PpmInstallCoordinatedIdleStates @ 0x140748780 (PpmInstallCoordinatedIdleStates.c)
 * Callees:
 *     PpmCheckCoordinatedStateInitiator @ 0x1405CB4DC (PpmCheckCoordinatedStateInitiator.c)
 */

char __fastcall PpmCheckCoordinatedStateInitiator(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx
  int v8; // eax
  __int64 j; // rdi
  __int64 v10; // rax

  LOBYTE(a4) = 0;
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
  {
    v8 = *(_DWORD *)(a3 + 24 * i);
    if ( v8 == -1 || v8 == a1 )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a3 + 24 * i + 8); j = (unsigned int)(j + 1) )
      {
        v10 = *(_QWORD *)(a3 + 24 * i + 16);
        if ( *(_BYTE *)(v10 + 24 * j + 1) )
        {
          if ( *(_DWORD *)(a3 + 24 * i) != -1 )
          {
            LOBYTE(a4) = 1;
            return a4;
          }
          LOBYTE(a4) = PpmCheckCoordinatedStateInitiator(
                         a1,
                         *(unsigned int *)(v10 + 24 * j + 8),
                         *(_QWORD *)(v10 + 24 * j + 16),
                         a4);
          if ( (_BYTE)a4 )
            return a4;
        }
      }
    }
  }
  return a4;
}
