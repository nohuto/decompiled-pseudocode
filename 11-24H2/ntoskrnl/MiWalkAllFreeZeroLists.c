/*
 * XREFs of MiWalkAllFreeZeroLists @ 0x1404ABCF8
 * Callers:
 *     MiLockMemoryLists @ 0x1404ABAA0 (MiLockMemoryLists.c)
 *     MiMirrorPurgePartitionPages @ 0x1404AEE30 (MiMirrorPurgePartitionPages.c)
 *     MiMirrorNodeFreeZeroPages @ 0x1404F8568 (MiMirrorNodeFreeZeroPages.c)
 * Callees:
 *     MiGetColorHeadBase @ 0x140417F30 (MiGetColorHeadBase.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MiWalkAllFreeZeroLists(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // dl
  unsigned int v4; // ebx
  __int64 v5; // r13
  unsigned int i; // edi
  int v7; // r12d
  unsigned __int8 j; // r15
  int v9; // r14d
  int k; // ebp
  char v12; // [rsp+80h] [rbp+8h]

  v3 = MmNumberOfChannels;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v12 = MmNumberOfChannels;
LABEL_2:
  if ( v4 >= (unsigned __int16)KeNumberNodes )
    return 1LL;
  for ( i = 0; ; ++i )
  {
    if ( i > 3 )
    {
      v5 += 57216LL;
      ++v4;
      goto LABEL_2;
    }
    v7 = 0;
LABEL_6:
    if ( v7 < (i != 3) + 1 )
      break;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= v3 )
    {
      ++v7;
      goto LABEL_6;
    }
    v9 = 0;
LABEL_10:
    if ( v9 <= 1 )
      break;
    v3 = v12;
  }
  for ( k = 0; ; ++k )
  {
    if ( k > 3 )
    {
      ++v9;
      goto LABEL_10;
    }
    MiGetColorHeadBase(v5, (j & 1 | (2 * (v4 & 0x3F | ((v7 & 1 | (2 * (i & 3 | (4 * (k & 3))))) << 6)))) << 8, v9, k);
    if ( !(unsigned int)guard_dispatch_icall_no_overrides(a3, v5) )
      break;
  }
  return 0LL;
}
