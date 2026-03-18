/*
 * XREFs of ?InitializeTypeIsolation@@YA_NXZ @ 0x140078DD0
 * Callers:
 *     HmgCreate @ 0x1400798EC (HmgCreate.c)
 * Callees:
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@gdi@@SA_NPEAPEAE@Z @ 0x140199DE4 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

bool __fastcall InitializeTypeIsolation(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int (*v5)(void); // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 (*v8)(void); // rax

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v2 = PALLOCMEM(64LL, 1869834581LL);
  *(_QWORD *)(v1 + 4272) = v2;
  if ( !v2
    || !(unsigned __int8)gdi::TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<28672,112>>::Create(v2) )
  {
    return 0;
  }
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4, v3) + 24) + 2152LL);
  if ( !v5 || v5() < 0 )
    return 1;
  v8 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v7, v6) + 24) + 2160LL);
  if ( v8 )
    LODWORD(v8) = v8();
  return (_DWORD)v8 != 0;
}
