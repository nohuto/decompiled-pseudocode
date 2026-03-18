/*
 * XREFs of MiProtectDriverSectionPte @ 0x14065F8C0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiGetSlabPage @ 0x14022BC70 (MiGetSlabPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14022BEA4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiReacquireWalkLocks @ 0x1402B8560 (MiReacquireWalkLocks.c)
 *     MiReleaseWalkLocks @ 0x1402BBAD0 (MiReleaseWalkLocks.c)
 *     KeSetPagePrivilege @ 0x1402CE1B0 (KeSetPagePrivilege.c)
 *     MiCheckSlabPage @ 0x1403234E8 (MiCheckSlabPage.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140344980 (MI_PAGE_TO_FULL_COLOR.c)
 *     MmReleaseLoadLock @ 0x14036D060 (MmReleaseLoadLock.c)
 *     MiAcquireLoadLock @ 0x14036DF38 (MiAcquireLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x14036E408 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x14036E4C0 (MiLockLoaderEntry.c)
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 *     MiWriteValidPteVolatile @ 0x14037C940 (MiWriteValidPteVolatile.c)
 *     MiMarkPfnVerified @ 0x1403F4204 (MiMarkPfnVerified.c)
 *     MiMakeDriverPageStayResident @ 0x1403F48C4 (MiMakeDriverPageStayResident.c)
 *     MiTradeActivePage @ 0x1403FE5A0 (MiTradeActivePage.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiProtectDriverSectionPte(__int64 *a1, volatile signed __int64 *a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  struct _KTHREAD *Lock; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  char *v12; // r9
  __int64 v13; // r15
  ULONG_PTR v14; // r14
  int v15; // ecx
  unsigned int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // r15
  int v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h]
  volatile signed __int64 *v24; // [rsp+48h] [rbp-B8h]
  __int16 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  _BYTE v30[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v31; // [rsp+D8h] [rbp-28h]
  __int64 v32; // [rsp+E0h] [rbp-20h]

  v24 = a2;
  memset_0(&v25, 0, 0x78uLL);
  v6 = 0;
  v22 = 0LL;
  if ( a3 )
    return 0LL;
  v7 = a1[23];
  Lock = 0LL;
  v9 = *(_QWORD *)(v7 + 8);
  v23 = a1[7];
  v10 = (__int64)((_QWORD)a2 << 25) >> 16;
  while ( 1 )
  {
    v11 = *a2;
    if ( (*a2 & 1) != 0 )
      break;
    MiReleaseWalkLocks((__int64)a1);
    if ( *(_DWORD *)v7 == 1 )
    {
      MiUnlockLoaderEntry(v9, 0);
      MmReleaseLoadLock(Lock);
    }
    v12 = 0LL;
    if ( !*(_DWORD *)v7 )
    {
      v25 = 6;
      v12 = (char *)&v25 + 1;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
    }
    v21 = MmAccessFault(0LL, (__int64)((_QWORD)a2 << 25) >> 16, 0, (ULONG_PTR)v12);
    if ( *(_DWORD *)v7 == 1 )
    {
      Lock = MiAcquireLoadLock(0);
      MiLockLoaderEntry(v9, 0);
    }
    MiReacquireWalkLocks((__int64)a1, v23, 0);
    if ( v21 < 0 )
      return 5LL;
  }
  v13 = 48 * (((unsigned __int64)v11 >> 12) & 0xFFFFFFFFFFLL);
  v14 = v13 - 0x220000000000LL;
  v15 = *(_DWORD *)v7;
  if ( !*(_DWORD *)v7 )
  {
    if ( v11 >= 0 )
    {
      *(_DWORD *)(v7 + 24) |= 1u;
      return 5LL;
    }
    if ( *(__int64 *)(v14 + 40) >= 0 && (unsigned int)MiGetPagePrivilege(v13 - 0x220000000000LL, 0, 0LL) )
    {
      *(_DWORD *)(v7 + 24) |= 2u;
      return 5LL;
    }
    goto LABEL_34;
  }
  if ( v15 == 1 )
  {
    MiMakeDriverPageStayResident(v9, a1[4], v10);
    goto LABEL_34;
  }
  if ( v15 != 2 )
  {
    v20 = 0xAAAAAAAAAAAAAAABuLL * (v13 >> 4);
    if ( (int)KeSetPagePrivilege(v20, v10, 0LL, 0x80u) < 0 )
      KeBugCheckEx(0x1Au, 0x902uLL, v14, v10, 0LL);
    MiWriteValidPteVolatile(v24, 1, 0);
    memset_0(v30, 0, 0x68uLL);
    v31 = v20;
    v32 = v10;
    if ( (int)VslpEnterIumSecureMode(2u, 0x103u, 0, (__int64)v30) < 0 )
      KeBugCheckEx(0x1Au, 0x903uLL, v10, 0LL, 0LL);
    MiMarkPfnVerified(v14, 64);
    goto LABEL_34;
  }
  if ( (unsigned __int16)*(_DWORD *)(v14 + 32) != 1
    || (unsigned int)MiGetPfnSlabType(v13 - 0x220000000000LL) != 9
    && (unsigned int)MiCheckSlabPage(v13 - 0x220000000000LL, 1, 4) )
  {
LABEL_34:
    ++*(_QWORD *)(v7 + 16);
    return 0LL;
  }
  v17 = MI_PAGE_TO_FULL_COLOR(0xAAAAAAAAAAAAAAABuLL * (v13 >> 4));
  if ( MiGetSlabPage((__int64)&MiSystemPartition, 1, v17, 0x12u, &v22, 0) != -1 )
  {
    LOBYTE(v6) = (unsigned int)MiGetPfnSlabType(v14) != 9;
    MiTradeActivePage(v14, v19, v10, 2u, v6);
    *(_QWORD *)(v14 + 16) = CLFS_LSN_NULL_EXT;
    MiSetOriginalPtePfnFromFreeList((__int64 *)(v14 + 16));
    MiReleaseFreshPage(v14);
    goto LABEL_34;
  }
  if ( !v22 )
    return 5LL;
  MiReleaseWalkLocks((__int64)a1);
  MiReplenishSlabAllocator(v22, 1uLL, 0, v18);
  MiReacquireWalkLocks((__int64)a1, v23, 0);
  return 2LL;
}
