/*
 * XREFs of ?GetPixelColor@CColorKeyBitmap@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x1802DB0A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _D3DCOLORVALUE *__fastcall CColorKeyBitmap::GetPixelColor(
        CColorKeyBitmap *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct D2D_POINT_2U *a3)
{
  void (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 1);
  v7 = 0LL;
  (**v3)(v3, &GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8, &v7);
  (*(void (__fastcall **)(__int64, struct _D3DCOLORVALUE *, const struct D2D_POINT_2U *))(*(_QWORD *)v7 + 24LL))(
    v7,
    retstr,
    a3);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v7);
  return retstr;
}
