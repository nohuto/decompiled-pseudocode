/*
 * XREFs of PfFbBufferListInitialize @ 0x140746D6C
 * Callers:
 *     PfTInitialize @ 0x140744BA4 (PfTInitialize.c)
 * Callees:
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PfFbBufferListInitialize(_QWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0

  if ( a3 )
  {
    a1[14] = 0LL;
    *((_DWORD *)a1 + 30) = 0;
  }
  else
  {
    memset_0(a1, 0, 0x80uLL);
  }
  InitializeSListHead((PSLIST_HEADER)a1 + 1);
  InitializeSListHead((PSLIST_HEADER)a1 + 2);
  InitializeSListHead((PSLIST_HEADER)a1 + 3);
  result = *(unsigned int *)(a2 + 16);
  v7 = *(_OWORD *)(a2 + 16);
  *((_OWORD *)a1 + 4) = *(_OWORD *)a2;
  if ( (unsigned int)result < 0x30 )
    result = 48LL;
  v8 = *(_OWORD *)(a2 + 32);
  *((_OWORD *)a1 + 5) = v7;
  *((_OWORD *)a1 + 6) = v8;
  *((_DWORD *)a1 + 20) = result;
  if ( a3 )
    _InterlockedExchange64(a1, 0LL);
  else
    *a1 = 0LL;
  return result;
}
