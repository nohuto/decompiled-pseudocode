/*
 * XREFs of ?hCreateHatchBrushInternal@@YAPEAUHBRUSH__@@KKH@Z @ 0x1400E43C8
 * Callers:
 *     GreExtCreatePen @ 0x1400E38BC (GreExtCreatePen.c)
 *     NtGdiCreateHatchBrushInternal @ 0x14021EFF0 (NtGdiCreateHatchBrushInternal.c)
 * Callees:
 *     ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x140263264 (--1BRUSHMEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall hCreateHatchBrushInternal(unsigned int a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  _QWORD v5[6]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+60h] [rbp-18h]

  v3 = 0LL;
  if ( a1 <= 0xB )
  {
    BRUSHMEMOBJ::BRUSHMEMOBJ((BRUSHMEMOBJ *)v5, a2, a1, a3, 0);
    if ( v5[0] )
    {
      v6 = 1;
      v3 = *(_QWORD *)v5[0];
    }
    BRUSHMEMOBJ::~BRUSHMEMOBJ((BRUSHMEMOBJ *)v5);
  }
  return v3;
}
