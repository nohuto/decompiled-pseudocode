/*
 * XREFs of MiGetWorkingSetInfoEx @ 0x1402D437C
 * Callers:
 *     MiGetWorkingSetInfo @ 0x1402D41D4 (MiGetWorkingSetInfo.c)
 *     EtwpEnumerateWorkingSet @ 0x1407A16C0 (EtwpEnumerateWorkingSet.c)
 *     MmLogSystemShareablePfnInfo @ 0x1407E8204 (MmLogSystemShareablePfnInfo.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiGetWorkingSetInfoEx(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4)
{
  __int64 v8; // rbx
  int v9; // r12d
  int v10; // eax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v18; // [rsp+30h] [rbp-D0h]
  __int64 v19; // [rsp+40h] [rbp-C0h]
  int v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v21; // [rsp+59h] [rbp-A7h]
  __int64 v22; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v24)(_QWORD, _QWORD, _QWORD); // [rsp+F8h] [rbp-8h]
  __int128 *v25; // [rsp+108h] [rbp+8h]
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp+10h] BYREF

  v19 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v17 = 0LL;
  v18 = 0LL;
  memset_0(v20, 0, 0xC0uLL);
  v8 = 0LL;
  v9 = 0;
  if ( a2 < 0 )
  {
    v10 = 1;
    if ( (a2 & 0x40000000) != 0 )
      v10 = 3;
    LODWORD(v17) = v10;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 )
  {
LABEL_9:
    v23 = -1LL;
    v24 = MiQueryLeafPte;
    v20[0] = 65542;
    v25 = &v17;
    v21 = MiLockWorkingSetShared(a1);
    if ( v8 && (*(_DWORD *)(v8 + 500) & 0x20) != 0 )
    {
      v14 = -1073741558;
      goto LABEL_22;
    }
    v11 = *(_QWORD *)(a1 + 128);
    if ( a2 >= 0 )
    {
      v11 -= *(_QWORD *)(a1 + 136);
      if ( !v11 )
        goto LABEL_28;
      if ( a4 < 0x30 )
      {
LABEL_25:
        v16 = *(_QWORD *)(a1 + 128);
        v14 = -1073741820;
        if ( a2 >= 0 )
          a3[1] = v16 - *(_QWORD *)(a1 + 136);
        else
          *a3 = v16;
LABEL_22:
        MiUnlockWorkingSetShared(a1, v21);
        if ( v9 )
          KiUnstackDetachProcess((__int64)&ApcState, 0LL);
        return v14;
      }
      v12 = 2LL;
      v13 = (a4 - 48) >> 5;
    }
    else
    {
      if ( !v11 )
      {
LABEL_20:
        *a3 = v18;
LABEL_21:
        v14 = 0;
        goto LABEL_22;
      }
      if ( a4 < 0x10 )
        goto LABEL_25;
      v12 = 1LL;
      v13 = (a4 - 16) >> 3;
    }
    if ( v11 <= v13 + 1 )
    {
      if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
        v20[0] |= 1u;
      v22 = a1;
      *((_QWORD *)&v18 + 1) = v13 + 1;
      *((_QWORD *)&v17 + 1) = &a3[v12];
      v19 = v8;
      if ( (unsigned int)MiWalkPageTables(v20) != 5 )
      {
        if ( a2 < 0 )
          goto LABEL_20;
LABEL_28:
        a3[1] = v18;
        goto LABEL_21;
      }
    }
    goto LABEL_25;
  }
  v8 = a1 - 1024;
  if ( (PVOID)(a1 - 1024) != PsIdleProcess )
  {
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)v8 )
    {
      KeStackAttachProcess((PRKPROCESS)(a1 - 1024), &ApcState);
      v9 = 1;
    }
    goto LABEL_9;
  }
  if ( a2 >= 0 )
    a3[1] = 0LL;
  else
    *a3 = 0LL;
  return 0LL;
}
