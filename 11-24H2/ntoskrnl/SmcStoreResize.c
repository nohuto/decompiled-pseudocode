/*
 * XREFs of SmcStoreResize @ 0x14079DE40
 * Callers:
 *     SmcProcessResizeRequest @ 0x14079945C (SmcProcessResizeRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     RtlSetAllBits @ 0x140347620 (RtlSetAllBits.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlClearAllBits @ 0x140441080 (RtlClearAllBits.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     SmStoreResize @ 0x140798DCC (SmStoreResize.c)
 *     SmcCacheDereference @ 0x14079D1E8 (SmcCacheDereference.c)
 *     SmcCacheReference @ 0x14079D438 (SmcCacheReference.c)
 *     SmcStoreEntryFind @ 0x14079DD04 (SmcStoreEntryFind.c)
 *     SmcStorePlacementGet @ 0x14079DD40 (SmcStorePlacementGet.c)
 */

__int64 __fastcall SmcStoreResize(__int64 a1, _DWORD *a2)
{
  struct _PRIVILEGE_SET *v3; // r14
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  bool v10; // zf
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // rsi
  char *v13; // rax
  char *v14; // r15
  struct _EX_RUNDOWN_REF *v15; // rax
  struct _EX_RUNDOWN_REF *v16; // r15
  struct _PRIVILEGE_SET *v17; // rcx
  _DWORD *Count; // rdx
  struct _PRIVILEGE_SET *v19; // r8
  ULONG PrivilegeCount; // eax
  struct _KTHREAD *v21; // rax
  char *v22; // rax
  char *v23; // rdi
  struct _PRIVILEGE_SET *v24; // rcx
  _DWORD *v25; // rdx
  struct _PRIVILEGE_SET *v26; // r8
  ULONG v27; // eax
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-38h] BYREF
  __int128 v30; // [rsp+40h] [rbp-28h] BYREF
  __int64 v31; // [rsp+50h] [rbp-18h]
  int v33; // [rsp+B8h] [rbp+50h]
  struct _EX_RUNDOWN_REF *v34; // [rsp+C0h] [rbp+58h]
  int v35; // [rsp+C8h] [rbp+60h]

  v33 = 0;
  v3 = 0LL;
  v4 = a2[1];
  v31 = 0LL;
  v35 = a1 - 2288;
  v30 = 0LL;
  BitMapHeader = 0LL;
  v5 = SmcCacheReference(a1, v4);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)-1073741672;
  v8 = *(unsigned int *)(v5 + 8);
  if ( a2[4] > (unsigned int)v8 )
  {
    v7 = -1073741811;
    goto LABEL_37;
  }
  v9 = (unsigned __int64)(v8 + 31) >> 5;
  v3 = (struct _PRIVILEGE_SET *)SmAllocEx((unsigned int)(4 * v9), 0x72436D73u, -1);
  if ( v3 )
  {
    v10 = (*a2 & 0x100) == 0;
    BitMapHeader.SizeOfBitMap = *(_DWORD *)(v6 + 8);
    BitMapHeader.Buffer = &v3->PrivilegeCount;
    if ( v10 )
    {
      RtlClearAllBits(&BitMapHeader);
    }
    else
    {
      RtlSetAllBits(&BitMapHeader);
      v31 = 0LL;
      DWORD1(v30) |= 4u;
      *((_QWORD *)&v30 + 1) = v3;
    }
    CurrentThread = KeGetCurrentThread();
    v12 = (volatile signed __int64 *)(v6 + 160);
    --CurrentThread->KernelApcDisable;
    v13 = (char *)KeAbPreAcquire(v6 + 160, 0LL);
    v14 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 160), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 160), v13, v6 + 160);
    if ( v14 )
      v14[10] = 1;
    v15 = (struct _EX_RUNDOWN_REF *)SmcStoreEntryFind(v6, a2[2], a2[3]);
    v34 = v15;
    v16 = v15 + 2;
    if ( v15 )
    {
      v33 = ExAcquireRundownProtection_0(v15 + 2);
      if ( (*a2 & 0x100) != 0 )
      {
        v7 = SmcStorePlacementGet(v6, a2[4], (__int64)&v30);
        if ( v7 < 0 )
          goto LABEL_32;
        v17 = v3;
        Count = (_DWORD *)v34[1].Count;
        v19 = (struct _PRIVILEGE_SET *)((char *)v3 + 4 * (unsigned int)v9);
        if ( v3 < v19 )
        {
          do
          {
            PrivilegeCount = v17->PrivilegeCount;
            v17 = (struct _PRIVILEGE_SET *)((char *)v17 + 4);
            *Count++ |= PrivilegeCount;
          }
          while ( v17 < v19 );
        }
      }
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v12);
      KeAbPostRelease((ULONG_PTR)v12);
      KeLeaveCriticalRegion();
      SmStoreResize(v35, a2[3], a2[2], (unsigned int)&BitMapHeader, (__int64)(a2 + 4), (*a2 >> 8) & 1);
      if ( (*a2 & 0x100) != 0 || !a2[4] )
      {
        v7 = 0;
LABEL_35:
        if ( v33 )
          ExReleaseRundownProtection_0(v16);
        goto LABEL_37;
      }
      v21 = KeGetCurrentThread();
      --v21->KernelApcDisable;
      v22 = (char *)KeAbPreAcquire((__int64)v12, 0LL);
      v23 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12, v22, (__int64)v12);
      if ( v23 )
        v23[10] = 1;
      v24 = v3;
      v25 = (_DWORD *)v34[1].Count;
      v26 = (struct _PRIVILEGE_SET *)((char *)v3 + 4 * (unsigned int)v9);
      if ( v3 < v26 )
      {
        do
        {
          v27 = v24->PrivilegeCount;
          v24 = (struct _PRIVILEGE_SET *)((char *)v24 + 4);
          *v25++ ^= v27;
        }
        while ( v24 < v26 );
      }
      v7 = 0;
    }
    else
    {
      v7 = -1073741672;
    }
LABEL_32:
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    KeAbPostRelease((ULONG_PTR)v12);
    KeLeaveCriticalRegion();
    goto LABEL_35;
  }
  v7 = -1073741670;
LABEL_37:
  SmcCacheDereference(a1, a2[1]);
  if ( v3 )
    CmSiFreeMemory(v3);
  return (unsigned int)v7;
}
