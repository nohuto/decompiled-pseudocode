/*
 * XREFs of ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x18030B70C
 * Callers:
 *     ??0GitPtr@Internal@Windows@@QEAA@XZ @ 0x18030B4B4 (--0GitPtr@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Windows::Internal::Details::Git::Acquire(Windows::Internal::Details::Git *this)
{
  HRESULT v1; // ebx
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  ppv = this;
  if ( qword_1808CCDA0 )
  {
    v1 = 0;
    _InterlockedIncrement(&Windows::Internal::Details::_git);
  }
  else
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
    v1 = CoCreateInstance(&CLSID_StdGlobalInterfaceTable, 0LL, 1u, &GUID_00000146_0000_0000_c000_000000000046, &ppv);
    if ( v1 >= 0 )
    {
      if ( !_InterlockedCompareExchange64(&qword_1808CCDA0, (signed __int64)ppv, 0LL) )
        ppv = 0LL;
      _InterlockedIncrement(&Windows::Internal::Details::_git);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  }
  return (unsigned int)v1;
}
