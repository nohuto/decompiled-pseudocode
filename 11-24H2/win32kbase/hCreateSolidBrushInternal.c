/*
 * XREFs of hCreateSolidBrushInternal @ 0x14000D270
 * Callers:
 *     SetSysColor @ 0x1400A0B4C (SetSysColor.c)
 * Callees:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x14000D300 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x14000D550 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1400855A4 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 */

unsigned __int64 __fastcall hCreateSolidBrushInternal(unsigned int a1, int a2, HBRUSH a3, int a4)
{
  __int64 v4; // rbx
  _QWORD v6[6]; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+60h] [rbp-18h]

  v4 = 0LL;
  if ( a3 )
    return (unsigned __int64)a3 & -(__int64)((unsigned int)GreSetSolidBrushInternal(a3, a1, a2, 0) != 0);
  BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v6, a1, 7u, a2, a4);
  if ( v6[0] )
  {
    v7 = 1;
    *(_DWORD *)(v6[0] + 40LL) |= 4u;
    v4 = *(_QWORD *)v6[0];
  }
  BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v6);
  return v4;
}
