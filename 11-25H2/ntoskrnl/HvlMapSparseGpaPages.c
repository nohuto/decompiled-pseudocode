/*
 * XREFs of HvlMapSparseGpaPages @ 0x14026CEEC
 * Callers:
 *     VmpFillSlat @ 0x14026CDA0 (VmpFillSlat.c)
 *     VmpProcessInvalidateList @ 0x14026F09C (VmpProcessInvalidateList.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14026E418 (HvlpHvToNtStatus.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall HvlMapSparseGpaPages(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v6; // esi
  char v7; // al
  int v9; // edi
  struct _KPRCB *CurrentPrcb; // rbx
  _QWORD *HypercallCachedPages; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  int v19; // rdi^4
  void *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int16 v22; // bx
  char v24; // al
  __int128 v25; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v26; // [rsp+30h] [rbp-10h]
  __int64 v27; // [rsp+38h] [rbp-8h]
  void *v28; // [rsp+80h] [rbp+40h]
  __int64 v30; // [rsp+A0h] [rbp+60h]

  v6 = 0;
  v26 = 0LL;
  LODWORD(v27) = 0;
  v7 = HvlpFlags;
  *a5 = 0LL;
  v9 = a2;
  v25 = 0LL;
  if ( (v7 & 8) == 0 )
  {
    LODWORD(v25) = 4;
    v24 = KeDisableInterrupts(a1, a2, a3);
LABEL_14:
    BYTE8(v25) = v24;
    HIDWORD(v25) = 1;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    goto LABEL_4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  HypercallCachedPages = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
  if ( !HypercallCachedPages )
  {
    LODWORD(v25) = 4;
    v24 = KeDisableInterrupts(v14, v13, v15);
    v16 = a4;
    goto LABEL_14;
  }
  v16 = a4;
  LODWORD(v25) = 1;
  *((_QWORD *)&v25 + 1) = CurrentPrcb;
  v26 = HypercallCachedPages;
LABEL_4:
  v17 = HypercallCachedPages[2];
  v27 = v17;
  *((_DWORD *)HypercallCachedPages + 3) = 0;
  *HypercallCachedPages = a1;
  v18 = a3;
  *((_DWORD *)HypercallCachedPages + 2) = v9;
  v19 = 0;
  v20 = HypercallCachedPages + 2;
  LODWORD(v30) = 110;
  v28 = v20;
  do
  {
    if ( v18 >= 0xFF )
      v18 = 255LL;
    memmove(v20, (const void *)(v16 + 16LL * *a5), 16 * v18);
    v19 ^= ((unsigned __int16)v18 ^ (unsigned __int16)v19) & 0xFFF;
    HIDWORD(v30) = v19;
    v21 = HvcallInitiateHypercall(v30, v17, 0LL);
    v22 = v21;
    if ( (_WORD)v21 )
      break;
    v16 = a4;
    *a5 += HIDWORD(v21) & 0xFFF;
    v20 = v28;
    v18 = a3 - *a5;
  }
  while ( a3 != *a5 );
  HvlpReleaseHypercallPage(&v25);
  if ( v22 )
    return (unsigned int)HvlpHvToNtStatus(v22);
  return v6;
}
