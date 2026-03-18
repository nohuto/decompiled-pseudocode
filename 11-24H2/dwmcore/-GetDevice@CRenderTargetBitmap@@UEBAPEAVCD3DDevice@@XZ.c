/*
 * XREFs of ?GetDevice@CRenderTargetBitmap@@UEBAPEAVCD3DDevice@@XZ @ 0x1801F05D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CRenderTargetBitmap::GetDevice(CRenderTargetBitmap *this)
{
  __int64 v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = *((_QWORD *)this + 5);
  if ( !v1 )
    return 0LL;
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 40LL);
  if ( v2 == IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice )
    return (struct CD3DDevice *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice();
  else
    return (struct CD3DDevice *)v2();
}
