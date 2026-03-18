/*
 * XREFs of MiFreeProcessLargePageCache @ 0x140687594
 * Callers:
 *     MiPruneProcessLargePageCaches @ 0x14047FD48 (MiPruneProcessLargePageCaches.c)
 *     MiDeleteWorkingSetList @ 0x140480D98 (MiDeleteWorkingSetList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiEmptyCacheSlice @ 0x140687164 (MiEmptyCacheSlice.c)
 *     MiFreeCacheSlice @ 0x140687248 (MiFreeCacheSlice.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiFreeProcessLargePageCache(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int8 CurrentIrql; // r15
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v6; // r12
  __int64 v7; // rbp
  unsigned int v8; // esi
  _BYTE *v9; // rdi
  volatile LONG *v10; // rcx
  KIRQL v11; // r15
  __int64 v12; // rcx
  unsigned int i; // [rsp+20h] [rbp-D8h]
  unsigned __int8 v14; // [rsp+28h] [rbp-D0h]
  __int64 v16; // [rsp+38h] [rbp-C0h]
  _QWORD v18[12]; // [rsp+50h] [rbp-A8h] BYREF

  v2 = a2;
  memset_0(v18, 0, sizeof(v18));
  CurrentIrql = KeGetCurrentIrql();
  result = *(_QWORD *)(v2 + 16);
  v5 = 0;
  v14 = CurrentIrql;
  v16 = result;
  for ( i = 0; v5 < (unsigned __int16)KeNumberNodes; i = v5 )
  {
    v6 = 3LL;
    v7 = 192LL * v5 + v2 + 32;
    do
    {
      v8 = 0;
      v9 = (_BYTE *)(v7 + 12);
      do
      {
        if ( (*v9 & 0x3F) != 0 )
        {
          memset_0(v18, 0, sizeof(v18));
          v10 = (volatile LONG *)(v16 + 288);
          if ( CurrentIrql == 2 )
          {
            v11 = 17;
            ExAcquireSpinLockExclusiveAtDpcLevel(v10);
          }
          else
          {
            v11 = ExAcquireSpinLockExclusive(v10);
          }
          if ( (*v9 & 0x3F) != 0 )
            MiEmptyCacheSlice(v12, v18, v7 + 16LL * v8);
          MiReleaseSpinLockExclusive((_DWORD *)(v16 + 288), v11);
          if ( v18[8] )
            MiFreeCacheSlice(a1, (__int64)v18);
          CurrentIrql = v14;
        }
        ++v8;
        v9 += 16;
      }
      while ( v8 < 4 );
      v7 += 64LL;
      --v6;
    }
    while ( v6 );
    result = (unsigned __int16)KeNumberNodes;
    v5 = i + 1;
    v2 = a2;
  }
  return result;
}
