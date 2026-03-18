/*
 * XREFs of ApiSetEditionxxxSystemParametersInfoWorker @ 0x14019391C
 * Callers:
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 * Callees:
 *     EditionxxxSystemParametersInfoWorker @ 0x1400E77FC (EditionxxxSystemParametersInfoWorker.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionxxxSystemParametersInfoWorker(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  int (*v9)(void); // rax

  v6 = a2;
  v7 = a1;
  v8 = 0;
  v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 3152LL);
  if ( v9 && v9() >= 0 )
    return (unsigned int)EditionxxxSystemParametersInfoWorker(v7, v6, a3, a4);
  return v8;
}
