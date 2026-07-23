/*
 * XREFs of FsRtlFindInTunnelCacheEx @ 0x140933E90
 * Callers:
 *     FsRtlFindInTunnelCache @ 0x140933E50 (FsRtlFindInTunnelCache.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     FsRtlEmptyFreePoolList @ 0x1403BF244 (FsRtlEmptyFreePoolList.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlCompareUnicodeString @ 0x1409343D0 (RtlCompareUnicodeString.c)
 *     FsRtlPruneTunnelCache @ 0x140934530 (FsRtlPruneTunnelCache.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 */

char __fastcall FsRtlFindInTunnelCacheEx(
        PKGUARDED_MUTEX Mutex,
        unsigned __int64 a2,
        const UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        PUNICODE_STRING a5,
        char a6,
        _DWORD *a7,
        void *a8)
{
  char v11; // di
  __int64 v12; // rsi
  __int64 v13; // rbx
  unsigned __int16 *v14; // rdi
  wchar_t *PoolWithTag; // rcx
  unsigned __int16 v16; // ax
  unsigned __int64 v18; // rax
  const UNICODE_STRING *v19; // rcx
  LONG v20; // eax
  bool v21; // cc
  const UNICODE_STRING *v22; // rcx
  _QWORD *v23[7]; // [rsp+20h] [rbp-38h] BYREF

  v11 = 0;
  v12 = 0LL;
  if ( !TunnelMaxEntries )
    return 0;
  v23[1] = v23;
  v23[0] = v23;
  ExAcquireFastMutex(Mutex);
  FsRtlPruneTunnelCache(Mutex, v23);
  v13 = *(_QWORD *)&Mutex[1].Count;
  while ( v13 )
  {
    v12 = v13;
    v18 = *(_QWORD *)(v13 + 48);
    if ( v18 < a2 )
      goto LABEL_4;
    if ( v18 > a2 )
      goto LABEL_18;
    v19 = (const UNICODE_STRING *)(v13 + 80);
    if ( (*(_DWORD *)(v13 + 56) & 2) == 0 )
      v19 = (const UNICODE_STRING *)(v13 + 64);
    v20 = RtlCompareUnicodeString(v19, a3, 1u);
    v21 = v20 <= 0;
    if ( !v20 )
    {
      if ( (a6 & 1) != 0 )
      {
        v22 = (const UNICODE_STRING *)(v13 + 80);
        if ( (*(_DWORD *)(v13 + 56) & 2) == 0 )
          v22 = (const UNICODE_STRING *)(v13 + 64);
        v20 = RtlCompareUnicodeString(v22, a3, 0);
      }
      v21 = v20 <= 0;
    }
    if ( v21 )
    {
      if ( v20 >= 0 )
        break;
LABEL_4:
      v13 = *(_QWORD *)(v13 + 16);
    }
    else
    {
LABEL_18:
      v13 = *(_QWORD *)(v13 + 8);
    }
  }
  if ( v13 )
  {
    RtlCopyUnicodeString(a4, (PCUNICODE_STRING)(v12 + 80));
    v14 = (unsigned __int16 *)(v12 + 64);
    if ( a5->MaximumLength < *(_WORD *)(v12 + 64) )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag((POOL_TYPE)17, *(unsigned __int16 *)(v12 + 64), 0x346E7554u);
      a5->Buffer = PoolWithTag;
      v16 = *v14;
      a5->MaximumLength = *v14;
      a5->Length = v16;
      memmove(PoolWithTag, *(const void **)(v12 + 72), *v14);
    }
    else
    {
      RtlCopyUnicodeString(a5, (PCUNICODE_STRING)(v12 + 64));
    }
    memmove(a8, *(const void **)(v12 + 96), *(unsigned int *)(v12 + 104));
    *a7 = *(_DWORD *)(v12 + 104);
    v11 = 1;
  }
  KeReleaseGuardedMutex(Mutex);
  FsRtlEmptyFreePoolList(v23);
  return v11;
}
