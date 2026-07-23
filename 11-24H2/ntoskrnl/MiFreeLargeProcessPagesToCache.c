/*
 * XREFs of MiFreeLargeProcessPagesToCache @ 0x1406937E4
 * Callers:
 *     MiFreeLargePages @ 0x1402666C0 (MiFreeLargePages.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiFreeLargePageCharges @ 0x1403988E0 (MiFreeLargePageCharges.c)
 *     MiEmptyCacheSlice @ 0x140693694 (MiEmptyCacheSlice.c)
 *     MiFreeCacheSlice @ 0x140693778 (MiFreeCacheSlice.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiFreeLargeProcessPagesToCache(ULONG_PTR *a1, __int64 a2)
{
  ULONG_PTR v3; // rcx
  _KPROCESS *Process; // rbx
  unsigned __int64 v6; // rdi
  unsigned int v7; // eax
  unsigned __int64 v8; // rdi
  volatile LONG *v9; // r12
  KIRQL v10; // al
  __int64 v11; // r8
  _WORD *v12; // rbx
  unsigned __int8 v13; // r15
  _WORD *v14; // rdx
  __int64 v15; // r14
  int v16; // edx
  unsigned int v17; // ecx
  ULONG_PTR v18; // r11
  unsigned __int64 v19; // rbp
  int v20; // r8d
  __int64 v21; // rbx
  ULONG_PTR v22; // r11
  __int16 v23; // cx
  int v24; // eax
  __int64 v25; // rcx
  __int64 result; // rax
  unsigned __int64 v27; // r9
  __int64 v28; // r10
  __int64 i; // rcx
  unsigned int v30; // r10d
  unsigned int v31; // edx
  _WORD *v32; // r9
  bool v33; // cf
  int v34; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v35; // [rsp+28h] [rbp-C0h]
  volatile _KAFFINITY_EX *ActiveProcessors; // [rsp+30h] [rbp-B8h]
  _QWORD v37[12]; // [rsp+40h] [rbp-A8h] BYREF

  v3 = *a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  ActiveProcessors = Process[2].ActiveProcessors;
  v6 = ActiveProcessors[3].StaticBitmap[31];
  v34 = *(_DWORD *)(48 * v3 - 0x21FFFFFFFFE0LL);
  v7 = MiPageToNode(v3);
  v35 = *((_QWORD *)qword_140E300C8 + HIWORD(Process[2].ProcessListEntry.Blink));
  *(_DWORD *)(v6 + 24) = *(_DWORD *)(v35 + 16472);
  v8 = ((3LL * v7 + ((unsigned __int64)BYTE2(v34) >> 6)) << 6) + v6 + 32;
  MiFreeLargePageCharges(v35, 16 * a2, 0);
  v9 = (volatile LONG *)&ActiveProcessors[4];
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&ActiveProcessors[4]);
  v11 = 4LL;
  v12 = (_WORD *)(v8 + 14);
  v13 = v10;
  v14 = (_WORD *)(v8 + 14);
  do
  {
    if ( *v14 != 0xFFFF )
      ++*v14;
    v14 += 8;
    --v11;
  }
  while ( v11 );
  while ( 2 )
  {
    v15 = a2;
    if ( !a2 )
      return MiReleaseSpinLockExclusive(&ActiveProcessors[4].Count, v13);
    --a2;
    v16 = -1;
    v17 = 0;
    v18 = a1[a2];
    v19 = v18 & 0xFFFFFFFFFFFFFE00uLL;
    while ( v17 < 4 )
    {
      if ( (*(_BYTE *)(v8 + 16LL * v17 + 12) & 0x3F) != 0 )
      {
        if ( *(_QWORD *)(v8 + 16LL * v17) == v19 )
        {
          v20 = -1;
          goto LABEL_15;
        }
      }
      else
      {
        v16 = v17;
      }
      ++v17;
    }
    v20 = v16;
    if ( v17 == 4 )
    {
      if ( v16 == -1 )
      {
        if ( a2 )
        {
          v27 = v8;
          v28 = 4LL;
          do
          {
            for ( i = a2 - 1; i; --i )
            {
              if ( *(_QWORD *)v27 == (a1[i] & 0xFFFFFFFFFFFFFE00uLL) )
              {
                *(_WORD *)(v27 + 14) = 0;
                break;
              }
            }
            v27 += 16LL;
            --v28;
          }
          while ( v28 );
        }
        v30 = 0;
        v31 = 0;
        v32 = v12;
        do
        {
          v17 = v31;
          v33 = *v32 < *(_WORD *)(v8 + 16LL * v30 + 14);
          v32 += 8;
          if ( v33 )
            v17 = v30;
          ++v31;
          v30 = v17;
        }
        while ( v31 < 4 );
        a2 = v15;
        v21 = v8 + 16LL * v17;
        if ( v21 )
          goto LABEL_18;
      }
      else
      {
        v17 = v16;
      }
    }
LABEL_15:
    v21 = v8 + 16LL * v17;
    if ( v20 != -1 )
      *(_QWORD *)v21 = v19;
    v22 = v18 - *(_QWORD *)v21;
    *(_WORD *)(v21 + 14) = 0;
    v23 = *(_WORD *)(v21 + 12) ^ ((unsigned __int8)*(_WORD *)(v21 + 12) ^ (unsigned __int8)(*(_WORD *)(v21 + 12) + 1)) & 0x3F;
    v24 = *(_DWORD *)(v21 + 8) | (1 << (v22 >> 4));
    *(_WORD *)(v21 + 12) = v23;
    *(_DWORD *)(v21 + 8) = v24;
    if ( (v23 & 0x3F) != 0x20 )
      goto LABEL_6;
LABEL_18:
    memset_0(v37, 0, sizeof(v37));
    MiEmptyCacheSlice(v25, v37, v21);
    MiReleaseSpinLockExclusive(v9, v13);
    result = MiFreeCacheSlice(v35, (__int64)v37);
    if ( a2 )
    {
      ExAcquireSpinLockExclusive(v9);
LABEL_6:
      v12 = (_WORD *)(v8 + 14);
      continue;
    }
    return result;
  }
}
