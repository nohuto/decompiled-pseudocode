/*
 * XREFs of ApiSetEditionSetForegroundCheckNoActivate @ 0x1401932F0
 * Callers:
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x14020452C (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionSetForegroundCheckNoActivate(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  int (*v4)(void); // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int (__fastcall *v7)(__int64); // rax

  v3 = 1;
  v4 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5144LL);
  if ( v4 && v4() >= 0 )
  {
    v7 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v6, v5) + 48) + 5152LL);
    if ( v7 )
      return v7(a1);
    else
      return 0;
  }
  return v3;
}
