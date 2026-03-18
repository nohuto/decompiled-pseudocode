/*
 * XREFs of ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAPEAUIDXGIResource@@PEAI@Z @ 0x1801C7960
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180101248 (--1-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801C79DC (-EnsureTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z @ 0x1801C7B5C (-GetDXGIResource@CD3DTexture@@QEBAJPEAPEAUIDXGIResource@@@Z.c)
 */

struct IDXGIResource *__fastcall CDxHandleYUVBitmapRealization::GetDXGIResource(
        CDxHandleYUVBitmapRealization *this,
        unsigned int *a2)
{
  CD3DTexture *v4; // rcx
  struct IDXGIResource *v5; // rbx
  struct IDXGIResource *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( (int)CDxHandleYUVBitmapRealization::EnsureTexture((CDxHandleYUVBitmapRealization *)((char *)this - 344)) < 0 )
    return 0LL;
  v4 = (CD3DTexture *)*((_QWORD *)this + 4);
  v7 = 0LL;
  if ( (int)CD3DTexture::GetDXGIResource(v4, &v7) < 0 )
  {
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::~com_ptr_t<IDXGIResource,wil::err_returncode_policy>((CGlobalDrawingContext **)&v7);
    return 0LL;
  }
  if ( a2 )
    *a2 = *(_DWORD *)(*((_QWORD *)this + 4) + 172LL);
  v5 = v7;
  wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::~com_ptr_t<IDXGIResource,wil::err_returncode_policy>((CGlobalDrawingContext **)&v7);
  return v5;
}
