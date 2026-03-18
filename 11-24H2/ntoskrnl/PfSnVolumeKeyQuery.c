/*
 * XREFs of PfSnVolumeKeyQuery @ 0x140A07960
 * Callers:
 *     PfSnNameQueryWorker @ 0x140379E00 (PfSnNameQueryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PfSnFailProcessTrace @ 0x140962AA0 (PfSnFailProcessTrace.c)
 *     PfSnArrayGrow @ 0x140A07A28 (PfSnArrayGrow.c)
 */

__int64 __fastcall PfSnVolumeKeyQuery(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  _QWORD *v5; // rax
  __int64 v7; // rcx
  _QWORD *v9; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax

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
    v14 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 352), a3, v12, v13);
    if ( v14 >= 0 )
      return 0;
    return (unsigned int)v14;
  }
  else
  {
    PfSnFailProcessTrace(a1);
    return (unsigned int)-1073741670;
  }
}
