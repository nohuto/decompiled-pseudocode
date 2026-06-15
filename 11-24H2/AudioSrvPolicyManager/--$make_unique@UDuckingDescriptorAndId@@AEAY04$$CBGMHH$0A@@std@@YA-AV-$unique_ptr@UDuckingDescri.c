/*
 * XREFs of ??$make_unique@UDuckingDescriptorAndId@@AEAY04$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY04$$CBG$$QEAM$$QEAH2@Z @ 0x18003D0CC
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004E70 (--2@YAPEAX_K@Z.c)
 *     ??0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z @ 0x18003D1F8 (--0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z.c)
 */

__int64 *__fastcall std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[5],float,int,int,0>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        _DWORD *a5)
{
  __int64 v7; // rbx
  LPVOID v8; // rax
  __int64 v9; // r8
  bool v11; // [rsp+20h] [rbp-28h]

  v7 = 0LL;
  v8 = operator new(0x30uLL);
  if ( v8 )
  {
    v11 = *a5 != 0;
    v7 = DuckingDescriptorAndId::DuckingDescriptorAndId(v8, L"Comm", v9, *a4, v11, 0);
  }
  *a1 = v7;
  return a1;
}
