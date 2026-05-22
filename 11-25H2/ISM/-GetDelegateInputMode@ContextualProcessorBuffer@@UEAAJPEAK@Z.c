/*
 * XREFs of ?GetDelegateInputMode@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x18019B800
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180024800 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorBuffer::GetDelegateInputMode(ContextualProcessorBuffer *this, unsigned int *a2)
{
  __int64 v3; // rcx
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = *((_QWORD *)this + 18);
  if ( v3
    && (v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3 + 16), *v4)
    && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(v4, &v7) >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 80LL))(v7, a2);
  }
  else
  {
    v5 = -2147467259;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
  return v5;
}
