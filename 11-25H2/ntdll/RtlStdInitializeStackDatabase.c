/*
 * XREFs of RtlStdInitializeStackDatabase @ 0x1800E49E0
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1800E496C (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x1800E4E80 (RtlInitializeSListHead.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlStdInitializeStackDatabase(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  unsigned int v7; // esi
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  int v10; // r14d
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdi
  unsigned int v16; // edx
  __int64 i; // rcx
  __int64 v18; // rax
  _QWORD v19[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp+40h] BYREF

  v21 = a3;
  v20 = a2;
  if ( a2 && (a2 != a3 || !a1) )
    return 3221225485LL;
  v19[0] = a1;
  v6 = a1;
  v7 = a3 < 0x1000000 ? 5569 : 9551;
  v8 = 16 * (v7 + 47LL);
  if ( a3 <= v8 )
    return 3221225485LL;
  if ( !a1 )
  {
    result = ZwAllocateVirtualMemory(-1LL, v19, 0LL, &v21, 0x2000, 4);
    if ( (int)result < 0 )
      return result;
    a2 = v20;
    v6 = v19[0];
  }
  if ( a2 )
  {
    *(_BYTE *)(v6 + 128) = 1;
LABEL_16:
    v11 = v19[0];
    *(_QWORD *)(v19[0] + 136LL) = v19[0];
    *(_DWORD *)(v19[0] + 720LL) = v7;
    v12 = v11 + v21;
    *(_QWORD *)(v19[0] + 168LL) = v11 + v21;
    *(_QWORD *)(v19[0] + 184LL) = v12;
    if ( *(_BYTE *)(v19[0] + 128LL) )
    {
      memset_thunk_772440563353939046((void *)(v19[0] + 728LL), 0, 16LL * *(unsigned int *)(v19[0] + 720LL));
    }
    else
    {
      *(_QWORD *)(v19[0] + 144LL) = v11 + v20;
      *(_QWORD *)(v19[0] + 152LL) = v11 + v21;
    }
    v13 = (v8 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    v14 = 208LL;
    v15 = 32LL;
    *(_QWORD *)(v19[0] + 160LL) = v19[0] + v13;
    *(_QWORD *)(v19[0] + 120LL) = *(_QWORD *)(v19[0] + 160LL);
    do
    {
      RtlInitializeSListHead((PSLIST_HEADER)(v14 + v19[0]));
      v14 += 16LL;
      --v15;
    }
    while ( v15 );
    v16 = 0;
    *(_QWORD *)v19[0] = 0LL;
    for ( i = v19[0]; v16 < *(_DWORD *)(v19[0] + 720LL); i = v19[0] )
    {
      v18 = v16++;
      *(_QWORD *)(i + 16 * (v18 + 46)) = 0LL;
    }
    *a4 = i;
    return 0LL;
  }
  v20 = (v8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v10 = ZwAllocateVirtualMemory(-1LL, v19, 0LL, &v20, 4096, 4);
  if ( v10 >= 0 )
  {
    *(_BYTE *)(v19[0] + 128LL) = 0;
    goto LABEL_16;
  }
  if ( !a1 )
    ZwFreeVirtualMemory(-1LL, v19, &v21, 0x8000LL);
  return (unsigned int)v10;
}
