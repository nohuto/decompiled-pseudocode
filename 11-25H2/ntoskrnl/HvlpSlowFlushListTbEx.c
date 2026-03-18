/*
 * XREFs of HvlpSlowFlushListTbEx @ 0x1404518A8
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x140451794 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     HvlpCopyFlushVaList @ 0x14026A7D0 (HvlpCopyFlushVaList.c)
 *     VslSlowFlushSecureRangeList @ 0x14026AC68 (VslSlowFlushSecureRangeList.c)
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14026D37C (HvlpAffinityToHvProcessorSet.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     VslFlushSecureAddressSpace @ 0x1404B12CC (VslFlushSecureAddressSpace.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlpSecureFlushLargeRangeList @ 0x140695C8C (HvlpSecureFlushLargeRangeList.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall HvlpSlowFlushListTbEx(
        _QWORD *a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned int a5,
        __int64 *a6,
        unsigned int a7)
{
  int v7; // edi
  char v9; // r15
  size_t v11; // r8
  int v12; // r9d
  __int64 v13; // r10
  char v14; // r14
  _QWORD *p_Next; // rsi
  __int64 Next; // rbx
  struct _KPRCB *CurrentPrcb; // rbx
  PSLIST_ENTRY v18; // rax
  __int64 CurrentIrql; // rcx
  __int64 *v20; // r13
  __int64 v21; // rax
  char v22; // r14
  _BYTE v24[4]; // [rsp+38h] [rbp-71h] BYREF
  int v25; // [rsp+3Ch] [rbp-6Dh]
  __int64 v26; // [rsp+40h] [rbp-69h]
  unsigned int v27; // [rsp+48h] [rbp-61h]
  int v28; // [rsp+4Ch] [rbp-5Dh]
  __int128 v29; // [rsp+50h] [rbp-59h] BYREF
  PSLIST_ENTRY v30; // [rsp+60h] [rbp-49h]
  __int64 v31; // [rsp+68h] [rbp-41h]
  __int64 *v32; // [rsp+70h] [rbp-39h]
  _BYTE v33[7]; // [rsp+78h] [rbp-31h] BYREF
  _BYTE v34[33]; // [rsp+97h] [rbp-12h] BYREF

  v7 = 0;
  v32 = a6;
  v28 = a3;
  v30 = 0LL;
  LODWORD(v31) = 0;
  v9 = 1;
  v26 = a2;
  v25 = 0;
  v27 = 0;
  v29 = 0LL;
  if ( (HvlpFlags & 8) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v18 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v18->Next;
    if ( v18 )
    {
      *((_QWORD *)&v29 + 1) = CurrentPrcb;
      v14 = 1;
      Next = (__int64)v18[1].Next;
      v31 = Next;
      LODWORD(v29) = 1;
      v30 = v18;
    }
    else
    {
      p_Next = (_QWORD *)((unsigned __int64)v34 & 0xFFFFFFFFFFFFF000uLL);
      v14 = 2;
      LODWORD(v29) = 2;
      if ( (((unsigned __int64)v33 ^ (unsigned __int64)v34) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        p_Next = v33;
      BYTE8(v29) = KeGetCurrentIrql();
      if ( BYTE8(v29) < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
      }
      Next = MmGetPhysicalAddress(p_Next).QuadPart;
      v31 = Next;
    }
    v13 = v26;
    v12 = 0;
    v11 = 0LL;
  }
  else
  {
    LODWORD(v29) = 4;
    BYTE8(v29) = KeDisableInterrupts();
    v14 = 4;
    HIDWORD(v29) = 1;
    p_Next = KeGetCurrentPrcb()->HypercallCachedPages;
    Next = p_Next[2];
    v31 = Next;
  }
  if ( (v14 & 2) != 0 )
  {
    if ( a4 )
    {
      *p_Next = *a1;
      p_Next[1] = a1[1];
      p_Next[3] = 0LL;
      v7 = 19;
      p_Next[2] = 1LL;
    }
    goto LABEL_29;
  }
  if ( a4 )
  {
    *p_Next = *a1;
    p_Next[1] = a1[1];
    v12 = HvlpAffinityToHvProcessorSet(v13, p_Next + 2, 0xFE0u);
    v25 = v12;
    v11 = (unsigned int)(v12 + 32);
    v27 = v12 + 32;
  }
  if ( v11 + 8LL * a7 > 0x1000 )
  {
    if ( v28 == 2 )
    {
      if ( a4 )
        memmove(v33, p_Next, v11);
      HvlpReleaseHypercallPage((unsigned int *)&v29);
      v21 = HvlpAcquireHypercallPage(&v29, 9LL, v33);
      v12 = v25;
      p_Next = (_QWORD *)v21;
      Next = v31;
    }
    if ( a4 )
    {
      v26 = ((v12 + 7) << 14) & 0x3FE0000 | 0x13LL;
      v7 = ((v12 + 7) << 14) & 0x3FE0000 | 0x13;
    }
LABEL_29:
    v20 = v32;
    goto LABEL_30;
  }
  v20 = v32;
  HvlpCopyFlushVaList(a5, v32, (HvlpFlags & 0x2000) != 0, (__int64)p_Next + v11);
  if ( a4 )
  {
    if ( (HvlpFlags & 0x2000) == 0 )
      p_Next[1] |= 8uLL;
    LODWORD(v26) = ((v25 + 7) << 14) & 0x3FE0000 | 0x14;
    HIDWORD(v26) = a7 & 0xFFF;
    v7 = v26;
  }
  v9 = 0;
LABEL_30:
  if ( !v28 )
    goto LABEL_37;
  v22 = 0;
  v24[0] = 0;
  if ( v9 )
  {
    if ( v28 == 2 )
      v22 = HvlpSecureFlushLargeRangeList(2LL, a5, v20);
    else
      VslFlushSecureAddressSpace(2LL);
  }
  else
  {
    VslSlowFlushSecureRangeList(Next, (__int64)p_Next, v28, a7, v27, v24);
    v22 = v24[0];
  }
  if ( !v22 )
  {
LABEL_37:
    if ( a4 )
      HvcallInitiateHypercall(v7);
  }
  return HvlpReleaseHypercallPage((unsigned int *)&v29);
}
