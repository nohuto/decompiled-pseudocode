/*
 * XREFs of ??1?$_Node_class@GV?$regex_traits@G@std@@@std@@UEAA@XZ @ 0x18013B654
 * Callers:
 *     ??_G?$_Node_class@GV?$regex_traits@G@std@@@std@@UEAAPEAXI@Z @ 0x18013BB10 (--_G-$_Node_class@GV-$regex_traits@G@std@@@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_G?$_Buf@G@std@@QEAAPEAXI@Z @ 0x18013BAD8 (--_G-$_Buf@G@std@@QEAAPEAXI@Z.c)
 *     ?_Tidy@?$_Node_class@GV?$regex_traits@G@std@@@std@@QEAAXPEAU?$_Sequence@G@2@@Z @ 0x180140714 (-_Tidy@-$_Node_class@GV-$regex_traits@G@std@@@std@@QEAAXPEAU-$_Sequence@G@2@@Z.c)
 */

void **__fastcall std::_Node_class<unsigned short,std::regex_traits<unsigned short>>::~_Node_class<unsigned short,std::regex_traits<unsigned short>>(
        __int64 a1)
{
  __int64 v1; // rdx
  void *v3; // rcx
  void *v4; // rcx
  void **result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)a1 = &std::_Node_class<unsigned short,std::regex_traits<unsigned short>>::`vftable';
  std::_Node_class<unsigned short,std::regex_traits<unsigned short>>::_Tidy(a1, v1);
  operator delete(*(void **)(a1 + 40), (const struct std::nothrow_t *)0x20);
  v3 = *(void **)(a1 + 48);
  if ( v3 )
    std::_Buf<unsigned short>::`scalar deleting destructor'(v3);
  v4 = *(void **)(a1 + 56);
  if ( v4 )
    std::_Buf<unsigned short>::`scalar deleting destructor'(v4);
  std::_Node_class<unsigned short,std::regex_traits<unsigned short>>::_Tidy(v4, *(_QWORD *)(a1 + 72));
  result = &std::_Node_endif::`vftable';
  *(_QWORD *)a1 = &std::_Node_endif::`vftable';
  return result;
}
