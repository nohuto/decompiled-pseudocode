/*
 * XREFs of FsRtlAcquireAutoExpandPushLockExclusive @ 0x1403C576C
 * Callers:
 *     FsRtlRemovePerStreamContext @ 0x1403C5300 (FsRtlRemovePerStreamContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1403C5430 (FsRtlInsertPerStreamContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1403C5500 (FsRtlInsertPerFileObjectContext.c)
 *     FsRtlRemovePerFileObjectContext @ 0x1403C5670 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileContextWithReserve @ 0x14045B800 (FsRtlInsertPerFileContextWithReserve.c)
 *     FsRtlRemovePerFileContext @ 0x14057FF10 (FsRtlRemovePerFileContext.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1409A4760 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x1409FD780 (FsRtlTeardownPerFileContexts.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x14033E440 (KeQueryMaximumProcessorCountEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

int __fastcall FsRtlAcquireAutoExpandPushLockExclusive(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  __int64 v6; // r15
  unsigned int v7; // ecx
  __int64 v8; // rbp
  unsigned __int64 *v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // r14
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned __int64 *v14; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire(a1, 0LL);
  v4 = (__int64)v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    LODWORD(v3) = ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, (__int64)v3, a1);
  v5 = *(unsigned int *)(a1 + 8);
  if ( (v5 & 1) != 0 )
  {
    v6 = ((unsigned int)v5 >> 13) & 0x3FFFF;
    _BitScanReverse(&v7, v6);
    v8 = (v5 >> 4) & 0x1FF;
    v9 = (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)ExSaPageArrays + 8LL * (v7 - 2))
                                        + 8 * (v6 ^ (unsigned int)(1 << v7))
                                        + 8)
                            + 8 * v8);
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v4, a1);
    v10 = 1;
    LODWORD(v3) = KeQueryMaximumProcessorCountEx(0xFFFFu);
    LODWORD(v11) = (_DWORD)v3;
    if ( (unsigned int)v3 > 1 )
    {
      do
      {
        _BitScanReverse(&v12, v6);
        v3 = *(_QWORD **)(*(_QWORD *)(ExSaPageArrays + 8LL * v10) + 8LL * (v12 - 2));
        if ( _interlockedbittestandset64(
               (volatile signed __int32 *)(v3[(v6 ^ (unsigned int)(1 << v12)) + 1] + 8 * v8),
               0LL) )
        {
          v11 = (unsigned int)(v11 - 1);
          _BitScanReverse(&v13, v6);
          v3 = *(_QWORD **)(*(_QWORD *)(ExSaPageArrays + 8 * v11) + 8LL * (v13 - 2));
          v14 = (unsigned __int64 *)(v3[(v6 ^ (unsigned int)(1 << v13)) + 1] + 8 * v8);
          if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
            LODWORD(v3) = ExfAcquirePushLockExclusiveEx(v14, v4, a1);
        }
        else
        {
          ++v10;
        }
      }
      while ( v10 < (unsigned int)v11 );
    }
  }
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  return (int)v3;
}
