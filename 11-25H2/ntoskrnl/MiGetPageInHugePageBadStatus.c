/*
 * XREFs of MiGetPageInHugePageBadStatus @ 0x1406647A4
 * Callers:
 *     MiUpdateBadPfnIdentity @ 0x140668F30 (MiUpdateBadPfnIdentity.c)
 *     MmGetPageBadStatus @ 0x140669050 (MmGetPageBadStatus.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiIsPageInHugePfn @ 0x140392030 (MiIsPageInHugePfn.c)
 *     MiUnlockHugePfn @ 0x1404CF564 (MiUnlockHugePfn.c)
 *     MiLockHugePfn @ 0x1406652D4 (MiLockHugePfn.c)
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
  v9 = (_QWORD *)(qword_140E2FD80 + 8 * v8);
  if ( v5 )
    v10 = 17;
  else
    v10 = MiLockHugePfn(qword_140E2FD80 + 8 * v8);
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2FC90);
  if ( (unsigned int)MiIsPageInHugePfn(a1) )
  {
    if ( (*v9 & 8) != 0 )
    {
      v11 = qword_140E2FCE0;
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2FC90);
  if ( v10 != 17 )
  {
    LOBYTE(v14) = v10;
    MiUnlockHugePfn((__int64)v9, v14);
  }
  return v7;
}
