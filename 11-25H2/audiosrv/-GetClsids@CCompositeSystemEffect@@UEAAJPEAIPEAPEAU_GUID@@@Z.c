/*
 * XREFs of ?GetClsids@CCompositeSystemEffect@@UEAAJPEAIPEAPEAU_GUID@@@Z @ 0x18004E2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x18004E38C (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 */

__int64 __fastcall CCompositeSystemEffect::GetClsids(CCompositeSystemEffect *this, unsigned int *a2, struct _GUID **a3)
{
  unsigned __int64 v6; // rcx
  struct _GUID *v7; // rbx
  struct _GUID *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  *a3 = 0LL;
  if ( *((int *)this + 26) <= 0 )
    return 0LL;
  v6 = *((int *)this + 26);
  v7 = 0LL;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v6 >= 0x10 )
  {
    v8 = (struct _GUID *)ATL::CComAllocator::Allocate(16 * v6);
    v7 = v8;
    if ( v8 )
    {
      memcpy_0(v8, *((const void **)this + 12), 16LL * *((int *)this + 26));
      *a3 = v7;
      *a2 = *((_DWORD *)this + 26);
      CoTaskMemFree(0LL);
      return 0LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2E8,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL);
  CoTaskMemFree(v7);
  return 2147942414LL;
}
