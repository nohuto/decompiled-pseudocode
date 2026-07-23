/*
 * XREFs of MiExtendPagingFiles @ 0x1407EF718
 * Callers:
 *     MiHandlePageFileSizeChanges @ 0x1403EE2E4 (MiHandlePageFileSizeChanges.c)
 * Callees:
 *     MiUpdatePagingFileMinimum @ 0x14067B528 (MiUpdatePagingFileMinimum.c)
 *     MiIncreaseCommitLimits @ 0x14068733C (MiIncreaseCommitLimits.c)
 *     MiAttemptPageFileExtension @ 0x1407EE36C (MiAttemptPageFileExtension.c)
 */

unsigned __int64 __fastcall MiExtendPagingFiles(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v3; // rdi
  unsigned __int64 result; // rax
  unsigned int v5; // r15d
  __int64 v6; // r15
  unsigned __int64 v7; // rsi
  BOOL v8; // ebp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r10
  unsigned int v14; // r13d
  unsigned int **v15; // r12

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  result = *(unsigned __int8 *)(a1 + 76);
  v5 = *(_DWORD *)(v1 + 18520);
  if ( !v5 )
    return result;
  if ( (unsigned int)result < v5 )
  {
    _mm_lfence();
    v6 = *(_QWORD *)(v1 + 8 * result + 18528);
    result = (unsigned int)(*(_DWORD *)(v6 + 4) - *(_DWORD *)v6);
    if ( result < v3 )
      return result;
    result = MiAttemptPageFileExtension(a1, (unsigned int *)v6, v3);
    v7 = (unsigned int)result;
    if ( (_DWORD)result && (*(_BYTE *)(a1 + 79) & 2) != 0 )
      result = MiUpdatePagingFileMinimum(v6, result);
    v8 = (*(_BYTE *)(v6 + 172) & 0x50) == 0;
    goto LABEL_24;
  }
  v8 = 1;
  if ( (*(_BYTE *)(a1 + 79) & 1) == 0 )
  {
    v9 = *(_QWORD *)(v1 + 19264);
    v10 = *(_QWORD *)(v1 + 19608);
    result = v3 + v9 + *(_QWORD *)(v1 + 16896);
    if ( result < v9 )
      return result;
    if ( result <= v10 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      return result;
    }
    v3 = result - v10;
  }
  v11 = 0LL;
  v12 = v1 + 18528;
  v13 = *(unsigned int *)(v1 + 18520);
  do
  {
    if ( (*(_BYTE *)(*(_QWORD *)v12 + 172LL) & 0x50) == 0 )
    {
      result = (unsigned int)(*(_DWORD *)(*(_QWORD *)v12 + 4LL) - **(_DWORD **)v12);
      v11 += result;
    }
    v12 += 8LL;
    --v13;
  }
  while ( v13 );
  if ( v11 >= v3 )
  {
    v7 = 0LL;
    v14 = 0;
    v15 = (unsigned int **)(v1 + 18528);
    do
    {
      if ( ((*v15)[43] & 0x50) == 0 )
      {
        result = (unsigned int)MiAttemptPageFileExtension(a1, *v15, v3 - v7);
        v7 += (unsigned int)result;
        if ( v7 >= v3 )
          break;
      }
      ++v14;
      ++v15;
    }
    while ( v14 < v5 );
LABEL_24:
    if ( v7 )
    {
      *(_QWORD *)(a1 + 40) = v7;
      if ( v8 )
        return MiIncreaseCommitLimits(v1, v7, 0LL, 0LL, 0, 0LL);
    }
  }
  return result;
}
