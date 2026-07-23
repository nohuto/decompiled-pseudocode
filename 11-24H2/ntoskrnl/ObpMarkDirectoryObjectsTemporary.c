/*
 * XREFs of ObpMarkDirectoryObjectsTemporary @ 0x1409DF678
 * Callers:
 *     ObpDeleteDirectoryName @ 0x1409DF600 (ObpDeleteDirectoryName.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ObpUnlockDirectory @ 0x14083E760 (ObpUnlockDirectory.c)
 *     ObpDeleteSymbolicLinkName @ 0x14083EADC (ObpDeleteSymbolicLinkName.c)
 *     ObpLockDirectoryExclusive @ 0x1409DF8B8 (ObpLockDirectoryExclusive.c)
 */

_QWORD *__fastcall ObpMarkDirectoryObjectsTemporary(_QWORD **a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD **v5; // rbp
  _QWORD *v6; // rbx
  _QWORD *v7; // r15
  _QWORD *v9; // rbp
  char v10; // r12
  __int64 v11; // rsi
  __int64 v12; // r14
  signed __int64 *v13; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char *v15; // rax
  char *v16; // r13
  signed __int64 v17; // rax
  signed __int64 v18; // rdx
  signed __int64 v19; // rtt
  _QWORD *v20; // rcx
  PVOID v21; // [rsp+20h] [rbp-78h]
  __int64 v22; // [rsp+28h] [rbp-70h]
  _QWORD *v23; // [rsp+30h] [rbp-68h]
  __int128 v24; // [rsp+38h] [rbp-60h] BYREF
  __int64 v25; // [rsp+48h] [rbp-50h]
  _QWORD **v28; // [rsp+B0h] [rbp+18h]
  __int64 v29; // [rsp+B8h] [rbp+20h]

  v24 = 0LL;
  v25 = 0LL;
  ObpLockDirectoryExclusive(&v24, a1, a3);
  v4 = 37LL;
  v28 = a1;
  v29 = 37LL;
  v5 = a1;
  do
  {
    v6 = *v5;
    v7 = v5;
    if ( *v5 )
    {
      v9 = a2;
      do
      {
        v10 = 0;
        v22 = v6[1];
        v23 = v7;
        v11 = v22 - 48;
        if ( (*(_BYTE *)(v22 - 48 + 26) & 2) != 0 )
          v12 = v11 - ObpInfoMaskToOffset[*(_BYTE *)(v22 - 48 + 26) & 3];
        else
          v12 = 0LL;
        v13 = (signed __int64 *)(v11 + 16);
        v21 = (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v11 + 24) ^ (unsigned __int64)BYTE1(v11)];
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v15 = (char *)KeAbPreAcquire(v11 + 16, 0LL);
        v16 = v15;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 16), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 16), v15, v11 + 16);
        if ( v16 )
          v16[10] = 1;
        *(_BYTE *)(v11 + 27) &= ~0x10u;
        if ( !*(_QWORD *)(v11 + 8) && !*(_DWORD *)(v12 + 24) )
        {
          if ( v21 == ObpSymbolicLinkObjectType )
            ObpDeleteSymbolicLinkName(v22);
          v20 = v6;
          *v7 = *v6;
          v6 = (_QWORD *)*v6;
          *(_QWORD *)v12 = 0LL;
          *v20 = v9;
          v9 = v20;
          ObfDereferenceObjectWithTag(a1, 0x6944624Fu);
          v10 = 1;
        }
        v7 = v6;
        _m_prefetchw(v13);
        v17 = *v13;
        v18 = *v13 - 16;
        if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v18 = 0LL;
        if ( (v17 & 2) != 0 || (v19 = *v13, v19 != _InterlockedCompareExchange64(v13, v18, v17)) )
          ExfReleasePushLock((_QWORD *)(v11 + 16));
        KeAbPostRelease(v11 + 16);
        KeLeaveCriticalRegion();
        if ( v10 )
          v7 = v23;
        else
          v6 = (_QWORD *)*v6;
      }
      while ( v6 );
      v4 = v29;
      a2 = v9;
      v5 = v28;
    }
    ++v5;
    --v4;
    v28 = v5;
    v29 = v4;
  }
  while ( v4 );
  ObpUnlockDirectory((__int64)&v24);
  return a2;
}
