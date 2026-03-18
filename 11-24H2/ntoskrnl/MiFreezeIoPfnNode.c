/*
 * XREFs of MiFreezeIoPfnNode @ 0x140675EAC
 * Callers:
 *     MiDbgTranslatePhysicalAddress @ 0x14067F1F0 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14022E850 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockIoPfnTree @ 0x1403D0514 (MiLockIoPfnTree.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14040C690 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
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
    MiLockIoPfnTree(5LL, a2);
  }
  v9 = qword_140E371C0;
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
