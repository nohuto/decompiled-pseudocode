/*
 * XREFs of MiFreezeIoPfnNode @ 0x14067707C
 * Callers:
 *     MiDbgTranslatePhysicalAddress @ 0x1406803F0 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockIoPfnTree @ 0x14038FA2C (MiLockIoPfnTree.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x140404D20 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MiFreezeIoPfnNode(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v4; // esi
  _QWORD *MmInternal; // r9
  __int64 v7; // rbp
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rax
  volatile signed __int32 *v11; // rcx

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
  v9 = (_QWORD *)qword_140E37300;
  while ( v9 )
  {
    v10 = v9[3];
    if ( a1 >= v10 )
    {
      if ( a1 < v10 + 512 )
        break;
      v9 = (_QWORD *)v9[1];
    }
    else
    {
      v9 = (_QWORD *)*v9;
    }
  }
  if ( v9 )
  {
    v11 = (volatile signed __int32 *)v9 + 43;
    if ( v4 )
    {
      if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v11) )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 640));
        *(_BYTE *)(a3 + 8) = 0;
        return 0LL;
      }
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v11);
    }
    *(_QWORD *)a3 = v9;
  }
  return 1LL;
}
