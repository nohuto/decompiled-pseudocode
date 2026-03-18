/*
 * XREFs of VidSchiCheckPreemptionPolicy @ 0x140024FC0
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x140024800 (VidSchiSwitchContextWithCheck.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 */

_BOOL8 __fastcall VidSchiCheckPreemptionPolicy(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v3; // eax
  int v6; // r14d
  __int64 v7; // r15
  unsigned int MostSignificantBit; // ecx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  int v15; // r8d
  __int64 v16; // rcx
  int v17; // edx
  bool v18; // cc
  __int64 v19; // rcx
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+48h] [rbp-38h]
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h] BYREF
  __int128 v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+78h] [rbp-8h]
  char v26; // [rsp+B0h] [rbp+30h] BYREF
  char v27; // [rsp+B8h] [rbp+38h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  v3 = *(_DWORD *)(a1 + 184);
  *a2 = -1LL;
  v6 = 0;
  v7 = *(_QWORD *)(v2 + 24);
  if ( (v3 & 2) != 0 )
  {
    if ( a1 == *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1576) + 1584) )
    {
      v6 = 15;
      goto LABEL_4;
    }
    v6 = -18;
  }
  if ( !*(_DWORD *)(v2 + 3020) )
  {
    v6 = 2;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v7 + 2792) & 1) == 0 )
  {
    v6 = 3;
    goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 788));
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 3024)) != 1 )
  {
    v6 = 13;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v7 + 1028) )
    v6 = -14;
  MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v2 + 1892));
  v10 = *(unsigned int *)(a1 + 404);
  if ( MostSignificantBit <= (unsigned int)v10 )
  {
    if ( MostSignificantBit != (_DWORD)v10 )
    {
      if ( !*(_BYTE *)(v2 + 2144) || gulPriorityToYieldPriorityBand[v10] == 3 )
        goto LABEL_27;
LABEL_23:
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 3024));
      v6 = 11;
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 788));
      goto LABEL_4;
    }
    v11 = *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1576) + 1584);
    if ( v11 && *(_QWORD *)(*(_QWORD *)(v11 + 104) + 40LL) == *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) )
    {
      v14 = *(_DWORD *)(a1 + 408);
      if ( v14 > *(_DWORD *)(v11 + 408) )
      {
        v6 = -17;
        goto LABEL_4;
      }
      if ( v14 < *(_DWORD *)(v11 + 408) )
        goto LABEL_16;
    }
    v12 = *(_QWORD *)(v2 + 24);
    v27 = 0;
    v25 = 0LL;
    v23 = v2;
    v24 = 0LL;
    DpSynchronizeExecution(
      *(_QWORD *)(v12 + 24),
      VidSchiUpdateNodeRunningTimeAtISR,
      &v23,
      *(unsigned int *)(v12 + 32),
      &v27);
    v13 = v24;
    if ( !v27 )
    {
      if ( !(_QWORD)v24 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v2 + 3024));
        v6 = 2;
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 788));
        goto LABEL_4;
      }
      v15 = HIDWORD(v24);
      v16 = *((_QWORD *)&v24 + 1);
      goto LABEL_34;
    }
LABEL_22:
    *a2 = *(_QWORD *)(v13 + 480);
    goto LABEL_23;
  }
  if ( !*(_BYTE *)(v2 + 2144) )
  {
LABEL_16:
    v6 = 10;
LABEL_17:
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 3024));
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 788));
    goto LABEL_4;
  }
  v19 = *(_QWORD *)(v2 + 24);
  v26 = 0;
  v22 = 0LL;
  v20 = v2;
  v21 = 0LL;
  DpSynchronizeExecution(
    *(_QWORD *)(v19 + 24),
    VidSchiUpdateNodeRunningTimeAtISR,
    &v20,
    *(unsigned int *)(v19 + 32),
    &v26);
  v13 = v21;
  if ( v26 )
    goto LABEL_22;
  if ( !(_QWORD)v21 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 3024));
    v6 = 2;
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 788));
    goto LABEL_4;
  }
  v15 = HIDWORD(v21);
  v16 = *((_QWORD *)&v21 + 1);
LABEL_34:
  v17 = *(_DWORD *)(v13 + 484);
  v18 = v17 <= v15;
  if ( v17 == v15 )
  {
    if ( *(_DWORD *)(v13 + 480) > (unsigned int)v16 )
    {
LABEL_36:
      v6 = 12;
      *a2 = *(_QWORD *)(v13 + 480) - v16;
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 3024));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 788));
      goto LABEL_4;
    }
    v18 = v17 <= v15;
  }
  if ( !v18 )
    goto LABEL_36;
LABEL_27:
  if ( !v6 )
    v6 = 1;
LABEL_4:
  VidSchiProfilePerformanceTick(1, v7, v2, 0LL, a1, 0LL, 0LL, v6);
  WdLogSingleEntry5(4LL, v2, *(_QWORD *)(v2 + 96), *(_QWORD *)(v2 + 152), a1, v6);
  WdLogGlobalForLineNumber = 6473;
  return v6 < 0 || v6 == 1;
}
