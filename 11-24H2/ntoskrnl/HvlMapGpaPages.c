/*
 * XREFs of HvlMapGpaPages @ 0x14039D530
 * Callers:
 *     VmpFillSlat @ 0x14039CC40 (VmpFillSlat.c)
 *     VmpInvalidateSingleGpaRange @ 0x1404AD974 (VmpInvalidateSingleGpaRange.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HvlMapGpaPages(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, __int64 a5, __int64 *a6)
{
  unsigned int v7; // r14d
  unsigned __int64 v8; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v11; // rax
  _QWORD *HypercallCachedPages; // rsi
  _SLIST_ENTRY *Next; // r12
  int v14; // rdi^4
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int16 v17; // bx
  __int128 v19; // [rsp+28h] [rbp-30h] BYREF
  PSLIST_ENTRY v20; // [rsp+38h] [rbp-20h]
  _SLIST_ENTRY *v21; // [rsp+40h] [rbp-18h]
  int v24; // [rsp+B0h] [rbp+58h]
  int v26; // [rsp+C8h] [rbp+70h]

  v20 = 0LL;
  v7 = 0;
  LODWORD(v21) = 0;
  v8 = a4;
  *a6 = 0LL;
  v26 = (a3 >> 31) & 9;
  v19 = 0LL;
  if ( (HvlpFlags & 8) != 0
    && (CurrentPrcb = KeGetCurrentPrcb(),
        v11 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList),
        (HypercallCachedPages = &v11->Next) != 0LL) )
  {
    Next = v11[1].Next;
    LODWORD(v19) = 1;
    *((_QWORD *)&v19 + 1) = CurrentPrcb;
    v20 = v11;
  }
  else
  {
    LODWORD(v19) = 4;
    BYTE8(v19) = KeDisableInterrupts();
    HIDWORD(v19) = 1;
    HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = (_SLIST_ENTRY *)HypercallCachedPages[2];
  }
  v21 = Next;
  v14 = 0;
  HypercallCachedPages[1] = 0LL;
  *((_DWORD *)HypercallCachedPages + 5) = 0;
  *((_DWORD *)HypercallCachedPages + 4) = a3;
  v24 = a3 & 0x30000;
  v15 = *a6;
  *HypercallCachedPages = a1;
  LODWORD(a1) = 75;
  while ( 1 )
  {
    if ( v8 >= 0x1FD )
      v8 = 509LL;
    if ( !v24 )
    {
      v15 = *a6;
      memmove(HypercallCachedPages + 3, (const void *)(a5 + 8 * *a6), 8 * v8);
    }
    HypercallCachedPages[1] = a2 + (v15 << v26);
    v14 ^= ((unsigned __int16)v14 ^ (unsigned __int16)v8) & 0xFFF;
    HIDWORD(a1) = v14;
    v16 = HvcallInitiateHypercall(a1, Next, 0LL);
    v17 = v16;
    if ( (_WORD)v16 )
      break;
    *a6 += WORD2(v16) & 0xFFF;
    v8 = a4 - *a6;
    if ( !v8 )
      break;
    v15 = *a6;
  }
  HvlpReleaseHypercallPage(&v19);
  if ( v17 )
    return (unsigned int)HvlpHvToNtStatus(v17);
  return v7;
}
