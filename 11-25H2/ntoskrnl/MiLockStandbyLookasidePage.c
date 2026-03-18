/*
 * XREFs of MiLockStandbyLookasidePage @ 0x140212E20
 * Callers:
 *     MiRemoveLowestPriorityStandbyPage @ 0x140342DE0 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiAcquirePageListLock @ 0x1402122F0 (MiAcquirePageListLock.c)
 *     MiFindSuitableLookasideReplacement @ 0x140215040 (MiFindSuitableLookasideReplacement.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiPageToChannel @ 0x14023EDC0 (MiPageToChannel.c)
 *     MiIsDecayPfn @ 0x140241130 (MiIsDecayPfn.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPageToNode @ 0x140346EA0 (MiPageToNode.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rcx
  int v17; // edx
  char *v18; // rax
  int i; // r8d
  int v20; // ecx
  unsigned __int64 v21; // rdx
  unsigned int v22; // ebx
  unsigned __int8 v23; // r11
  int v24; // r9d
  __int64 v25; // r10
  int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // r14
  unsigned int v32; // ebx
  _QWORD *v33; // rcx
  __int64 v34; // r8
  ULONG_PTR v35; // r10
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // r15
  __int64 v39; // r15
  unsigned __int64 v40; // rbx
  __int64 v41; // rdx
  unsigned __int64 v42; // r9
  unsigned int v43; // r8d
  __int64 v44; // r8
  unsigned int v45; // r8d
  __int64 v46; // r8
  unsigned __int8 v47; // cl
  int v48; // eax
  __int64 v49; // [rsp+30h] [rbp-C8h]
  __int64 v50; // [rsp+40h] [rbp-B8h]
  __int64 v51; // [rsp+50h] [rbp-A8h]
  unsigned int v52; // [rsp+68h] [rbp-90h]
  __int128 v53; // [rsp+70h] [rbp-88h]
  int v54; // [rsp+100h] [rbp+8h]
  int v56; // [rsp+110h] [rbp+18h]
  int v57; // [rsp+110h] [rbp+18h]
  unsigned __int8 v58; // [rsp+110h] [rbp+18h]
  int v59; // [rsp+118h] [rbp+20h]
  int v60; // [rsp+118h] [rbp+20h]

  Number = KeGetPcr()->Prcb.Number;
  v56 = 0;
  v59 = 0;
  v50 = a1 + 88LL * a3 + 3264;
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
    if ( v8 != -1LL )
    {
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
        if ( byte_140E3C8A6 )
        {
          v12 = (0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v8) >> 4)) >> 9;
          v13 = *(unsigned __int8 *)(qword_140E3CF00 + 2 * v12);
          if ( *(_BYTE *)(qword_140E3CF00 + 2 * v12) )
          {
            v14 = v13 - 1;
            v54 = v13 - 1;
          }
          else
          {
            v54 = 9;
            v14 = 9;
          }
        }
        else
        {
          v14 = 9;
          v54 = 9;
        }
        if ( (unsigned int)MiAcquirePageListLock(v50, v9, v14, v56, (__int64)a2) )
        {
          v60 = *a2;
          v53 = 0LL;
          if ( v8 < qword_140E358C0 || v8 >= qword_140E358C0 + 2048 )
          {
            v15 = *(_QWORD *)(v11 - 0x21FFFFFFFFF0LL);
            if ( (v15 & 0x400) != 0 )
            {
              if ( (v15 & 8) == 0 )
                return v8;
            }
            else if ( (v15 & 0x8000000) == 0 )
            {
              return v8;
            }
          }
          v51 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
          v17 = dword_140E2D884;
          if ( dword_140E2D880 > (unsigned int)dword_140E2D884
            || (v18 = (char *)qword_140E2D8E0 + 16 * dword_140E2D880, v8 < *(_QWORD *)v18)
            || dword_140E2D880 != dword_140E2D884 && v8 >= *((_QWORD *)v18 + 2) )
          {
            for ( i = 0; ; i = v20 + 1 )
            {
              while ( 1 )
              {
                if ( v17 < i )
                  KeBugCheckEx(0x1Au, 0x5180uLL, v8, 0LL, 0LL);
                v20 = (i + v17) >> 1;
                v18 = (char *)qword_140E2D8E0 + 16 * v20;
                if ( v8 >= *(_QWORD *)v18 )
                  break;
                if ( !v20 )
                  KeBugCheckEx(0x1Au, 0x5180uLL, v8, (ULONG_PTR)qword_140E2D8E0, 0LL);
                v17 = v20 - 1;
              }
              if ( v20 == dword_140E2D884 || v8 < *((_QWORD *)v18 + 2) )
                break;
            }
            dword_140E2D880 = (i + v17) >> 1;
          }
          v52 = *((_DWORD *)v18 + 2);
          v57 = *(_DWORD *)(v9 + 32);
          v21 = 0xFFFFDE0000000030uLL;
          if ( (v57 & 0x8000000) != 0
            && (v9 < 0xFFFFDE0000000000uLL
             || v9 >= 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL
             || (unsigned int)MiIsDecayPfn(
                                0xAAAAAAAAAAAAAAABuLL * (v11 >> 4),
                                0xFFFFDE0000000030uLL,
                                *(unsigned int *)(v9 + 32))
             || (v46 = HIWORD(v45), LOBYTE(v46) = v46 & 7, (_BYTE)v46 != 6)
             && (unsigned int)MiGetPfnSlabType(v9, v21, v46) == 9) )
          {
            v22 = 5;
          }
          else
          {
            v22 = HIBYTE(v57) & 7;
          }
          if ( qword_140E2D8E8 )
            v23 = MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * (v11 >> 4), v21);
          else
            v23 = 0;
          v24 = v54;
          v58 = v23;
          if ( v54 < 9 )
          {
            if ( v54 == 8 )
              BYTE8(v53) = *(_BYTE *)(qword_140E3CF00
                                    + 2 * ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v8) >> 4)) >> 9)
                                    + 1) & 0x7F;
            else
              BYTE8(v53) = 0;
            v25 = v22;
          }
          else
          {
            v25 = v22;
          }
          v26 = 0;
          v27 = v51;
          v28 = 57216LL * v52;
          v29 = (__int64 *)(v51 + 16);
          v49 = v25;
          while ( 2 )
          {
            if ( v26 )
            {
              if ( v26 == 1 )
              {
                v31 = v27 + (v25 << 9) + 11840;
              }
              else
              {
                v30 = *v29;
                if ( v24 < 9 )
                {
                  v47 = 0;
                  if ( v24 == 8 )
                    v47 = BYTE8(v53);
                  v31 = *(_QWORD *)(v28 + 232LL * v24 + v30 + 15760) + ((v25 + 8LL * v47) << 9);
                }
                else
                {
                  v31 = v30 + v28 + ((v25 + 8LL * v23 + 13) << 9);
                }
              }
            }
            else
            {
              v31 = v27 + (v25 << 9) + 7744;
            }
            v32 = 0;
            v33 = (_QWORD *)v31;
            while ( *v33 != v8 )
            {
              ++v32;
              ++v33;
              if ( v32 >= 0x40 )
              {
                if ( v32 == 64 )
                  goto LABEL_44;
                break;
              }
            }
            if ( !(unsigned int)MiFindSuitableLookasideReplacement(v26, v31, v32, 48 * (int)v8, v60) )
            {
              v35 = *(_QWORD *)(v31 + 8LL * v32);
              *(_QWORD *)(v31 + 8LL * v32) = -1LL;
              if ( v35 != -1LL && (v35 < qword_140E358C0 || v35 >= qword_140E358C0 + 2048) )
              {
                v36 = 6 * v35;
                v37 = *(_QWORD *)(48 * v35 - 0x21FFFFFFFFF0LL);
                v38 = -9LL;
                if ( (v37 & 0x400) == 0 )
                  v38 = -134217729LL;
                v39 = v37 & v38;
                v40 = 48 * v35 - 0x220000000000LL;
                if ( v35 < qword_140E358C0 || v35 >= qword_140E358C0 + 2048 )
                  MiGetPfnSlabType(48 * v35 - 0x220000000000LL, qword_140E358C0, v34);
                MiPageToNode(v35);
                v42 = 0xFFFFDE0000000000uLL;
                if ( (*(_DWORD *)(8 * v36 - 0x21FFFFFFFFE0LL) & 0x8000000) != 0
                  && v40 >= 0xFFFFDE0000000000uLL
                  && v40 < 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL
                  && !(unsigned int)MiIsDecayPfn(
                                      0xAAAAAAAAAAAAAAABuLL * ((__int64)(v40 + 0x220000000000LL) >> 4),
                                      v41,
                                      *(unsigned int *)(8 * v36 - 0x21FFFFFFFFE0LL)) )
                {
                  v44 = HIWORD(v43);
                  LOBYTE(v44) = v44 & 7;
                  if ( (_BYTE)v44 != 6 )
                    MiGetPfnSlabType(8 * v36 - 0x220000000000LL, v41, v44);
                }
                if ( qword_140E2D8E8 )
                  MiPageToChannel(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v40 - v42) >> 4), v41);
                *(_QWORD *)(8 * v36 - 0x21FFFFFFFFF0LL) = v39;
              }
            }
            v28 = 57216LL * v52;
            v23 = v58;
            v25 = v49;
            v24 = v54;
LABEL_44:
            if ( ++v26 < 3 )
            {
              v27 = v51;
              v29 = (__int64 *)(v51 + 16);
              continue;
            }
            return v8;
          }
        }
        v48 = v56;
        if ( ++v59 == 8 )
          v48 = 1;
        v56 = v48;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      --v5;
      v6 = 0xFFFFDE0000000000uLL;
      LOBYTE(Number) = Number - 1;
    }
    ++v5;
    Number = ((_BYTE)Number + 1) & 0x3F;
  }
  return -1LL;
}
