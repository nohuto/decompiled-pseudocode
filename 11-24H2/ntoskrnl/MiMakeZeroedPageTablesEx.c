/*
 * XREFs of MiMakeZeroedPageTablesEx @ 0x1403A62E0
 * Callers:
 *     MiMakeZeroedPageTables @ 0x1403A582C (MiMakeZeroedPageTables.c)
 *     MiCreatePoolPageTables @ 0x1403A6278 (MiCreatePoolPageTables.c)
 *     MiGetPageTablesForLargeMap @ 0x1403A6BE4 (MiGetPageTablesForLargeMap.c)
 *     MmKasanCommitRegion @ 0x140679BA8 (MmKasanCommitRegion.c)
 *     MiMapNewPfns @ 0x1407E96AC (MiMapNewPfns.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x14022ABF0 (MiSystemVaTypeToVm.c)
 *     MiDeleteSystemPageTables @ 0x140234368 (MiDeleteSystemPageTables.c)
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiInitializeColorBase @ 0x1403A671C (MiInitializeColorBase.c)
 *     MiCleanupPageTablePages @ 0x1403A679C (MiCleanupPageTablePages.c)
 *     MiAsyncSlabReplenish @ 0x1404141C0 (MiAsyncSlabReplenish.c)
 *     MiFastReplenishWithAsync @ 0x140414728 (MiFastReplenishWithAsync.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiUpdateChargedWsles @ 0x1404F6004 (MiUpdateChargedWsles.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiGetLargePagesForSystemMapping @ 0x140AAD164 (MiGetLargePagesForSystemMapping.c)
 */

__int64 __fastcall MiMakeZeroedPageTablesEx(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  struct _LIST_ENTRY **AnyMultiplexedVm; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // r14d
  __int64 v19; // r9
  int v21; // ecx
  int LargePagesForSystemMapping; // eax
  __int64 v24; // [rsp+38h] [rbp-C8h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v29; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 v30; // [rsp+69h] [rbp-97h]
  struct _LIST_ENTRY **v31; // [rsp+80h] [rbp-80h]
  unsigned __int64 v32; // [rsp+88h] [rbp-78h]
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v34)(__int64, unsigned __int64 *, unsigned int); // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v35)(); // [rsp+110h] [rbp+10h]
  _BYTE *v36; // [rsp+118h] [rbp+18h]
  _BYTE v37[96]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v38; // [rsp+180h] [rbp+80h]
  __int64 v39; // [rsp+190h] [rbp+90h]
  unsigned int v40; // [rsp+198h] [rbp+98h]
  unsigned int v41; // [rsp+19Ch] [rbp+9Ch]
  int v42; // [rsp+1A0h] [rbp+A0h]
  int v43; // [rsp+1A4h] [rbp+A4h]
  int v44; // [rsp+1B0h] [rbp+B0h]
  _BYTE v45[8]; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v46; // [rsp+1C0h] [rbp+C0h]
  __int64 v47; // [rsp+1C8h] [rbp+C8h]

  memset_0(&v28, 0, 0xC0uLL);
  memset_0(v37, 0, 0xB8uLL);
  v9 = v37;
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
    v43 = v11;
LABEL_6:
    a3 &= ~0x80u;
    goto LABEL_7;
  }
  v11 = 2;
  if ( (a3 & 2) != 0 )
    goto LABEL_5;
  v11 = v43;
  if ( (a3 & 0x20) == 0 )
    v11 = 1;
  v43 = v11;
  if ( v11 == 4 )
    return 1LL;
  if ( v11 )
    goto LABEL_6;
LABEL_7:
  v29 = v29 & 0xFFFFFE3F | ((v11 & 7) << 6);
  v12 = (a2 << 25 >> 16) + 4095;
  v13 = a1 << 25 >> 16;
  v27 = v12;
  v40 = a4;
  AnyMultiplexedVm = MiSystemVaTypeToVm(a4);
  if ( !AnyMultiplexedVm )
    AnyMultiplexedVm = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(6LL);
  v24 = *((_QWORD *)qword_140E2FF88 + *((unsigned __int16 *)AnyMultiplexedVm + 87));
  v38 = v24;
  v15 = -1LL;
  v42 = a3;
  v41 = a5;
  v47 = -1LL;
  if ( (a3 & 0x40) != 0 )
  {
    v16 = 8LL;
    do
    {
      v15 = (v15 << 8) | 0xA;
      --v16;
    }
    while ( v16 );
    v47 = v15;
  }
  else if ( v13 >= 0xFFFFDE0000000000uLL && v13 < 48 * qword_140E2DBE0 - 0x21FFFFFFFFD0LL || a4 == 19 )
  {
    v47 = 0LL;
  }
  MiInitializeColorBase(v13, a5, v45);
  v17 = (v46 >> 9) & 0x3F;
  if ( (a3 & 0x80u) != 0 )
  {
    LargePagesForSystemMapping = MiGetLargePagesForSystemMapping(v37, v13, v12);
    if ( LargePagesForSystemMapping >= 0 )
    {
      if ( LargePagesForSystemMapping == 1075380276 )
      {
        LOWORD(a3) = a3 & 0xFF7F;
        v42 &= ~0x80u;
      }
    }
    else if ( (a3 & 0x100) != 0 )
    {
      MiCleanupPageTablePages(v37);
      return 0LL;
    }
  }
  v18 = (a3 & 0x1000) != 0 ? 5 : 1;
  if ( v40 != 3 || (a3 & 0x80u) != 0 )
    goto LABEL_15;
  if ( (MiFlags & 0x400000000LL) != 0 )
  {
    MiFastReplenishWithAsync(*(_QWORD *)(v24 + 16) + 17320LL + 57216LL * v17, ((a2 - a1) >> 3) + 1, v18);
LABEL_15:
    if ( (MiFlags & 0x400000000LL) != 0 )
    {
      v19 = *(_QWORD *)(v24 + 16) + 57216LL * v17;
      if ( *(_QWORD *)(v19 + 17416) + **(_QWORD **)(v19 + 17400) < (unsigned __int64)(unsigned int)(4 - v43) )
      {
        if ( v40 <= 0x13 && (v21 = 528656, _bittest(&v21, v40)) )
          MiAsyncSlabReplenish(v19 + 17320, 0LL, v18);
        else
          MiFastReplenishWithAsync(v19 + 17320, 4 - v43, v18);
      }
    }
  }
  v34 = MiCreateSystemPageTable;
  v35 = MiCreateSystemPageTableTail;
  v36 = v37;
  v28 = 40967;
  v32 = v13;
  v33 = v27;
  v31 = AnyMultiplexedVm;
  if ( (a3 & 0x1000) != 0 )
  {
    v30 = 17;
    MiLockWorkingSetSharedAtDpc((__int64)AnyMultiplexedVm);
  }
  else
  {
    v30 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  }
  MiWalkPageTables((__int64)&v28);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v30);
  if ( (a3 & 0x40) != 0 && v40 != 1 )
    MiUpdateChargedWsles(AnyMultiplexedVm, v39);
  MiCleanupPageTablePages(v37);
  if ( v44 >= 0 )
    return 1LL;
  if ( (a3 & 0x200) == 0 )
    MiDeleteSystemPageTables((__int64)AnyMultiplexedVm, a4, v13, v27, 0);
  return 0LL;
}
