/*
 * XREFs of FsRtlOplockBreakH2 @ 0x140A294A0
 * Callers:
 *     FsRtlOplockBreakH @ 0x140708FC0 (FsRtlOplockBreakH.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpAttachOplockKey @ 0x1403CD800 (FsRtlpAttachOplockKey.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403CD970 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403CF664 (FsRtlpOplockBreakByCacheFlags.c)
 */

__int64 __fastcall FsRtlOplockBreakH2(
        __int64 *a1,
        IRP *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7,
        unsigned __int16 *a8)
{
  __int64 v10; // rsi
  __int64 CurrentStackLocation; // r14
  unsigned int v12; // ebx
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // [rsp+20h] [rbp-A8h]
  char v17; // [rsp+D0h] [rbp+8h] BYREF
  char v18; // [rsp+D8h] [rbp+10h] BYREF
  int v19; // [rsp+E0h] [rbp+18h]
  __int64 v20; // [rsp+E8h] [rbp+20h]

  v20 = a4;
  v10 = *a1;
  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v17 = 0;
  v12 = 0;
  v18 = 0;
  if ( !v10 )
    return v12;
  v12 = FsRtlpAttachOplockKey(a2);
  if ( v12 )
    goto LABEL_20;
  if ( *(_BYTE *)CurrentStackLocation )
  {
LABEL_11:
    v14 = a6;
    v15 = a5;
    do
    {
      v18 = 0;
      if ( !v17 )
      {
        ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(v10 + 152));
        v17 = 1;
      }
      LODWORD(v16) = 0;
      v12 = FsRtlpOplockBreakByCacheFlags(
              v10,
              CurrentStackLocation,
              a2,
              a3,
              v16,
              0x2000,
              a7,
              a8,
              v20,
              v15,
              v14,
              0LL,
              0LL,
              0LL,
              &v17,
              &v18);
    }
    while ( v18 );
    goto LABEL_20;
  }
  if ( !a7 )
  {
    if ( !a8 )
      goto LABEL_8;
LABEL_19:
    v12 = -1073741811;
    goto LABEL_20;
  }
  if ( !a8 )
    goto LABEL_19;
  a3 |= 0x40000000u;
  v19 = a3;
LABEL_8:
  if ( (*(_DWORD *)(*(_QWORD *)(CurrentStackLocation + 8) + 16LL) & 0xFFEFFE7F) != 0 )
  {
    if ( (*(_DWORD *)(CurrentStackLocation + 16) & 0x10000) != 0 )
    {
      a3 |= 0x10000000u;
      v19 = a3;
    }
    goto LABEL_11;
  }
  v12 = 0;
LABEL_20:
  if ( v17 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(v10 + 152));
  return v12;
}
