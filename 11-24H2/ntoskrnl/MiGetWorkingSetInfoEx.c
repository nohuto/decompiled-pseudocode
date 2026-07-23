/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x14025E8F0
 * Callers:
 *     MiGetWorkingSetInfo @ 0x14025E748 (MiGetWorkingSetInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x1407B0EE0 (EtwpEnumerateWorkingSet.c)
 *     MmLogSystemShareablePfnInfo @ 0x1407F8804 (MmLogSystemShareablePfnInfo.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  int v12; // r12d
  int v13; // eax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+40h] [rbp-C0h]
  int v23[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v24; // [rsp+59h] [rbp-A7h]
  __int64 v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v27)(_QWORD, _QWORD, _QWORD); // [rsp+F8h] [rbp-8h]
  __int128 *v28; // [rsp+108h] [rbp+8h]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp+10h] BYREF

  v22 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v20 = 0LL;
  v21 = 0LL;
  memset_0(v23, 0, 0xC0uLL);
  v11 = 0LL;
  v12 = 0;
  if ( a2 < 0 )
  {
    v13 = 1;
    if ( (a2 & 0x40000000) != 0 )
      v13 = 3;
    LODWORD(v20) = v13;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
LABEL_9:
    v26 = -1LL;
    v27 = MiQueryLeafPte;
    v23[0] = 65542;
    v28 = &v20;
    v24 = MiLockWorkingSetShared(a1, v8, v9, v10);
    if ( v11 && (*(_DWORD *)(v11 + 500) & 0x20) != 0 )
    {
      v17 = -1073741558;
      goto LABEL_22;
    }
    v14 = *(_QWORD *)(a1 + 128);
    if ( a2 >= 0 )
    {
      v14 -= *(_QWORD *)(a1 + 136);
      if ( !v14 )
        goto LABEL_28;
      if ( a4 < 0x30 )
      {
LABEL_25:
        v19 = *(_QWORD *)(a1 + 128);
        v17 = -1073741820;
        if ( a2 >= 0 )
          a3[1] = v19 - *(_QWORD *)(a1 + 136);
        else
          *a3 = v19;
LABEL_22:
        MiUnlockWorkingSetShared(a1, v24);
        if ( v12 )
          KiUnstackDetachProcess(&ApcState, 0LL);
        return v17;
      }
      v15 = 2LL;
      v16 = (a4 - 48) >> 5;
    }
    else
    {
      if ( !v14 )
      {
LABEL_20:
        *a3 = v21;
LABEL_21:
        v17 = 0;
        goto LABEL_22;
      }
      if ( a4 < 0x10 )
        goto LABEL_25;
      v15 = 1LL;
      v16 = (a4 - 16) >> 3;
    }
    if ( v14 <= v16 + 1 )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
        v23[0] |= 1u;
      v25 = a1;
      *((_QWORD *)&v21 + 1) = v16 + 1;
      *((_QWORD *)&v20 + 1) = &a3[v15];
      v22 = v11;
      if ( (unsigned int)MiWalkPageTables(v23) != 5 )
      {
        if ( a2 < 0 )
          goto LABEL_20;
LABEL_28:
        a3[1] = v21;
        goto LABEL_21;
      }
    }
    goto LABEL_25;
  }
  v11 = a1 - 1024;
  if ( (PVOID)(a1 - 1024) != PsIdleProcess )
  {
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v11 )
    {
      KeStackAttachProcess((PRKPROCESS)(a1 - 1024), &ApcState);
      v12 = 1;
    }
    goto LABEL_9;
  }
  if ( a2 >= 0 )
    a3[1] = 0LL;
  else
    *a3 = 0LL;
  return 0LL;
}
