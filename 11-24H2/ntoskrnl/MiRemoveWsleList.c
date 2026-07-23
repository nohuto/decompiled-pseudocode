/*
 * XREFs of MiRemoveWsleList @ 0x140303100
 * Callers:
 *     MiDecommitPagesTail @ 0x14023D754 (MiDecommitPagesTail.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x140297494 (MiFreeWsleList.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiLockWorkingSetCoreShared @ 0x140240A40 (MiLockWorkingSetCoreShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsDriverPage @ 0x1402BA964 (MiIsDriverPage.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiUnlockWorkingSetCoreShared @ 0x1403030A0 (MiUnlockWorkingSetCoreShared.c)
 *     MiVolunteerForTrimFirst @ 0x140303BB0 (MiVolunteerForTrimFirst.c)
 *     MiInsertActivePageTableLinksTail @ 0x140392798 (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x1403929A8 (MiRemoveActivePageTableLinks.c)
 *     MiRebuildPageTableAges @ 0x140392C6C (MiRebuildPageTableAges.c)
 *     MiLogRemoveWsleEvent @ 0x1404C5590 (MiLogRemoveWsleEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall MiRemoveWsleList(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  __int64 v5; // rdi
  int *v6; // r13
  int v7; // esi
  __int64 *v8; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r12d
  unsigned __int16 *v15; // rbp
  __int64 v16; // r15
  char v17; // cl
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int8 v24; // bp
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r13
  __int64 v29; // r9
  unsigned __int8 v30; // al
  __int64 v31; // rbx
  unsigned __int64 v32; // r13
  unsigned __int16 *v33; // r15
  unsigned __int64 v34; // rbp
  __int64 v35; // r9
  unsigned __int64 v36; // r10
  __int64 v37; // rcx
  signed __int64 v38; // rdi
  volatile signed __int64 *v39; // r14
  unsigned __int64 v40; // rbx
  bool v41; // zf
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v44; // rdx
  int v46; // [rsp+20h] [rbp-B8h]
  unsigned int v47; // [rsp+24h] [rbp-B4h]
  __int64 v48; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v49; // [rsp+28h] [rbp-B0h]
  __int64 v50; // [rsp+30h] [rbp-A8h]
  __int64 v51; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v52; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v53; // [rsp+40h] [rbp-98h]
  char v54; // [rsp+48h] [rbp-90h]
  unsigned __int64 v56; // [rsp+58h] [rbp-80h]
  int *v58; // [rsp+68h] [rbp-70h]
  _OWORD v59[2]; // [rsp+70h] [rbp-68h] BYREF

  v3 = *(unsigned int *)(a2 + 16488);
  v5 = 0LL;
  v56 = v3;
  v6 = 0LL;
  v7 = *(_DWORD *)(a1 + 184);
  v54 = v7;
  if ( (v7 & 0xF) == 1 )
    v6 = &dword_140E38900;
  v58 = v6;
  LOBYTE(v8) = 0;
  v48 = 0LL;
  v9 = (((*(_QWORD *)(a2 + 16480) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  v47 = 0;
  v53 = v9;
  v10 = 0LL;
  v50 = 0LL;
  v11 = 0;
  v46 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  if ( !v3 )
    return (char)v8;
  v15 = (unsigned __int16 *)(a2 + 16498);
  v16 = (unsigned int)v3;
  do
  {
    v17 = *((_BYTE *)v15 - 1);
    if ( (v17 & 1) == 0 )
      goto LABEL_13;
    ++v5;
    v18 = (__int64)((v9 << 25) + ((unsigned __int64)*v15 << 28)) >> 16;
    if ( v18 < 0xFFFFF68000000000uLL || v18 > 0xFFFFF6FFFFFFFFFFuLL )
      v14 = 2;
    else
      v14 = 1;
    if ( (v17 & 2) != 0 )
    {
      v50 = ++v10;
      if ( v14 == 2 )
        v48 = ++v12;
    }
    LOBYTE(v8) = v7 & 0xF;
    if ( (v7 & 0xF) != 3 )
      goto LABEL_12;
    LOBYTE(v8) = (_BYTE)PsNtosImageBase;
    if ( PsNtosImageBase
      && (v18 >= (unsigned __int64)PsNtosImageBase && v18 < PsNtosImageEnd
       || v18 >= (unsigned __int64)PsHalImageBase && v18 < PsHalImageEnd) )
    {
      v13 = (unsigned int)(v13 + 1);
      v47 = v13;
      goto LABEL_12;
    }
    LODWORD(v8) = MiGetSystemRegionType(v18);
    if ( (_DWORD)v8 != 11 )
    {
      v10 = v50;
      v12 = v48;
      v13 = v47;
      v9 = v53;
LABEL_12:
      v11 = v46;
      goto LABEL_13;
    }
    v8 = MiIsDriverPage(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1);
    v11 = v46;
    v10 = v50;
    v12 = v48;
    v13 = v47;
    v9 = v53;
    if ( v8 )
      v11 = ++v46;
LABEL_13:
    v15 += 4;
    --v16;
  }
  while ( v16 );
  v51 = v5;
  v19 = 0LL;
  if ( v14 )
  {
    MiLockWorkingSetCoreShared(a1, v10, v12, v13);
    if ( v50 )
    {
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 152), -v50);
      if ( v48 )
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 136), -v48);
    }
    if ( v47 )
      _InterlockedAdd((volatile signed __int32 *)&xmmword_140E2D9A8, -v47);
    if ( v11 )
      _InterlockedAdd((_DWORD *)&xmmword_140E2D9A8 + 1, -v11);
    v52 = -v51;
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 144), v52);
    v20 = a2;
    v21 = 0LL;
    memset(v59, 0, sizeof(v59));
    while ( 2 )
    {
      if ( (*(_BYTE *)(a2 + 8 * v21 + 16497) & 1) != 0 )
      {
        if ( v14 == 1 )
        {
          if ( (v7 & 0xF) == 0 )
            goto LABEL_28;
        }
        else
        {
          _InterlockedDecrement64((volatile signed __int64 *)(a1 + 128));
          v22 = v19 + 1;
          if ( !v6 )
            v22 = v19;
          v19 = v22;
          if ( (*(_BYTE *)(a2 + 8 * v21 + 16496) & 0xF) == 8 )
          {
            _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 32LL));
          }
          else
          {
LABEL_28:
            v23 = *(_BYTE *)(a2 + 8 * v21 + 16496) & 0xF;
            ++*((_DWORD *)v59 + v23);
          }
        }
      }
      if ( ++v21 < v56 )
        continue;
      break;
    }
    v24 = 0;
    while ( 2 )
    {
      v25 = *((unsigned int *)v59 + v24);
      if ( (_DWORD)v25 )
      {
        v26 = *(_QWORD *)(v20 + 16480);
        v49 = -v25;
        v28 = 48
            * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v26 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        v29 = (*(_QWORD *)v28 >> 45) & 0x3FFLL;
        v30 = (*(_QWORD *)v28 >> 55) & 7;
        if ( v24 == v30 )
        {
          v27 = (v49 + v29) << 45;
          *(_QWORD *)v28 = v27 ^ (*(_QWORD *)v28 ^ v27) & 0xFF801FFFFFFFFFFFuLL;
          if ( v29 + v49 )
          {
            if ( (*(_DWORD *)(v28 + 36) & 0x4000000) == 0 )
            {
              *(_QWORD *)v28 = *(_QWORD *)v28 & 0xFC001FFFFFFFFFFFuLL | ((((_WORD)v49 + (_WORD)v29) & 0x3FF | ((unsigned __int64)(v24 & 7) << 10)) << 45);
              goto LABEL_40;
            }
          }
          else
          {
            MiRebuildPageTableAges(a1, v26, 0LL);
          }
        }
        else if ( v24 > v30 )
        {
          v31 = *(_QWORD *)v28;
          if ( (*(_DWORD *)(v28 + 36) & 0x4000000) != 0 )
            MiRemoveActivePageTableLinks(a1, v28, 0LL);
          *(_QWORD *)v28 = v31 & 0xFC001FFFFFFFFFFFuLL | ((((unsigned __int64)(v24 & 7) << 10) | v49 & 0x3FF) << 45);
LABEL_40:
          MiInsertActivePageTableLinksTail(a1, v28, v24, 0LL);
        }
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 8LL * v24 + 40), v49);
        if ( v24 == 7 )
        {
          MiVolunteerForTrimFirst(a1, v49, v27, v29);
LABEL_46:
          if ( v58 )
          {
            _InterlockedAdd64((volatile signed __int64 *)v58 + 1, v52);
            if ( v19 )
              _InterlockedAdd64((volatile signed __int64 *)v58 + 2, -v19);
          }
          LOBYTE(v8) = (unsigned __int8)MiUnlockWorkingSetCoreShared(a1);
          v32 = v53;
          v33 = (unsigned __int16 *)(a2 + 16498);
          while ( 2 )
          {
            if ( (*((_BYTE *)v33 - 1) & 1) != 0 )
            {
              LOBYTE(v8) = 0;
              v34 = (__int64)((v32 << 25) + ((unsigned __int64)*v33 << 28)) >> 16;
              if ( v14 == 2 )
              {
                v35 = (v34 >> 9) & 0x7FFFFFFFF8LL;
                v36 = v35 - 0x98000000000LL;
                v8 = *(__int64 **)(v35 - 0x98000000000LL);
                if ( (unsigned __int64)(v35 - 0x98000000000LL) < 0xFFFFF6FB7DBED000uLL || v36 > 0xFFFFF6FB7DBED7F8uLL )
                  goto LABEL_54;
                v37 = *(_QWORD *)(v35 - 0x98000000000LL);
                if ( ((unsigned __int8)v8 & 1) != 0 )
                {
                  if ( (((unsigned __int8)v8 & 0x42) == 0 || ((unsigned __int8)v8 & 0x20) == 0)
                    && (MiFlags & 0x600000) != 0 )
                  {
                    Process = KeGetCurrentThread()->ApcState.Process;
                    if ( Process->AddressPolicy != 1 )
                    {
                      KernelWaitTime = Process[2].KernelWaitTime;
                      if ( KernelWaitTime )
                      {
                        v44 = *(_QWORD *)(KernelWaitTime + 8 * ((v36 >> 3) & 0x1FF));
                        if ( (v44 & 0x20) != 0 )
                          LOBYTE(v37) = (unsigned __int8)v8 | 0x20;
                        LOBYTE(v8) = v37 | 0x42;
                        if ( (v44 & 0x42) == 0 )
                          LOBYTE(v8) = v37;
                      }
                    }
                  }
LABEL_54:
                  if ( ((unsigned __int8)v8 & 1) != 0 )
                  {
                    v38 = *(_QWORD *)(v35 - 0x98000000000LL);
                    v39 = (volatile signed __int64 *)(v35 - 0x98000000000LL);
                    do
                    {
                      v40 = v38 & 0x80FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
                      if ( (MiFlags & 0x2000000) != 0 )
                        _mm_lfence();
                      if ( (MiFlags & 0x1000000000LL) != 0
                        && (v38 & 0x21) == 1
                        && (unsigned __int64)v39 >= 0xFFFFF6C000000000uLL )
                      {
                        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v39, v40, 128LL);
                      }
                      v8 = (__int64 *)_InterlockedCompareExchange64(v39, v40, v38);
                      v41 = v38 == (_QWORD)v8;
                      v38 = (signed __int64)v8;
                    }
                    while ( !v41 );
                    LOBYTE(v7) = v54;
                    v32 = v53;
                  }
                }
              }
              if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
                LOBYTE(v8) = MiLogRemoveWsleEvent(v34, v7 & 0xF);
            }
            v33 += 4;
            if ( !--v56 )
              return (char)v8;
            continue;
          }
        }
        v20 = a2;
      }
      if ( ++v24 >= 8u )
        goto LABEL_46;
      continue;
    }
  }
  return (char)v8;
}
