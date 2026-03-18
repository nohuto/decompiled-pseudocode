/*
 * XREFs of DestroySMWP @ 0x140083140
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1400849C0 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1400F4FF8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     NtUserDeferWindowPosAndBand @ 0x140241080 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 */

void __fastcall DestroySMWP(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  BOOL v12; // esi
  __int64 v13; // r14
  int v14; // ebp
  __int64 *v15; // r14
  __int64 v16; // rax
  __int64 UserSessionState; // rax
  __int64 v18; // rsi

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    v4 = _HMPheFromObjectWorker(a1);
    if ( !*(_DWORD *)(W32GetUserSessionState(v6, v5) + 19816) && IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, v7) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19824) )
      {
        if ( v4 != *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19824) )
        {
          UserSessionState = W32GetUserSessionState(a1, a2);
          ++*(_DWORD *)(UserSessionState + 19832);
        }
      }
      else
      {
        v2 = 1;
        *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19824) = v4;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    if ( !(unsigned int)HMMarkObjectDestroy(a1) )
      goto LABEL_20;
    v12 = 1;
  }
  else
  {
    v12 = a1 != W32GetUserSessionState(a1, a2) + 63296;
  }
  v13 = *(_QWORD *)(a1 + 40);
  if ( v13 )
  {
    v14 = *(_DWORD *)(a1 + 28) - 1;
    if ( v14 >= 0 )
    {
      v15 = (__int64 *)(v13 + 120);
      do
      {
        v11 = *v15;
        if ( *v15 )
          GreDeleteObject(v11);
        v15 += 21;
        --v14;
      }
      while ( v14 >= 0 );
    }
    if ( v12 )
      Win32FreePool(*(void **)(a1 + 40));
  }
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    HMFreeObject(a1);
  }
  else if ( v12 )
  {
    Win32FreePool((void *)a1);
  }
  else
  {
    v16 = W32GetUserSessionState(v11, v10);
    *(_DWORD *)(v16 + 67056) &= ~0x40000000u;
    if ( *(int *)(a1 + 32) > 8 )
    {
      v18 = Win32AllocPoolZInit(672LL, 2004054869LL);
      if ( v18 )
      {
        Win32FreePool(*(void **)(a1 + 40));
        *(_QWORD *)(a1 + 40) = v18;
        *(_DWORD *)(a1 + 32) = 4;
      }
    }
    *(_DWORD *)(a1 + 24) &= ~4u;
  }
LABEL_20:
  if ( v2 )
    *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19824) = 0LL;
}
