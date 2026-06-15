/*
 * XREFs of ?_Throw_bad_cast@std@@YAXXZ @ 0x180149164
 * Callers:
 *     ??$use_facet@V?$collate@G@std@@@std@@YAAEBV?$collate@G@0@AEBVlocale@0@@Z @ 0x180143C6C (--$use_facet@V-$collate@G@std@@@std@@YAAEBV-$collate@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180143D4C (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??0bad_cast@std@@QEAA@XZ @ 0x1801440FC (--0bad_cast@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_cast(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_cast::bad_cast((std::bad_cast *)pExceptionObject);
  throw (std::bad_cast *)pExceptionObject;
}
