/*
 * XREFs of ?Initialize@CHwndBitmapProp@@QEAAJXZ @ 0x14020E7E8
 * Callers:
 *     ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x140168E9C (-_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z.c)
 * Callees:
 *     DwmAsyncCreateDCompositionVisualBitmapForHwnd @ 0x14020E89C (DwmAsyncCreateDCompositionVisualBitmapForHwnd.c)
 */

__int64 __fastcall CHwndBitmapProp::Initialize(CHwndBitmapProp *this)
{
  CompositionObject **v1; // rsi
  int SharedSystemVisualBitmapObject; // edi
  CompositionObject *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rax
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CompositionObject **)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
    KeBugCheck(0xC0000001);
  SharedSystemVisualBitmapObject = CreateSharedSystemVisualBitmapObject((char *)this + 24);
  if ( SharedSystemVisualBitmapObject >= 0 )
  {
    v3 = *v1;
    v8 = 0LL;
    SharedSystemVisualBitmapObject = CompositionObject::OpenDwmHandle(v3, &v8);
    if ( SharedSystemVisualBitmapObject >= 0 )
    {
      v6 = (void *)ReferenceDwmApiPort(v5, v4);
      DwmAsyncCreateDCompositionVisualBitmapForHwnd(v6);
    }
  }
  return (unsigned int)SharedSystemVisualBitmapObject;
}
