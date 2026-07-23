/*
 * XREFs of MmProtectDriverSection @ 0x14066C990
 * Callers:
 *     PsInitializeWin32kServiceTable @ 0x140C368CC (PsInitializeWin32kServiceTable.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockLoadedDataTableEntry @ 0x1402BBA24 (MiUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402BBA7C (MiLockLoadedDataTableEntryIfNecessary.c)
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiSnapDriverRange @ 0x140A33798 (MiSnapDriverRange.c)
 */

__int64 __fastcall MmProtectDriverSection(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  PVOID v9; // rbx
  unsigned int v10; // ebx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r15
  PVOID v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+58h] [rbp-B0h]
  ULONG Size[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  int v29[2]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int8 v30; // [rsp+81h] [rbp-87h]
  char *AnyMultiplexedVm; // [rsp+98h] [rbp-70h]
  unsigned __int64 v32; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v33; // [rsp+A8h] [rbp-60h]
  __int64 (__fastcall *v34)(_QWORD *, volatile signed __int64 *, int); // [rsp+120h] [rbp+18h]
  __int128 *v35; // [rsp+130h] [rbp+28h]
  _BYTE v36[8]; // [rsp+138h] [rbp+30h] BYREF
  PVOID v37; // [rsp+140h] [rbp+38h]

  v23 = 0LL;
  v28 = 0LL;
  memset_0(v29, 0, 0xC0uLL);
  Size[0] = 0;
  v24 = 0LL;
  v25 = 0LL;
  LODWORD(v26) = 0;
  Size[1] = 0;
  if ( (MiFlags & 0x4000) == 0 )
    return 3221225860LL;
  if ( (a3 & 0xFFFFFFFE) != 0 || a2 )
    return 3221225485LL;
  v7 = MiLockLoadedDataTableEntryIfNecessary(BugCheckParameter2, &Size[1]);
  v8 = v7;
  if ( !v7 )
    KeBugCheckEx(0x1Au, 0x900uLL, BugCheckParameter2, 0LL, 0LL);
  v9 = *(PVOID *)(v7 + 48);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v9) || v9 == PsNtosImageBase || v9 == PsHalImageBase )
    goto LABEL_18;
  if ( (*(_DWORD *)(v8 + 104) & 0x80000) == 0 )
  {
    MiSnapDriverRange(v8, 0, 64, BugCheckParameter2, (__int64)&v23, (__int64)&v28);
    if ( !v23 )
    {
      v10 = -1073741503;
      goto LABEL_19;
    }
    v11 = ((__int64)(v28 << 25) >> 16) + 4095;
    v12 = (__int64)(v23 << 25) >> 16;
    v13 = RtlImageDirectoryEntryToData(*(PVOID *)(v8 + 48), 1u, 0xCu, Size);
    if ( !v13 || !Size[0] || (unsigned __int64)v13 > v11 || (unsigned __int64)v13 + Size[0] - 1 < v12 )
    {
      DWORD1(v24) = 0;
      v34 = MiProtectDriverSectionPte;
      v25 = 0LL;
      v35 = &v24;
      v26 = 0LL;
      *((_QWORD *)&v24 + 1) = v8;
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
      v32 = v12;
      v33 = v11;
      v29[0] = 39;
      v30 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v14, v15, v16);
      MiWalkPageTables(v29);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v30);
      if ( v25 == (unsigned int)((__int64)(v28 - v23) >> 3) + 1 )
      {
        if ( (a3 & 1) == 0 )
        {
          memset_0(v36, 0, 0x68uLL);
          v37 = v9;
          if ( (int)VslpEnterIumSecureMode(2u, 0x2Eu, 0, (__int64)v36) < 0 )
            KeBugCheckEx(0x1Au, 0x901uLL, (ULONG_PTR)v9, 0LL, 0LL);
        }
        MiMakeDriverPagesPrivate(v8, v23, v28, 0LL);
        *(_QWORD *)&v24 = 1LL;
        v25 = 0LL;
        v26 = 0LL;
        *((_QWORD *)&v24 + 1) = v8;
        v30 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v17, v18, v19);
        MiWalkPageTables(v29);
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v30);
        MiSetSystemCodeProtection(v8, v23, v28, 1u, 0);
        if ( (dword_140E38D44 & 8) != 0 )
        {
          *(_QWORD *)&v24 = 2LL;
          v25 = 0LL;
          v26 = 0LL;
          *((_QWORD *)&v24 + 1) = v8;
          v30 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v20, v21, v22);
          MiWalkPageTables(v29);
          MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v30);
        }
        *(_QWORD *)&v24 = 3LL;
        v25 = 0LL;
        v26 = 0LL;
        *((_QWORD *)&v24 + 1) = v8;
        v30 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v20, v21, v22);
        MiWalkPageTables(v29);
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v30);
        *(_DWORD *)(v8 + 184) |= 0x1000u;
        v10 = 0;
      }
      else if ( (v26 & 1) != 0 )
      {
        v10 = -1073741755;
      }
      else
      {
        v10 = (v26 & 2) != 0 ? -1073741791 : -1073741819;
      }
      goto LABEL_19;
    }
LABEL_18:
    v10 = -1073741637;
    goto LABEL_19;
  }
  v10 = -1073741757;
LABEL_19:
  if ( Size[1] )
    MiUnlockLoadedDataTableEntry(v8, 1);
  return v10;
}
