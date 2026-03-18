/*
 * XREFs of MiGetPageInHugePageBadStatus @ 0x14067024C
 * Callers:
 *     MiUpdateBadPfnIdentity @ 0x140674990 (MiUpdateBadPfnIdentity.c)
 *     MmGetPageBadStatus @ 0x140674AB0 (MmGetPageBadStatus.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiIsPageInHugePfn @ 0x1403CEEA0 (MiIsPageInHugePfn.c)
 *     MiUnlockHugePfn @ 0x1404CF53C (MiUnlockHugePfn.c)
 *     MiLockHugePfn @ 0x140670D7C (MiLockHugePfn.c)
 */

__int64 __fastcall MiGetPageInHugePageBadStatus(unsigned __int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // edx
  unsigned int v7; // edi
  unsigned __int64 v8; // rbx
  _QWORD *v9; // r14
  char v10; // bp
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx

  *a3 = 0;
  if ( !(unsigned int)MiIsPageInHugePfn(a1) )
    return 3221225711LL;
  v7 = 0;
  v8 = (a1 >> 18) & 0x3FFFFF;
  v9 = (_QWORD *)(qword_140E2FFC0 + 8 * v8);
  if ( v5 )
    v10 = 17;
  else
    v10 = MiLockHugePfn(qword_140E2FFC0 + 8 * v8);
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2FED0);
  if ( (unsigned int)MiIsPageInHugePfn(a1) )
  {
    if ( (*v9 & 8) != 0 )
    {
      v11 = qword_140E2FF20;
      while ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 24) & 0x3FFFFFLL;
        if ( v8 <= v12 )
        {
          if ( v8 >= v12 )
            break;
          v11 = *(_QWORD *)v11;
        }
        else
        {
          v11 = *(_QWORD *)(v11 + 8);
        }
      }
      v13 = a1 & 0x3FFFF;
      if ( _bittest64(*(const signed __int64 **)(v11 + 32), v13) )
      {
        v7 = -1073740023;
        if ( (*v9 & 7) != 4 )
          v7 = 259;
        if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v11 + 32) + 0x8000LL), v13) )
          *a3 = 1;
      }
    }
  }
  else
  {
    v7 = -1073741585;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2FED0);
  if ( v10 != 17 )
  {
    LOBYTE(v14) = v10;
    MiUnlockHugePfn((__int64)v9, v14);
  }
  return v7;
}
