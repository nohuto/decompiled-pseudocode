/*
 * XREFs of KiFindNextTimerDueTime @ 0x1405C2050
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x1405B675C (KePrepareClockTimerForIdle.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1405B91E0 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiFindNextTimerDueTime(__int64 a1, unsigned __int64 a2, char a3, unsigned __int64 *a4)
{
  unsigned __int64 *v4; // rsi
  __int64 v5; // r9
  unsigned __int64 v6; // r13
  __int64 v7; // rcx
  unsigned int v8; // edx
  char v9; // di
  unsigned int v10; // r10d
  unsigned int v11; // ebx
  unsigned __int64 v12; // r8
  unsigned int v13; // ebx
  int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // r12
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // r9
  unsigned __int64 k; // rbx
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rcx
  __int64 m; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  int v27; // r8d
  unsigned __int64 v28; // r15
  unsigned __int16 v29; // di
  unsigned __int64 v30; // rsi
  __int64 v31; // r14
  unsigned __int64 v32; // r9
  unsigned __int64 i; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 *v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // r13
  unsigned __int64 v40; // rbp
  __int64 v41; // r15
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rdx
  unsigned __int64 j; // r9
  unsigned __int64 v45; // rcx
  unsigned __int64 *v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // ecx
  unsigned int v51; // [rsp+0h] [rbp-68h]
  unsigned int v52; // [rsp+4h] [rbp-64h]
  int v53; // [rsp+8h] [rbp-60h]
  __int64 v54; // [rsp+10h] [rbp-58h]
  unsigned __int64 v55; // [rsp+18h] [rbp-50h]
  __int64 v56; // [rsp+18h] [rbp-50h]

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = -1LL;
  v8 = -1;
  v9 = a3;
  v54 = -1LL;
  v10 = -1;
  v51 = -1;
  if ( KiGlobalTimerResolutionRequests || KePseudoHrTimeIncrement != KeMaximumIncrement )
  {
    v11 = 0;
    v53 = 1;
  }
  else
  {
    v53 = -1;
    v11 = 1;
  }
  while ( 1 )
  {
    v52 = v11;
    if ( v11 >= 2 )
      return v7;
    v12 = -1LL;
    v13 = (unsigned __int8)(v6 >> 18);
    if ( !KiSerializeTimerExpiration )
    {
      if ( v13 == (unsigned __int8)*(_DWORD *)(v5 + 4LL * v52 + 33552) )
      {
        if ( v9 )
        {
          v28 = v13 << 9;
          v10 = -1;
          v29 = 0;
          while ( 1 )
          {
            v30 = KiPendingTimerBitmaps[2 * v29];
            v31 = KiPendingTimerBitmaps[2 * v29 + 1];
            v32 = v28 & -(__int64)(v28 < v30);
            for ( i = v30 - 1; ; i = v37 - 1 )
            {
              if ( i - v32 == -1LL )
              {
                LODWORD(v34) = -1;
              }
              else
              {
                v35 = (unsigned __int64 *)(v31 + 8 * (v32 >> 6));
                while ( !*v35 )
                {
                  if ( (unsigned __int64)++v35 > v31 + 8 * (i >> 6) )
                    goto LABEL_52;
                }
                _BitScanForward64(&v36, *v35);
                v34 = v36 + (((__int64)v35 - v31) >> 3 << 6);
                if ( v34 > i )
                {
LABEL_52:
                  LODWORD(v34) = -1;
                }
                else if ( v34 != -1LL )
                {
                  break;
                }
              }
              if ( !v32 )
                break;
              v37 = v28 + 1;
              v32 = 0LL;
              if ( v28 + 1 > v30 )
                v37 = KiPendingTimerBitmaps[2 * v29];
            }
            if ( (_DWORD)v34 != -1 && (unsigned __int8)(((unsigned int)v34 >> 9) - v13) < v10 )
              v10 = (unsigned __int8)(((unsigned int)v34 >> 9) - v13);
            if ( ++v29 >= (unsigned __int16)KiActiveGroups )
            {
              v8 = v51;
              v5 = a1;
              v9 = a3;
              v4 = a4;
              if ( v10 != -1 )
                v12 = (unsigned int)KePseudoHrTimeIncrement + (v6 & 0xFFFFFFFFFFFC0000uLL) + (v10 << 18);
              goto LABEL_40;
            }
          }
        }
        v10 = 0;
        v38 = 2LL * *(unsigned __int8 *)(v5 + 208);
        v56 = *(_QWORD *)(v5 + 200);
        v39 = KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(v5 + 208) + 1];
        while ( 1 )
        {
          v40 = KiPendingTimerBitmaps[v38];
          v41 = KiPendingTimerBitmaps[v38 + 1];
          v42 = (unsigned __int64)v13 << 9;
          v43 = v40 - 1;
          for ( j = v42 & -(__int64)(v42 < v40); ; j = 0LL )
          {
            if ( v43 - j == -1LL )
              goto LABEL_68;
            v46 = (unsigned __int64 *)(v41 + 8 * (j >> 6));
            while ( !*v46 )
            {
              if ( (unsigned __int64)++v46 > v41 + 8 * (v43 >> 6) )
                goto LABEL_68;
            }
            _BitScanForward64(&v47, *v46);
            v45 = v47 + (((__int64)v46 - v41) >> 3 << 6);
            if ( v45 > v43 )
            {
LABEL_68:
              LODWORD(v45) = -1;
            }
            else if ( v45 != -1LL )
            {
              break;
            }
            if ( !j )
              break;
            v48 = v42 + 1;
            if ( v42 + 1 > v40 )
              v48 = KiPendingTimerBitmaps[v38];
            v43 = v48 - 1;
          }
          if ( (_DWORD)v45 == -1 )
            goto LABEL_37;
          v49 = (unsigned int)v45 >> 9;
          v10 += (unsigned __int8)(v49 - v13);
          if ( v10 > 0x100 )
            goto LABEL_37;
          if ( (v56 & *(_QWORD *)(((unsigned __int64)v49 << 6) + v39)) != 0 )
          {
            v6 = a2;
            v8 = v51;
            v12 = (unsigned int)KePseudoHrTimeIncrement + (a2 & 0xFFFFFFFFFFFC0000uLL) + (v10 << 18);
            goto LABEL_39;
          }
          ++v10;
          v13 = (unsigned __int8)(v49 + 1);
        }
      }
      return 0LL;
    }
    if ( !v9 )
      goto LABEL_41;
    v14 = *(_DWORD *)(KiProcessorBlock[0] + 4LL * v52 + 33552);
    v15 = (unsigned __int8)(v13 - v14);
    if ( v15 > 1 )
      return 0LL;
    v10 = 0;
    v16 = (unsigned __int8)v14;
    v17 = KiProcessorBlock[0] + ((unsigned __int64)v52 << 13);
    v18 = (v6 & 0xFFFFFFFFFFFC0000uLL) - (v15 << 18) + 0x4000000;
    while ( 2 )
    {
      v55 = v12;
      v19 = KiPendingTimerBitmaps[0] - 1;
      for ( k = (unsigned int)v16 & (unsigned __int64)-(__int64)((unsigned __int64)(unsigned int)v16 < KiPendingTimerBitmaps[0]);
            ;
            k = 0LL )
      {
        if ( v19 - k == -1LL )
        {
          LODWORD(v21) = -1;
          goto LABEL_20;
        }
        v22 = (_QWORD *)(qword_140FC8568[0] + 8 * (k >> 6));
        for ( m = ((1LL << (k & 0x3F)) - 1) | ~*v22; m == -1; m = ~*v22 )
        {
          if ( (unsigned __int64)++v22 > qword_140FC8568[0] + 8 * (v19 >> 6) )
            goto LABEL_17;
        }
        _BitScanForward64((unsigned __int64 *)&m, ~m);
        v21 = m + (((__int64)v22 - qword_140FC8568[0]) >> 3 << 6);
        if ( v21 > v19 )
        {
LABEL_17:
          LODWORD(v21) = -1;
          goto LABEL_20;
        }
        if ( v21 != -1LL )
          break;
LABEL_20:
        if ( !k )
          break;
        v24 = v16 + 1;
        if ( (unsigned __int64)(v16 + 1) > KiPendingTimerBitmaps[0] )
          v24 = KiPendingTimerBitmaps[0];
        v19 = v24 - 1;
      }
      v8 = v51;
      if ( (_DWORD)v21 != -1 )
      {
        v10 += (unsigned __int8)(v21 - v16 + 1);
        if ( v10 <= 0x100 && v10 <= v51 )
        {
          v25 = 32LL * (unsigned int)v21;
          v26 = *(_QWORD *)(v25 + v17 + 17176);
          if ( v26 >= v12 || *(_DWORD *)(v25 + v17 + 17180) == -1 )
            goto LABEL_35;
          if ( v26 >= v18 )
          {
            v12 = *(_QWORD *)(v25 + v17 + 17176);
LABEL_35:
            v16 = (unsigned __int8)(v21 + 1);
            continue;
          }
          v27 = (unsigned __int8)(v26 >> 18);
          if ( v27 != (_DWORD)v21 )
          {
            v12 = ((((_DWORD)v21 - v27) << 18) & 0x3FC0000) + (v26 & 0xFFFFFFFFFFFC0000uLL);
            if ( v12 >= v55 )
              v12 = v55;
            goto LABEL_35;
          }
          v12 = *(_QWORD *)(v25 + v17 + 17176);
LABEL_37:
          v8 = v51;
        }
      }
      break;
    }
    v6 = a2;
LABEL_39:
    v5 = a1;
    v9 = a3;
    v4 = a4;
LABEL_40:
    v7 = v54;
LABEL_41:
    if ( v52 )
    {
      *v4 = v12;
    }
    else
    {
      v7 = v12;
      v54 = v12;
    }
    if ( v12 != -1LL )
    {
      if ( v8 >= v10 + 1 )
        v8 = v10 + 1;
      v51 = v8;
    }
    v11 = v53 + v52;
  }
}
