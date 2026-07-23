/*
 * XREFs of MiFreeLargePages @ 0x1402666C0
 * Callers:
 *     MiDeleteVaFinal @ 0x140266630 (MiDeleteVaFinal.c)
 *     MiDeleteSubsectionLargePages @ 0x1404C3EC4 (MiDeleteSubsectionLargePages.c)
 *     MiFreeContiguousLargePageRun @ 0x1406833D4 (MiFreeContiguousLargePageRun.c)
 *     MiDecommitRegion @ 0x1408DA3B0 (MiDecommitRegion.c)
 * Callees:
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiReturnCrossPartitionCharges @ 0x140338944 (MiReturnCrossPartitionCharges.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiLargePageHasNoDanglingReferences @ 0x140476464 (MiLargePageHasNoDanglingReferences.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiFreeLargeProcessPagesToCache @ 0x1406937E4 (MiFreeLargeProcessPagesToCache.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiFreeLargePages(__int64 a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4, char a5)
{
  unsigned __int64 v5; // r14
  unsigned int v6; // ebp
  __int64 v7; // r13
  __int64 DemandZeroPte; // rsi
  _KPROCESS *Process; // rcx
  volatile _KAFFINITY_EX *ActiveProcessors; // rax
  __int64 Blink_high; // rcx
  __int64 v12; // rdx
  int v13; // edi
  ULONG_PTR v14; // r15
  int v15; // r12d
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rdi
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int PfnPageSizeIndex; // r13d
  __int64 v24; // r12
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r14
  __int64 v31; // rbp
  __int64 CurrentIrql; // r8
  unsigned int v33; // r13d
  __int64 v34; // r12
  unsigned __int8 v35; // bp
  __int64 result; // rax
  unsigned int v37; // [rsp+20h] [rbp-1E8h]
  int v38; // [rsp+20h] [rbp-1E8h]
  __int64 v39; // [rsp+28h] [rbp-1E0h]
  __int64 v40; // [rsp+30h] [rbp-1D8h]
  int v41; // [rsp+38h] [rbp-1D0h]
  __int64 v42; // [rsp+40h] [rbp-1C8h]
  int v43; // [rsp+48h] [rbp-1C0h]
  int v44; // [rsp+4Ch] [rbp-1BCh] BYREF
  int v45; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-1B0h]
  __int64 v47; // [rsp+60h] [rbp-1A8h]
  __int64 v48; // [rsp+68h] [rbp-1A0h]
  __int64 v49; // [rsp+70h] [rbp-198h]
  __int64 v50; // [rsp+78h] [rbp-190h]
  __int64 v51; // [rsp+80h] [rbp-188h]
  unsigned __int64 v52; // [rsp+88h] [rbp-180h]
  __int64 v53; // [rsp+90h] [rbp-178h]
  unsigned __int64 v54; // [rsp+98h] [rbp-170h]
  __int64 v55; // [rsp+A0h] [rbp-168h]
  _QWORD *v56; // [rsp+A8h] [rbp-160h]
  _QWORD *v57; // [rsp+B0h] [rbp-158h]
  _QWORD v58[32]; // [rsp+C0h] [rbp-148h] BYREF

  v53 = a1;
  v57 = a4;
  v5 = a2;
  v56 = a3;
  v6 = 0;
  v7 = 0LL;
  v47 = 0LL;
  v46 = 0LL;
  v39 = 0LL;
  v42 = 0LL;
  v49 = 0LL;
  DemandZeroPte = MiMakeDemandZeroPte(4LL, a2, a3, a4);
  v55 = DemandZeroPte;
  Process = KeGetCurrentThread()->ApcState.Process;
  ActiveProcessors = Process[2].ActiveProcessors;
  Blink_high = HIWORD(Process[2].ProcessListEntry.Blink);
  v54 = ActiveProcessors[3].StaticBitmap[31];
  v50 = *((_QWORD *)qword_140E300C8 + Blink_high);
  v40 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
  v41 = (unsigned __int8)BYTE2(*(_DWORD *)(v12 + 32)) >> 6;
  v13 = MiPageToNode(0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4));
LABEL_2:
  v14 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v5 + 0x220000000000LL) >> 4);
  if ( (*(_QWORD *)v5 & 0xFFFFFFFFFFELL) != 0 )
    v52 = 8 * (*(_QWORD *)v5 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    v52 = 0LL;
  v48 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v5 + 40) >> 43) & 0x3FFLL));
  v15 = (unsigned __int8)BYTE2(*(_DWORD *)(v5 + 32)) >> 6;
  v43 = v15;
  v16 = MiPageToNode(v14);
  v17 = v40;
  if ( v48 == v40 && v15 == v41 && v16 == v13 )
    goto LABEL_18;
  while ( 1 )
  {
    v18 = v46;
    v19 = v7;
    if ( v6 )
    {
      MiFreeLargeProcessPagesToCache(v58, v6);
      v17 = v40;
      v6 = 0;
    }
    if ( (a5 & 1) == 0 && v17 != v50 )
      MiReturnCrossPartitionCharges(v17, 2LL, 1LL, v42);
    v20 = v42 + v7;
    if ( v40 != v53 )
      v20 = v19;
    v21 = v39 + v18;
    v13 = v16;
    if ( v40 != v53 )
      v21 = v18;
    v40 = v48;
    v39 = 0LL;
    v41 = v43;
    v22 = v42 + v49;
    v42 = 0LL;
    v47 = v20;
    v46 = v21;
    v49 = v22;
    if ( !v5 )
      break;
LABEL_18:
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(v5);
    v24 = MiPageSizes[PfnPageSizeIndex];
    v42 += v24;
    if ( PfnPageSizeIndex == 2
      && v40 == v50
      && v54
      && (unsigned int)MiLargePageHasNoDanglingReferences(v5)
      && (*(_QWORD *)(v5 + 40) & 0x20000000000LL) == 0 )
    {
      v25 = MiLockPageInline(v5);
      v37 = *(_DWORD *)(v5 + 32);
      BYTE2(v37) = BYTE2(v37) & 0xF8 | 5;
      v26 = v37;
      *(_DWORD *)(v5 + 32) = v37;
      LOBYTE(v26) = v25;
      *(_QWORD *)(v5 + 16) = DemandZeroPte;
      MiUnlockPage(v5, v26);
      v27 = v6++;
      v58[v27] = v14;
      if ( v6 != 32 )
        goto LABEL_50;
      v28 = 1LL;
      v29 = -512LL;
      v14 = v58[0] & 0xFFFFFFFFFFFFFE00uLL;
      while ( v28 < 0x20 )
      {
        if ( (v58[v28] & 0xFFFFFFFFFFFFFE00uLL) != v14 )
        {
          v14 = -1LL;
          MiFreeLargeProcessPagesToCache(v58, 32LL);
          v39 += 32 * v24;
          v6 = 0;
          goto LABEL_50;
        }
        ++v28;
      }
      v30 = 48 * v14 - 0x220000000000LL;
      v31 = v30;
      CurrentIrql = KeGetCurrentIrql();
      v51 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v29) = 2;
        LOBYTE(v28) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v28, v29);
      }
      v33 = 0;
      v34 = 48 * v24;
      do
      {
        v44 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v44);
          while ( *(__int64 *)(v31 + 24) < 0 );
        }
        if ( v33 )
        {
          if ( (*(_QWORD *)(v31 + 40) & 0x20000000000LL) != 0 )
          {
            v45 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v45);
              while ( *(__int64 *)(v30 + 24) < 0 );
            }
            *(_QWORD *)(v30 + 40) |= 0x20000000000uLL;
            _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          *(_DWORD *)(v31 + 36) &= 0xE7FFFFFF;
          v38 = *(_DWORD *)(v31 + 32);
          BYTE2(v38) = BYTE2(v38) & 0xF8 | 6;
          *(_DWORD *)(v31 + 32) = v38;
        }
        else
        {
          *(_DWORD *)(v31 + 36) = *(_DWORD *)(v31 + 36) & 0xE7FFFFFF | 0x10000000;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v31 += v34;
        ++v33;
      }
      while ( v33 < 0x20 );
      DemandZeroPte = v55;
      v35 = v51;
      if ( KiIrqlFlags )
      {
        LOBYTE(v29) = v51;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v29);
      }
      __writecr8(v35);
      v6 = 0;
      PfnPageSizeIndex = 1;
    }
    v39 += MiFreeLargePageMemory(v14, PfnPageSizeIndex, 0LL);
LABEL_50:
    v7 = v47;
    v5 = v52;
    v17 = v40;
    if ( v52 )
      goto LABEL_2;
  }
  *v56 = v21;
  result = v20 - v21;
  *v57 = v22;
  return result;
}
