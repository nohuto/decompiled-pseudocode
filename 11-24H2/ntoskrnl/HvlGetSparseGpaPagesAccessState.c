/*
 * XREFs of HvlGetSparseGpaPagesAccessState @ 0x14039C2C0
 * Callers:
 *     VmpProcessAccessedBatch @ 0x14039A5A4 (VmpProcessAccessedBatch.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HvlGetSparseGpaPagesAccessState(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v6; // r13d
  __int64 v8; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v10; // rax
  _QWORD *HypercallCachedPages; // r14
  _SLIST_ENTRY *Next; // rax
  struct _KPRCB *v13; // rdi
  PSLIST_ENTRY v14; // rax
  _QWORD *p_Next; // rsi
  _SLIST_ENTRY *v16; // r12
  int v17; // rdi^4
  void *v18; // rax
  unsigned __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rax
  size_t v22; // rbx
  __int64 result; // rax
  __int128 v24; // [rsp+20h] [rbp-48h] BYREF
  PSLIST_ENTRY v25; // [rsp+30h] [rbp-38h]
  _SLIST_ENTRY *v26; // [rsp+38h] [rbp-30h]
  __int128 v27; // [rsp+40h] [rbp-28h] BYREF
  PSLIST_ENTRY v28; // [rsp+50h] [rbp-18h]
  _SLIST_ENTRY *v29; // [rsp+58h] [rbp-10h]
  void *v31; // [rsp+B8h] [rbp+50h]

  v6 = 0;
  v25 = 0LL;
  LODWORD(v26) = 0;
  v28 = 0LL;
  v8 = 0LL;
  LODWORD(v29) = 0;
  v24 = 0LL;
  v27 = 0LL;
  if ( (HvlpFlags & 8) != 0
    && (CurrentPrcb = KeGetCurrentPrcb(),
        v10 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList),
        (HypercallCachedPages = &v10->Next) != 0LL) )
  {
    v25 = v10;
    Next = v10[1].Next;
    LODWORD(v24) = 1;
    *((_QWORD *)&v24 + 1) = CurrentPrcb;
  }
  else
  {
    LODWORD(v24) = 4;
    BYTE8(v24) = KeDisableInterrupts();
    HIDWORD(v24) = 1;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (_SLIST_ENTRY *)HypercallCachedPages[2];
  }
  v26 = Next;
  if ( (HvlpFlags & 8) != 0
    && (v13 = KeGetCurrentPrcb(),
        v14 = RtlpInterlockedPopEntrySList(&v13->HypercallPageList),
        (p_Next = &v14->Next) != 0LL) )
  {
    v16 = v14[1].Next;
    LODWORD(v27) = 1;
    *((_QWORD *)&v27 + 1) = v13;
    v28 = v14;
  }
  else
  {
    LODWORD(v27) = 4;
    BYTE8(v27) = KeDisableInterrupts();
    HIDWORD(v27) = 2;
    p_Next = (char *)KeGetCurrentPrcb()->HypercallCachedPages + 4096;
    v16 = (_SLIST_ENTRY *)p_Next[2];
  }
  v17 = 0;
  *HypercallCachedPages = a1;
  v18 = HypercallCachedPages + 2;
  HypercallCachedPages[1] = a2;
  v19 = a3;
  v31 = v18;
  v29 = v16;
  LODWORD(a1) = 202;
  while ( 1 )
  {
    v20 = 510LL;
    if ( v19 < 0x1FE )
      v20 = v19;
    memmove(v18, (const void *)(a4 + 8 * v8), 8 * v20);
    v17 ^= ((unsigned __int16)v20 ^ (unsigned __int16)v17) & 0xFFF;
    HIDWORD(a1) = v17;
    v21 = HvcallInitiateHypercall(a1, v26, v16);
    if ( (_WORD)v21 )
      break;
    v22 = WORD2(v21) & 0xFFF;
    memmove((void *)(v8 + a6), p_Next, v22);
    v18 = v31;
    v8 += v22;
    v19 -= v22;
    if ( !v19 )
      goto LABEL_12;
  }
  v8 += WORD2(v21) & 0xFFF;
  v6 = HvlpHvToNtStatus((unsigned __int16)v21);
LABEL_12:
  HvlpReleaseHypercallPage(&v27);
  HvlpReleaseHypercallPage(&v24);
  result = v6;
  *a5 = v8;
  return result;
}
