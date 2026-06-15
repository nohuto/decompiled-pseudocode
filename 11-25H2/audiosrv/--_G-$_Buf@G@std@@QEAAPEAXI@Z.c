/*
 * XREFs of ??_G?$_Buf@G@std@@QEAAPEAXI@Z @ 0x18013BAD8
 * Callers:
 *     ??1?$_Node_class@GV?$regex_traits@G@std@@@std@@UEAA@XZ @ 0x18013B654 (--1-$_Node_class@GV-$regex_traits@G@std@@@std@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall std::_Buf<unsigned short>::`scalar deleting destructor'(void **a1)
{
  free(a1[1]);
  operator delete(a1, (const struct std::nothrow_t *)0x10);
  return a1;
}
