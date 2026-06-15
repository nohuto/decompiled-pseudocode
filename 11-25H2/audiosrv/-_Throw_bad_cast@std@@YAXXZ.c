/*
 * XREFs of ?_Throw_bad_cast@std@@YAXXZ @ 0x1801406EC
 * Callers:
 *     ??$use_facet@V?$collate@G@std@@@std@@YAAEBV?$collate@G@0@AEBVlocale@0@@Z @ 0x18013B198 (--$use_facet@V-$collate@G@std@@@std@@YAAEBV-$collate@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18013B278 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??0bad_cast@std@@QEAA@XZ @ 0x18013B62C (--0bad_cast@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_cast(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_cast::bad_cast((std::bad_cast *)pExceptionObject);
  throw (std::bad_cast *)pExceptionObject;
}
