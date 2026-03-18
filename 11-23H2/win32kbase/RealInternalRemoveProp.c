/*
 * XREFs of RealInternalRemoveProp @ 0x1C0090B90
 * Callers:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00907B0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     UserGlobalAtomTableCallout @ 0x1C0059240 (UserGlobalAtomTableCallout.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C0090CD0 (UserDeleteAtomFromAtomTable.c)
 */

__int64 __fastcall RealInternalRemoveProp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  int v16; // ecx
  __int64 *v17; // rbx
  __int16 v18; // ax
  __int64 result; // rax
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rax

  v4 = a3;
  v5 = a2;
  if ( !gbInDestroyHandleTableObjects )
  {
    if ( !IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, a3, a4)
      && (!IS_USERCRIT_OWNED_AT_ALL(v8, v7, v9, v10) || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
    {
      __int2c();
    }
    if ( !gbInDestroyHandleTableObjects
      && !IS_USERCRIT_OWNED_EXCLUSIVE(v8, v7, v9, v10)
      && (!IS_USERCRIT_OWNED_AT_ALL(v12, v11, v13, v14) || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
    {
      __int2c();
    }
  }
  v15 = *(_QWORD *)(a1 + 24);
  if ( !v15 )
    return 0LL;
  if ( !(_WORD)v5 )
    return 0LL;
  v16 = *(_DWORD *)(v15 + 4);
  v17 = (__int64 *)(v15 + 8);
  if ( !v16 )
    return 0LL;
  while ( 1 )
  {
    if ( *((_WORD *)v17 + 4) != (_WORD)v5 )
      goto LABEL_13;
    v18 = *((_WORD *)v17 + 5) & 1;
    if ( v4 )
      break;
    if ( !v18 )
      goto LABEL_17;
LABEL_13:
    v17 += 2;
    if ( !--v16 )
      return 0LL;
  }
  if ( !v18 )
    goto LABEL_13;
LABEL_17:
  if ( !v17 )
    return 0LL;
  v20 = *v17;
  if ( !v4 && ((*((_BYTE *)v17 + 10) & 2) != 0 || HIWORD(v5) == 1) )
  {
    v22 = UserGlobalAtomTableCallout();
    if ( v22 )
      UserDeleteAtomFromAtomTable(v22, *((unsigned __int16 *)v17 + 4));
  }
  --*(_DWORD *)(v15 + 4);
  result = v20;
  v21 = 2LL * *(unsigned int *)(v15 + 4);
  *(_OWORD *)v17 = *(_OWORD *)(v15 + 16LL * *(unsigned int *)(v15 + 4) + 8);
  *(_OWORD *)(v15 + 8 * v21 + 8) = 0LL;
  return result;
}
