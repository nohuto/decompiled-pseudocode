/*
 * XREFs of ?Create@AugmentedInputDeviceCollection@@SAJPEAUIRawInputClient@@PEAPEAXPEAPEAV1@@Z @ 0x18004CA70
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18004CDA8 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18004CB78 (-Initialize@AugmentedInputDeviceCollection@@IEAAJPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0AugmentedInputDeviceCollection@@IEAA@PEAUIRawInputClient@@@Z @ 0x18009777C (--0AugmentedInputDeviceCollection@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ??1?$unique_ptr@VMobileButtonDeviceCollection@@U?$default_delete@VMobileButtonDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x180098FA8 (--1-$unique_ptr@VMobileButtonDeviceCollection@@U-$default_delete@VMobileButtonDeviceCollection@@.c)
 *     ??R?$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z @ 0x180098FC8 (--R-$default_delete@VSpatialRimDeviceCollection@@@std@@QEBAXPEAVSpatialRimDeviceCollection@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AugmentedInputDeviceCollection::Create(
        struct IRawInputClient *a1,
        void **a2,
        struct AugmentedInputDeviceCollection **a3)
{
  AugmentedInputDeviceCollection *v6; // rax
  AugmentedInputDeviceCollection *v7; // rbx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  AugmentedInputDeviceCollection *v16; // [rsp+30h] [rbp+8h] BYREF
  AugmentedInputDeviceCollection *v17; // [rsp+48h] [rbp+20h]

  v16 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    v8 = -2147024809;
    v9 = 32LL;
    goto LABEL_13;
  }
  v6 = (AugmentedInputDeviceCollection *)RefCountedObject::operator new(0xAE0uLL);
  v17 = v6;
  if ( v6 )
    v7 = AugmentedInputDeviceCollection::AugmentedInputDeviceCollection(v6, a1);
  else
    v7 = 0LL;
  v16 = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    v9 = 36LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)v8,
      v14);
    std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(&v16);
    return v8;
  }
  v10 = AugmentedInputDeviceCollection::Initialize(v7, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v16 = 0LL;
    *a3 = v7;
    std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(&v16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\augmentedinputdevicecollection.cpp",
      (const char *)(unsigned int)v10,
      v14);
    std::default_delete<SpatialRimDeviceCollection>::operator()(v12, v7);
    return v11;
  }
}
