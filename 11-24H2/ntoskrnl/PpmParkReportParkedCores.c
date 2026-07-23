/*
 * XREFs of PpmParkReportParkedCores @ 0x1402B24F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfQueueAction @ 0x1402AF01C (PpmPerfQueueAction.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2B10 (-KiXorAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeUpdateSoftParkRankList @ 0x1402B2C90 (KeUpdateSoftParkRankList.c)
 *     PpmEventSoftParkRankListChanged @ 0x1402B2E68 (PpmEventSoftParkRankListChanged.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char PpmParkReportParkedCores()
{
  unsigned __int16 v0; // dx
  unsigned __int16 Count; // cx
  unsigned __int16 v2; // ax
  int v3; // r15d
  unsigned __int16 v4; // r8
  unsigned __int16 v5; // di
  __int64 v6; // rax
  unsigned __int16 Size; // r8
  int v8; // ebx
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // si
  __int64 v14; // rax
  $B38C3B1372D6E954799962D5DD404846 *v15; // rdx
  int v16; // r8d
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // cx
  __int64 v20; // rax
  bool v22; // zf
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  int v25; // r10d
  __int64 v26; // r8
  int v27; // r9d
  __int64 v28; // r8
  int v29; // r8d
  __int64 v30; // r11
  unsigned __int64 v31; // rdi
  __int64 v32; // rbx
  unsigned __int64 v33; // rdx
  __int64 Prcb; // rax
  unsigned __int64 v35; // rdi
  __int64 v36; // rbx
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // rdi
  __int64 v40; // rbx
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  void *v43; // rcx
  struct _KAFFINITY_EX v44; // [rsp+38h] [rbp-D0h] BYREF
  struct _KAFFINITY_EX v45; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int16 v46; // [rsp+258h] [rbp+150h]
  unsigned __int16 v47; // [rsp+25Ah] [rbp+152h]
  int v48; // [rsp+25Ch] [rbp+154h]
  _QWORD v49[33]; // [rsp+260h] [rbp+158h] BYREF
  struct _KAFFINITY_EX v50; // [rsp+368h] [rbp+260h] BYREF

  memset_0(&v44.8, 0, sizeof(v44.8));
  memset_0(v49, 0, 0x100uLL);
  memset_0(&v50.8, 0, sizeof(v50.8));
  memset_0(&v45.8, 0, sizeof(v45.8));
  if ( !PpmIsParkingEnabled )
    return 1;
  v47 = 32;
  memset_0(v49, 0, 0x100uLL);
  v0 = v47;
  Count = PpmPerfNewCoreParkingMask.Count;
  v2 = v47;
  v3 = 0;
  v4 = 0;
  if ( PpmPerfChangedCoreParkingMask.Count < PpmPerfNewCoreParkingMask.Count )
    Count = PpmPerfChangedCoreParkingMask.Count;
  v5 = Count;
  if ( Count <= v47 )
    v2 = Count;
  else
    v5 = v47;
  v46 = v5;
  if ( v2 )
  {
    do
    {
      v22 = (PpmPerfChangedCoreParkingMask.Bitmap[v4] & PpmPerfNewCoreParkingMask.Bitmap[v4]) == 0;
      v49[v4] = PpmPerfChangedCoreParkingMask.Bitmap[v4] & PpmPerfNewCoreParkingMask.Bitmap[v4];
      v5 = v46;
      if ( !v22 )
        v3 = 1;
      ++v4;
    }
    while ( v4 < v46 );
    v0 = v47;
  }
  v48 = 0;
  if ( v4 < v0 )
  {
    do
    {
      v6 = v4++;
      v49[v6] = 0LL;
    }
    while ( v4 < v47 );
    v5 = v46;
  }
  *(_QWORD *)&v50.Count = 2097153LL;
  memset_0(&v50.8, 0, sizeof(v50.8));
  KiSubtractAffinityEx(&PpmPerfNewCoreParkingMask, &PpmPerfChangedCoreParkingMask, &v50, v50.Size);
  *(_QWORD *)&v45.Count = 2097153LL;
  memset_0(&v45.8, 0, sizeof(v45.8));
  KiXorAffinityEx(&PpmParkSoftParkingMask, &PpmParkNewSoftParkingMask, &v45, v45.Size);
  Size = v45.Size;
  v8 = 0;
  v9 = v50.Count;
  v10 = v45.Size;
  v11 = v50.Count;
  v12 = 0;
  if ( v45.Count < v50.Count )
    v11 = v45.Count;
  v13 = v11;
  if ( v11 <= v45.Size )
    v10 = v11;
  else
    v13 = v45.Size;
  v45.Count = v13;
  if ( v10 )
  {
    do
    {
      v23 = v50.Bitmap[v12];
      v22 = (v23 & v45.Bitmap[v12]) == 0;
      v45.Bitmap[v12] &= v23;
      v13 = v45.Count;
      if ( !v22 )
        v8 = 1;
      ++v12;
    }
    while ( v12 < v45.Count );
    Size = v45.Size;
  }
  v45.Reserved = 0;
  if ( v12 < Size )
  {
    do
    {
      v14 = v12++;
      v45.Bitmap[v14] = 0LL;
    }
    while ( v12 < v45.Size );
    v13 = v45.Count;
  }
  *(_QWORD *)&v44.Count = 2097153LL;
  memset_0(&v44.8, 0, sizeof(v44.8));
  if ( v3 | v8 )
  {
    v19 = v44.Count;
  }
  else
  {
    KiXorAffinityEx(&PpmParkForceParkingMask, &PpmParkNewForceParkingMask, &v44, v44.Size);
    v16 = 0;
    v17 = v44.Size;
    v15 = 0LL;
    if ( v44.Count < v9 )
      v9 = v44.Count;
    v18 = v44.Size;
    v19 = v9;
    if ( v9 <= v44.Size )
      v18 = v9;
    else
      v19 = v44.Size;
    v44.Count = v19;
    if ( v18 )
    {
      do
      {
        v24 = v50.Bitmap[(unsigned __int16)v15];
        v22 = (v24 & v44.Bitmap[(unsigned __int16)v15]) == 0;
        v44.Bitmap[(unsigned __int16)v15] &= v24;
        v19 = v44.Count;
        if ( !v22 )
          v16 = 1;
        LOWORD(v15) = (_WORD)v15 + 1;
      }
      while ( (unsigned __int16)v15 < v44.Count );
      v17 = v44.Size;
    }
    v44.Reserved = 0;
    if ( (unsigned __int16)v15 < v17 )
    {
      do
      {
        v20 = (unsigned __int16)v15;
        LOWORD(v15) = (_WORD)v15 + 1;
        v44.Bitmap[v20] = 0LL;
      }
      while ( (unsigned __int16)v15 < v44.Size );
      v19 = v44.Count;
    }
    if ( !v16 )
      return 1;
  }
  v25 = 0;
  if ( v5 )
  {
    v15 = ($B38C3B1372D6E954799962D5DD404846 *)v49;
    v26 = v5;
    do
    {
      v25 += __popcnt(v15->Bitmap[0]);
      v15 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v15 + 8);
      --v26;
    }
    while ( v26 );
  }
  v27 = 0;
  if ( v13 )
  {
    v15 = &v45.8;
    v28 = v13;
    do
    {
      v27 += __popcnt(v15->Bitmap[0]);
      v15 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v15 + 8);
      --v28;
    }
    while ( v28 );
  }
  v29 = 0;
  if ( v19 )
  {
    v15 = &v44.8;
    v30 = v19;
    do
    {
      v29 += __popcnt(v15->Bitmap[0]);
      v15 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v15 + 8);
      --v30;
    }
    while ( v30 );
  }
  v31 = v49[0];
  LOWORD(v32) = 0;
  PpmCheckCount = v25 + v29 + v27;
  while ( 1 )
  {
    while ( v31 )
    {
      _BitScanForward64(&v33, v31);
      v31 &= ~(1LL << v33);
      Prcb = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v32 + (unsigned __int8)v33));
      PpmPerfQueueAction(Prcb, 3);
    }
    v32 = (unsigned __int16)(v32 + 1);
    if ( (unsigned int)v32 >= v46 )
      break;
    v31 = v49[v32];
  }
  v35 = v44.Bitmap[0];
  LOWORD(v36) = 0;
  while ( 1 )
  {
    while ( v35 )
    {
      _BitScanForward64(&v37, v35);
      v35 &= ~(1LL << v37);
      v38 = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v36 + (unsigned __int8)v37));
      PpmPerfQueueAction(v38, 5);
    }
    v36 = (unsigned __int16)(v36 + 1);
    if ( (unsigned int)v36 >= v44.Count )
      break;
    v35 = v44.Bitmap[v36];
  }
  v39 = v45.Bitmap[0];
  LOWORD(v40) = 0;
  while ( 1 )
  {
    while ( v39 )
    {
      _BitScanForward64(&v41, v39);
      v39 &= ~(1LL << v41);
      v42 = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v40 + (unsigned __int8)v41));
      PpmPerfQueueAction(v42, 4);
    }
    v40 = (unsigned __int16)(v40 + 1);
    if ( (unsigned int)v40 >= v45.Count )
      break;
    v39 = v45.Bitmap[v40];
  }
  if ( PpmParkSoftParkRankListChanged )
  {
    KeUpdateSoftParkRankList(v45.Count, v15);
    PpmEventSoftParkRankListChanged();
    v43 = PpmParkOldSoftParkRankList;
    PpmParkOldSoftParkRankList = PpmParkNewSoftParkRankList;
    PpmParkNewSoftParkRankList = v43;
  }
  return 0;
}
