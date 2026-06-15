/*
 * XREFs of ??0DuckingDescriptorAndId@@QEAA@PEBGM_J_NW4EndpointApplicability@@@Z @ 0x18003FA18
 * Callers:
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBGAEAM$$QEAH2@Z @ 0x18003F6D4 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDes.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHHW4EndpointApplicability@@$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBGAEAM$$QEAH2$$QEAW4EndpointApplicability@@@Z @ 0x18003F758 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHHW4EndpointApplicability@@$0A@@std@@YA-A.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBG$$QEAM$$QEAH2@Z @ 0x18003F7E4 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY02$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY02$$CBG$$QEAM$$QEAH2@Z @ 0x18003F868 (--$make_unique@UDuckingDescriptorAndId@@AEAY02$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY04$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY04$$CBG$$QEAM$$QEAH2@Z @ 0x18003F8EC (--$make_unique@UDuckingDescriptorAndId@@AEAY04$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180006B20 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180007070 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@VDuckingDescriptor@@AEAMAEA_JAEA_NAEAW4EndpointApplicability@@@std@@YAXAEAVDuckingDescriptor@@AEAMAEA_JAEA_NAEAW4EndpointApplicability@@@Z @ 0x18003F2F4 (--$_Construct_in_place@VDuckingDescriptor@@AEAMAEA_JAEA_NAEAW4EndpointApplicability@@@std@@YAXAE.c)
 */

__int64 DuckingDescriptorAndId::DuckingDescriptorAndId(__int64 a1, _WORD *a2, float a3, ...)
{
  _DWORD *v4; // rax
  __int64 v5; // r11
  float v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  __int64 v10; // [rsp+60h] [rbp+28h] BYREF
  va_list va1; // [rsp+60h] [rbp+28h]
  va_list va2; // [rsp+68h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  v7 = a3;
  std::wstring::wstring(a1, a2);
  v4 = operator new(0x30uLL);
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<DuckingDescriptor>::`vftable';
    std::_Construct_in_place<DuckingDescriptor,float &,__int64 &,bool &,enum EndpointApplicability &>(
      (__int64)(v4 + 4),
      (int *)&v7,
      (__int64 *)va,
      va1,
      (int *)va2);
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 32) = v5 + 16;
  return a1;
}
