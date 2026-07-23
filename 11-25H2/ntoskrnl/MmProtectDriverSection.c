/*
 * XREFs of MmProtectDriverSection @ 0x14065FC80
 * Callers:
 *     PsInitializeWin32kServiceTable @ 0x140C234C0 (PsInitializeWin32kServiceTable.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiUnlockLoadedDataTableEntry @ 0x14036DE44 (MiUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x14036DE9C (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1403F4388 (MiMakeDriverPagesPrivate.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiSnapDriverRange @ 0x140A39B68 (MiSnapDriverRange.c)
 */

__int64 __fastcall MmProtectDriverSection(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  PVOID v9; // rbx
  PVOID v10; // rt1
  unsigned int v11; // ebx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r15
  PVOID v14; // rax
  volatile signed __int64 *v15; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v16; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h]
  __int64 v18; // [rsp+58h] [rbp-B0h]
  ULONG Size[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  int v21[2]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int8 v22; // [rsp+81h] [rbp-87h]
  char *AnyMultiplexedVm; // [rsp+98h] [rbp-70h]
  unsigned __int64 v24; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v25; // [rsp+A8h] [rbp-60h]
  __int64 (__fastcall *v26)(__int64 *, volatile signed __int64 *, int); // [rsp+120h] [rbp+18h]
  __int128 *v27; // [rsp+130h] [rbp+28h]
  char v28[8]; // [rsp+138h] [rbp+30h] BYREF
  PVOID v29; // [rsp+140h] [rbp+38h]

  v15 = 0LL;
  v20 = 0LL;
  memset_0(v21, 0, 0xC0uLL);
  Size[0] = 0;
  v16 = 0LL;
  v17 = 0LL;
  LODWORD(v18) = 0;
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
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v9) )
    goto LABEL_18;
  v10 = *(PVOID *)&KeNumberProcessorsGroup0[9];
  if ( v9 == v10 || v9 == PsHalImageBase )
    goto LABEL_18;
  if ( (*(_DWORD *)(v8 + 104) & 0x80000) == 0 )
  {
    MiSnapDriverRange(v8, 0, 64, BugCheckParameter2, (__int64)&v15, (__int64)&v20);
    if ( !v15 )
    {
      v11 = -1073741503;
      goto LABEL_19;
    }
    v12 = ((__int64)(v20 << 25) >> 16) + 4095;
    v13 = (__int64)((_QWORD)v15 << 25) >> 16;
    v14 = RtlImageDirectoryEntryToData(*(PVOID *)(v8 + 48), 1u, 0xCu, Size);
    if ( !v14 || !Size[0] || (unsigned __int64)v14 > v12 || (unsigned __int64)v14 + Size[0] - 1 < v13 )
    {
      DWORD1(v16) = 0;
      v26 = MiProtectDriverSectionPte;
      v17 = 0LL;
      v27 = &v16;
      v18 = 0LL;
      *((_QWORD *)&v16 + 1) = v8;
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
      v24 = v13;
      v25 = v12;
      v21[0] = 39;
      v22 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
      MiWalkPageTables(v21);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v22);
      if ( v17 == (unsigned int)((__int64)(v20 - (_QWORD)v15) >> 3) + 1 )
      {
        if ( (a3 & 1) == 0 )
        {
          memset_0(v28, 0, 0x68uLL);
          v29 = v9;
          if ( (int)VslpEnterIumSecureMode(2u, 0x2Eu, 0, (__int64)v28) < 0 )
            KeBugCheckEx(0x1Au, 0x901uLL, (ULONG_PTR)v9, 0LL, 0LL);
        }
        MiMakeDriverPagesPrivate(v8, v15, v20, 0);
        *(_QWORD *)&v16 = 1LL;
        v17 = 0LL;
        v18 = 0LL;
        *((_QWORD *)&v16 + 1) = v8;
        v22 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        MiWalkPageTables(v21);
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v22);
        MiSetSystemCodeProtection(v8, (unsigned __int64)v15, v20, 1u, 0);
        if ( (dword_140E389C4 & 8) != 0 )
        {
          *(_QWORD *)&v16 = 2LL;
          v17 = 0LL;
          v18 = 0LL;
          *((_QWORD *)&v16 + 1) = v8;
          v22 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
          MiWalkPageTables(v21);
          MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v22);
        }
        *(_QWORD *)&v16 = 3LL;
        v17 = 0LL;
        v18 = 0LL;
        *((_QWORD *)&v16 + 1) = v8;
        v22 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        MiWalkPageTables(v21);
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v22);
        *(_DWORD *)(v8 + 184) |= 0x1000u;
        v11 = 0;
      }
      else if ( (v18 & 1) != 0 )
      {
        v11 = -1073741755;
      }
      else
      {
        v11 = (v18 & 2) != 0 ? -1073741791 : -1073741819;
      }
      goto LABEL_19;
    }
LABEL_18:
    v11 = -1073741637;
    goto LABEL_19;
  }
  v11 = -1073741757;
LABEL_19:
  if ( Size[1] )
    MiUnlockLoadedDataTableEntry(v8, 1);
  return v11;
}
