/*
 * XREFs of PpmParkCompleteMakeup @ 0x1404EAB50
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x140204A70 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 PpmParkCompleteMakeup()
{
  unsigned __int16 i; // di
  __int64 v1; // rbx
  const void *v2; // rdx
  void *v3; // rcx
  size_t v4; // r8
  unsigned __int8 j; // si
  __int64 v6; // rcx
  int v7; // r8d
  const void *v8; // rdx
  __int64 result; // rax

  for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
  {
    v1 = PpmParkNodes + 208LL * i;
    v2 = *(const void **)(v1 + 56);
    v3 = *(void **)(v1 + 64);
    v4 = (unsigned int)(8 * *(_DWORD *)(v1 + 104));
    *(_QWORD *)(v1 + 88) = *(_QWORD *)(v1 + 80);
    memmove(v3, v2, v4);
    if ( *(_BYTE *)(v1 + 121) )
    {
      for ( j = 0; j < *(_BYTE *)(v1 + 11); ++j )
      {
        v6 = *(_QWORD *)(v1 + 200) + 104LL * j;
        v7 = *(_DWORD *)(v6 + 88);
        v8 = *(const void **)(v6 + 40);
        *(_QWORD *)(v6 + 72) = *(_QWORD *)(v6 + 64);
        memmove(*(void **)(v6 + 48), v8, (unsigned int)(8 * v7));
      }
    }
    ++i;
  }
  return result;
}
