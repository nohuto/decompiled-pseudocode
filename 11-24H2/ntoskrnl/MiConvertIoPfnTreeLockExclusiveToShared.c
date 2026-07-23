/*
 * XREFs of MiConvertIoPfnTreeLockExclusiveToShared @ 0x1404BE32C
 * Callers:
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiDeleteStaleCacheMaps @ 0x140676A50 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 MiConvertIoPfnTreeLockExclusiveToShared()
{
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v1; // ebx
  unsigned int NodeColor; // edi
  signed __int32 v3; // esi
  __int64 v4; // r14
  __int64 v5; // r8
  __int64 result; // rax
  signed __int32 v7; // ecx
  unsigned int v8; // ecx
  int v9; // ecx

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  NodeColor = CurrentPrcb->NodeColor;
  v3 = 1;
  if ( KeNumberNodes )
  {
    v4 = qword_140E2DC38 + 376;
    do
    {
      if ( v1 != NodeColor )
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v4 + 640LL));
      v4 += 384LL;
      ++v1;
    }
    while ( v1 < (unsigned __int16)KeNumberNodes );
  }
  v5 = *((_QWORD *)CurrentPrcb->MmInternal + 41);
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 640), 1, 0x80000000);
  if ( (_DWORD)result != 0x80000000 )
  {
    do
    {
      v7 = v3;
      v3 |= 0x40000000u;
      v8 = v7 & 0xBFFFFFFF;
      if ( (result & 0x40000000) == 0 )
        v3 = v8;
      v9 = result;
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 640), v3, result);
    }
    while ( (_DWORD)result != v9 );
  }
  return result;
}
