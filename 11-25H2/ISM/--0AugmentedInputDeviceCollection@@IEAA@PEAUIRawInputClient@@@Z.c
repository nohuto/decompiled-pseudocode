/*
 * XREFs of ??0AugmentedInputDeviceCollection@@IEAA@PEAUIRawInputClient@@@Z @ 0x18009777C
 * Callers:
 *     ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18004CA70 (-Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18004E0C4 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
AugmentedInputDeviceCollection *__fastcall AugmentedInputDeviceCollection::AugmentedInputDeviceCollection(
        AugmentedInputDeviceCollection *this,
        struct IRawInputClient *a2)
{
  _QWORD *v3; // rax

  HIDDeviceCollection::HIDDeviceCollection(this, a2);
  *(_QWORD *)this = &AugmentedInputDeviceCollection::`vftable';
  *((_QWORD *)this + 345) = 0LL;
  *((_QWORD *)this + 346) = 0LL;
  v3 = operator new(0x30uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *((_QWORD *)this + 345) = v3;
  *((_BYTE *)this + 2776) = 1;
  return this;
}
