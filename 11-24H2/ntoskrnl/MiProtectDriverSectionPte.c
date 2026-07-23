/*
 * XREFs of MiProtectDriverSectionPte @ 0x14066C5D0
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140203330 (MiWriteValidPteVolatile.c)
 *     MiReleaseWalkLocks @ 0x14020BAF0 (MiReleaseWalkLocks.c)
 *     MiCheckSlabPage @ 0x14020CE98 (MiCheckSlabPage.c)
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 *     MiGetSlabPage @ 0x14021CE24 (MiGetSlabPage.c)
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiReacquireWalkLocks @ 0x140246140 (MiReacquireWalkLocks.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x140250420 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiAcquireLoadLock @ 0x1402BBB18 (MiAcquireLoadLock.c)
 *     MiUnlockLoaderEntry @ 0x1402BBFE8 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x1402BC0A0 (MiLockLoaderEntry.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14033E678 (MiSetOriginalPtePfnFromFreeList.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 *     MiMakeDriverPageStayResident @ 0x140429E6C (MiMakeDriverPageStayResident.c)
 *     KeSetPagePrivilege @ 0x140492188 (KeSetPagePrivilege.c)
 *     MmReleaseLoadLock @ 0x1404C2E10 (MmReleaseLoadLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiProtectDriverSectionPte(_QWORD *a1, volatile signed __int64 *a2, int a3)
{
  unsigned int v6; // edi
  int *v7; // rbx
  struct _KTHREAD *Lock; // r15
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  char *v12; // r9
  __int64 v13; // r9
  __int64 v14; // r15
  ULONG_PTR v15; // r14
  int v16; // ecx
  unsigned int v18; // eax
  __int64 v19; // r9
  __int64 v20; // r10
  __int64 v21; // r15
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h]
  volatile signed __int64 *v27; // [rsp+48h] [rbp-B8h]
  __int16 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  _BYTE v33[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-28h]
  __int64 v35; // [rsp+E0h] [rbp-20h]

  v27 = a2;
  memset_0(&v28, 0, 0x78uLL);
  v6 = 0;
  v25 = 0LL;
  if ( a3 )
    return 0LL;
  v7 = (int *)a1[23];
  Lock = 0LL;
  v9 = *((_QWORD *)v7 + 1);
  v26 = a1[7];
  v10 = (__int64)((_QWORD)a2 << 25) >> 16;
  while ( 1 )
  {
    v11 = *a2;
    if ( (*a2 & 1) != 0 )
      break;
    MiReleaseWalkLocks((__int64)a1);
    if ( *v7 == 1 )
    {
      MiUnlockLoaderEntry(v9, 0);
      MmReleaseLoadLock(Lock);
    }
    v12 = 0LL;
    if ( !*v7 )
    {
      v28 = 6;
      v12 = (char *)&v28 + 1;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
    }
    v24 = MmAccessFault(0LL, (__int64)((_QWORD)a2 << 25) >> 16, 0, (ULONG_PTR)v12);
    if ( *v7 == 1 )
    {
      Lock = MiAcquireLoadLock(0);
      MiLockLoaderEntry(v9, 0);
    }
    MiReacquireWalkLocks((__int64)a1, v26, 0LL, v13);
    if ( v24 < 0 )
      return 5LL;
  }
  v14 = 48 * (((unsigned __int64)v11 >> 12) & 0xFFFFFFFFFFLL);
  v15 = v14 - 0x220000000000LL;
  v16 = *v7;
  if ( !*v7 )
  {
    if ( v11 >= 0 )
    {
      v7[6] |= 1u;
      return 5LL;
    }
    if ( *(__int64 *)(v15 + 40) >= 0 && (unsigned int)MiGetPagePrivilege(v14 - 0x220000000000LL, 0, 0LL) )
    {
      v7[6] |= 2u;
      return 5LL;
    }
    goto LABEL_34;
  }
  if ( v16 == 1 )
  {
    MiMakeDriverPageStayResident(v9, a1[4], v10);
    goto LABEL_34;
  }
  if ( v16 != 2 )
  {
    v21 = 0xAAAAAAAAAAAAAAABuLL * (v14 >> 4);
    if ( (int)KeSetPagePrivilege(v21, v10, 0LL, 0x80u) < 0 )
      KeBugCheckEx(0x1Au, 0x902uLL, v15, v10, 0LL);
    MiWriteValidPteVolatile(v27, 1, 0);
    memset_0(v33, 0, 0x68uLL);
    v34 = v21;
    v35 = v10;
    if ( (int)VslpEnterIumSecureMode(2u, 0x103u, 0, (__int64)v33) < 0 )
      KeBugCheckEx(0x1Au, 0x903uLL, v10, 0LL, 0LL);
    MiMarkPfnVerified(v15, 64LL, v22, v23);
    goto LABEL_34;
  }
  if ( (unsigned __int16)*(_DWORD *)(v15 + 32) != 1
    || (unsigned int)MiGetPfnSlabType(v14 - 0x220000000000LL) != 9
    && (unsigned int)MiCheckSlabPage(v14 - 0x220000000000LL, 1, 4) )
  {
LABEL_34:
    ++*((_QWORD *)v7 + 2);
    return 0LL;
  }
  v18 = MI_PAGE_TO_FULL_COLOR(0xAAAAAAAAAAAAAAABuLL * (v14 >> 4));
  if ( MiGetSlabPage((__int64)&MiSystemPartition, 1, v18, 0x12u, &v25, 0) != -1 )
  {
    LOBYTE(v6) = (unsigned int)MiGetPfnSlabType(v15) != 9;
    MiTradeActivePage(v15, v20, v10, 2u, v6);
    *(_QWORD *)(v15 + 16) = CLFS_LSN_NULL_EXT;
    MiSetOriginalPtePfnFromFreeList((__int64 *)(v15 + 16));
    MiReleaseFreshPage(v15);
    goto LABEL_34;
  }
  if ( !v25 )
    return 5LL;
  MiReleaseWalkLocks((__int64)a1);
  MiReplenishSlabAllocator(v25, 1uLL, 0);
  MiReacquireWalkLocks((__int64)a1, v26, 0LL, v19);
  return 2LL;
}
