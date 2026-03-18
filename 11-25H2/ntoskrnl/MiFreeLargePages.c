/*
 * XREFs of MiFreeLargePages @ 0x1404BB340
 * Callers:
 *     MiDeleteVaFinal @ 0x140384040 (MiDeleteVaFinal.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CAC68 (MiDeleteSubsectionLargePages.c)
 *     MiFreeContiguousLargePageRun @ 0x1406769C4 (MiFreeContiguousLargePageRun.c)
 *     MiDecommitRegion @ 0x1408F7010 (MiDecommitRegion.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     MiReturnCrossPartitionCharges @ 0x14022F804 (MiReturnCrossPartitionCharges.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiFreeLargePageMemory @ 0x14038C050 (MiFreeLargePageMemory.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     MiLargePageHasNoDanglingReferences @ 0x14047A7C4 (MiLargePageHasNoDanglingReferences.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFreeLargeProcessPagesToCache @ 0x1406872B4 (MiFreeLargeProcessPagesToCache.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFreeLargePages(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, char a5)
{
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
  unsigned __int8 v25; // al
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r14
  __int64 v30; // rbp
  __int64 CurrentIrql; // r8
  unsigned int v32; // r13d
  __int64 v33; // r12
  unsigned __int8 v34; // bp
  __int64 result; // rax
  int v36; // [rsp+20h] [rbp-1E8h]
  int v37; // [rsp+20h] [rbp-1E8h]
  __int64 v38; // [rsp+28h] [rbp-1E0h]
  __int64 v39; // [rsp+30h] [rbp-1D8h]
  int v40; // [rsp+38h] [rbp-1D0h]
  __int64 v41; // [rsp+40h] [rbp-1C8h]
  int v42; // [rsp+48h] [rbp-1C0h]
  int v43; // [rsp+4Ch] [rbp-1BCh] BYREF
  int v44; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-1B0h]
  __int64 v46; // [rsp+60h] [rbp-1A8h]
  __int64 v47; // [rsp+68h] [rbp-1A0h]
  __int64 v48; // [rsp+70h] [rbp-198h]
  __int64 v49; // [rsp+78h] [rbp-190h]
  __int64 v50; // [rsp+80h] [rbp-188h]
  unsigned __int64 v51; // [rsp+88h] [rbp-180h]
  __int64 v52; // [rsp+90h] [rbp-178h]
  unsigned __int64 v53; // [rsp+98h] [rbp-170h]
  __int64 v54; // [rsp+A0h] [rbp-168h]
  _QWORD *v55; // [rsp+A8h] [rbp-160h]
  _QWORD *v56; // [rsp+B0h] [rbp-158h]
  _QWORD v57[32]; // [rsp+C0h] [rbp-148h] BYREF

  v52 = a1;
  v56 = a4;
  v55 = a3;
  v6 = 0;
  v7 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v38 = 0LL;
  v41 = 0LL;
  v48 = 0LL;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v54 = DemandZeroPte;
  Process = KeGetCurrentThread()->ApcState.Process;
  ActiveProcessors = Process[2].ActiveProcessors;
  Blink_high = HIWORD(Process[2].ProcessListEntry.Blink);
  v53 = ActiveProcessors[3].StaticBitmap[31];
  v49 = *((_QWORD *)qword_140E2FD48 + Blink_high);
  v39 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
  v40 = (unsigned __int8)BYTE2(*(_DWORD *)(v12 + 32)) >> 6;
  v13 = MiPageToNode(0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4));
LABEL_2:
  v14 = 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4);
  if ( (*(_QWORD *)a2 & 0xFFFFFFFFFFELL) != 0 )
    v51 = 8 * (*(_QWORD *)a2 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    v51 = 0LL;
  v47 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL));
  v15 = (unsigned __int8)BYTE2(*(_DWORD *)(a2 + 32)) >> 6;
  v42 = v15;
  v16 = MiPageToNode(v14);
  v17 = v39;
  if ( v47 == v39 && v15 == v40 && v16 == v13 )
    goto LABEL_18;
  while ( 1 )
  {
    v18 = v45;
    v19 = v7;
    if ( v6 )
    {
      MiFreeLargeProcessPagesToCache(v57, v6);
      v17 = v39;
      v6 = 0;
    }
    if ( (a5 & 1) == 0 && v17 != v49 )
      MiReturnCrossPartitionCharges(v17, 2u, 1);
    v20 = v41 + v7;
    if ( v39 != v52 )
      v20 = v19;
    v21 = v38 + v18;
    v13 = v16;
    if ( v39 != v52 )
      v21 = v18;
    v39 = v47;
    v38 = 0LL;
    v40 = v42;
    v22 = v41 + v48;
    v41 = 0LL;
    v46 = v20;
    v45 = v21;
    v48 = v22;
    if ( !a2 )
      break;
LABEL_18:
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(a2);
    v24 = MiPageSizes[PfnPageSizeIndex];
    v41 += v24;
    if ( PfnPageSizeIndex == 2
      && v39 == v49
      && v53
      && (unsigned int)MiLargePageHasNoDanglingReferences(a2)
      && (*(_QWORD *)(a2 + 40) & 0x20000000000LL) == 0 )
    {
      v25 = MiLockPageInline(a2);
      v36 = *(_DWORD *)(a2 + 32);
      BYTE2(v36) = BYTE2(v36) & 0xF8 | 5;
      *(_DWORD *)(a2 + 32) = v36;
      *(_QWORD *)(a2 + 16) = DemandZeroPte;
      MiUnlockPage(a2, v25);
      v26 = v6++;
      v57[v26] = v14;
      if ( v6 != 32 )
        goto LABEL_50;
      v27 = 1LL;
      v28 = -512LL;
      v14 = v57[0] & 0xFFFFFFFFFFFFFE00uLL;
      while ( v27 < 0x20 )
      {
        if ( (v57[v27] & 0xFFFFFFFFFFFFFE00uLL) != v14 )
        {
          v14 = -1LL;
          MiFreeLargeProcessPagesToCache(v57, 32LL);
          v38 += 32 * v24;
          v6 = 0;
          goto LABEL_50;
        }
        ++v27;
      }
      v29 = 48 * v14 - 0x220000000000LL;
      v30 = v29;
      CurrentIrql = KeGetCurrentIrql();
      v50 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v27) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v27);
      }
      v32 = 0;
      v33 = 48 * v24;
      do
      {
        v43 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v43);
          while ( *(__int64 *)(v30 + 24) < 0 );
        }
        if ( v32 )
        {
          if ( (*(_QWORD *)(v30 + 40) & 0x20000000000LL) != 0 )
          {
            v44 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v44);
              while ( *(__int64 *)(v29 + 24) < 0 );
            }
            *(_QWORD *)(v29 + 40) |= 0x20000000000uLL;
            _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          *(_DWORD *)(v30 + 36) &= 0xE7FFFFFF;
          v37 = *(_DWORD *)(v30 + 32);
          BYTE2(v37) = BYTE2(v37) & 0xF8 | 6;
          *(_DWORD *)(v30 + 32) = v37;
        }
        else
        {
          *(_DWORD *)(v30 + 36) = *(_DWORD *)(v30 + 36) & 0xE7FFFFFF | 0x10000000;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v30 += v33;
        ++v32;
      }
      while ( v32 < 0x20 );
      DemandZeroPte = v54;
      v34 = v50;
      if ( KiIrqlFlags )
      {
        LOBYTE(v28) = v50;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28);
      }
      __writecr8(v34);
      v6 = 0;
      PfnPageSizeIndex = 1;
    }
    v38 += MiFreeLargePageMemory(v14, PfnPageSizeIndex, 0);
LABEL_50:
    v7 = v46;
    a2 = v51;
    v17 = v39;
    if ( v51 )
      goto LABEL_2;
  }
  *v55 = v21;
  result = v20 - v21;
  *v56 = v22;
  return result;
}
