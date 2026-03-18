/*
 * XREFs of ApiSetEditionAreAllAccessGranted @ 0x14010CF58
 * Callers:
 *     NtUserGetDoubleClickTime @ 0x14010CEB0 (NtUserGetDoubleClickTime.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionAreAllAccessGranted(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int (__fastcall *v7)(_QWORD, __int64); // rax

  v2 = a1;
  v3 = 0;
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 7552LL);
  if ( v4 )
  {
    if ( v4() >= 0 )
    {
      v7 = *(unsigned int (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48)
                                                          + 7560LL);
      if ( v7 )
        return v7(v2, 2LL);
    }
  }
  return v3;
}
