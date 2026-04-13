/*
 * XREFs of ?_Xinvalid_argument@std@@YAXPEBD@Z @ 0x1800047A8
 * Callers:
 *     ?stoi@std@@YAHAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@PEA_KH@Z @ 0x18008229C (-stoi@std@@YAHAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@1@PEA_KH@Z.c)
 *     ?stoul@std@@YAKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@PEA_KH@Z @ 0x1800B259C (-stoul@std@@YAKAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@1@PEA_KH@Z.c)
 * Callees:
 *     ??0length_error@std@@QEAA@PEBD@Z @ 0x18000467C (--0length_error@std@@QEAA@PEBD@Z.c)
 *     _CxxThrowException_0 @ 0x1800227BC (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Xinvalid_argument(char *a1)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::length_error::length_error((std::length_error *)pExceptionObject, a1);
  throw (std::invalid_argument *)pExceptionObject;
}
