/*
 * XREFs of KiTryAcquirePrcbLocksForIsolationUnit @ 0x14044E208
 * Callers:
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 * Callees:
 *     <none>
 */

char __fastcall KiTryAcquirePrcbLocksForIsolationUnit(__int64 a1, int a2, unsigned __int64 *a3)
{
  char v3; // r10
  __int64 *v4; // rbx
  unsigned int v5; // r11d
  unsigned __int8 *v6; // rax
  unsigned int v7; // edx
  __int64 *v8; // rcx
  __int64 v10; // [rsp+8h] [rbp+8h] BYREF

  v3 = 0;
  v10 = a1;
  v4 = 0LL;
  v5 = 0;
  *a3 = a2 ^ (a1 ^ a2) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !a2 )
  {
    v4 = &v10;
    v5 = 1;
    v7 = 0;
LABEL_7:
    v8 = v4;
    do
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(*v8 + 48), 0LL) )
        break;
      ++v7;
      ++v8;
    }
    while ( v7 < v5 );
    goto LABEL_10;
  }
  if ( a2 == 1 )
  {
    v6 = *(unsigned __int8 **)(a1 + 36440);
    v5 = *v6;
    v4 = (__int64 *)(v6 + 8);
  }
  v7 = 0;
  if ( v5 )
    goto LABEL_7;
LABEL_10:
  if ( v7 == v5 )
    return 1;
  while ( v7 )
    _InterlockedAnd64((volatile signed __int64 *)(v4[--v7] + 48), 0LL);
  *a3 = 0LL;
  return v3;
}
