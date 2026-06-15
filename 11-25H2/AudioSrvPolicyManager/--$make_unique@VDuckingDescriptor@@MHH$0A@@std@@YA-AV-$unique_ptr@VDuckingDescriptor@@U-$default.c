/*
 * XREFs of ??$make_unique@VDuckingDescriptor@@MHH$0A@@std@@YA?AV?$unique_ptr@VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@0@$$QEAM$$QEAH1@Z @ 0x18002E950
 * Callers:
 *     ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x180030FAC (-RuntimeClassInitialize@CDuckingManager@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180007070 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<DuckingDescriptor,float,int,int,0>(_QWORD *a1, int *a2, int *a3, int *a4)
{
  _DWORD *v8; // rax
  int v9; // r9d
  __int64 v10; // r8
  int v11; // xmm0_4

  v8 = operator new(0x20uLL);
  if ( v8 )
  {
    v9 = *a4;
    v10 = *a3;
    v11 = *a2;
    *(_QWORD *)v8 = &DuckingDescriptor::`vftable';
    v8[6] = 0;
    *((_BYTE *)v8 + 12) = v9 != 0;
    v8[2] = v11;
    *((_QWORD *)v8 + 2) = v10;
  }
  *a1 = v8;
  return a1;
}
