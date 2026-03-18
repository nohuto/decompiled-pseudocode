/*
 * XREFs of HvlFlushRangeListTb @ 0x14032CB20
 * Callers:
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     KeFlushSingleCurrentTb @ 0x1405B8A4C (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405B8C34 (KeFlushSingleTb.c)
 * Callees:
 *     HvlpCopyFlushVaList @ 0x14026A7D0 (HvlpCopyFlushVaList.c)
 *     VslFastFlushSecureRangeList @ 0x14026A828 (VslFastFlushSecureRangeList.c)
 *     VslSlowFlushSecureRangeList @ 0x14026AC68 (VslSlowFlushSecureRangeList.c)
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     HvcallFastExtended @ 0x14032C840 (HvcallFastExtended.c)
 *     HvlpFlushRangeListTbEx @ 0x140451794 (HvlpFlushRangeListTbEx.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     VslFlushSecureAddressSpace @ 0x1404B12CC (VslFlushSecureAddressSpace.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlpSecureFlushLargeRangeList @ 0x140695C8C (HvlpSecureFlushLargeRangeList.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall HvlFlushRangeListTb(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned __int8 a5,
        unsigned int a6,
        __int64 *a7)
{
  __int64 *v7; // r11
  int v10; // ebx
  __int64 v11; // rdi
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // r15d
  unsigned int v15; // esi
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *HypercallCachedPages; // r13
  char v18; // al
  __int64 QuadPart; // rdi
  __int64 *v20; // r11
  int v21; // r8d
  unsigned __int64 v22; // xmm1_8
  char v23; // al
  char v24; // al
  unsigned __int64 v25; // r8
  char v26; // r8
  unsigned __int64 v28; // rdx
  char *i; // r9
  __int64 *v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  unsigned __int64 v33; // xmm1_8
  unsigned __int64 v34; // r8
  __int64 v35; // rcx
  unsigned int v36; // eax
  __int64 CurrentIrql; // rcx
  char v38[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B8h]
  __int64 *v40; // [rsp+50h] [rbp-B0h]
  __int128 v41; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v42; // [rsp+68h] [rbp-98h]
  __int64 v43; // [rsp+70h] [rbp-90h]
  __int128 v44; // [rsp+78h] [rbp-88h]
  unsigned __int64 v45; // [rsp+88h] [rbp-78h]
  __int128 v46; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v47; // [rsp+A0h] [rbp-60h]
  char v48[88]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v49[7]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v50[25]; // [rsp+117h] [rbp+17h] BYREF

  v7 = a7;
  v40 = a7;
  if ( !a2 || (HvlpFlags & 0x80u) == 0 || (unsigned __int16)KiActiveGroups <= 1u )
  {
    v10 = 0;
    v11 = 0LL;
    v44 = 0uLL;
    v45 = 0LL;
    if ( a5 )
    {
      v12 = 4;
      if ( a3 )
        v12 = 0;
      v13 = v12 | 2;
      if ( a1 )
        v13 = v12;
      if ( a2 )
      {
        v25 = *(_QWORD *)(a2 + 8);
        if ( !HvlpVirtualProcessorsIdentityMapped )
        {
          v28 = 0LL;
          for ( i = byte_140FCC261; ; i += 4 )
          {
            if ( (v25 & 1) != 0 )
              v28 |= 1LL << *i;
            v34 = v25 >> 1;
            if ( !v34 )
              break;
            if ( (v34 & 1) != 0 )
              v28 |= 1LL << i[2];
            v25 = v34 >> 1;
            if ( !v25 )
              break;
          }
          v25 = v28;
        }
        v45 = v25;
      }
      else
      {
        v13 |= 1u;
      }
      v11 = v13;
      *((_QWORD *)&v44 + 1) = v13;
      *(_QWORD *)&v44 = a1;
    }
    if ( (HvlpFlags & 0x2000) != 0 )
    {
      v14 = a6;
      v15 = 0;
      if ( a6 )
      {
        v30 = a7;
        v31 = a6;
        do
        {
          v35 = *v30++;
          v36 = v15 + (v35 & 0x3FF);
          if ( (v35 & 0xC00) == 0 )
            v36 = v15;
          v15 = v36 + 1;
          --v31;
        }
        while ( v31 );
      }
    }
    else
    {
      v14 = a6;
      v15 = a6;
    }
    if ( v15 <= 0xB && (HvlEnlightenments & 0x80u) != 0 )
    {
      if ( a4 )
      {
        if ( v14 + 1 > 0xC )
          goto LABEL_16;
        v38[0] = 0;
        VslFastFlushSecureRangeList(a4, a7, v14, v38);
        if ( v38[0] )
          return a5;
        v7 = v40;
      }
      if ( a5 )
      {
        LODWORD(v39) = 3;
        v46 = v44;
        HIDWORD(v39) = v15 & 0xFFF;
        v47 = v45;
        if ( (HvlpFlags & 0x2000) != 0 )
        {
          v26 = 1;
        }
        else
        {
          *((_QWORD *)&v46 + 1) = v11 | 8;
          v26 = 0;
        }
        HvlpCopyFlushVaList(v14, v7, v26, (__int64)v48);
        LODWORD(v39) = v39 | 0x10000;
        HvcallFastExtended(v39, (__int64)&v46, 8 * v15 + 24, 0LL, 0);
      }
      return a5;
    }
LABEL_16:
    v42 = 0LL;
    LODWORD(v43) = 0;
    v41 = 0LL;
    if ( (HvlpFlags & 8) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      HypercallCachedPages = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
      if ( HypercallCachedPages )
      {
        *((_QWORD *)&v41 + 1) = CurrentPrcb;
        v18 = 1;
        QuadPart = HypercallCachedPages[2];
        v43 = QuadPart;
        LODWORD(v41) = 1;
        v42 = HypercallCachedPages;
      }
      else
      {
        HypercallCachedPages = (_QWORD *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFF000uLL);
        LODWORD(v39) = 2;
        if ( (((unsigned __int64)v49 ^ (unsigned __int64)v50) & 0xFFFFFFFFFFFFF000uLL) == 0 )
          HypercallCachedPages = v49;
        LODWORD(v41) = 2;
        BYTE8(v41) = KeGetCurrentIrql();
        if ( BYTE8(v41) < 2u )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
        }
        QuadPart = MmGetPhysicalAddress(HypercallCachedPages).QuadPart;
        v43 = QuadPart;
        v18 = v39;
      }
      v20 = v40;
      v21 = 2;
    }
    else
    {
      LODWORD(v41) = 4;
      BYTE8(v41) = KeDisableInterrupts();
      HIDWORD(v41) = 1;
      HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
      v18 = 4;
      QuadPart = HypercallCachedPages[2];
      v43 = QuadPart;
    }
    if ( v15 > 0x1FD || (v18 & 2) != 0 )
    {
      if ( a4 == 2 && (v18 & 2) == 0 )
      {
        HvlpReleaseHypercallPage((unsigned int *)&v41);
        v32 = HvlpAcquireHypercallPage(&v41, 9LL, v49);
        QuadPart = v43;
        HypercallCachedPages = (_QWORD *)v32;
        v21 = 2;
      }
      if ( a5 )
      {
        v10 = v21;
        v33 = v45;
        *(_OWORD *)HypercallCachedPages = v44;
        HypercallCachedPages[2] = v33;
      }
      v23 = 1;
    }
    else
    {
      HvlpCopyFlushVaList(v14, v20, (HvlpFlags & 0x2000) != 0, (__int64)(HypercallCachedPages + 3));
      if ( a5 )
      {
        LODWORD(v39) = 3;
        v22 = v45;
        *(_OWORD *)HypercallCachedPages = v44;
        HIDWORD(v39) = v15 & 0xFFF;
        v10 = v39;
        HypercallCachedPages[2] = v22;
        if ( (HvlpFlags & 0x2000) == 0 )
          HypercallCachedPages[1] |= 8uLL;
      }
      v23 = 0;
    }
    if ( !a4 )
      goto LABEL_30;
    v38[0] = 0;
    if ( v23 )
    {
      if ( a4 != 2 )
      {
        VslFlushSecureAddressSpace();
        goto LABEL_30;
      }
      v24 = HvlpSecureFlushLargeRangeList(2LL, v14, v40);
    }
    else
    {
      VslSlowFlushSecureRangeList(QuadPart, (__int64)HypercallCachedPages, a4, v15, 0x18u, v38);
      v24 = v38[0];
    }
    if ( v24 )
    {
LABEL_32:
      HvlpReleaseHypercallPage((unsigned int *)&v41);
      return a5;
    }
LABEL_30:
    if ( a5 )
      HvcallInitiateHypercall(v10);
    goto LABEL_32;
  }
  HvlpFlushRangeListTbEx(a1, a2, a3, a4, a5, a6, (__int64)a7);
  return a5;
}
