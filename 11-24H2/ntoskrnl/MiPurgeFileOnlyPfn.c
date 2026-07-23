/*
 * XREFs of MiPurgeFileOnlyPfn @ 0x14067CD7C
 * Callers:
 *     MiPurgeBadFileOnlyPages @ 0x14067CB6C (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x140204FF0 (MiDeleteTransitionPte.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140345BB0 (MiCheckProtoPtePageState.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiSubsectionProtosCreated @ 0x1404C8D48 (MiSubsectionProtosCreated.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x14067B60C (MiChangingSubsectionProtos.c)
 *     MiPersistPage @ 0x14067CAF8 (MiPersistPage.c)
 */

__int64 __fastcall MiPurgeFileOnlyPfn(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // edi
  __int64 v3; // r14
  __int64 v4; // rsi
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  char v15; // al
  _OWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]
  char v18; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  memset(v16, 0, sizeof(v16));
  v17 = 0LL;
  if ( qword_140E2DCC0 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140E2DCC0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v1 >> 16;
  v18 = 17;
  v5 = (unsigned __int64 *)(v3 | 0x8000000000000000uLL);
  MiChangingSubsectionProtos((__int64 *)v4, 32, (__int64)v16);
  v7 = MiCheckProtoPtePageState(*(_QWORD *)v4, (unsigned __int64)v5, 0, &v18);
  if ( v7 )
  {
    v10 = MiLockLeafPage(v5, 0);
    if ( v10 )
    {
      v11 = *v5;
      if ( (*v5 & 1) != 0 )
        goto LABEL_7;
      v13 = *v5;
      if ( qword_140E2DCC0 )
      {
        if ( (v11 & 0x10) != 0 )
          v13 = v11 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v13 = v11 & ~qword_140E2DCC0;
      }
      v8 = 0xFFFFDE0000000000uLL;
      v6 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( v10 != v6 )
        goto LABEL_7;
      v14 = *(_QWORD *)(v10 + 16);
      if ( (v14 & 0x400) == 0
        || (v14 & 1) != 0
        || (unsigned __int64 *)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != v5 )
      {
        KeBugCheckEx(0xDEu, 2uLL, (ULONG_PTR)v5, *(_QWORD *)(v10 + 8), *v5);
      }
      v15 = *(_BYTE *)(v10 + 34);
      if ( (v15 & 8) != 0 )
      {
LABEL_7:
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        if ( (v15 & 0x10) != 0 )
        {
          if ( *(char *)(v10 + 35) >= 0 )
            MiPersistPage(0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4));
          MiSetPfnModified(v10, 0);
        }
        LOBYTE(v8) = 2;
        MiDeleteTransitionPte((__int64 *)v5, v10, v8, 0);
        v2 = 1;
      }
    }
  }
  LOBYTE(v6) = v18;
  if ( v18 != 17 )
    MiUnlockProtoPoolPage(v7, v6, v8, v9);
  return MiSubsectionProtosCreated(v4, (__int64)v16, 0, v2);
}
