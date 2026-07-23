/*
 * XREFs of HvlMapSparseGpaPages @ 0x14039CD8C
 * Callers:
 *     VmpFillSlat @ 0x14039CC40 (VmpFillSlat.c)
 *     VmpProcessInvalidateList @ 0x1404A41E8 (VmpProcessInvalidateList.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HvlMapSparseGpaPages(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v6; // esi
  char v7; // al
  struct _KPRCB *CurrentPrcb; // rbx
  _QWORD *HypercallCachedPages; // rax
  __int64 v13; // r9
  __int64 v14; // r14
  unsigned __int64 v15; // r15
  int v16; // rdi^4
  void *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int16 v19; // bx
  bool v21; // al
  __int128 v22; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v23; // [rsp+30h] [rbp-10h]
  __int64 v24; // [rsp+38h] [rbp-8h]
  void *v25; // [rsp+80h] [rbp+40h]
  __int64 v27; // [rsp+A0h] [rbp+60h]

  v6 = 0;
  v23 = 0LL;
  LODWORD(v24) = 0;
  v7 = HvlpFlags;
  *a5 = 0LL;
  v22 = 0LL;
  if ( (v7 & 8) == 0 )
  {
    LODWORD(v22) = 4;
    v21 = KeDisableInterrupts();
LABEL_14:
    BYTE8(v22) = v21;
    HIDWORD(v22) = 1;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    goto LABEL_4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  HypercallCachedPages = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
  if ( !HypercallCachedPages )
  {
    LODWORD(v22) = 4;
    v21 = KeDisableInterrupts();
    v13 = a4;
    goto LABEL_14;
  }
  v13 = a4;
  LODWORD(v22) = 1;
  *((_QWORD *)&v22 + 1) = CurrentPrcb;
  v23 = HypercallCachedPages;
LABEL_4:
  v14 = HypercallCachedPages[2];
  v24 = v14;
  *((_DWORD *)HypercallCachedPages + 3) = 0;
  *HypercallCachedPages = a1;
  v15 = a3;
  *((_DWORD *)HypercallCachedPages + 2) = a2;
  v16 = 0;
  v17 = HypercallCachedPages + 2;
  LODWORD(v27) = 110;
  v25 = v17;
  do
  {
    if ( v15 >= 0xFF )
      v15 = 255LL;
    memmove(v17, (const void *)(v13 + 16LL * *a5), 16 * v15);
    v16 ^= ((unsigned __int16)v15 ^ (unsigned __int16)v16) & 0xFFF;
    HIDWORD(v27) = v16;
    v18 = HvcallInitiateHypercall(v27, v14, 0LL);
    v19 = v18;
    if ( (_WORD)v18 )
      break;
    v13 = a4;
    *a5 += HIDWORD(v18) & 0xFFF;
    v17 = v25;
    v15 = a3 - *a5;
  }
  while ( a3 != *a5 );
  HvlpReleaseHypercallPage(&v22);
  if ( v19 )
    return (unsigned int)HvlpHvToNtStatus(v19);
  return v6;
}
