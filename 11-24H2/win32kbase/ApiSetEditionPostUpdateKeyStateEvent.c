/*
 * XREFs of ApiSetEditionPostUpdateKeyStateEvent @ 0x140095BA0
 * Callers:
 *     PostUpdateKeyStateEvent @ 0x140095730 (PostUpdateKeyStateEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionPostUpdateKeyStateEvent(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  int v9; // eax

  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5792LL);
  if ( v5 && v5() >= 0 )
  {
    v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 48) + 5800LL);
    if ( v8 )
      v9 = v8(a1, a2);
    else
      v9 = 0;
    LOBYTE(v4) = v9 != 0;
  }
  return v4;
}
