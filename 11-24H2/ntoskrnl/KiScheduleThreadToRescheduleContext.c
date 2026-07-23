/*
 * XREFs of KiScheduleThreadToRescheduleContext @ 0x1402A7A00
 * Callers:
 *     KiAttemptToStealStandbyThread @ 0x1402A6884 (KiAttemptToStealStandbyThread.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiEnterLongDpcProcessing @ 0x1402A7594 (KiEnterLongDpcProcessing.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 * Callees:
 *     KiIsPrcbThread @ 0x1402A6700 (KiIsPrcbThread.c)
 *     KiInsertDeferredReadyList @ 0x1403BC660 (KiInsertDeferredReadyList.c)
 */

__int64 __fastcall KiScheduleThreadToRescheduleContext(
        unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5)
{
  unsigned int v5; // r11d
  unsigned __int8 v6; // r12
  unsigned int v7; // r15d
  __int64 v9; // rdi
  unsigned int v10; // eax
  unsigned __int8 *v13; // r10
  unsigned int v14; // r9d
  __int64 v15; // rdi
  unsigned __int8 *v16; // r11
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rbp
  unsigned __int8 v20; // cl
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r11
  char v24; // cl
  bool v25; // al
  __int64 result; // rax
  unsigned __int8 v27; // cl
  bool v28; // al
  __int64 v29; // rdi
  unsigned __int8 *v30; // r11
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int8 v33; // cl
  bool v34; // al
  __int64 v35; // rbp
  unsigned __int8 v36; // al
  char v37; // al
  unsigned __int8 v38; // cl
  unsigned __int8 v39; // al
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx

  v5 = *a1;
  v6 = 0;
  v7 = 0;
  v9 = 0LL;
  v10 = 0;
  v13 = a1;
  while ( v10 < v5 )
  {
    if ( *(_QWORD *)&a1[40 * v10 + 16] == a3 )
    {
      v9 = (__int64)&a1[40 * v10 + 16];
      break;
    }
    ++v10;
  }
  v14 = (*(_DWORD *)(a2 + 120) >> 1) & 1;
  if ( v14 >= ((*(unsigned __int8 *)(v9 + 32) >> 1) & 1u) )
  {
    if ( v14 )
    {
      if ( (_BYTE)v5 )
      {
        do
        {
          v29 = *(_QWORD *)&v13[40 * v7 + 16];
          v30 = &v13[40 * v7];
          v31 = *((_QWORD *)v30 + 5);
          v32 = v31 - 1;
          if ( v29 == a3 )
          {
            if ( v32 <= 0xFFFFFFFFFFFFFFFCuLL && !KiIsPrcbThread(v31) )
            {
              if ( (v30[49] & 1) != 0 )
                *(_DWORD *)(v42 + 116) |= 2u;
              *(_BYTE *)(v42 + 565) = 1;
              KiInsertDeferredReadyList(a5, v42);
            }
            v33 = v30[48] & 0xFE;
            *((_QWORD *)v30 + 4) = a2;
            v30[48] = v33;
            v34 = (*(_DWORD *)(a2 + 120) & 2) != 0;
            *((_QWORD *)v30 + 5) = a2;
            v30[48] = (v33 & 0xFD ^ (2 * v34)) & 0xC3 | 4;
            v30[49] ^= (a4 ^ v30[49]) & 1;
            if ( !KiIsPrcbThread(a2) )
              *(_DWORD *)(a2 + 536) = *(_DWORD *)(v29 + 36);
          }
          else
          {
            v35 = *(_QWORD *)(v29 + 36480);
            if ( v32 <= 0xFFFFFFFFFFFFFFFCuLL && !KiIsPrcbThread(v31) )
            {
              if ( (v30[49] & 1) != 0 )
                *(_DWORD *)(v43 + 116) |= 2u;
              *(_BYTE *)(v43 + 565) = 1;
              KiInsertDeferredReadyList(a5, v43);
            }
            v36 = v30[48] & 0xFE;
            *((_QWORD *)v30 + 4) = a2;
            v30[48] = v36;
            v37 = (v36 & 0xFD ^ (2 * ((*(_DWORD *)(a2 + 120) & 2) != 0))) & 0xE3 | 4;
            v38 = v37 | 0x20;
            v39 = v37 & 0xDF;
            if ( a2 == v35 )
              v38 = v39;
            v30[48] = v38;
            v30[49] &= ~1u;
            *((_QWORD *)v30 + 5) = v35;
            if ( !KiIsPrcbThread(v35) )
              *(_DWORD *)(v35 + 536) = *(_DWORD *)(v29 + 36);
          }
          ++v7;
        }
        while ( v7 < *v13 );
      }
    }
    else
    {
      v22 = *(_QWORD *)(v9 + 24);
      v23 = *(_QWORD *)v9;
      if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFCuLL && *(_UNKNOWN **)(v22 + 544) != &KiInitialProcess )
      {
        if ( (*(_BYTE *)(v9 + 33) & 1) != 0 )
          *(_DWORD *)(v22 + 116) |= 2u;
        *(_BYTE *)(v22 + 565) = 1;
        KiInsertDeferredReadyList(a5, v22);
      }
      v24 = *(_BYTE *)(v9 + 32) & 0xFE;
      *(_QWORD *)(v9 + 16) = a2;
      *(_BYTE *)(v9 + 32) = v24;
      v25 = (*(_DWORD *)(a2 + 120) & 2) != 0;
      *(_QWORD *)(v9 + 24) = a2;
      *(_BYTE *)(v9 + 32) = (v24 & 0xFD ^ (2 * v25)) & 0xC3 | 4;
      *(_BYTE *)(v9 + 33) ^= (a4 ^ *(_BYTE *)(v9 + 33)) & 1;
      if ( *(_UNKNOWN **)(a2 + 544) != &KiInitialProcess )
        *(_DWORD *)(a2 + 536) = *(_DWORD *)(v23 + 36);
    }
  }
  else
  {
    if ( (_BYTE)v5 )
    {
      do
      {
        v15 = *(_QWORD *)&v13[40 * v7 + 16];
        v16 = &v13[40 * v7];
        v17 = *((_QWORD *)v16 + 5);
        v18 = v17 - 1;
        if ( v15 == a3 )
        {
          if ( v18 <= 0xFFFFFFFFFFFFFFFCuLL && !KiIsPrcbThread(v17) )
          {
            if ( (v16[49] & 1) != 0 )
              *(_DWORD *)(v41 + 116) |= 2u;
            *(_BYTE *)(v41 + 565) = 1;
            KiInsertDeferredReadyList(a5, v41);
          }
          v27 = v16[48] & 0xFE;
          *((_QWORD *)v16 + 4) = a2;
          v16[48] = v27;
          v28 = (*(_DWORD *)(a2 + 120) & 2) != 0;
          *((_QWORD *)v16 + 5) = a2;
          v16[48] = (v27 & 0xFD ^ (2 * v28)) & 0xC3 | 4;
          v16[49] ^= (a4 ^ v16[49]) & 1;
          if ( !KiIsPrcbThread(a2) )
            *(_DWORD *)(a2 + 536) = *(_DWORD *)(v15 + 36);
        }
        else
        {
          v19 = *(_QWORD *)(v15 + 24);
          if ( v18 <= 0xFFFFFFFFFFFFFFFCuLL && !KiIsPrcbThread(v17) )
          {
            if ( (v16[49] & 1) != 0 )
              *(_DWORD *)(v40 + 116) |= 2u;
            *(_BYTE *)(v40 + 565) = 1;
            KiInsertDeferredReadyList(a5, v40);
          }
          v20 = v16[48] | 1;
          *((_QWORD *)v16 + 4) = v19;
          v16[48] = v20;
          v21 = *(_DWORD *)(v19 + 120);
          v16[49] &= ~1u;
          *((_QWORD *)v16 + 5) = v19;
          v16[48] = (v20 & 0xFD ^ (2 * ((v21 & 2) != 0))) & 0xC3 | 4;
          if ( !KiIsPrcbThread(v19) )
            *(_DWORD *)(v19 + 536) = *(_DWORD *)(v15 + 36);
        }
        ++v7;
      }
      while ( v7 < *v13 );
    }
    v6 = 1;
  }
  result = v6;
  *((_DWORD *)v13 + 1) = v14;
  return result;
}
