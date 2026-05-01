/*
 * XREFs of ??0?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z @ 0x180144824
 * Callers:
 *     ??0?$Box@VSize@Foundation@Windows@@@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z @ 0x180144690 (--0-$Box@VSize@Foundation@Windows@@@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x180118944 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
Platform::Details *__fastcall Platform::Details::CustomBox<Windows::Foundation::Size>::CustomBox<Windows::Foundation::Size>(
        Platform::Details *a1,
        __int64 a2)
{
  void *v4; // rdx

  Platform::Object::Object((char *)a1 + 24);
  *(_QWORD *)a1 = &Platform::Details::CustomBox<Windows::Foundation::Size>::`vftable'{for `Platform::Object's `Platform::IBox<Windows::Foundation::Size>'};
  *((_QWORD *)a1 + 1) = &Platform::Details::CustomBox<Windows::Foundation::Size>::`vftable'{for `Platform::IValueType'};
  *((_QWORD *)a1 + 2) = &Platform::Details::CustomBox<Windows::Foundation::Size>::`vftable'{for `Platform::Details::IPrintable'};
  *((_QWORD *)a1 + 3) = &Platform::Details::CustomBox<Windows::Foundation::Size>::`vftable'{for `Platform::Object'};
  *((_QWORD *)a1 + 4) = &Platform::Details::CustomBox<Windows::Foundation::Size>::`vftable'{for `__abi_IUnknown'};
  *((_QWORD *)a1 + 5) = &Platform::Details::CustomBox<Windows::Foundation::Size>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)a1 + 56);
  *((_QWORD *)a1 + 6) = a2;
  *((_QWORD *)a1 + 1) = Platform::Details::GetIBoxVtable(a1, v4);
  return a1;
}
