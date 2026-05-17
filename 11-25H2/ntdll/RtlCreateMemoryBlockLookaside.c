/*
 * XREFs of RtlCreateMemoryBlockLookaside @ 0x1800E4C70
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x180120CBC (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlInitializeSListHead @ 0x1800E4E80 (RtlInitializeSListHead.c)
 *     RtlCreateMemoryZone @ 0x1800E4EB0 (RtlCreateMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180110270 (RtlDestroyMemoryZone.c)
 *     RtlAllocateMemoryZone @ 0x180172140 (RtlAllocateMemoryZone.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateMemoryBlockLookaside(
        union _SLIST_HEADER **a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rdi
  unsigned int v8; // r15d
  unsigned __int64 v9; // rax
  unsigned __int64 i; // r12
  __int64 v11; // rbp
  __int64 result; // rax
  unsigned __int64 v13; // rsi
  int v14; // r14d
  union _SLIST_HEADER *v15; // r14
  int MemoryZone; // r12d
  unsigned __int64 v17; // rax
  union _SLIST_HEADER *v18; // rsi
  char v19; // cl
  char v20; // cl
  __int64 v21; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v22[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v5 = a4;
  v22[0] = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  *a1 = 0LL;
  if ( a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = a5;
  if ( !a5 || a5 < a4 || a5 > 0x8000000000000000uLL )
    return 3221225485LL;
  if ( ((a4 - 1) & a4) != 0 )
  {
    v20 = 0;
    do
    {
      ++v20;
      v5 >>= 1;
    }
    while ( v5 );
    v5 = 1LL << v20;
  }
  if ( ((a5 - 1) & a5) != 0 )
  {
    v19 = 0;
    do
    {
      ++v19;
      v7 >>= 1;
    }
    while ( v7 );
    v7 = 1LL << v19;
  }
  v8 = 1;
  if ( a3 < v7 )
    a3 = v7;
  v9 = v5;
  for ( i = (a3 + 48 * (a3 / v7) + 4095) & 0xFFFFFFFFFFFFF000uLL; v9 < v7; ++v8 )
    v9 *= 2LL;
  v11 = 32LL * v8;
  result = RtlCreateMemoryZone(&v23, (v11 + 4143) & 0xFFFFFFFFFFFFF000uLL, 0LL);
  if ( (int)result >= 0 )
  {
    v13 = v23;
    v14 = RtlAllocateMemoryZone(v23, v11 + 64, &v21);
    if ( v14 < 0 )
    {
      RtlDestroyMemoryZone(v13);
      return (unsigned int)v14;
    }
    else
    {
      v15 = (union _SLIST_HEADER *)((v21 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      MemoryZone = RtlCreateMemoryZone(v22, i, 0LL);
      if ( MemoryZone < 0 )
      {
        RtlDestroyMemoryZone(v13);
        return (unsigned int)MemoryZone;
      }
      else
      {
        memset_thunk_772440563353939046(v15, 0, v11 + 48);
        v15->Alignment = 0LL;
        v17 = v22[0];
        v15->Region = v13;
        v18 = v15 + 3;
        v15[1].Alignment = v17;
        v15[1].Region = v5;
        v15[2].Alignment = v7;
        *((_DWORD *)&v15[2].HeaderX64 + 2) = v8;
        while ( 1 )
        {
          RtlInitializeSListHead(v18);
          v18[1].Alignment = v5;
          v18[1].Region = (unsigned __int64)v15;
          if ( v5 == v7 )
            break;
          v5 *= 2LL;
          v18 += 2;
        }
        *a1 = v15;
        return 0LL;
      }
    }
  }
  return result;
}
