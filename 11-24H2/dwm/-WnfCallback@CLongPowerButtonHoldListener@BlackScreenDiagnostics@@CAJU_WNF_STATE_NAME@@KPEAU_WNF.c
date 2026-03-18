/*
 * XREFs of ?WnfCallback@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x140003C90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BlackScreenDiagnostics::CLongPowerButtonHoldListener::WnfCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _BYTE *a4,
        char *a5,
        unsigned int a6)
{
  int v6; // eax
  bool v7; // zf
  void (__fastcall *v8)(__int128 *, char *, _QWORD); // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == WNF_PO_POWER_BUTTON_STATE && *a4 && a6 == 24 )
  {
    v6 = *(_DWORD *)a5 >> 1;
    v7 = (*a5 & 1) == 0;
    v10 = *(_OWORD *)(a5 + 8);
    if ( v7 )
    {
      a4[16] = 0;
    }
    else if ( v6 >= *((_DWORD *)a4 + 5) && !a4[16] )
    {
      v8 = (void (__fastcall *)(__int128 *, char *, _QWORD))*((_QWORD *)a4 + 3);
      a4[16] = 1;
      v8(&v10, a5, 0LL);
    }
  }
  return 0LL;
}
