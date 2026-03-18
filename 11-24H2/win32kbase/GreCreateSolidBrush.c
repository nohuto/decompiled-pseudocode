/*
 * XREFs of GreCreateSolidBrush @ 0x14000CE80
 * Callers:
 *     <none>
 * Callees:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x14000D300 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x14000D550 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreCreateSolidBrush(unsigned int a1)
{
  __int64 v1; // rbx
  _QWORD v3[6]; // [rsp+30h] [rbp-48h] BYREF
  int v4; // [rsp+60h] [rbp-18h]

  v1 = 0LL;
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v3, a1, 7u, 0, 0);
  if ( v3[0] )
  {
    v4 = 1;
    *(_DWORD *)(v3[0] + 40LL) |= 4u;
    v1 = *(_QWORD *)v3[0];
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v3);
  return v1;
}
