/*
 * XREFs of ??4?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z @ 0x1801DEE04
 * Callers:
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1801DEA48 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

CD3DDevice **__fastcall wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::operator=(
        CD3DDevice **a1,
        volatile signed __int32 *a2)
{
  CD3DDevice *v2; // rdi
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  *a1 = (CD3DDevice *)a2;
  if ( a2 && _InterlockedAdd(a2 + 2, 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v5);
  if ( v2 )
    CD3DDevice::Release(v2);
  return a1;
}
