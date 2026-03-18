/*
 * XREFs of ?GetD2DBitmapTarget@CRenderTargetBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x18020C6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetD2DBitmapTarget(
        CRenderTargetBitmap *this,
        struct ID2D1Bitmap1 **a2,
        char a3)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 5);
  if ( v4 )
  {
    v11 = 0LL;
    v6 = (**v4)(v4, &GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5, &v11);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1A7u, 0LL);
    }
    else
    {
      LOBYTE(v7) = a3;
      v9 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Bitmap1 **, __int64))(*(_QWORD *)v11 + 168LL))(v11, a2, v7);
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1A9u, 0LL);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v11);
        return v8;
      }
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v8 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x1ADu, 0LL);
  }
  return v8;
}
