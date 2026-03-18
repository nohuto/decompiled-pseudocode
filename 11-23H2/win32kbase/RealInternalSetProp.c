/*
 * XREFs of RealInternalSetProp @ 0x1C0090860
 * Callers:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00907B0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     CreateProp @ 0x1C00909F8 (CreateProp.c)
 */

__int64 __fastcall RealInternalSetProp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // bp
  __int16 v6; // di
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rbx
  __int16 v19; // ax
  __int64 Prop; // rax
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rcx
  __int64 v24; // rax

  v4 = a4;
  v6 = a2;
  if ( !a2 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( !gbInDestroyHandleTableObjects )
  {
    if ( !IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, a3, a4)
      && (!IS_USERCRIT_OWNED_AT_ALL(v9, v8, v10, v11) || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
    {
      __int2c();
    }
    if ( !gbInDestroyHandleTableObjects
      && !IS_USERCRIT_OWNED_EXCLUSIVE(v9, v8, v10, v11)
      && (!IS_USERCRIT_OWNED_AT_ALL(v13, v12, v14, v15) || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
    {
      __int2c();
    }
  }
  v16 = *(_QWORD *)(a1 + 24);
  if ( !v16 || !v6 || (v17 = *(_DWORD *)(v16 + 4), v18 = v16 + 8, !v17) )
  {
LABEL_19:
    Prop = CreateProp(a1);
    v18 = Prop;
    if ( Prop )
    {
      *(_WORD *)(Prop + 8) = v6;
      *(_WORD *)(Prop + 10) = v4;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
      if ( CurrentProcessWin32Process )
      {
        v23 = -*(_QWORD *)CurrentProcessWin32Process;
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      }
      if ( (*(_DWORD *)(CurrentProcessWin32Process + 824) & 0x4000000) != 0 )
        *(_WORD *)(v18 + 10) |= 0x10u;
      v24 = PsGetCurrentProcessWin32Process(v23);
      if ( v24 )
        v24 &= -(__int64)(*(_QWORD *)v24 != 0LL);
      *(_DWORD *)(v18 + 12) = *(_DWORD *)(v24 + 900);
      goto LABEL_27;
    }
    return 0LL;
  }
  while ( 1 )
  {
    if ( *(_WORD *)(v18 + 8) != v6 )
      goto LABEL_14;
    v19 = *(_WORD *)(v18 + 10) & 1;
    if ( (v4 & 1) != 0 )
      break;
    if ( !v19 )
      goto LABEL_18;
LABEL_14:
    v18 += 16LL;
    if ( !--v17 )
      goto LABEL_19;
  }
  if ( !v19 )
    goto LABEL_14;
LABEL_18:
  if ( !v18 )
    goto LABEL_19;
LABEL_27:
  *(_QWORD *)v18 = a3;
  return 1LL;
}
