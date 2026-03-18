/*
 * XREFs of MiPurgeFileOnlyPfn @ 0x14067BB9C
 * Callers:
 *     MiPurgeBadFileOnlyPages @ 0x14067B98C (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiCheckProtoPtePageState @ 0x14023BE50 (MiCheckProtoPtePageState.c)
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MiSubsectionProtosCreated @ 0x1404CFC98 (MiSubsectionProtosCreated.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x14067A42C (MiChangingSubsectionProtos.c)
 *     MiPersistPage @ 0x14067B918 (MiPersistPage.c)
 */

__int64 __fastcall MiPurgeFileOnlyPfn(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // edi
  __int64 v3; // r14
  __int64 v4; // rsi
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // rdx
  ULONG_PTR v7; // rbp
  __int64 v8; // r8
  ULONG_PTR v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  char v14; // al
  _OWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]
  char v17; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  memset(v15, 0, sizeof(v15));
  v16 = 0LL;
  if ( qword_140E2DB80 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140E2DB80;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v1 >> 16;
  v17 = 17;
  v5 = (unsigned __int64 *)(v3 | 0x8000000000000000uLL);
  MiChangingSubsectionProtos((__int64 *)v4, 32, (__int64)v15);
  v7 = MiCheckProtoPtePageState(*(_QWORD *)v4, (unsigned __int64)v5, 0, &v17);
  if ( v7 )
  {
    v9 = MiLockLeafPage(v5, 0);
    if ( v9 )
    {
      v10 = *v5;
      if ( (*v5 & 1) != 0 )
        goto LABEL_7;
      v12 = *v5;
      if ( qword_140E2DB80 )
      {
        if ( (v10 & 0x10) != 0 )
          v12 = v10 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v12 = v10 & ~qword_140E2DB80;
      }
      v8 = 0xFFFFDE0000000000uLL;
      v6 = 48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( v9 != v6 )
        goto LABEL_7;
      v13 = *(_QWORD *)(v9 + 16);
      if ( (v13 & 0x400) == 0
        || (v13 & 1) != 0
        || (unsigned __int64 *)(*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) != v5 )
      {
        KeBugCheckEx(0xDEu, 2uLL, (ULONG_PTR)v5, *(_QWORD *)(v9 + 8), *v5);
      }
      v14 = *(_BYTE *)(v9 + 34);
      if ( (v14 & 8) != 0 )
      {
LABEL_7:
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        if ( (v14 & 0x10) != 0 )
        {
          if ( *(char *)(v9 + 35) >= 0 )
            MiPersistPage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x220000000000LL) >> 4));
          MiSetPfnModified(v9, 0);
        }
        MiDeleteTransitionPte((__int64 *)v5, v9, 2u, 0);
        v2 = 1;
      }
    }
  }
  LOBYTE(v6) = v17;
  if ( v17 != 17 )
    MiUnlockProtoPoolPage(v7, v6, v8);
  return MiSubsectionProtosCreated(v4, (__int64)v15, 0, v2);
}
