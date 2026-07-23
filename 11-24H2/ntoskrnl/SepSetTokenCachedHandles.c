/*
 * XREFs of SepSetTokenCachedHandles @ 0x140913AE0
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x14047F96C (SepSetTokenBnoIsolation.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlCreateHashTable @ 0x14047C500 (RtlCreateHashTable.c)
 *     SepReferenceCachedTokenHandles @ 0x14048B420 (SepReferenceCachedTokenHandles.c)
 *     SepCloseCachedTokenHandles @ 0x140492308 (SepCloseCachedTokenHandles.c)
 *     SepGetCachedHandlesEntry @ 0x140913D04 (SepGetCachedHandlesEntry.c)
 *     SepValidateReferencedCachedHandles @ 0x140913DDC (SepValidateReferencedCachedHandles.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepSetTokenCachedHandles(_QWORD *a1, _DWORD *a2, unsigned int a3, HANDLE *a4)
{
  void *v4; // rsi
  char v6; // r12
  __int64 Pool2; // rax
  int CachedHandlesEntry; // ebp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdi
  char *v14; // rax
  char *v15; // rbp
  bool v16; // cl
  __int64 v17; // rdx
  char v18; // al
  __int64 v20; // [rsp+28h] [rbp-40h] BYREF
  void *v21; // [rsp+30h] [rbp-38h]
  char v22; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  v20 = 0LL;
  v6 = 0;
  v22 = 0;
  if ( a3 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 8LL * a3, 0x63486553u);
    v4 = (void *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    CachedHandlesEntry = SepReferenceCachedTokenHandles(a3, a4, Pool2);
    if ( CachedHandlesEntry < 0 )
      goto LABEL_27;
    v6 = 1;
    CachedHandlesEntry = SepValidateReferencedCachedHandles(a1, a2, a3, v4);
    if ( CachedHandlesEntry < 0 )
      goto LABEL_26;
  }
  CurrentThread = KeGetCurrentThread();
  v13 = a1[27] + 96LL;
  v21 = v4;
  --CurrentThread->KernelApcDisable;
  v14 = (char *)KeAbPreAcquire(v13, 0LL);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13, v14, v13);
  if ( v15 )
    v15[10] = 1;
  if ( !*(_QWORD *)(v13 + 8) && !RtlCreateHashTable((PRTL_DYNAMIC_HASH_TABLE *)(v13 + 8), 0, 0) )
  {
    CachedHandlesEntry = -1073741670;
    goto LABEL_21;
  }
  CachedHandlesEntry = SepGetCachedHandlesEntry(v13, a2, &v22, &v20);
  if ( CachedHandlesEntry )
    goto LABEL_21;
  v16 = 0;
  if ( !*a2 )
  {
    v17 = v20;
    if ( a3 )
      v16 = *(_DWORD *)(v20 + 56) == 0;
    a1[136] = v20;
    goto LABEL_15;
  }
  if ( *a2 == 1 )
  {
    v16 = v22 == 0;
    v17 = v20;
    a1[144] = v20;
LABEL_15:
    if ( v16 )
    {
      *(_DWORD *)(v17 + 56) = a3;
      *(_QWORD *)(v17 + 64) = v4;
    }
  }
  v18 = v6;
  v6 = 0;
  if ( !v16 )
    v6 = v18;
  v4 = 0LL;
  if ( !v16 )
    v4 = v21;
LABEL_21:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v13);
  KeAbPostRelease(v13);
  KeLeaveCriticalRegion();
  if ( v4 )
  {
    if ( !v6 )
    {
LABEL_27:
      ExFreePoolWithTag(v4, 0);
      return (unsigned int)CachedHandlesEntry;
    }
LABEL_26:
    SepCloseCachedTokenHandles(a3, (HANDLE *)v4);
    goto LABEL_27;
  }
  return (unsigned int)CachedHandlesEntry;
}
