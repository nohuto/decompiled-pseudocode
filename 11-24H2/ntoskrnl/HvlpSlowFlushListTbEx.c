/*
 * XREFs of HvlpSlowFlushListTbEx @ 0x1403A4E4C
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x1403A45E0 (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpCopyFlushVaList @ 0x14039E000 (HvlpCopyFlushVaList.c)
 *     VslSlowFlushSecureRangeList @ 0x14039E058 (VslSlowFlushSecureRangeList.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1403A4864 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     VslFlushSecureAddressSpace @ 0x1404ACC28 (VslFlushSecureAddressSpace.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlpSecureFlushLargeRangeList @ 0x1406A1F18 (HvlpSecureFlushLargeRangeList.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
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
  struct _KPRCB *CurrentPrcb; // rbx
  PSLIST_ENTRY v12; // rax
  _QWORD *p_Next; // rsi
  char v14; // r14
  __int64 Next; // rbx
  __int64 v16; // r10
  int v17; // r9d
  size_t v18; // r8
  __int64 *v19; // r13
  char v21; // r14
  __int64 CurrentIrql; // rcx
  __int64 v23; // rax
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
    v12 = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
    p_Next = &v12->Next;
    if ( v12 )
    {
      *((_QWORD *)&v29 + 1) = CurrentPrcb;
      v14 = 1;
      Next = (__int64)v12[1].Next;
      v31 = Next;
      LODWORD(v29) = 1;
      v30 = v12;
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
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      }
      Next = MmGetPhysicalAddress(p_Next).QuadPart;
      v31 = Next;
    }
    v16 = v26;
    v17 = 0;
    v18 = 0LL;
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
    goto LABEL_21;
  }
  if ( a4 )
  {
    *p_Next = *a1;
    p_Next[1] = a1[1];
    v17 = HvlpAffinityToHvProcessorSet(v16, p_Next + 2, 0xFE0u);
    v25 = v17;
    v18 = (unsigned int)(v17 + 32);
    v27 = v17 + 32;
  }
  if ( v18 + 8LL * a7 > 0x1000 )
  {
    if ( v28 == 2 )
    {
      if ( a4 )
        memmove(v33, p_Next, v18);
      HvlpReleaseHypercallPage((unsigned int *)&v29);
      v23 = HvlpAcquireHypercallPage(&v29, 9LL, v33);
      v17 = v25;
      p_Next = (_QWORD *)v23;
      Next = v31;
    }
    if ( a4 )
    {
      v26 = ((v17 + 7) << 14) & 0x3FE0000 | 0x13LL;
      v7 = ((v17 + 7) << 14) & 0x3FE0000 | 0x13;
    }
LABEL_21:
    v19 = v32;
    goto LABEL_11;
  }
  v19 = v32;
  HvlpCopyFlushVaList(a5, v32, (HvlpFlags & 0x2000) != 0, (__int64)p_Next + v18);
  if ( a4 )
  {
    if ( (HvlpFlags & 0x2000) == 0 )
      p_Next[1] |= 8uLL;
    LODWORD(v26) = ((v25 + 7) << 14) & 0x3FE0000 | 0x14;
    HIDWORD(v26) = a7 & 0xFFF;
    v7 = v26;
  }
  v9 = 0;
LABEL_11:
  if ( !v28 )
    goto LABEL_12;
  v21 = 0;
  v24[0] = 0;
  if ( v9 )
  {
    if ( v28 == 2 )
      v21 = HvlpSecureFlushLargeRangeList(2LL, a5, v19);
    else
      VslFlushSecureAddressSpace(2LL);
  }
  else
  {
    VslSlowFlushSecureRangeList(Next, (__int64)p_Next, v28, a7, v27, v24);
    v21 = v24[0];
  }
  if ( !v21 )
  {
LABEL_12:
    if ( a4 )
      HvcallInitiateHypercall(v7);
  }
  return HvlpReleaseHypercallPage((unsigned int *)&v29);
}
