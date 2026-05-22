/*
 * XREFs of ?Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z @ 0x18010A4B0
 * Callers:
 *     wil::init_once_nothrow__lambda_008aa74523cf7437dacc2be58aae67bd___ @ 0x18008D3E0 (wil--init_once_nothrow__lambda_008aa74523cf7437dacc2be58aae67bd___.c)
 * Callees:
 *     ?Initialize@InputConfigContextProvider@@AEAAJXZ @ 0x18000A744 (-Initialize@InputConfigContextProvider@@AEAAJXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0SystemContextProvider@@IEAA@XZ @ 0x180090B94 (--0SystemContextProvider@@IEAA@XZ.c)
 *     ??1?$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180097024 (--1-$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputConfigContextProvider::Create(struct InputConfigContextProvider **a1)
{
  SystemContextProvider *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  SystemContextProvider *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  SystemContextProvider *v11; // [rsp+40h] [rbp+8h] BYREF
  SystemContextProvider *v12; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v11 = 0LL;
  v2 = (SystemContextProvider *)RefCountedObject::operator new(0x118uLL);
  v6 = v2;
  v12 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x118uLL);
    SystemContextProvider::SystemContextProvider(v6);
    *(_QWORD *)v6 = &InputConfigContextProvider::`vftable'{for `ISystemContextProvider'};
    *((_QWORD *)v6 + 1) = &InputConfigContextProvider::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v6 + 11) = 0LL;
    *((_QWORD *)v6 + 12) = 0LL;
    *((_QWORD *)v6 + 13) = 0LL;
    *((_QWORD *)v6 + 26) = 0LL;
    *((_QWORD *)v6 + 27) = "CMK:InputConfig";
    *((_QWORD *)v6 + 29) = 0LL;
    *((_QWORD *)v6 + 30) = 0LL;
    *((_QWORD *)v6 + 31) = 0LL;
    *((_QWORD *)v6 + 32) = 0LL;
    *((_QWORD *)v6 + 33) = 0LL;
    *((_QWORD *)v6 + 34) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  v11 = v6;
  v7 = InputConfigContextProvider::Initialize(v6, v3, v4, v5);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v11 = 0LL;
    *a1 = v6;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
      (const char *)(unsigned int)v7);
  }
  wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>((__int64 *)&v11);
  return v8;
}
