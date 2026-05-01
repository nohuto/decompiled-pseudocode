/*
 * XREFs of ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x1800AA140
 * Callers:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800A8374 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     _lambda_7e2780c5544860c2230bb0766c4bf63e_::operator() @ 0x18043DD58 (_lambda_7e2780c5544860c2230bb0766c4bf63e_--operator().c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1804433A4 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     _lambda_a977afc9c59ce0858e320274f367b95a_::operator() @ 0x18044A178 (_lambda_a977afc9c59ce0858e320274f367b95a_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall LightweightPropertySet::PushLightweightPropertiesToWindow(LightweightPropertySet *this, HWND a2)
{
  unsigned __int64 i; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  const WCHAR *StringRawBuffer; // rax

  for ( i = 0LL; i < *((_QWORD *)this + 1); ++i )
  {
    v5 = *(_QWORD *)(*(_QWORD *)this + 8 * i);
    v6 = *(_DWORD *)(v5 + 16);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v5 + 8), 0LL);
    SetPropW(a2, StringRawBuffer, (HANDLE)v6);
  }
}
