/*
 * XREFs of ApiSetEditionMessageBeep @ 0x1401927A4
 * Callers:
 *     xxxInternalToUnicode @ 0x140097BA0 (xxxInternalToUnicode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionMessageBeep(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int (__fastcall *v6)(_QWORD); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5840LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v6 = *(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v5, v4) + 48) + 5848LL);
      if ( v6 )
        return v6(0LL);
    }
  }
  return v2;
}
