/*
 * XREFs of MiLateWritePageHash @ 0x1404C3280
 * Callers:
 *     MiArePagefileContentsCorrupted @ 0x140341C34 (MiArePagefileContentsCorrupted.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWriteEntirePageHashEntry @ 0x140426940 (MiWriteEntirePageHashEntry.c)
 *     MiReadEntirePageHashEntry @ 0x1404573EC (MiReadEntirePageHashEntry.c)
 */

__int64 __fastcall MiLateWritePageHash(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  volatile LONG *v4; // rbp
  unsigned int v9; // esi
  unsigned int v10; // ebx
  unsigned __int64 v11; // r8
  __int64 v12; // r9
  _OWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (volatile LONG *)(a1 + 200);
  v9 = 0;
  v14[0] = 0LL;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
  v10 = dword_140E373CC * a2;
  if ( (*(_QWORD *)((((*(_QWORD *)(a1 + 184) + (unsigned __int64)v10) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 1) != 0 )
  {
    MiReadEntirePageHashEntry(*(_QWORD *)(a1 + 184) + v10, (__int64)v14);
    if ( LODWORD(v14[0]) == *(_DWORD *)a4 )
    {
      MiWriteEntirePageHashEntry(a3, (unsigned int *)v14);
      if ( dword_140E373D0 )
      {
        if ( *((_QWORD *)&v14[0] + 1) != *(_QWORD *)(a4 + 8) )
          v9 = 59;
        if ( DWORD1(v14[0]) != *(_DWORD *)(a4 + 4) )
          v9 = 56;
      }
    }
    else if ( (*(_BYTE *)(48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFDELL) & 0x10) != 0 )
    {
      if ( !byte_140E30308 )
        v9 = 58;
    }
    else
    {
      MiWriteEntirePageHashEntry(v12, (unsigned int *)a4);
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  return v9;
}
