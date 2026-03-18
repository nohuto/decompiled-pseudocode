/*
 * XREFs of FsRtlAddToTunnelCacheEx @ 0x140939820
 * Callers:
 *     FsRtlAddToTunnelCache @ 0x1409395F0 (FsRtlAddToTunnelCache.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     FsRtlEmptyFreePoolList @ 0x1403D21B4 (FsRtlEmptyFreePoolList.c)
 *     ExAllocateFromPagedLookasideList @ 0x1403F2CC0 (ExAllocateFromPagedLookasideList.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlCompareUnicodeString @ 0x140939BB0 (RtlCompareUnicodeString.c)
 *     FsRtlPruneTunnelCache @ 0x140939D18 (FsRtlPruneTunnelCache.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
  char *v16; // rbx
  PKGUARDED_MUTEX v17; // rsi
  __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  const UNICODE_STRING *v20; // rcx
  LONG v21; // eax
  bool v22; // cc
  struct _FAST_MUTEX *v23; // rdx
  PKGUARDED_MUTEX *v24; // rcx
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int16 Length; // ax
  unsigned __int16 v30; // ax
  char *v31; // rcx
  const UNICODE_STRING *v32; // rcx
  _QWORD **v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  _QWORD *v36; // rcx
  char v37; // [rsp+20h] [rbp-58h]
  _QWORD *v38[10]; // [rsp+28h] [rbp-50h] BYREF
  int v41; // [rsp+A0h] [rbp+28h]

  result = 0LL;
  v37 = 0;
  v8 = a5 & 2;
  v9 = a5 & 1;
  v11 = a3;
  v41 = v8;
  v13 = 0LL;
  if ( TunnelMaxEntries )
  {
    v14 = Size + a3->Length;
    v15 = a4->Length + 112;
    v38[1] = v38;
    v38[0] = v38;
    if ( (unsigned int)(v15 + v14) > 0xB0
      || (v16 = (char *)ExAllocateFromPagedLookasideList(&TunnelLookasideList)) == 0LL )
    {
      result = (char *)ExAllocatePool2(0x102uLL);
      v16 = result;
      if ( !result )
        return result;
      v37 = 1;
    }
    if ( !v8 )
      v11 = a4;
    ExAcquireFastMutex(Mutex);
    v17 = Mutex + 1;
    v18 = *(_QWORD *)&Mutex[1].Count;
    if ( v18 )
    {
      v19 = a2;
      do
      {
        v13 = v18;
        if ( *(_QWORD *)(v18 + 48) >= v19 )
        {
          if ( *(_QWORD *)(v18 + 48) > v19 )
            goto LABEL_25;
          v20 = (const UNICODE_STRING *)(v18 + 80);
          if ( (*(_DWORD *)(v18 + 56) & 2) == 0 )
            v20 = (const UNICODE_STRING *)(v18 + 64);
          v21 = RtlCompareUnicodeString(v20, v11, 1u);
          v22 = v21 <= 0;
          if ( !v21 )
          {
            if ( !v9 )
              break;
            v32 = (const UNICODE_STRING *)(v18 + 80);
            if ( (*(_DWORD *)(v18 + 56) & 2) == 0 )
              v32 = (const UNICODE_STRING *)(v18 + 64);
            v21 = RtlCompareUnicodeString(v32, v11, 0);
            v22 = v21 <= 0;
          }
          if ( !v22 )
          {
            v19 = a2;
LABEL_25:
            v17 = (PKGUARDED_MUTEX)(v18 + 8);
            goto LABEL_18;
          }
          if ( v21 >= 0 )
            break;
          v19 = a2;
        }
        v17 = (PKGUARDED_MUTEX)(v18 + 16);
LABEL_18:
        v18 = *(_QWORD *)&v17->Count;
      }
      while ( *(_QWORD *)&v17->Count );
    }
    *(_QWORD *)v16 = v16;
    *((_QWORD *)v16 + 1) = 0LL;
    *((_QWORD *)v16 + 2) = 0LL;
    if ( v13 )
    {
      if ( *(_QWORD *)&v17->Count )
      {
        *((_QWORD *)v16 + 2) = *(_QWORD *)(*(_QWORD *)&v17->Count + 16LL);
        *((_QWORD *)v16 + 1) = *(_QWORD *)(*(_QWORD *)&v17->Count + 8LL);
        v25 = *(_QWORD **)(*(_QWORD *)&v17->Count + 16LL);
        if ( v25 )
          *v25 = v16;
        v26 = *(_QWORD **)(*(_QWORD *)&v17->Count + 8LL);
        if ( v26 )
          *v26 = v16;
        v27 = **(_QWORD **)&v17->Count;
        if ( v27 == *(_QWORD *)&v17->Count )
        {
          *(_QWORD *)&Mutex[1].Count = v16;
        }
        else
        {
          *(_QWORD *)v16 = v27;
          v28 = **(_QWORD **)&v17->Count;
          if ( *(_QWORD *)(v28 + 8) == *(_QWORD *)&v17->Count )
            *(_QWORD *)(v28 + 8) = v16;
          else
            *(_QWORD *)(v28 + 16) = v16;
        }
        v33 = (_QWORD **)(v13 + 24);
        v34 = *(_QWORD *)(v13 + 24);
        if ( *(_QWORD *)(v34 + 8) != v13 + 24
          || (v35 = *(_QWORD **)(v13 + 32), (_QWORD **)*v35 != v33)
          || (*v35 = v34, *(_QWORD *)(v34 + 8) = v35, v36 = v38[0], *((_QWORD ***)v38[0] + 1) != v38) )
        {
LABEL_23:
          __fastfail(3u);
        }
        *v33 = v38[0];
        *(_QWORD *)(v13 + 32) = v38;
        v36[1] = v33;
        v38[0] = (_QWORD *)(v13 + 24);
        --LOWORD(Mutex[1].Event.Header.Lock);
      }
      else
      {
        *(_QWORD *)v16 = v13;
        *(_QWORD *)&v17->Count = v16;
      }
    }
    else
    {
      *(_QWORD *)&Mutex[1].Count = v16;
    }
    v23 = (struct _FAST_MUTEX *)(v16 + 24);
    *((_QWORD *)v16 + 5) = MEMORY[0xFFFFF78000000014];
    v24 = *(PKGUARDED_MUTEX **)&Mutex[1].Contention;
    if ( *v24 != (PKGUARDED_MUTEX)&Mutex[1].Owner )
      goto LABEL_23;
    *(_QWORD *)&v23->Count = (char *)Mutex + 64;
    *((_QWORD *)v16 + 4) = v24;
    *v24 = v23;
    *(_QWORD *)&Mutex[1].Contention = v23;
    ++LOWORD(Mutex[1].Event.Header.Lock);
    *((_QWORD *)v16 + 6) = a2;
    *((_DWORD *)v16 + 14) = v41 != 0 ? 2 : 0;
    *((_QWORD *)v16 + 11) = v16 + 112;
    *((_QWORD *)v16 + 9) = &v16[a3->Length + 112];
    Length = a3->Length;
    *((_WORD *)v16 + 41) = a3->Length;
    *((_WORD *)v16 + 40) = Length;
    v30 = a4->Length;
    *((_WORD *)v16 + 33) = a4->Length;
    *((_WORD *)v16 + 32) = v30;
    if ( a3->Length )
      memmove(v16 + 112, a3->Buffer, a3->Length);
    if ( a4->Length )
      memmove(*((void **)v16 + 9), a4->Buffer, a4->Length);
    v31 = &v16[a3->Length + 112 + a4->Length];
    *((_QWORD *)v16 + 12) = v31;
    *((_DWORD *)v16 + 26) = Size;
    memmove(v31, Src, (unsigned int)Size);
    if ( v37 )
      *((_DWORD *)v16 + 14) |= 1u;
    FsRtlPruneTunnelCache(Mutex, v38);
    KeReleaseGuardedMutex(Mutex);
    return (char *)FsRtlEmptyFreePoolList(v38);
  }
  return result;
}
