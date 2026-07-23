/*
 * XREFs of PfSnVolumeKeyQuery @ 0x140A03E90
 * Callers:
 *     PfSnNameQueryWorker @ 0x1402E6D70 (PfSnNameQueryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PfSnFailProcessTrace @ 0x14094A560 (PfSnFailProcessTrace.c)
 *     PfSnArrayGrow @ 0x140A03F58 (PfSnArrayGrow.c)
 */

__int64 __fastcall PfSnVolumeKeyQuery(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v5; // rax
  __int64 v7; // rcx
  _QWORD *v9; // rdx
  int v12; // eax

  v3 = (_QWORD *)(a1 + 584);
  v5 = *(_QWORD **)(a1 + 584);
  v7 = *(unsigned int *)(a1 + 596);
  v9 = &v5[v7];
  while ( v5 < v9 )
  {
    if ( *v5 == a2 )
      return 0;
    ++v5;
  }
  if ( (unsigned int)PfSnArrayGrow(v7, (_DWORD)v9, a3, (int)a1 + 592, (__int64)v3) )
  {
    *(_QWORD *)(*v3 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 596))++) = a2;
    v12 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 352), a3);
    if ( v12 >= 0 )
      return 0;
    return (unsigned int)v12;
  }
  else
  {
    PfSnFailProcessTrace(a1);
    return (unsigned int)-1073741670;
  }
}
