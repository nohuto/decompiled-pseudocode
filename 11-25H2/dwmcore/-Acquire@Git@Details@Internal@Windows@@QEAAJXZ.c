/*
 * XREFs of ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x1802CB160
 * Callers:
 *     ?Initialize@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAUIInspectable@@@Z @ 0x1802CD264 (-Initialize@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::Details::Git::Acquire(Windows::Internal::Details::Git *this)
{
  HRESULT v1; // ebx
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  ppv = this;
  if ( qword_18040AD80 )
  {
    v1 = 0;
    _InterlockedIncrement(&Windows::Internal::Details::_git);
  }
  else
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
    v1 = CoCreateInstance(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
    if ( v1 >= 0 )
    {
      if ( !_InterlockedCompareExchange64(&qword_18040AD80, (signed __int64)ppv, 0LL) )
        ppv = 0LL;
      _InterlockedIncrement(&Windows::Internal::Details::_git);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
  }
  return (unsigned int)v1;
}
