/*
 * XREFs of MiActivateCombineBlock @ 0x1402A6830
 * Callers:
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiActivateCombineBlock(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v4; // r14
  unsigned int v5; // r12d
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 ***v9; // rdi
  __int64 **v10; // rdx
  __int64 *v11; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 392));
  v4 = a2 + 8;
  v5 = a2[3] & 0xF;
  v6 = a2[3];
  v7 = a2[6] & 0x1F;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(16LL * v5 + a1 + 104));
  v8 = 0LL;
  v9 = (__int64 ***)(a1 + 16 * (v5 + 6LL));
  v10 = *v9;
  if ( *v9 )
  {
    while ( 1 )
    {
      if ( v6 <= (unsigned __int64)v10[3]
        && (v6 < (unsigned __int64)v10[3]
         || (unsigned int)v7 <= ((_DWORD)v10[6] & 0x1Fu)
         && ((unsigned int)v7 < ((_DWORD)v10[6] & 0x1Fu) || v4 && *v4 < (unsigned __int64)v10[8])) )
      {
        v11 = *v10;
        if ( !*v10 )
          break;
      }
      else
      {
        v11 = v10[1];
        if ( !v11 )
        {
          LOBYTE(v8) = 1;
          break;
        }
      }
      v10 = (__int64 **)v11;
    }
  }
  RtlAvlInsertNodeEx(v9, v10, v8, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 104 + 16LL * v5));
}
