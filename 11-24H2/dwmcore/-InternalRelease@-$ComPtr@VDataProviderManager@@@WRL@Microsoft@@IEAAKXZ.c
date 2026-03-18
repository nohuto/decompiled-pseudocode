/*
 * XREFs of ?InternalRelease@?$ComPtr@VDataProviderManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EE36C
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1800ED3DC (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800EE49C (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800EFA80 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180259E9C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<DataProviderManager>::InternalRelease(CGlobalDrawingContext **a1)
{
  CGlobalDrawingContext *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v1);
  }
  return result;
}
