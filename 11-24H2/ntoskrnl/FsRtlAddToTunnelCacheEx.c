/*
 * XREFs of FsRtlAddToTunnelCacheEx @ 0x140934040
 * Callers:
 *     FsRtlAddToTunnelCache @ 0x140933E10 (FsRtlAddToTunnelCache.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     FsRtlEmptyFreePoolList @ 0x1403BF244 (FsRtlEmptyFreePoolList.c)
 *     ExAllocateFromPagedLookasideList @ 0x1403EFFF0 (ExAllocateFromPagedLookasideList.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlCompareUnicodeString @ 0x1409343D0 (RtlCompareUnicodeString.c)
 *     FsRtlPruneTunnelCache @ 0x140934530 (FsRtlPruneTunnelCache.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

char *__fastcall FsRtlAddToTunnelCacheEx(
        PKGUARDED_MUTEX Mutex,
        unsigned __int64 a2,
        const UNICODE_STRING *a3,
        const UNICODE_STRING *a4,
        char a5,
        size_t Size,
        void *Src)
{
  char *result; // rax
  int v8; // esi
  char v9; // r13
  const UNICODE_STRING *v11; // r14
  __int64 v13; // r15
  int v14; // edi
  int v15; // ecx
  unsigned int v16; // edi
  char *v17; // rbx
  PKGUARDED_MUTEX v18; // rsi
  __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  const UNICODE_STRING *v21; // rcx
  LONG v22; // eax
  bool v23; // cc
  struct _FAST_MUTEX *v24; // rdx
  PKGUARDED_MUTEX *v25; // rcx
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  const UNICODE_STRING *v30; // rcx
  _QWORD **v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  _QWORD *v34; // rcx
  unsigned __int16 Length; // ax
  unsigned __int16 v36; // ax
  char *v37; // rcx
  char v38; // [rsp+20h] [rbp-58h]
  _QWORD *v39[10]; // [rsp+28h] [rbp-50h] BYREF
  int v42; // [rsp+A0h] [rbp+28h]

  result = 0LL;
  v38 = 0;
  v8 = a5 & 2;
  v9 = a5 & 1;
  v11 = a3;
  v42 = v8;
  v13 = 0LL;
  if ( TunnelMaxEntries )
  {
    v14 = Size + a3->Length;
    v15 = a4->Length + 112;
    v39[1] = v39;
    v16 = v15 + v14;
    v39[0] = v39;
    if ( v16 > 0xB0 || (v17 = (char *)ExAllocateFromPagedLookasideList(&TunnelLookasideList)) == 0LL )
    {
      result = (char *)ExAllocatePool2(0x102uLL, v16, 0x506E7554u);
      v17 = result;
      if ( !result )
        return result;
      v38 = 1;
    }
    if ( !v8 )
      v11 = a4;
    ExAcquireFastMutex(Mutex);
    v18 = Mutex + 1;
    v19 = *(_QWORD *)&Mutex[1].Count;
    if ( v19 )
    {
      v20 = a2;
      do
      {
        v13 = v19;
        if ( *(_QWORD *)(v19 + 48) >= v20 )
        {
          if ( *(_QWORD *)(v19 + 48) > v20 )
            goto LABEL_25;
          v21 = (const UNICODE_STRING *)(v19 + 80);
          if ( (*(_DWORD *)(v19 + 56) & 2) == 0 )
            v21 = (const UNICODE_STRING *)(v19 + 64);
          v22 = RtlCompareUnicodeString(v21, v11, 1u);
          v23 = v22 <= 0;
          if ( !v22 )
          {
            if ( !v9 )
              break;
            v30 = (const UNICODE_STRING *)(v19 + 80);
            if ( (*(_DWORD *)(v19 + 56) & 2) == 0 )
              v30 = (const UNICODE_STRING *)(v19 + 64);
            v22 = RtlCompareUnicodeString(v30, v11, 0);
            v23 = v22 <= 0;
          }
          if ( !v23 )
          {
            v20 = a2;
LABEL_25:
            v18 = (PKGUARDED_MUTEX)(v19 + 8);
            goto LABEL_18;
          }
          if ( v22 >= 0 )
            break;
          v20 = a2;
        }
        v18 = (PKGUARDED_MUTEX)(v19 + 16);
LABEL_18:
        v19 = *(_QWORD *)&v18->Count;
      }
      while ( *(_QWORD *)&v18->Count );
    }
    *(_QWORD *)v17 = v17;
    *((_QWORD *)v17 + 1) = 0LL;
    *((_QWORD *)v17 + 2) = 0LL;
    if ( v13 )
    {
      if ( *(_QWORD *)&v18->Count )
      {
        *((_QWORD *)v17 + 2) = *(_QWORD *)(*(_QWORD *)&v18->Count + 16LL);
        *((_QWORD *)v17 + 1) = *(_QWORD *)(*(_QWORD *)&v18->Count + 8LL);
        v26 = *(_QWORD **)(*(_QWORD *)&v18->Count + 16LL);
        if ( v26 )
          *v26 = v17;
        v27 = *(_QWORD **)(*(_QWORD *)&v18->Count + 8LL);
        if ( v27 )
          *v27 = v17;
        v28 = **(_QWORD **)&v18->Count;
        if ( v28 == *(_QWORD *)&v18->Count )
        {
          *(_QWORD *)&Mutex[1].Count = v17;
        }
        else
        {
          *(_QWORD *)v17 = v28;
          v29 = **(_QWORD **)&v18->Count;
          if ( *(_QWORD *)(v29 + 8) == *(_QWORD *)&v18->Count )
            *(_QWORD *)(v29 + 8) = v17;
          else
            *(_QWORD *)(v29 + 16) = v17;
        }
        v31 = (_QWORD **)(v13 + 24);
        v32 = *(_QWORD *)(v13 + 24);
        if ( *(_QWORD *)(v32 + 8) != v13 + 24
          || (v33 = *(_QWORD **)(v13 + 32), (_QWORD **)*v33 != v31)
          || (*v33 = v32, *(_QWORD *)(v32 + 8) = v33, v34 = v39[0], *((_QWORD ***)v39[0] + 1) != v39) )
        {
LABEL_23:
          __fastfail(3u);
        }
        *v31 = v39[0];
        *(_QWORD *)(v13 + 32) = v39;
        v34[1] = v31;
        v39[0] = (_QWORD *)(v13 + 24);
        --LOWORD(Mutex[1].Event.Header.Lock);
      }
      else
      {
        *(_QWORD *)v17 = v13;
        *(_QWORD *)&v18->Count = v17;
      }
    }
    else
    {
      *(_QWORD *)&Mutex[1].Count = v17;
    }
    v24 = (struct _FAST_MUTEX *)(v17 + 24);
    *((_QWORD *)v17 + 5) = MEMORY[0xFFFFF78000000014];
    v25 = *(PKGUARDED_MUTEX **)&Mutex[1].Contention;
    if ( *v25 != (PKGUARDED_MUTEX)&Mutex[1].Owner )
      goto LABEL_23;
    *(_QWORD *)&v24->Count = (char *)Mutex + 64;
    *((_QWORD *)v17 + 4) = v25;
    *v25 = v24;
    *(_QWORD *)&Mutex[1].Contention = v24;
    ++LOWORD(Mutex[1].Event.Header.Lock);
    *((_QWORD *)v17 + 6) = a2;
    *((_DWORD *)v17 + 14) = v42 != 0 ? 2 : 0;
    *((_QWORD *)v17 + 11) = v17 + 112;
    *((_QWORD *)v17 + 9) = &v17[a3->Length + 112];
    Length = a3->Length;
    *((_WORD *)v17 + 41) = a3->Length;
    *((_WORD *)v17 + 40) = Length;
    v36 = a4->Length;
    *((_WORD *)v17 + 33) = a4->Length;
    *((_WORD *)v17 + 32) = v36;
    if ( a3->Length )
      memmove(v17 + 112, a3->Buffer, a3->Length);
    if ( a4->Length )
      memmove(*((void **)v17 + 9), a4->Buffer, a4->Length);
    v37 = &v17[a3->Length + 112 + a4->Length];
    *((_QWORD *)v17 + 12) = v37;
    *((_DWORD *)v17 + 26) = Size;
    memmove(v37, Src, (unsigned int)Size);
    if ( v38 )
      *((_DWORD *)v17 + 14) |= 1u;
    FsRtlPruneTunnelCache(Mutex, v39);
    KeReleaseGuardedMutex(Mutex);
    return (char *)FsRtlEmptyFreePoolList(v39);
  }
  return result;
}
