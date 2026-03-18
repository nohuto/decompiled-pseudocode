/*
 * XREFs of MiProtectDriverSectionPte @ 0x14066B400
 * Callers:
 *     <none>
 * Callees:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiReacquireWalkLocks @ 0x1402193F0 (MiReacquireWalkLocks.c)
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x1402236D0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiWriteValidPteVolatile @ 0x140232800 (MiWriteValidPteVolatile.c)
 *     MiCheckSlabPage @ 0x140244708 (MiCheckSlabPage.c)
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     MiAcquireLoadLock @ 0x1402C6F98 (MiAcquireLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x1402C7468 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402C7520 (MiLockLoaderEntry.c)
 *     MiReleaseWalkLocks @ 0x1402E37F0 (MiReleaseWalkLocks.c)
 *     MiGetSlabPage @ 0x1402F3934 (MiGetSlabPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402F6568 (MiSetOriginalPtePfnFromFreeList.c)
 *     KeSetPagePrivilege @ 0x14036C260 (KeSetPagePrivilege.c)
 *     MiTradeActivePage @ 0x1403A0758 (MiTradeActivePage.c)
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
 *     MiMarkPfnVerified @ 0x140436D24 (MiMarkPfnVerified.c)
 *     MiMakeDriverPageStayResident @ 0x1404373EC (MiMakeDriverPageStayResident.c)
 *     MmReleaseLoadLock @ 0x1404C9960 (MmReleaseLoadLock.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v18; // r10
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r15
  int v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-C0h]
  volatile signed __int64 *v25; // [rsp+48h] [rbp-B8h]
  __int16 v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h]
  __int64 v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  _BYTE v31[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-28h]
  __int64 v33; // [rsp+E0h] [rbp-20h]

  v25 = a2;
  memset_0(&v26, 0, 0x78uLL);
  v6 = 0;
  v23 = 0LL;
  if ( a3 )
    return 0LL;
  v7 = a1[23];
  Lock = 0LL;
  v9 = *(_QWORD *)(v7 + 8);
  v24 = a1[7];
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
      v26 = 6;
      v12 = (char *)&v26 + 1;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
    }
    v22 = MmAccessFault(0LL, (__int64)((_QWORD)a2 << 25) >> 16, 0, (ULONG_PTR)v12);
    if ( *(_DWORD *)v7 == 1 )
    {
      Lock = MiAcquireLoadLock(0);
      MiLockLoaderEntry(v9, 0);
    }
    MiReacquireWalkLocks((__int64)a1, v24, 0LL);
    if ( v22 < 0 )
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
    v21 = 0xAAAAAAAAAAAAAAABuLL * (v13 >> 4);
    if ( (int)KeSetPagePrivilege(v21, v10, 0LL, 0x80u) < 0 )
      KeBugCheckEx(0x1Au, 0x902uLL, v14, v10, 0LL);
    MiWriteValidPteVolatile(v25, 1, 0);
    memset_0(v31, 0, 0x68uLL);
    v32 = v21;
    v33 = v10;
    if ( (int)VslpEnterIumSecureMode(2u, 259LL, 0, (__int64)v31) < 0 )
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
  if ( MiGetSlabPage((__int64)&MiSystemPartition, 1, v17, 0x12u, &v23, 0) != -1 )
  {
    LOBYTE(v6) = (unsigned int)MiGetPfnSlabType(v14) != 9;
    MiTradeActivePage(v14, v18, v10, 2u, v6);
    *(_QWORD *)(v14 + 16) = CLFS_LSN_NULL_EXT;
    MiSetOriginalPtePfnFromFreeList((__int64 *)(v14 + 16));
    MiReleaseFreshPage(v14, v19, v20);
    goto LABEL_34;
  }
  if ( !v23 )
    return 5LL;
  MiReleaseWalkLocks((__int64)a1);
  MiReplenishSlabAllocator(v23, 1uLL, 0);
  MiReacquireWalkLocks((__int64)a1, v24, 0LL);
  return 2LL;
}
