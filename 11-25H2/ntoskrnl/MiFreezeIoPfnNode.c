/*
 * XREFs of MiFreezeIoPfnNode @ 0x14066A44C
 * Callers:
 *     MiDbgTranslatePhysicalAddress @ 0x1406739D0 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockIoPfnTree @ 0x140392384 (MiLockIoPfnTree.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x1404064A0 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MiFreezeIoPfnNode(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v4; // esi
  _QWORD *MmInternal; // r9
  __int64 v7; // rbp
  __int64 v9; // rbx
  unsigned __int64 v10; // rax

  *(_QWORD *)a3 = 0LL;
  v4 = a2;
  MmInternal = KeGetCurrentPrcb()->MmInternal;
  v7 = MmInternal[41];
  if ( (_DWORD)a2 )
  {
    *(_BYTE *)(a3 + 8) = 1;
    v4 = ExTryAcquireSpinLockSharedAtDpcLevel(v7 + 640, a2, a3, (__int64)MmInternal);
    if ( !v4 )
      return 0LL;
  }
  else
  {
    *(_BYTE *)(a3 + 8) = 0;
    MiLockIoPfnTree(5LL);
  }
  v9 = qword_140E36F80;
  while ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 24);
    if ( a1 >= v10 )
    {
      if ( a1 < v10 + 512 )
        break;
      v9 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v9 = *(_QWORD *)v9;
    }
  }
  if ( v9 )
  {
    if ( v4 )
    {
      if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 640));
        *(_BYTE *)(a3 + 8) = 0;
        return 0LL;
      }
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 172));
    }
    *(_QWORD *)a3 = v9;
  }
  return 1LL;
}
