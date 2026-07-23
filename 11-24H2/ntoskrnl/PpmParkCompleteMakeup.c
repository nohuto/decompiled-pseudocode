/*
 * XREFs of PpmParkCompleteMakeup @ 0x1404E593C
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x1402ADF00 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
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
    v1 = PpmParkNodes + 1296LL * i;
    v2 = *(const void **)(v1 + 1112);
    v3 = *(void **)(v1 + 1120);
    v4 = (unsigned int)(8 * *(_DWORD *)(v1 + 1160));
    *(_QWORD *)(v1 + 1144) = *(_QWORD *)(v1 + 1136);
    memmove(v3, v2, v4);
    if ( *(_BYTE *)(v1 + 1185) )
    {
      for ( j = 0; j < *(_BYTE *)(v1 + 12); ++j )
      {
        v6 = *(_QWORD *)(v1 + 1288) + 640LL * j;
        v7 = *(_DWORD *)(v6 + 624);
        v8 = *(const void **)(v6 + 576);
        *(_QWORD *)(v6 + 608) = *(_QWORD *)(v6 + 600);
        memmove(*(void **)(v6 + 584), v8, (unsigned int)(8 * v7));
      }
    }
    ++i;
  }
  return result;
}
