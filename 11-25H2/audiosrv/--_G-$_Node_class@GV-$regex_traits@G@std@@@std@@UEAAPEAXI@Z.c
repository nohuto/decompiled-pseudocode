/*
 * XREFs of ??_G?$_Node_class@GV?$regex_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x18013BB10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$_Node_class@GV?$regex_traits@G@std@@@std@@UEAA@XZ @ 0x18013B654 (--1-$_Node_class@GV-$regex_traits@G@std@@@std@@UEAA@XZ.c)
 */

void *__fastcall std::_Node_class<unsigned short,std::regex_traits<unsigned short>>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  std::_Node_class<unsigned short,std::regex_traits<unsigned short>>::~_Node_class<unsigned short,std::regex_traits<unsigned short>>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
