/*
 * XREFs of FreeWindowStation @ 0x1401E89C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400A4A5C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401DFCE4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     ForceEmptyClipboard @ 0x1401E8C1C (ForceEmptyClipboard.c)
 */

__int64 __fastcall FreeWindowStation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  void *v4; // rcx
  struct _RTL_ATOM_TABLE *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  void *v8; // rcx
  struct _EX_RUNDOWN_REF *v9; // rax
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // rdx
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF
  bool v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v23 = 0LL;
  *(_DWORD *)(v3 + 64) |= 0x10u;
  v4 = *(void **)(v3 + 208);
  if ( v4 )
  {
    Win32FreePool(v4);
    *(_QWORD *)(v3 + 208) = 0LL;
    *(_DWORD *)(v3 + 200) = 0;
  }
  if ( (*(_DWORD *)(v3 + 64) & 4) == 0 && *(_QWORD *)(W32GetUserSessionState(v4, a2) + 63008) )
  {
    UserSessionState = W32GetUserSessionState(v4, a2);
    KeSetEvent(*(PRKEVENT *)(UserSessionState + 63008), 1, 0);
    v14 = W32GetUserSessionState(v13, v12);
    ObfDereferenceObject(*(PVOID *)(v14 + 63008));
    *(_QWORD *)(W32GetUserSessionState(v16, v15) + 63008) = 0LL;
  }
  v22 = IS_USERCRIT_OWNED_EXCLUSIVE((__int64)v4, a2, a3);
  if ( !v22 )
    EnterCrit(1LL, 0LL);
  v5 = *(struct _RTL_ATOM_TABLE **)(v3 + 168);
  if ( v5 )
    RtlDestroyAtomTable(v5);
  ForceEmptyClipboard((struct tagWINDOWSTATION *)v3);
  while ( 1 )
  {
    v7 = *(_QWORD *)(v3 + 152);
    if ( !v7 )
      break;
    v23 = *(_QWORD *)(v3 + 152);
    *(_QWORD *)(v3 + 152) = *(_QWORD *)(v7 + 240);
    *(_QWORD *)(v23 + 240) = 0LL;
    *(_DWORD *)(v23 + 380) &= ~0x800000u;
    HMAssignmentUnlock(&v23);
  }
  if ( (*(_DWORD *)(v3 + 64) & 4) == 0 )
  {
    v17 = *(_QWORD *)(v3 + 72);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 24);
      while ( v17 != v18 )
      {
        v19 = *(_QWORD *)(v17 + 16);
        HMMarkObjectDestroy(v17);
        *(_DWORD *)(v17 + 32) |= 0x20000000u;
        v21[0] = v3 + 72;
        v21[1] = v19;
        HMAssignmentLock(v21, 0LL);
        v17 = *(_QWORD *)(v3 + 72);
      }
      HMMarkObjectDestroy(v17);
      *(_DWORD *)(v17 + 32) |= 0x20000000u;
      HMAssignmentUnlock(v3 + 72);
      HYDRA_HINT(0x10000LL, v20);
    }
  }
  v8 = *(void **)(v3 + 192);
  if ( v8 )
  {
    Win32FreePool(v8);
    *(_QWORD *)(v3 + 192) = 0LL;
  }
  v9 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v8, v6);
  ExReleaseRundownProtection(v9 + 7946);
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v22);
  return 0LL;
}
