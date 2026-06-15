/*
 * XREFs of ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBG$$QEAM$$QEAH2@Z @ 0x18003CFC4
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004E70 (--2@YAPEAX_K@Z.c)
 *     ??0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z @ 0x18003D1F8 (--0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float,int,int,0>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        _DWORD *a5)
{
  __int64 v8; // rbx
  LPVOID v9; // rax
  __int64 v10; // r8
  bool v12; // [rsp+20h] [rbp-38h]

  v8 = 0LL;
  v9 = operator new(0x30uLL);
  if ( v9 )
  {
    v12 = *a5 != 0;
    v8 = DuckingDescriptorAndId::DuckingDescriptorAndId(v9, a2, v10, *a4, v12, 0);
  }
  *a1 = v8;
  return a1;
}
