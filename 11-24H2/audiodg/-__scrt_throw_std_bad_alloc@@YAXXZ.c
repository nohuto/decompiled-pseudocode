/*
 * XREFs of ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x140059C3C
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x140059C18 (--0bad_alloc@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x14005A0F0 (_CxxThrowException_0.c)
 */

void __noreturn __scrt_throw_std_bad_alloc(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
  throw (std::bad_alloc *)pExceptionObject;
}
