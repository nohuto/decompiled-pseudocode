/*
 * XREFs of MiRemoveWsleList @ 0x14024AF10
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiDecommitPagesTail @ 0x1402B2194 (MiDecommitPagesTail.c)
 *     MiFreeWsleList @ 0x1403815C4 (MiFreeWsleList.c)
 * Callees:
 *     MiLockWorkingSetCoreShared @ 0x1402146E0 (MiLockWorkingSetCoreShared.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiPteHasShadow @ 0x14024B550 (MiPteHasShadow.c)
 *     MiUnlockWorkingSetCoreShared @ 0x140323E80 (MiUnlockWorkingSetCoreShared.c)
 *     MiIsDriverPage @ 0x14036D6BC (MiIsDriverPage.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUpdateWorkingSetAgeDistribution @ 0x1403851C0 (MiUpdateWorkingSetAgeDistribution.c)
 *     MiLogRemoveWsleEvent @ 0x1404CE838 (MiLogRemoveWsleEvent.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall MiRemoveWsleList(__int64 a1, __int64 a2)
{
  char v3; // al
  int *v4; // rcx
  int v5; // esi
  unsigned __int64 v6; // r9
  __int64 HasShadow; // rax
  int v8; // r14d
  __int64 v9; // r12
  __int64 v10; // r13
  int v11; // ebp
  __int64 v12; // rbx
  unsigned __int16 *v13; // r15
  int v14; // edi
  char v15; // cl
  unsigned __int64 v16; // r14
  __int64 v17; // rbx
  unsigned __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int8 v23; // r14
  _DWORD *v24; // r15
  __int64 v25; // rcx
  unsigned __int16 *v26; // r13
  __int64 v27; // r11
  unsigned __int64 v28; // r15
  __int64 v29; // r9
  __int64 v30; // rdx
  signed __int64 v31; // rdi
  volatile signed __int64 *v32; // r14
  unsigned __int64 v33; // rbx
  bool v34; // zf
  char v35; // r8
  unsigned __int64 v36; // r10
  unsigned __int64 v37; // rax
  __int64 IsDriverPage; // rax
  int v40; // [rsp+30h] [rbp-A8h]
  __int64 v41; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v42; // [rsp+40h] [rbp-98h]
  int v43; // [rsp+48h] [rbp-90h]
  unsigned __int64 v45; // [rsp+58h] [rbp-80h]
  int *v46; // [rsp+60h] [rbp-78h]
  _OWORD v48[2]; // [rsp+78h] [rbp-60h] BYREF

  v3 = *(_DWORD *)(a1 + 184) & 0xF;
  v4 = 0LL;
  v45 = *(unsigned int *)(a2 + 16488);
  v5 = *(_DWORD *)(a1 + 184);
  if ( v3 == 1 )
    v4 = &dword_140E38580;
  v43 = *(_DWORD *)(a1 + 184);
  v46 = v4;
  v6 = (((*(_QWORD *)(a2 + 16480) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  HasShadow = 0LL;
  v42 = v6;
  v8 = 0;
  v41 = 0LL;
  v9 = 0LL;
  v40 = 0;
  v10 = 0LL;
  v11 = 0;
  if ( *(_DWORD *)(a2 + 16488) )
  {
    v12 = *(unsigned int *)(a2 + 16488);
    v13 = (unsigned __int16 *)(a2 + 16498);
    v14 = 0;
    while ( 1 )
    {
      v15 = *((_BYTE *)v13 - 1);
      if ( (v15 & 1) != 0 )
        break;
LABEL_12:
      v13 += 4;
      if ( !--v12 )
      {
        v17 = 0LL;
        if ( !v11 )
          return HasShadow;
        MiLockWorkingSetCoreShared(a1);
        if ( v9 )
        {
          _InterlockedAdd64((volatile signed __int64 *)(a1 + 152), -v9);
          if ( v10 )
            _InterlockedAdd64((volatile signed __int64 *)(a1 + 136), -v10);
        }
        if ( v8 )
          _InterlockedAdd((volatile signed __int32 *)&xmmword_140E2D628, -v8);
        if ( v14 )
          _InterlockedAdd((_DWORD *)&xmmword_140E2D628 + 1, -v14);
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 144), -v41);
        v18 = v45;
        v19 = 0LL;
        v20 = a2;
        memset(v48, 0, sizeof(v48));
        while ( 1 )
        {
          if ( (*(_BYTE *)(a2 + 8 * v19 + 16497) & 1) != 0 )
          {
            if ( v11 == 1 )
            {
              if ( (v5 & 0xF) != 0 )
                goto LABEL_28;
            }
            else
            {
              _InterlockedDecrement64((volatile signed __int64 *)(a1 + 128));
              v21 = v17 + 1;
              if ( !v46 )
                v21 = v17;
              v17 = v21;
              if ( (*(_BYTE *)(a2 + 8 * v19 + 16496) & 0xF) == 8 )
              {
                _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 32LL));
                goto LABEL_28;
              }
            }
            v22 = *(_BYTE *)(a2 + 8 * v19 + 16496) & 0xF;
            ++*((_DWORD *)v48 + v22);
          }
LABEL_28:
          if ( ++v19 >= v45 )
          {
            v23 = 0;
            v24 = v48;
            do
            {
              if ( *v24 )
              {
                MiUpdateWorkingSetAgeDistribution(a1, *(_QWORD *)(v20 + 16480), v23, -*v24, 0);
                v20 = a2;
              }
              ++v23;
              ++v24;
            }
            while ( v23 < 8u );
            if ( v46 )
            {
              _InterlockedAdd64((volatile signed __int64 *)v46 + 1, -v41);
              if ( v17 )
                _InterlockedAdd64((volatile signed __int64 *)v46 + 2, -v17);
            }
            LOBYTE(HasShadow) = MiUnlockWorkingSetCoreShared(a1);
            v25 = 0x1000000000LL;
            v26 = (unsigned __int16 *)(a2 + 16498);
            v27 = 0xA00000000000000LL;
            do
            {
              if ( (*((_BYTE *)v26 - 1) & 1) != 0 )
              {
                LOBYTE(HasShadow) = 0;
                v28 = (__int64)((v42 << 25) + ((unsigned __int64)*v26 << 28)) >> 16;
                if ( v11 == 2 )
                {
                  v29 = (v28 >> 9) & 0x7FFFFFFFF8LL;
                  v30 = *(_QWORD *)(v29 - 0x98000000000LL);
                  LOBYTE(HasShadow) = 0;
                  if ( (unsigned __int64)(v29 - 0x98000000000LL) >= 0xFFFFF6FB7DBED000uLL )
                  {
                    LOBYTE(HasShadow) = -8;
                    if ( (unsigned __int64)(v29 - 0x98000000000LL) <= 0xFFFFF6FB7DBED7F8uLL && (v30 & 1) != 0 )
                    {
                      LOBYTE(v25) = (v30 & 0x42) != 0;
                      LOBYTE(HasShadow) = (v30 & 0x20) != 0;
                      if ( ((unsigned __int8)v25 & (unsigned __int8)HasShadow) == 0 )
                      {
                        HasShadow = MiPteHasShadow(v25, v30, *(_QWORD *)(v29 - 0x98000000000LL), v29);
                        if ( HasShadow )
                        {
                          HasShadow = *(_QWORD *)(HasShadow + 1288);
                          if ( HasShadow )
                          {
                            HasShadow = *(_QWORD *)(HasShadow + 8 * ((v36 >> 3) & 0x1FF));
                            if ( (HasShadow & 0x20) != 0 )
                              v35 |= 0x20u;
                            LOBYTE(v30) = v35 | 0x42;
                            if ( (HasShadow & 0x42) == 0 )
                              LOBYTE(v30) = v35;
                          }
                        }
                      }
                      v25 = 0x1000000000LL;
                    }
                  }
                  if ( (v30 & 1) != 0 )
                  {
                    v31 = *(_QWORD *)(v29 - 0x98000000000LL);
                    v32 = (volatile signed __int64 *)(v29 - 0x98000000000LL);
                    do
                    {
                      v33 = v27 | v31 & 0x8AFFFFFFFFFFFFFFuLL;
                      if ( (MiFlags & 0x2000000) != 0 )
                        _mm_lfence();
                      if ( (MiFlags & 0x1000000000LL) != 0
                        && (((unsigned __int8)v27 | (unsigned __int8)v31) & 0x21) == 1
                        && (unsigned __int64)v32 >= 0xFFFFF6C000000000uLL )
                      {
                        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v32, v33);
                        v25 = 0x1000000000LL;
                        v27 = 0xA00000000000000LL;
                      }
                      HasShadow = _InterlockedCompareExchange64(v32, v33, v31);
                      v34 = v31 == HasShadow;
                      v31 = HasShadow;
                    }
                    while ( !v34 );
                    LOBYTE(v5) = v43;
                    v18 = v45;
                  }
                }
                if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
                {
                  LOBYTE(HasShadow) = MiLogRemoveWsleEvent(v28, v5 & 0xF, 0x8AFFFFFFFFFFFFFFuLL);
                  v25 = 0x1000000000LL;
                  v27 = 0xA00000000000000LL;
                }
              }
              v26 += 4;
              v45 = --v18;
            }
            while ( v18 );
            return HasShadow;
          }
        }
      }
    }
    v41 = HasShadow + 1;
    v16 = (__int64)((v6 << 25) + ((unsigned __int64)*v13 << 28)) >> 16;
    if ( v16 < 0xFFFFF68000000000uLL || v16 > 0xFFFFF6FFFFFFFFFFuLL )
      v11 = 2;
    else
      v11 = 1;
    if ( (v15 & 2) != 0 )
    {
      ++v9;
      if ( v11 == 2 )
        ++v10;
    }
    if ( (v5 & 0xF) == 3 )
    {
      v37 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
      if ( v37 && (v16 >= v37 && v16 < PsNtosImageEnd || v16 >= (unsigned __int64)PsHalImageBase && v16 < PsHalImageEnd) )
      {
        v8 = ++v40;
        goto LABEL_11;
      }
      if ( (unsigned int)MiGetSystemRegionType(v16) == 11 )
      {
        IsDriverPage = MiIsDriverPage(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL);
        v8 = v40;
        v6 = v42;
        if ( IsDriverPage )
          ++v14;
        goto LABEL_11;
      }
      v6 = v42;
    }
    v8 = v40;
LABEL_11:
    HasShadow = v41;
    goto LABEL_12;
  }
  return HasShadow;
}
