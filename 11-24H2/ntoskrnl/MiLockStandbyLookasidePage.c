/*
 * XREFs of MiLockStandbyLookasidePage @ 0x14026C300
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiIsDecayPfn @ 0x14022EFD0 (MiIsDecayPfn.c)
 *     MiPageToNode @ 0x14026C1E0 (MiPageToNode.c)
 *     MiFindSuitableLookasideReplacement @ 0x14026D5D0 (MiFindSuitableLookasideReplacement.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAcquirePageListLock @ 0x1402DF1D0 (MiAcquirePageListLock.c)
 *     MiPageToChannel @ 0x1402F3214 (MiPageToChannel.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockStandbyLookasidePage(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int Number; // ebx
  __int64 v4; // r15
  unsigned int v5; // edi
  unsigned __int64 v6; // rcx
  __int64 v7; // r14
  ULONG_PTR v8; // rsi
  unsigned __int64 v9; // r13
  unsigned int v10; // r12d
  __int64 v11; // r12
  unsigned __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // rcx
  int v16; // ecx
  char *v17; // rax
  int i; // edx
  int v19; // r8d
  unsigned int v20; // ebx
  unsigned __int8 v21; // r11
  int v22; // r9d
  __int64 v23; // r10
  int v24; // edi
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r14
  unsigned int v30; // ebx
  _QWORD *v31; // rcx
  ULONG_PTR v32; // r10
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // r15
  __int64 v36; // r15
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // r9
  char v39; // r8d^2
  char v40; // r8d^2
  int v41; // eax
  unsigned __int8 v42; // cl
  __int64 v43; // [rsp+30h] [rbp-C8h]
  int v44; // [rsp+40h] [rbp-B8h]
  __int64 v45; // [rsp+50h] [rbp-A8h]
  unsigned int v46; // [rsp+68h] [rbp-90h]
  __int128 v47; // [rsp+70h] [rbp-88h]
  int v48; // [rsp+100h] [rbp+8h]
  int v50; // [rsp+110h] [rbp+18h]
  int v51; // [rsp+110h] [rbp+18h]
  unsigned __int8 v52; // [rsp+110h] [rbp+18h]
  int v53; // [rsp+118h] [rbp+20h]
  int v54; // [rsp+118h] [rbp+20h]

  Number = KeGetPcr()->Prcb.Number;
  v50 = 0;
  v53 = 0;
  v44 = a1 + 88 * a3 + 3264;
  v4 = ((unsigned __int64)a3 << 9) + a1;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x40 )
  {
    Number &= 0x3Fu;
  }
  else if ( 0x40 / (unsigned int)KeNumberProcessors_0 > 1 )
  {
    Number *= 0x40 / (unsigned int)KeNumberProcessors_0;
  }
  v5 = 0;
  v6 = 0xFFFFDE0000000000uLL;
  while ( v5 < 0x40 )
  {
    v7 = 8LL * Number;
    v8 = *(_QWORD *)(v7 + v4 + 7744);
    if ( v8 == -1LL )
      goto LABEL_7;
    v9 = 48 * v8 - 0x220000000000LL;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v6) )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    v11 = 48 * v8;
    if ( *(_QWORD *)(v7 + v4 + 7744) == v8 )
    {
      if ( byte_140E3CAE6 )
      {
        v12 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v8) >> 4)) >> 9;
        if ( !*(_BYTE *)(qword_140E3D140 + 2 * v12) )
        {
          v48 = 9;
          v13 = 9;
LABEL_14:
          if ( (unsigned int)MiAcquirePageListLock(v44, 48 * (int)v8, v13, v50, (__int64)a2) )
          {
            v54 = *a2;
            v47 = 0LL;
            if ( v8 < qword_140E35B00 || v8 >= qword_140E35B00 + 2048 )
            {
              v14 = *(_QWORD *)(v11 - 0x21FFFFFFFFF0LL);
              if ( (v14 & 0x400) != 0 )
              {
                if ( (v14 & 8) == 0 )
                  return v8;
              }
              else if ( (v14 & 0x8000000) == 0 )
              {
                return v8;
              }
            }
            v45 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
            v16 = dword_140E2DAC4;
            if ( dword_140E2DAC0 > (unsigned int)dword_140E2DAC4
              || (v17 = (char *)qword_140E2DB20 + 16 * dword_140E2DAC0, v8 < *(_QWORD *)v17)
              || dword_140E2DAC0 != dword_140E2DAC4 && v8 >= *((_QWORD *)v17 + 2) )
            {
              for ( i = 0; ; i = v19 + 1 )
              {
                while ( 1 )
                {
                  if ( v16 < i )
                    KeBugCheckEx(0x1Au, 0x5180uLL, v8, 0LL, 0LL);
                  v19 = (i + v16) >> 1;
                  v17 = (char *)qword_140E2DB20 + 16 * v19;
                  if ( v8 >= *(_QWORD *)v17 )
                    break;
                  if ( !v19 )
                    KeBugCheckEx(0x1Au, 0x5180uLL, v8, (ULONG_PTR)v17, 0LL);
                  v16 = v19 - 1;
                }
                if ( v19 == dword_140E2DAC4 || v8 < *((_QWORD *)v17 + 2) )
                  break;
              }
              dword_140E2DAC0 = (i + v16) >> 1;
            }
            v46 = *((_DWORD *)v17 + 2);
            v51 = *(_DWORD *)(v9 + 32);
            if ( (v51 & 0x8000000) != 0 )
            {
              if ( v9 < 0xFFFFDE0000000000uLL
                || v9 >= 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL
                || MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * (v11 >> 4)) )
              {
                v20 = 5;
              }
              else
              {
                if ( (v40 & 7) == 6 || (unsigned int)MiGetPfnSlabType(v9) != 9 )
                  goto LABEL_30;
                v20 = 5;
              }
            }
            else
            {
LABEL_30:
              v20 = HIBYTE(v51) & 7;
            }
            if ( qword_140E2DB28 )
              v21 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * (v11 >> 4));
            else
              v21 = 0;
            v22 = v48;
            v52 = v21;
            if ( v48 < 9 )
            {
              if ( v48 == 8 )
                BYTE8(v47) = *(_BYTE *)(qword_140E3D140
                                      + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v8) >> 4)) >> 9)
                                      + 1) & 0x7F;
              else
                BYTE8(v47) = 0;
              v23 = v20;
            }
            else
            {
              v23 = v20;
            }
            v24 = 0;
            v25 = v45;
            v26 = 57216LL * v46;
            v27 = (__int64 *)(v45 + 16);
            v43 = v23;
            while ( 2 )
            {
              if ( v24 )
              {
                if ( v24 == 1 )
                {
                  v29 = v25 + (v23 << 9) + 11840;
                }
                else
                {
                  v28 = *v27;
                  if ( v22 < 9 )
                  {
                    v42 = 0;
                    if ( v22 == 8 )
                      v42 = BYTE8(v47);
                    v29 = *(_QWORD *)(v26 + 232LL * v22 + v28 + 15760) + ((v23 + 8LL * v42) << 9);
                  }
                  else
                  {
                    v29 = v28 + v26 + ((v23 + 8LL * v21 + 13) << 9);
                  }
                }
              }
              else
              {
                v29 = v25 + (v23 << 9) + 7744;
              }
              v30 = 0;
              v31 = (_QWORD *)v29;
              while ( *v31 != v8 )
              {
                ++v30;
                ++v31;
                if ( v30 >= 0x40 )
                {
                  if ( v30 == 64 )
                    goto LABEL_44;
                  break;
                }
              }
              if ( !(unsigned int)MiFindSuitableLookasideReplacement(v24, v29, v30, 48 * (int)v8, v54) )
              {
                v32 = *(_QWORD *)(v29 + 8LL * v30);
                *(_QWORD *)(v29 + 8LL * v30) = -1LL;
                if ( v32 != -1LL && (v32 < qword_140E35B00 || v32 >= qword_140E35B00 + 2048) )
                {
                  v33 = 6 * v32;
                  v34 = *(_QWORD *)(48 * v32 - 0x21FFFFFFFFF0LL);
                  v35 = -9LL;
                  if ( (v34 & 0x400) == 0 )
                    v35 = -134217729LL;
                  v36 = v34 & v35;
                  v37 = 48 * v32 - 0x220000000000LL;
                  if ( v32 < qword_140E35B00 || v32 >= qword_140E35B00 + 2048 )
                    MiGetPfnSlabType(48 * v32 - 0x220000000000LL);
                  MiPageToNode(v32);
                  v38 = 0xFFFFDE0000000000uLL;
                  if ( (*(_DWORD *)(8 * v33 - 0x21FFFFFFFFE0LL) & 0x8000000) != 0
                    && v37 >= 0xFFFFDE0000000000uLL
                    && v37 < 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL
                    && !MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v37 + 0x220000000000LL) >> 4))
                    && (v39 & 7) != 6 )
                  {
                    MiGetPfnSlabType(8 * v33 - 0x220000000000LL);
                  }
                  if ( qword_140E2DB28 )
                    MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v37 - v38) >> 4));
                  *(_QWORD *)(8 * v33 - 0x21FFFFFFFFF0LL) = v36;
                }
              }
              v26 = 57216LL * v46;
              v21 = v52;
              v23 = v43;
              v22 = v48;
LABEL_44:
              if ( ++v24 < 3 )
              {
                v25 = v45;
                v27 = (__int64 *)(v45 + 16);
                continue;
              }
              return v8;
            }
          }
          v41 = v50;
          if ( ++v53 == 8 )
            v41 = 1;
          v50 = v41;
          goto LABEL_91;
        }
        v13 = *(unsigned __int8 *)(qword_140E3D140 + 2 * v12) - 1;
      }
      else
      {
        v13 = 9;
      }
      v48 = v13;
      goto LABEL_14;
    }
LABEL_91:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    --v5;
    v6 = 0xFFFFDE0000000000uLL;
    LOBYTE(Number) = Number - 1;
LABEL_7:
    ++v5;
    Number = ((_BYTE)Number + 1) & 0x3F;
  }
  return -1LL;
}
