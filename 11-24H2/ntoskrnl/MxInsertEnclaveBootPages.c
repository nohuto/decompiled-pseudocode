/*
 * XREFs of MxInsertEnclaveBootPages @ 0x140C5A354
 * Callers:
 *     MiCreateDescriptorPfns @ 0x140C53184 (MiCreateDescriptorPfns.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiSetFreeZeroPfnCold @ 0x140423EE0 (MiSetFreeZeroPfnCold.c)
 *     MiDetermineNewPfnHeatState @ 0x140446D1C (MiDetermineNewPfnHeatState.c)
 *     MiSetPageTablePfnBuddy @ 0x140492B70 (MiSetPageTablePfnBuddy.c)
 *     MiGetEnclavePageList @ 0x14049FC58 (MiGetEnclavePageList.c)
 *     MiCreateInitialPfns @ 0x14066D630 (MiCreateInitialPfns.c)
 */

__int64 __fastcall MxInsertEnclaveBootPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  ULONG_PTR v3; // rdi
  unsigned int v6; // eax
  int v7; // eax
  __int64 v8; // r9
  unsigned __int64 *v9; // rbx
  __int64 result; // rax
  unsigned __int64 v11; // r14
  ULONG_PTR v12; // r8
  unsigned __int64 v13; // rdx
  ULONG_PTR v14; // rax
  unsigned __int64 v15; // rax
  ULONG_PTR v16; // rdi
  unsigned __int64 *v17; // r15
  unsigned __int64 *v18; // rbx
  __int64 EnclavePageList; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int128 v22; // [rsp+20h] [rbp-30h] BYREF
  __int128 v23; // [rsp+30h] [rbp-20h]
  __int64 v24; // [rsp+40h] [rbp-10h]
  __int64 v25; // [rsp+48h] [rbp-8h]
  int v26; // [rsp+90h] [rbp+40h]
  int v27; // [rsp+90h] [rbp+40h]

  v3 = BugCheckParameter2;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0x400000LL;
  v25 = 0x40000000000000LL;
  v6 = MiPageToNode(BugCheckParameter2);
  v7 = MiDetermineNewPfnHeatState(0, 3u, qword_140E38D50 + 57216LL * v6);
  MiSetFreeZeroPfnCold((__int64)&v22, v7);
  *(_QWORD *)&v23 = MiMakeDemandZeroPte(4);
  MiSetPfnContainingFrame((__int64)&v22, 0x3FFFFFFFFELL);
  MiSetPageTablePfnBuddy((__int64)&v22, 0x10000000001LL, 1LL, v8);
  MiSetPfnIdentity((__int64)&v22, 1u);
  if ( a3 == 33 )
  {
    *((_QWORD *)&v23 + 1) &= 0xC000000000000000uLL;
    HIBYTE(v26) = BYTE3(v24);
    LOWORD(v26) = 0;
    BYTE2(v26) = BYTE2(v24) & 0xF8 | 5;
    LODWORD(v24) = v26;
    BYTE3(v24) = HIBYTE(v26) | 0x10;
    *((_QWORD *)&v22 + 1) = -8LL;
  }
  else
  {
    MiSetPfnContainingFrame((__int64)&v22, 0x3FFFFFFFFELL);
    *((_QWORD *)&v23 + 1) = *((_QWORD *)&v23 + 1) & 0xC000000000000000uLL | 1;
    HIBYTE(v27) = BYTE3(v24);
    LOWORD(v27) = 2;
    BYTE2(v27) = BYTE2(v24) & 0xF8 | 6;
    LODWORD(v24) = v27;
    *((_QWORD *)&v22 + 1) = 0xFFFFF68000000000uLL;
    _InterlockedAdd64(&qword_140E3DA00, a2);
  }
  v9 = (unsigned __int64 *)(48 * v3 - 0x220000000000LL);
  result = MiCreateInitialPfns((__int64)v9, a2, (__int64 *)&v22);
  if ( a3 == 33 )
  {
    v11 = v3 + a2 - 1;
    if ( v3 <= v11 )
    {
      v12 = v3 - 1;
      v3 += a2;
      v13 = a2;
      do
      {
        v14 = v12 ^ v9[3];
        *v9 = (v12 + 2) ^ (*v9 ^ (v12 + 2)) & 0xFFFFFF0000000000uLL;
        v15 = v12++ ^ v14 & 0xFFFFFF0000000000uLL;
        v9[3] = v15;
        v9 += 6;
        --v13;
      }
      while ( v13 );
    }
    v16 = v3 - a2;
    v17 = v9 - 6;
    v18 = &v9[-6 * a2];
    EnclavePageList = MiGetEnclavePageList((__int64)&MiSystemPartition, v16);
    v20 = EnclavePageList;
    _InterlockedAdd64((volatile signed __int64 *)EnclavePageList, a2);
    v21 = *(_QWORD *)(EnclavePageList + 24);
    if ( v21 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(EnclavePageList + 16) = v16;
    else
      *(_QWORD *)(48 * v21 - 0x220000000000LL) = v16 ^ (*(_QWORD *)(48 * v21 - 0x220000000000LL) ^ v16) & 0xFFFFFF0000000000uLL;
    v18[3] = v21 ^ (v21 ^ v18[3]) & 0xFFFFFF0000000000uLL;
    result = *v17 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    *v17 = result;
    *(_QWORD *)(v20 + 24) = v11;
  }
  return result;
}
