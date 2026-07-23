/*
 * XREFs of MiLockStandbyLookasidePage @ 0x140221890
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     MiFindSuitableLookasideReplacement @ 0x140222B60 (MiFindSuitableLookasideReplacement.c)
 *     MiAcquirePageListLock @ 0x140240AB0 (MiAcquirePageListLock.c)
 *     MiPageToChannel @ 0x140258D54 (MiPageToChannel.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLockStandbyLookasidePage(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int Number; // ebx
  __int64 v4; // r9
  int v5; // r10d
  unsigned __int64 v6; // r8
  __int64 v7; // r15
  unsigned int v8; // edi
  unsigned __int64 v9; // rcx
  __int64 v10; // r14
  ULONG_PTR v11; // rsi
  unsigned __int64 v12; // r13
  unsigned int v13; // r12d
  __int64 v14; // r12
  unsigned __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // rcx
  int v20; // ecx
  char *v21; // rax
  int i; // edx
  int v23; // r8d
  unsigned __int64 v24; // rdx
  unsigned int v25; // ebx
  unsigned __int8 v26; // r11
  int v27; // r9d
  __int64 v28; // r10
  int v29; // edi
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r14
  unsigned int v35; // ebx
  _QWORD *v36; // rcx
  ULONG_PTR v37; // r10
  __int64 v38; // r14
  __int64 v39; // rcx
  __int64 v40; // r15
  __int64 v41; // r15
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  unsigned __int64 v44; // r9
  char v45; // r8d^2
  char v46; // r8d^2
  int v47; // eax
  unsigned __int8 v48; // cl
  __int64 v49; // [rsp+30h] [rbp-C8h]
  int v50; // [rsp+40h] [rbp-B8h]
  __int64 v51; // [rsp+50h] [rbp-A8h]
  unsigned int v52; // [rsp+68h] [rbp-90h]
  __int128 v53; // [rsp+70h] [rbp-88h]
  int v54; // [rsp+100h] [rbp+8h]
  unsigned __int8 *v55; // [rsp+108h] [rbp+10h]
  int v56; // [rsp+110h] [rbp+18h]
  int v57; // [rsp+110h] [rbp+18h]
  unsigned __int8 v58; // [rsp+110h] [rbp+18h]
  int v59; // [rsp+118h] [rbp+20h]
  int v60; // [rsp+118h] [rbp+20h]

  v55 = (unsigned __int8 *)a2;
  Number = KeGetPcr()->Prcb.Number;
  v4 = 0LL;
  v5 = 88 * a3;
  v6 = (unsigned __int64)a3 << 9;
  v56 = 0;
  v59 = 0;
  v50 = a1 + v5 + 3264;
  v7 = v6 + a1;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x40 )
  {
    Number &= 0x3Fu;
  }
  else
  {
    a2 = 0x40 % (unsigned int)KeNumberProcessors_0;
    if ( 0x40 / (unsigned int)KeNumberProcessors_0 > 1 )
      Number *= 0x40 / (unsigned int)KeNumberProcessors_0;
  }
  v8 = 0;
  v9 = 0xFFFFDE0000000000uLL;
  while ( v8 < 0x40 )
  {
    v10 = 8LL * Number;
    v11 = *(_QWORD *)(v10 + v7 + 7744);
    if ( v11 == -1LL )
      goto LABEL_7;
    v12 = 48 * v11 - 0x220000000000LL;
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, a2, v6, v4) )
        {
          HvlNotifyLongSpinWait(v13);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    v14 = 48 * v11;
    if ( *(_QWORD *)(v10 + v7 + 7744) == v11 )
    {
      if ( byte_140E3CC26 )
      {
        v15 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v11) >> 4)) >> 9;
        if ( !*(_BYTE *)(qword_140E3D280 + 2 * v15) )
        {
          v54 = 9;
          v16 = 9;
LABEL_14:
          if ( (unsigned int)MiAcquirePageListLock(v50, 48 * (int)v11, v16, v56, (__int64)v55) )
          {
            v60 = *v55;
            v53 = 0LL;
            if ( v11 < qword_140E35C40 || v11 >= qword_140E35C40 + 2048 )
            {
              v18 = *(_QWORD *)(v14 - 0x21FFFFFFFFF0LL);
              if ( (v18 & 0x400) != 0 )
              {
                if ( (v18 & 8) == 0 )
                  return v11;
              }
              else if ( (v18 & 0x8000000) == 0 )
              {
                return v11;
              }
            }
            v51 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
            v20 = dword_140E2DC04;
            if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
              || (v21 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v11 < *(_QWORD *)v21)
              || dword_140E2DC00 != dword_140E2DC04 && v11 >= *((_QWORD *)v21 + 2) )
            {
              v17 = 0LL;
              for ( i = 0; ; i = v23 + 1 )
              {
                while ( 1 )
                {
                  if ( v20 < i )
                    KeBugCheckEx(0x1Au, 0x5180uLL, v11, 0LL, 0LL);
                  v23 = (i + v20) >> 1;
                  v21 = (char *)qword_140E2DC60 + 16 * v23;
                  if ( v11 >= *(_QWORD *)v21 )
                    break;
                  if ( !v23 )
                    KeBugCheckEx(0x1Au, 0x5180uLL, v11, (ULONG_PTR)v21, 0LL);
                  v20 = v23 - 1;
                }
                if ( v23 == dword_140E2DC04 || v11 < *((_QWORD *)v21 + 2) )
                  break;
              }
              dword_140E2DC00 = (i + v20) >> 1;
            }
            v52 = *((_DWORD *)v21 + 2);
            v57 = *(_DWORD *)(v12 + 32);
            v24 = 0xFFFFDE0000000030uLL;
            if ( (v57 & 0x8000000) != 0 )
            {
              if ( v12 < 0xFFFFDE0000000000uLL
                || v12 >= 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
                || (unsigned int)MiIsDecayPfn(
                                   0xAAAAAAAAAAAAAAABuLL * (v14 >> 4),
                                   0xFFFFDE0000000030uLL,
                                   *(unsigned int *)(v12 + 32),
                                   v17) )
              {
                v25 = 5;
              }
              else
              {
                if ( (v46 & 7) == 6 || (unsigned int)MiGetPfnSlabType(v12) != 9 )
                  goto LABEL_30;
                v25 = 5;
              }
            }
            else
            {
LABEL_30:
              v25 = HIBYTE(v57) & 7;
            }
            if ( qword_140E2DC68 )
              v26 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * (v14 >> 4), v24);
            else
              v26 = 0;
            v27 = v54;
            v58 = v26;
            if ( v54 < 9 )
            {
              if ( v54 == 8 )
                BYTE8(v53) = *(_BYTE *)(qword_140E3D280
                                      + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v11) >> 4)) >> 9)
                                      + 1) & 0x7F;
              else
                BYTE8(v53) = 0;
              v28 = v25;
            }
            else
            {
              v28 = v25;
            }
            v29 = 0;
            v30 = v51;
            v31 = 57216LL * v52;
            v32 = (__int64 *)(v51 + 16);
            v49 = v28;
            while ( 2 )
            {
              if ( v29 )
              {
                if ( v29 == 1 )
                {
                  v34 = v30 + (v28 << 9) + 11840;
                }
                else
                {
                  v33 = *v32;
                  if ( v27 < 9 )
                  {
                    v48 = 0;
                    if ( v27 == 8 )
                      v48 = BYTE8(v53);
                    v34 = *(_QWORD *)(v31 + 232LL * v27 + v33 + 15760) + ((v28 + 8LL * v48) << 9);
                  }
                  else
                  {
                    v34 = v33 + v31 + ((v28 + 8LL * v26 + 13) << 9);
                  }
                }
              }
              else
              {
                v34 = v30 + (v28 << 9) + 7744;
              }
              v35 = 0;
              v36 = (_QWORD *)v34;
              while ( *v36 != v11 )
              {
                ++v35;
                ++v36;
                if ( v35 >= 0x40 )
                {
                  if ( v35 == 64 )
                    goto LABEL_44;
                  break;
                }
              }
              if ( !(unsigned int)MiFindSuitableLookasideReplacement(v29, v34, v35, 48 * (int)v11, v60) )
              {
                v37 = *(_QWORD *)(v34 + 8LL * v35);
                *(_QWORD *)(v34 + 8LL * v35) = -1LL;
                if ( v37 != -1LL && (v37 < qword_140E35C40 || v37 >= qword_140E35C40 + 2048) )
                {
                  v38 = 6 * v37;
                  v39 = *(_QWORD *)(48 * v37 - 0x21FFFFFFFFF0LL);
                  v40 = -9LL;
                  if ( (v39 & 0x400) == 0 )
                    v40 = -134217729LL;
                  v41 = v39 & v40;
                  v42 = 48 * v37 - 0x220000000000LL;
                  if ( v37 < qword_140E35C40 || v37 >= qword_140E35C40 + 2048 )
                    MiGetPfnSlabType(48 * v37 - 0x220000000000LL);
                  MiPageToNode(v37);
                  v44 = 0xFFFFDE0000000000uLL;
                  if ( (*(_DWORD *)(8 * v38 - 0x21FFFFFFFFE0LL) & 0x8000000) != 0
                    && v42 >= 0xFFFFDE0000000000uLL
                    && v42 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
                    && !(unsigned int)MiIsDecayPfn(
                                        0xAAAAAAAAAAAAAAABuLL * ((__int64)(v42 + 0x220000000000LL) >> 4),
                                        v43,
                                        *(unsigned int *)(8 * v38 - 0x21FFFFFFFFE0LL),
                                        0xFFFFDE0000000000uLL)
                    && (v45 & 7) != 6 )
                  {
                    MiGetPfnSlabType(8 * v38 - 0x220000000000LL);
                  }
                  if ( qword_140E2DC68 )
                    MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v42 - v44) >> 4), v43);
                  *(_QWORD *)(8 * v38 - 0x21FFFFFFFFF0LL) = v41;
                }
              }
              v31 = 57216LL * v52;
              v26 = v58;
              v28 = v49;
              v27 = v54;
LABEL_44:
              if ( ++v29 < 3 )
              {
                v30 = v51;
                v32 = (__int64 *)(v51 + 16);
                continue;
              }
              return v11;
            }
          }
          v47 = v56;
          if ( ++v59 == 8 )
            v47 = 1;
          v56 = v47;
          goto LABEL_91;
        }
        v16 = *(unsigned __int8 *)(qword_140E3D280 + 2 * v15) - 1;
      }
      else
      {
        v16 = 9;
      }
      v54 = v16;
      goto LABEL_14;
    }
LABEL_91:
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    --v8;
    v9 = 0xFFFFDE0000000000uLL;
    LOBYTE(Number) = Number - 1;
    v4 = 0LL;
LABEL_7:
    ++v8;
    Number = ((_BYTE)Number + 1) & 0x3F;
  }
  return -1LL;
}
