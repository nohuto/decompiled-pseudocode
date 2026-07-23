/*
 * XREFs of MiMakeZeroedPageTablesEx @ 0x14026D5D0
 * Callers:
 *     MiGetPageTablesForLargeMap @ 0x14026C224 (MiGetPageTablesForLargeMap.c)
 *     MiMakeZeroedPageTables @ 0x14026CB1C (MiMakeZeroedPageTables.c)
 *     MiCreatePoolPageTables @ 0x14026D568 (MiCreatePoolPageTables.c)
 *     MmKasanCommitRegion @ 0x14067AD88 (MmKasanCommitRegion.c)
 *     MiMapNewPfns @ 0x1407E9C7C (MiMapNewPfns.c)
 * Callees:
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiInitializeColorBase @ 0x14026DA0C (MiInitializeColorBase.c)
 *     MiCleanupPageTablePages @ 0x14026DA8C (MiCleanupPageTablePages.c)
 *     MiFastReplenishWithAsync @ 0x14026F5B8 (MiFastReplenishWithAsync.c)
 *     MiAsyncSlabReplenish @ 0x14026F604 (MiAsyncSlabReplenish.c)
 *     MiSystemVaTypeToVm @ 0x1402FDE60 (MiSystemVaTypeToVm.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPageTables @ 0x14045B798 (MiDeleteSystemPageTables.c)
 *     MiUpdateChargedWsles @ 0x1404F3904 (MiUpdateChargedWsles.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiGetLargePagesForSystemMapping @ 0x140AA81E4 (MiGetLargePagesForSystemMapping.c)
 */

__int64 __fastcall MiMakeZeroedPageTablesEx(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  __int64 AnyMultiplexedVm; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  unsigned int v21; // r14d
  int v23; // ecx
  int LargePagesForSystemMapping; // eax
  __int64 v26; // [rsp+38h] [rbp-C8h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v31; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 v32; // [rsp+69h] [rbp-97h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  unsigned __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v36)(); // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v37)(); // [rsp+110h] [rbp+10h]
  _BYTE *v38; // [rsp+118h] [rbp+18h]
  _BYTE v39[96]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v40; // [rsp+180h] [rbp+80h]
  __int64 v41; // [rsp+190h] [rbp+90h]
  unsigned int v42; // [rsp+198h] [rbp+98h]
  unsigned int v43; // [rsp+19Ch] [rbp+9Ch]
  int v44; // [rsp+1A0h] [rbp+A0h]
  int v45; // [rsp+1A4h] [rbp+A4h]
  int v46; // [rsp+1B0h] [rbp+B0h]
  char v47[8]; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v48; // [rsp+1C0h] [rbp+C0h]
  __int64 v49; // [rsp+1C8h] [rbp+C8h]

  memset_0(&v30, 0, 0xC0uLL);
  memset_0(v39, 0, 0xB8uLL);
  v9 = v39;
  v10 = 4LL;
  do
  {
    v9[2] = 0LL;
    v9[1] = v9;
    *v9 = v9;
    v9 += 3;
    --v10;
  }
  while ( v10 );
  if ( (a3 & 0x800) != 0 || (a3 & 4) != 0 )
  {
    v11 = 3;
LABEL_5:
    v45 = v11;
LABEL_6:
    a3 &= ~0x80u;
    goto LABEL_7;
  }
  v11 = 2;
  if ( (a3 & 2) != 0 )
    goto LABEL_5;
  v11 = v45;
  if ( (a3 & 0x20) == 0 )
    v11 = 1;
  v45 = v11;
  if ( v11 == 4 )
    return 1LL;
  if ( v11 )
    goto LABEL_6;
LABEL_7:
  v31 = v31 & 0xFFFFFE3F | ((v11 & 7) << 6);
  v12 = (a2 << 25 >> 16) + 4095;
  v13 = a1 << 25 >> 16;
  v29 = v12;
  v42 = a4;
  AnyMultiplexedVm = MiSystemVaTypeToVm(a4);
  if ( !AnyMultiplexedVm )
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(6LL);
  v26 = *((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(AnyMultiplexedVm + 174));
  v40 = v26;
  v15 = -1LL;
  v44 = a3;
  v43 = a5;
  v49 = -1LL;
  if ( (a3 & 0x40) != 0 )
  {
    v16 = 8LL;
    do
    {
      v15 = (v15 << 8) | 0xA;
      --v16;
    }
    while ( v16 );
    v49 = v15;
  }
  else if ( v13 >= 0xFFFFDE0000000000uLL && v13 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL || a4 == 19 )
  {
    v49 = 0LL;
  }
  MiInitializeColorBase(v13, a5, v47);
  v20 = (v48 >> 9) & 0x3F;
  if ( (a3 & 0x80u) != 0 )
  {
    LargePagesForSystemMapping = MiGetLargePagesForSystemMapping(v39, v13, v12);
    if ( LargePagesForSystemMapping >= 0 )
    {
      if ( LargePagesForSystemMapping == 1075380276 )
      {
        LOWORD(a3) = a3 & 0xFF7F;
        v44 &= ~0x80u;
      }
    }
    else if ( (a3 & 0x100) != 0 )
    {
      MiCleanupPageTablePages(v39);
      return 0LL;
    }
  }
  v21 = (a3 & 0x1000) != 0 ? 5 : 1;
  if ( v42 != 3 || (a3 & 0x80u) != 0 )
    goto LABEL_15;
  if ( (MiFlags & 0x400000000LL) != 0 )
  {
    MiFastReplenishWithAsync(*(_QWORD *)(v26 + 16) + 17320LL + 57216LL * v20, ((a2 - a1) >> 3) + 1, v21);
LABEL_15:
    if ( (MiFlags & 0x400000000LL) != 0 )
    {
      v19 = *(_QWORD *)(v26 + 16) + 57216LL * v20;
      v17 = *(_QWORD *)(v19 + 17416);
      v18 = (unsigned int)(4 - v45);
      if ( v17 + **(_QWORD **)(v19 + 17400) < v18 )
      {
        if ( v42 <= 0x13 && (v23 = 528656, _bittest(&v23, v42)) )
          MiAsyncSlabReplenish(v19 + 17320, 0LL, v21);
        else
          MiFastReplenishWithAsync(v19 + 17320, (int)v18, v21);
      }
    }
  }
  v36 = MiCreateSystemPageTable;
  v37 = MiCreateSystemPageTableTail;
  v38 = v39;
  v30 = 40967;
  v34 = v13;
  v35 = v29;
  v33 = AnyMultiplexedVm;
  if ( (a3 & 0x1000) != 0 )
  {
    v32 = 17;
    MiLockWorkingSetSharedAtDpc(AnyMultiplexedVm);
  }
  else
  {
    v32 = MiLockWorkingSetShared(AnyMultiplexedVm, v17, v18, v19);
  }
  MiWalkPageTables(&v30);
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v32);
  if ( (a3 & 0x40) != 0 && v42 != 1 )
    MiUpdateChargedWsles(AnyMultiplexedVm, v41);
  MiCleanupPageTablePages(v39);
  if ( v46 >= 0 )
    return 1LL;
  if ( (a3 & 0x200) == 0 )
    MiDeleteSystemPageTables(AnyMultiplexedVm, a4, v13, v29, 0);
  return 0LL;
}
