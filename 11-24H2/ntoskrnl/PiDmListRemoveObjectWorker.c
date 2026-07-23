/*
 * XREFs of PiDmListRemoveObjectWorker @ 0x140A6AAE8
 * Callers:
 *     PiDmListRemoveObject @ 0x1406F8D1C (PiDmListRemoveObject.c)
 *     PiDmListRemoveList @ 0x140724BA4 (PiDmListRemoveList.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectManagerReleaseLock @ 0x1408B2B2C (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1408B2D34 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmObjectRelease @ 0x1408CE420 (PiDmObjectRelease.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140A6ABE8 (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListRemoveObjectWorker(int a1, __int64 a2, unsigned int *a3, __int64 a4, char *a5)
{
  __int64 v7; // rcx
  char *v8; // r10
  __int64 *v9; // rcx
  int v10; // edx
  __int64 v11; // r8
  char v12; // bl
  __int64 **v13; // rax
  int v14; // eax
  char *result; // rax
  char *v16; // rax
  unsigned int *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v7 = 5LL * a1;
  v8 = (char *)a3 + PiDmListDefs[v7 + 1];
  v9 = (__int64 *)(a4 + PiDmListDefs[v7 + 3]);
  v10 = 0;
  v11 = *v9;
  if ( *v9 )
  {
    v12 = 1;
    if ( *(__int64 **)(v11 + 8) != v9 || (v13 = (__int64 **)v9[1], *v13 != v9) )
      __fastfail(3u);
    *v13 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v13;
    v14 = *((_DWORD *)v8 + 4);
    if ( v14 )
    {
      v10 = v14 - 1;
    }
    else
    {
      v16 = *(char **)v8;
      while ( v16 != v8 )
      {
        v16 = *(char **)v16;
        ++v10;
      }
    }
    *((_DWORD *)v8 + 4) = v10;
    *v9 = 0LL;
    v9[1] = 0LL;
    PiDmObjectManagerAcquireExclusiveLock((struct _ERESOURCE *)a2);
    if ( !--Buffer[3] )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a2 + 104), &Buffer);
      PiDmObjectRelease(Buffer);
    }
    PiDmObjectManagerReleaseLock((struct _ERESOURCE *)a2);
    PiDmListUpdateAggregationCountWorker(Buffer, a4, 0xFFFFFFFFLL);
  }
  else
  {
    v12 = 0;
  }
  result = a5;
  if ( a5 )
    *a5 = v12;
  return result;
}
