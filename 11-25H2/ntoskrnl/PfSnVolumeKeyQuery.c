/*
 * XREFs of PfSnVolumeKeyQuery @ 0x140A05864
 * Callers:
 *     PfSnNameQueryWorker @ 0x1403A2C70 (PfSnNameQueryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PfSnFailProcessTrace @ 0x1406EEF78 (PfSnFailProcessTrace.c)
 *     PfSnArrayGrow @ 0x140A0592C (PfSnArrayGrow.c)
 */

__int64 __fastcall PfSnVolumeKeyQuery(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rsi
  _QWORD *v5; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  int v11; // eax

  v3 = (_QWORD *)(a1 + 584);
  v5 = *(_QWORD **)(a1 + 584);
  v7 = *(unsigned int *)(a1 + 596);
  v8 = &v5[v7];
  while ( v5 < v8 )
  {
    if ( *v5 == a2 )
      return 0;
    ++v5;
  }
  if ( (unsigned int)PfSnArrayGrow(v7, (_DWORD)v8, a3, (int)a1 + 592, (__int64)v3) )
  {
    *(_QWORD *)(*v3 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 596))++) = a2;
    v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 352));
    if ( v11 >= 0 )
      return 0;
    return (unsigned int)v11;
  }
  else
  {
    PfSnFailProcessTrace(a1);
    return (unsigned int)-1073741670;
  }
}
