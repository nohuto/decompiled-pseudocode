/*
 * XREFs of ??$make_shared@VDuckingDescriptor@@MHH@std@@YA?AV?$shared_ptr@VDuckingDescriptor@@@0@$$QEAM$$QEAH1@Z @ 0x18002BEE8
 * Callers:
 *     ?RuntimeClassInitialize@CDuckingManager@@QEAAJXZ @ 0x18002E5CC (-RuntimeClassInitialize@CDuckingManager@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004E70 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@VDuckingDescriptor@@MHH@std@@YAXAEAVDuckingDescriptor@@$$QEAM$$QEAH2@Z @ 0x18002B940 (--$_Construct_in_place@VDuckingDescriptor@@MHH@std@@YAXAEAVDuckingDescriptor@@$$QEAM$$QEAH2@Z.c)
 */

_QWORD *__fastcall std::make_shared<DuckingDescriptor,float,int,int>(_QWORD *a1, int *a2, int *a3, int *a4)
{
  _DWORD *v8; // rax
  __int64 v9; // r10
  _QWORD *result; // rax

  v8 = operator new(0x30uLL);
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<DuckingDescriptor>::`vftable';
    std::_Construct_in_place<DuckingDescriptor,float,int,int>((__int64)(v8 + 4), a2, a3, a4);
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9 + 16;
  result = a1;
  a1[1] = v9;
  return result;
}
