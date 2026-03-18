/*
 * XREFs of MxInsertEnclaveBootPages @ 0x140C46EE4
 * Callers:
 *     MiCreateDescriptorPfns @ 0x140C3FDC4 (MiCreateDescriptorPfns.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x1402293B0 (MiSetPfnIdentity.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiSetFreeZeroPfnCold @ 0x140438788 (MiSetFreeZeroPfnCold.c)
 *     MiDetermineNewPfnHeatState @ 0x140450848 (MiDetermineNewPfnHeatState.c)
 *     MiSetPageTablePfnBuddy @ 0x14049D0B8 (MiSetPageTablePfnBuddy.c)
 *     MiGetEnclavePageList @ 0x1404A4998 (MiGetEnclavePageList.c)
 *     MiCreateInitialPfns @ 0x140660920 (MiCreateInitialPfns.c)
 */

__int64 __fastcall MxInsertEnclaveBootPages(ULONG_PTR BugCheckParameter2, unsigned __int64 a2, int a3)
{
  ULONG_PTR v3; // rdi
  unsigned int v6; // eax
  int v7; // eax
  unsigned __int64 *v8; // rbx
  __int64 result; // rax
  unsigned __int64 v10; // r14
  ULONG_PTR v11; // r8
  unsigned __int64 v12; // rdx
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // rax
  ULONG_PTR v15; // rdi
  unsigned __int64 *v16; // r15
  unsigned __int64 *v17; // rbx
  __int64 EnclavePageList; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int128 v21; // [rsp+20h] [rbp-30h] BYREF
  __int128 v22; // [rsp+30h] [rbp-20h]
  __int64 v23; // [rsp+40h] [rbp-10h]
  __int64 v24; // [rsp+48h] [rbp-8h]
  int v25; // [rsp+90h] [rbp+40h]
  int v26; // [rsp+90h] [rbp+40h]

  v3 = BugCheckParameter2;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0x400000LL;
  v24 = 0x40000000000000LL;
  v6 = MiPageToNode(BugCheckParameter2);
  v7 = MiDetermineNewPfnHeatState(0, 3u, qword_140E389D0 + 57216LL * v6);
  MiSetFreeZeroPfnCold((__int64)&v21, v7);
  *(_QWORD *)&v22 = MiMakeDemandZeroPte(4);
  MiSetPfnContainingFrame((__int64)&v21, 0x3FFFFFFFFELL);
  MiSetPageTablePfnBuddy((__int64)&v21, 0x10000000001uLL, 1);
  MiSetPfnIdentity((__int64)&v21, 1u);
  if ( a3 == 33 )
  {
    *((_QWORD *)&v22 + 1) &= 0xC000000000000000uLL;
    HIBYTE(v25) = BYTE3(v23);
    LOWORD(v25) = 0;
    BYTE2(v25) = BYTE2(v23) & 0xF8 | 5;
    LODWORD(v23) = v25;
    BYTE3(v23) = HIBYTE(v25) | 0x10;
    *((_QWORD *)&v21 + 1) = -8LL;
  }
  else
  {
    MiSetPfnContainingFrame((__int64)&v21, 0x3FFFFFFFFELL);
    *((_QWORD *)&v22 + 1) = *((_QWORD *)&v22 + 1) & 0xC000000000000000uLL | 1;
    HIBYTE(v26) = BYTE3(v23);
    LOWORD(v26) = 2;
    BYTE2(v26) = BYTE2(v23) & 0xF8 | 6;
    LODWORD(v23) = v26;
    *((_QWORD *)&v21 + 1) = 0xFFFFF68000000000uLL;
    _InterlockedAdd64(&qword_140E3D680, a2);
  }
  v8 = (unsigned __int64 *)(48 * v3 - 0x220000000000LL);
  result = MiCreateInitialPfns((__int64)v8, a2, (__int64 *)&v21);
  if ( a3 == 33 )
  {
    v10 = v3 + a2 - 1;
    if ( v3 <= v10 )
    {
      v11 = v3 - 1;
      v3 += a2;
      v12 = a2;
      do
      {
        v13 = v11 ^ v8[3];
        *v8 = (v11 + 2) ^ (*v8 ^ (v11 + 2)) & 0xFFFFFF0000000000uLL;
        v14 = v11++ ^ v13 & 0xFFFFFF0000000000uLL;
        v8[3] = v14;
        v8 += 6;
        --v12;
      }
      while ( v12 );
    }
    v15 = v3 - a2;
    v16 = v8 - 6;
    v17 = &v8[-6 * a2];
    EnclavePageList = MiGetEnclavePageList((__int64)&MiSystemPartition, v15);
    v19 = EnclavePageList;
    _InterlockedAdd64((volatile signed __int64 *)EnclavePageList, a2);
    v20 = *(_QWORD *)(EnclavePageList + 24);
    if ( v20 == 0x3FFFFFFFFFLL )
      *(_QWORD *)(EnclavePageList + 16) = v15;
    else
      *(_QWORD *)(48 * v20 - 0x220000000000LL) = v15 ^ (*(_QWORD *)(48 * v20 - 0x220000000000LL) ^ v15) & 0xFFFFFF0000000000uLL;
    v17[3] = v20 ^ (v20 ^ v17[3]) & 0xFFFFFF0000000000uLL;
    result = *v16 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
    *v16 = result;
    *(_QWORD *)(v19 + 24) = v10;
  }
  return result;
}
