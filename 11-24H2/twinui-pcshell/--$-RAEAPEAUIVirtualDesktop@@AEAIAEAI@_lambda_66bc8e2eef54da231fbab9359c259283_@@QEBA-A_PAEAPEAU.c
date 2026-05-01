/*
 * XREFs of ??$?RAEAPEAUIVirtualDesktop@@AEAIAEAI@_lambda_66bc8e2eef54da231fbab9359c259283_@@QEBA?A_PAEAPEAUIVirtualDesktop@@AEAI1@Z @ 0x18054C9CC
 * Callers:
 *     ??$AddRefCountWrappers@PEAUIVirtualDesktop@@II@@YAJV?$tuple@PEAUIVirtualDesktop@@II@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@II@1@@Z @ 0x18054CC28 (--$AddRefCountWrappers@PEAUIVirtualDesktop@@II@@YAJV-$tuple@PEAUIVirtualDesktop@@II@std@@PEAV-$t.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall _lambda_66bc8e2eef54da231fbab9359c259283_::operator()<IVirtualDesktop * &,unsigned int &,unsigned int &>(
        int ***a1,
        __int64 a2,
        __int64 *a3,
        int *a4,
        int *a5)
{
  int **v5; // rdi
  int v6; // ebp
  int *v8; // rcx
  int v9; // esi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a1;
  v6 = 0;
  v8 = **a1;
  if ( *v8 >= 0 )
  {
    v6 = *a5;
    *v8 = 0;
  }
  v9 = 0;
  if ( **v5 >= 0 )
  {
    v9 = *a4;
    **v5 = 0;
  }
  v10 = *a3;
  v11 = 0LL;
  v13[0] = 0LL;
  if ( **v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v13, v10);
    **v5 = 0;
    v11 = v13[0];
  }
  *(_DWORD *)a2 = v6;
  *(_DWORD *)(a2 + 4) = v9;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (__int64 *)(a2 + 8) != v13 )
  {
    v13[0] = 0LL;
    *(_QWORD *)(a2 + 8) = v11;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
  return a2;
}
