/*
 * XREFs of ?Create@SpatialRimDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x1800D5AE8
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18007AA60 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x1800498AC (--0SpatialRimDeviceCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSess.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VMobileButtonDeviceCollection@@U?$default_delete@VMobileButtonDeviceCollection@@@std@@@std@@QEAA@XZ @ 0x180099108 (--1-$unique_ptr@VMobileButtonDeviceCollection@@U-$default_delete@VMobileButtonDeviceCollection@@.c)
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x1800D6AF8 (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialRimDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        struct IMessageSession *a3,
        void **a4,
        struct SpatialRimDeviceCollection **a5)
{
  __int64 v9; // rdx
  SpatialRimDeviceCollection *v10; // rax
  SpatialRimDeviceCollection *v11; // rdi
  unsigned int v12; // ebx
  int v13; // eax
  unsigned __int64 v14; // r9
  SpatialRimDeviceCollection *v16; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v16 = 0LL;
  if ( !a5 )
  {
    v9 = 406LL;
LABEL_14:
    v12 = -2147024809;
    goto LABEL_15;
  }
  *a5 = 0LL;
  if ( !a1 || !a4 )
  {
    v9 = 408LL;
    goto LABEL_14;
  }
  v10 = (SpatialRimDeviceCollection *)RefCountedObject::operator new(0xBA8uLL);
  if ( v10 )
    v11 = SpatialRimDeviceCollection::SpatialRimDeviceCollection(v10, a1, a2, a3);
  else
    v11 = 0LL;
  v16 = v11;
  if ( !v11 )
  {
    v12 = -2147024882;
    v9 = 411LL;
LABEL_15:
    v14 = v12;
    goto LABEL_16;
  }
  v13 = SpatialRimDeviceCollection::Initialize(v11, a4);
  v12 = v13;
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v9 = 413LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)v14);
    goto LABEL_17;
  }
  v16 = 0LL;
  *a5 = v11;
  v12 = 0;
LABEL_17:
  std::unique_ptr<MobileButtonDeviceCollection>::~unique_ptr<MobileButtonDeviceCollection>(&v16);
  return v12;
}
