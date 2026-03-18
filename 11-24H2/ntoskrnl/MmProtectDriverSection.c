/*
 * XREFs of MmProtectDriverSection @ 0x14066B7C0
 * Callers:
 *     PsInitializeWin32kServiceTable @ 0x140C3478C (PsInitializeWin32kServiceTable.c)
 * Callees:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     MiUnlockLoadedDataTableEntry @ 0x1402C6EA4 (MiUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402C6EFC (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140436EA8 (MiMakeDriverPagesPrivate.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiSnapDriverRange @ 0x140A3DE88 (MiSnapDriverRange.c)
 */

__int64 __fastcall MmProtectDriverSection(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned int v10; // ebx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rax
  volatile signed __int64 *v14; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h]
  __int64 v17; // [rsp+58h] [rbp-B0h]
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v20[2]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int8 v21; // [rsp+81h] [rbp-87h]
  char *AnyMultiplexedVm; // [rsp+98h] [rbp-70h]
  unsigned __int64 v23; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v24; // [rsp+A8h] [rbp-60h]
  __int64 (__fastcall *v25)(__int64 *, volatile signed __int64 *, int); // [rsp+120h] [rbp+18h]
  __int128 *v26; // [rsp+130h] [rbp+28h]
  _BYTE v27[8]; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int64 v28; // [rsp+140h] [rbp+38h]

  v14 = 0LL;
  v19 = 0LL;
  memset_0(v20, 0, 0xC0uLL);
  v18 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  LODWORD(v17) = 0;
  if ( (MiFlags & 0x4000) == 0 )
    return 3221225860LL;
  if ( (a3 & 0xFFFFFFFE) != 0 || a2 )
    return 3221225485LL;
  v7 = MiLockLoadedDataTableEntryIfNecessary(BugCheckParameter2, (_DWORD *)&v18 + 1);
  v8 = v7;
  if ( !v7 )
    KeBugCheckEx(0x1Au, 0x900uLL, BugCheckParameter2, 0LL, 0LL);
  v9 = *(_QWORD *)(v7 + 48);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v9) || v9 == PsNtosImageBase || v9 == PsHalImageBase )
    goto LABEL_18;
  if ( (*(_DWORD *)(v8 + 104) & 0x80000) == 0 )
  {
    MiSnapDriverRange(v8, 0, 64, BugCheckParameter2, (__int64)&v14, (__int64)&v19);
    if ( !v14 )
    {
      v10 = -1073741503;
      goto LABEL_19;
    }
    v11 = ((__int64)(v19 << 25) >> 16) + 4095;
    v12 = (__int64)((_QWORD)v14 << 25) >> 16;
    v13 = RtlImageDirectoryEntryToData(*(_QWORD *)(v8 + 48), 1, 0xCu, &v18);
    if ( !v13 || !(_DWORD)v18 || v13 > v11 || v13 + (unsigned int)(v18 - 1) < v12 )
    {
      DWORD1(v15) = 0;
      v25 = MiProtectDriverSectionPte;
      v16 = 0LL;
      v26 = &v15;
      v17 = 0LL;
      *((_QWORD *)&v15 + 1) = v8;
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
      v23 = v12;
      v24 = v11;
      v20[0] = 39;
      v21 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
      MiWalkPageTables((__int64)v20);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v21);
      if ( v16 == (unsigned int)((__int64)(v19 - (_QWORD)v14) >> 3) + 1 )
      {
        if ( (a3 & 1) == 0 )
        {
          memset_0(v27, 0, 0x68uLL);
          v28 = v9;
          if ( (int)VslpEnterIumSecureMode(2u, 46LL, 0, (__int64)v27) < 0 )
            KeBugCheckEx(0x1Au, 0x901uLL, v9, 0LL, 0LL);
        }
        MiMakeDriverPagesPrivate(v8, v14, v19, 0);
        *(_QWORD *)&v15 = 1LL;
        v16 = 0LL;
        v17 = 0LL;
        *((_QWORD *)&v15 + 1) = v8;
        v21 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        MiWalkPageTables((__int64)v20);
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v21);
        MiSetSystemCodeProtection(v8, (unsigned __int64)v14, v19, 1u, 0);
        if ( (dword_140E38C04 & 8) != 0 )
        {
          *(_QWORD *)&v15 = 2LL;
          v16 = 0LL;
          v17 = 0LL;
          *((_QWORD *)&v15 + 1) = v8;
          v21 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
          MiWalkPageTables((__int64)v20);
          MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v21);
        }
        *(_QWORD *)&v15 = 3LL;
        v16 = 0LL;
        v17 = 0LL;
        *((_QWORD *)&v15 + 1) = v8;
        v21 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        MiWalkPageTables((__int64)v20);
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v21);
        *(_DWORD *)(v8 + 184) |= 0x1000u;
        v10 = 0;
      }
      else if ( (v17 & 1) != 0 )
      {
        v10 = -1073741755;
      }
      else
      {
        v10 = (v17 & 2) != 0 ? -1073741791 : -1073741819;
      }
      goto LABEL_19;
    }
LABEL_18:
    v10 = -1073741637;
    goto LABEL_19;
  }
  v10 = -1073741757;
LABEL_19:
  if ( HIDWORD(v18) )
    MiUnlockLoadedDataTableEntry(v8, 1);
  return v10;
}
