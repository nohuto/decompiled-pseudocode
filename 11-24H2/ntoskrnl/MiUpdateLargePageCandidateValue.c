/*
 * XREFs of MiUpdateLargePageCandidateValue @ 0x1402277A0
 * Callers:
 *     MiUpdateLargePageCandidates @ 0x14021F840 (MiUpdateLargePageCandidates.c)
 *     MiUnlinkStandbyPage @ 0x140225CF0 (MiUnlinkStandbyPage.c)
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiWalkPagesOnLists @ 0x14026E7E0 (MiWalkPagesOnLists.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiMirrorZeroFreeListsCallback @ 0x14041D1E0 (MiMirrorZeroFreeListsCallback.c)
 *     MiReplenishPageSlist @ 0x1404F1A70 (MiReplenishPageSlist.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiRecordLargePageCandidate @ 0x1403135A4 (MiRecordLargePageCandidate.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall MiUpdateLargePageCandidateValue(__int64 a1, ULONG_PTR a2, int a3, char a4, volatile signed __int16 *a5)
{
  ULONG_PTR v9; // rdx
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // bx
  __int64 v12; // rax
  int v13; // ecx
  char *v14; // rax
  int i; // edx
  int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // r9
  volatile signed __int32 *v21; // r8
  unsigned int v22; // eax
  unsigned int v23; // ecx
  volatile signed __int16 *v24; // r8
  volatile signed __int16 v25; // ax
  volatile signed __int32 *v26; // rdx
  volatile signed __int32 v27; // eax
  int v28; // r10d
  unsigned __int64 v29; // rcx

  if ( a5 )
    *a5 = 0;
  if ( *(_BYTE *)(a1 + 16102) )
  {
    if ( a3 != 3 )
    {
      if ( a3 == 2 )
      {
        v11 = 1040;
        v23 = 16;
      }
      else if ( a3 == 1 )
      {
        v11 = 512;
        v23 = 524800;
      }
      else
      {
        v11 = 0;
        v23 = 0x40000;
      }
      goto LABEL_24;
    }
    v9 = a2 >> 4;
    v10 = ((a4 & 2) == 0) | 0x20;
    if ( (a4 & 1) == 0 )
      v10 = -v10;
    v11 = 1;
    v12 = ((_BYTE)v10
         + (unsigned __int8)_InterlockedExchangeAdd16((volatile signed __int16 *)(qword_140E3CD38 + 2 * v9), v10)) & 0x1F;
    if ( v12 != 16 )
    {
      if ( v12 == 15 && (a4 & 3) == 0 )
        MiRecordLargePageCandidate(a1, a2, 2LL, 1LL);
      goto LABEL_23;
    }
    v13 = dword_140E2DC04;
    if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
      || (v14 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, a2 < *(_QWORD *)v14)
      || dword_140E2DC00 != dword_140E2DC04 && a2 >= *((_QWORD *)v14 + 2) )
    {
      for ( i = 0; ; i = v16 + 1 )
      {
        while ( 1 )
        {
          if ( v13 < i )
            KeBugCheckEx(0x1Au, 0x5180uLL, a2, 0LL, 0LL);
          v16 = (i + v13) >> 1;
          v14 = (char *)qword_140E2DC60 + 16 * v16;
          if ( a2 >= *(_QWORD *)v14 )
            break;
          if ( !v16 )
            KeBugCheckEx(0x1Au, 0x5180uLL, a2, (ULONG_PTR)v14, 0LL);
          v13 = v16 - 1;
        }
        if ( v16 == dword_140E2DC04 || a2 < *((_QWORD *)v14 + 2) )
          break;
      }
      dword_140E2DC00 = (i + v13) >> 1;
    }
    v17 = 57216LL * *((unsigned int *)v14 + 2);
    v18 = qword_140E38D50;
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + v17 + 57152));
    _InterlockedIncrement64((volatile signed __int64 *)(v17 + v18 + 57128));
    LOBYTE(v19) = 1;
    v20 = (a2 >> 13) & 0x1F;
    v21 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 16432) + 4 * (a2 >> 18));
    if ( (unsigned __int64)(v20 + 1) > 0x20 )
    {
      if ( v20 )
      {
        v28 = (a2 >> 13) & 0x1F;
        _InterlockedOr(v21++, ((1 << (32 - v28)) - 1) << v20);
        v19 = 1LL - (unsigned int)(32 - v28);
        if ( v19 >= 0x20 )
        {
          v29 = v19 >> 5;
          v19 += -32LL * (v19 >> 5);
          do
          {
            *v21++ = -1;
            --v29;
          }
          while ( v29 );
        }
        if ( !v19 )
          goto LABEL_20;
      }
      v22 = (1 << v19) - 1;
    }
    else
    {
      v22 = 1 << v20;
    }
    _InterlockedOr(v21, v22);
LABEL_20:
    if ( !*(_DWORD *)(a1 + 16580) )
      KeSetEvent((PRKEVENT)(a1 + 16576), 0, 0);
LABEL_23:
    v23 = 1;
LABEL_24:
    if ( (a4 & 1) == 0 )
    {
      v11 = -v11;
      v23 = -v23;
    }
    v24 = (volatile signed __int16 *)(*(_QWORD *)(a1 + 0x4000) + 2 * (a2 >> 9));
    if ( *(_BYTE *)(a1 + 16102) == 1 )
    {
      *v24 += v11;
      v25 = *v24;
    }
    else
    {
      v25 = v11 + _InterlockedExchangeAdd16(v24, v11);
    }
    if ( a3 == 2 )
      *a5 = v25;
    v26 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 16440) + 4 * (a2 >> 18));
    if ( *(_BYTE *)(a1 + 16102) == 1 )
    {
      *v26 += v23;
      v27 = *v26;
    }
    else
    {
      v27 = v23 + _InterlockedExchangeAdd(v26, v23);
    }
    if ( a3 == 1 )
      *(_DWORD *)a5 = v27;
  }
}
