/*
 * XREFs of ExGetBigPoolInfo @ 0x1403E9100
 * Callers:
 *     EtwpPoolRunDown @ 0x1407B1590 (EtwpPoolRunDown.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     ExFreeHeapPages @ 0x1403E931C (ExFreeHeapPages.c)
 *     ExAllocateHeapPages @ 0x1403E9344 (ExAllocateHeapPages.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall ExGetBigPoolInfo(int a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned __int64 v7; // r14
  unsigned int v8; // ebx
  KIRQL v9; // al
  KIRQL v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rsi
  char *v13; // rdx
  __int64 v14; // rcx
  char *v15; // rdx
  __int64 v16; // r9
  __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // [rsp+20h] [rbp-48h]
  unsigned int v21; // [rsp+24h] [rbp-44h]
  char *i; // [rsp+28h] [rbp-40h]
  _DWORD *v23; // [rsp+30h] [rbp-38h]
  char *HeapPages; // [rsp+78h] [rbp+10h]

  HeapPages = 0LL;
  v21 = 0;
  v7 = 0LL;
  v8 = 8;
  v20 = 8;
  v23 = a2 + 2;
  if ( a3 )
    *a2 = 0;
  while ( 1 )
  {
    v9 = ExAcquireSpinLockExclusive(&ExpLargePoolTableLock);
    v10 = v9;
    v11 = PoolBigPageTableSize;
    if ( !PoolBigPageTable )
      break;
    if ( v7 >= PoolBigPageTableSize && HeapPages )
    {
      v12 = 32 * PoolBigPageTableSize;
      memmove(HeapPages, PoolBigPageTable, 32 * PoolBigPageTableSize);
      ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, v10);
      v13 = HeapPages;
      for ( i = HeapPages; ; i = v13 )
      {
        if ( v13 >= &HeapPages[v12] )
        {
LABEL_24:
          ExFreeHeapPages(HeapPages);
          *a4 = v8;
          return v21;
        }
        v14 = *(_QWORD *)v13;
        if ( (*(_QWORD *)v13 & 1) != 0 )
          break;
        if ( a3 )
          ++*a2;
        v8 = v20 + 24;
        v20 = v8;
        if ( v8 < 0x18 )
        {
          v21 = -1073741675;
          goto LABEL_24;
        }
        if ( v8 > a3 )
        {
          v21 = -1073741820;
          goto LABEL_10;
        }
        if ( !a3 )
          goto LABEL_10;
        v16 = 0LL;
        if ( !a1 )
          v16 = v14;
        *(_QWORD *)v23 = v16;
        v15 = i;
        if ( (*((_DWORD *)i + 3) & 0x10000) == 0 )
          *(_QWORD *)v23 = v16 | 1;
        v23[4] = *((_DWORD *)i + 2);
        *((_QWORD *)v23 + 1) = *((_QWORD *)i + 2);
        v23 += 6;
LABEL_11:
        v13 = v15 + 32;
      }
      v8 = v20;
LABEL_10:
      v15 = i;
      goto LABEL_11;
    }
    v7 = PoolBigPageTableSize;
    ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, v9);
    v19 = 32 * v11;
    if ( HeapPages )
      ExFreeHeapPages(HeapPages);
    HeapPages = (char *)ExAllocateHeapPages(v18, v19);
    if ( !HeapPages )
      return 3221225626LL;
  }
  ExReleaseSpinLockExclusive(&ExpLargePoolTableLock, v9);
  if ( HeapPages )
    ExFreeHeapPages(HeapPages);
  *a4 = 0;
  return 0LL;
}
