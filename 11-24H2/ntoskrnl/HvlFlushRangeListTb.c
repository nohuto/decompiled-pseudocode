/*
 * XREFs of HvlFlushRangeListTb @ 0x14039D700
 * Callers:
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     KeFlushSingleCurrentTb @ 0x1405B9F1C (KeFlushSingleCurrentTb.c)
 *     KeFlushSingleTb @ 0x1405BA104 (KeFlushSingleTb.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpCopyFlushVaList @ 0x14039E000 (HvlpCopyFlushVaList.c)
 *     VslSlowFlushSecureRangeList @ 0x14039E058 (VslSlowFlushSecureRangeList.c)
 *     VslFastFlushSecureRangeList @ 0x14039E164 (VslFastFlushSecureRangeList.c)
 *     HvlpFlushRangeListTbEx @ 0x1403A45E0 (HvlpFlushRangeListTbEx.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     VslFlushSecureAddressSpace @ 0x1404ACC28 (VslFlushSecureAddressSpace.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlpSecureFlushLargeRangeList @ 0x1406A1F18 (HvlpSecureFlushLargeRangeList.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall HvlFlushRangeListTb(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned int a6,
        __int64 *a7)
{
  __int64 *v7; // r14
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // r13d
  unsigned int v15; // esi
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *HypercallCachedPages; // r15
  char v18; // al
  PHYSICAL_ADDRESS PhysicalAddress; // rdi
  unsigned int v20; // r10d
  __int64 v21; // r8
  __int64 v22; // r8
  unsigned __int64 v23; // xmm1_8
  char v24; // al
  char v25; // al
  unsigned __int64 v26; // r8
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v31; // rdx
  char *i; // r9
  __int64 *v33; // rdx
  __int64 v34; // r8
  unsigned int v35; // r8d
  __int64 v36; // r11
  __int64 v37; // rax
  unsigned __int64 v38; // xmm1_8
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 CurrentIrql; // rcx
  char v50[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+48h] [rbp-B8h]
  unsigned int v52; // [rsp+50h] [rbp-B0h]
  __int128 v53; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v54; // [rsp+68h] [rbp-98h]
  PHYSICAL_ADDRESS v55; // [rsp+70h] [rbp-90h]
  __int128 v56; // [rsp+78h] [rbp-88h]
  unsigned __int64 v57; // [rsp+88h] [rbp-78h]
  __int128 v58; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v59; // [rsp+A0h] [rbp-60h]
  _QWORD v60[11]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v61[7]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v62[25]; // [rsp+117h] [rbp+17h] BYREF

  v7 = a7;
  v52 = a4;
  if ( !a2 || (HvlpFlags & 0x80u) == 0 || (unsigned __int16)KiActiveGroups <= 1u )
  {
    v10 = 0LL;
    v11 = 0LL;
    v56 = 0uLL;
    v57 = 0LL;
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
        v26 = *(_QWORD *)(a2 + 8);
        if ( !HvlpVirtualProcessorsIdentityMapped )
        {
          v31 = 0LL;
          for ( i = byte_140FCD2A1; ; i += 4 )
          {
            if ( (v26 & 1) != 0 )
              v31 |= 1LL << *i;
            v39 = v26 >> 1;
            if ( !v39 )
              break;
            if ( (v39 & 1) != 0 )
              v31 |= 1LL << i[2];
            v26 = v39 >> 1;
            if ( !v26 )
              break;
          }
          v26 = v31;
        }
        v57 = v26;
      }
      else
      {
        v13 |= 1u;
      }
      v11 = v13;
      *((_QWORD *)&v56 + 1) = v13;
      *(_QWORD *)&v56 = a1;
    }
    if ( (HvlpFlags & 0x2000) != 0 )
    {
      v14 = a6;
      v15 = 0;
      if ( a6 )
      {
        v33 = a7;
        v34 = a6;
        do
        {
          v40 = *v33++;
          v41 = v15 + (v40 & 0x3FF);
          if ( (v40 & 0xC00) == 0 )
            v41 = v15;
          v15 = v41 + 1;
          --v34;
        }
        while ( v34 );
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
        v50[0] = 0;
        VslFastFlushSecureRangeList(a4, a7, v14, v50);
        if ( v50[0] )
          return a5;
      }
      if ( a5 )
      {
        LODWORD(v51) = 3;
        v58 = v56;
        HIDWORD(v51) = v15 & 0xFFF;
        v59 = v57;
        if ( (HvlpFlags & 0x2000) != 0 )
        {
          v35 = 0;
          if ( v14 )
          {
            v36 = v14;
            do
            {
              v42 = *v7;
              v43 = ((unsigned __int64)*v7 >> 10) & 3;
              if ( (*v7 & 0x3FF) != 0 && v43 != 0 )
              {
                v44 = v42 & 0xFFFFFFFFFFFFF000uLL;
                v45 = 4096LL << (9 * (unsigned __int8)v43);
                v46 = (*v7 & 0x3FF) + 1;
                do
                {
                  v47 = v35++;
                  v60[v47] = v44;
                  v44 += v45;
                  --v46;
                }
                while ( v46 );
              }
              else
              {
                v48 = v35++;
                v60[v48] = v42 & 0xFFFFFFFFFFFFF3FFuLL;
              }
              ++v7;
              --v36;
            }
            while ( v36 );
          }
        }
        else
        {
          *((_QWORD *)&v58 + 1) = v11 | 8;
          if ( v14 )
          {
            v27 = v14;
            v28 = v60;
            do
            {
              v29 = *(_QWORD *)((char *)v28++ + (char *)a7 - (char *)v60);
              *(v28 - 1) = v29 & 0x800 | (v29 + (v29 & 0xC00));
              --v27;
            }
            while ( v27 );
          }
        }
        LODWORD(v51) = v51 | 0x10000;
        HvcallFastExtended(v51, (unsigned int)&v58, 8 * v15 + 24, 0, 0);
      }
      return a5;
    }
LABEL_16:
    v54 = 0LL;
    v55.LowPart = 0;
    v53 = 0LL;
    if ( (HvlpFlags & 8) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      HypercallCachedPages = RtlpInterlockedPopEntrySList(&CurrentPrcb->HypercallPageList);
      if ( HypercallCachedPages )
      {
        *((_QWORD *)&v53 + 1) = CurrentPrcb;
        v18 = 1;
        PhysicalAddress = (PHYSICAL_ADDRESS)HypercallCachedPages[2];
        v55 = PhysicalAddress;
        LODWORD(v53) = 1;
        v54 = HypercallCachedPages;
      }
      else
      {
        HypercallCachedPages = (_QWORD *)((unsigned __int64)v62 & 0xFFFFFFFFFFFFF000uLL);
        LODWORD(v51) = 2;
        if ( (((unsigned __int64)v61 ^ (unsigned __int64)v62) & 0xFFFFFFFFFFFFF000uLL) == 0 )
          HypercallCachedPages = v61;
        LODWORD(v53) = 2;
        BYTE8(v53) = KeGetCurrentIrql();
        if ( BYTE8(v53) < 2u )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
        }
        PhysicalAddress = MmGetPhysicalAddress(HypercallCachedPages);
        v55 = PhysicalAddress;
        v18 = v51;
      }
      v20 = v52;
      v21 = 2LL;
    }
    else
    {
      LODWORD(v53) = 4;
      BYTE8(v53) = KeDisableInterrupts();
      HIDWORD(v53) = 1;
      HypercallCachedPages = KeGetCurrentPrcb()->HypercallCachedPages;
      v18 = 4;
      PhysicalAddress = (PHYSICAL_ADDRESS)HypercallCachedPages[2];
      v55 = PhysicalAddress;
    }
    if ( v15 > 0x1FD || (v18 & 2) != 0 )
    {
      if ( v20 == 2 && (v18 & 2) == 0 )
      {
        HvlpReleaseHypercallPage(&v53);
        v37 = HvlpAcquireHypercallPage(&v53, 9LL, v61);
        v20 = v52;
        HypercallCachedPages = (_QWORD *)v37;
        PhysicalAddress = v55;
        v21 = 2LL;
      }
      if ( a5 )
      {
        v10 = v21;
        v38 = v57;
        *(_OWORD *)HypercallCachedPages = v56;
        HypercallCachedPages[2] = v38;
      }
      v24 = 1;
    }
    else
    {
      v22 = HvlpFlags >> 13;
      LOBYTE(v22) = (HvlpFlags & 0x2000) != 0;
      HvlpCopyFlushVaList(v14, a7, v22, HypercallCachedPages + 3);
      if ( a5 )
      {
        LODWORD(v51) = 3;
        v23 = v57;
        *(_OWORD *)HypercallCachedPages = v56;
        HIDWORD(v51) = v15 & 0xFFF;
        v10 = v51;
        HypercallCachedPages[2] = v23;
        if ( (HvlpFlags & 0x2000) == 0 )
          HypercallCachedPages[1] |= 8uLL;
      }
      v20 = v52;
      v24 = 0;
    }
    if ( !v20 )
      goto LABEL_30;
    v50[0] = 0;
    if ( v24 )
    {
      if ( v20 != 2 )
      {
        VslFlushSecureAddressSpace();
        goto LABEL_30;
      }
      v25 = HvlpSecureFlushLargeRangeList(2LL, v14, a7);
    }
    else
    {
      VslSlowFlushSecureRangeList(PhysicalAddress.LowPart, (_DWORD)HypercallCachedPages, v20, v15, 24, (__int64)v50);
      v25 = v50[0];
    }
    if ( v25 )
    {
LABEL_32:
      HvlpReleaseHypercallPage(&v53);
      return a5;
    }
LABEL_30:
    if ( a5 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallInitiateHypercall)(
        v10,
        (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
        0LL);
    goto LABEL_32;
  }
  HvlpFlushRangeListTbEx(a1, a2, a3, a4, a5, a6, (__int64)a7);
  return a5;
}
