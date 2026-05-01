/*
 * XREFs of _lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator() @ 0x180518054
 * Callers:
 *     ?ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z @ 0x18051D720 (-ShowWindowAttempted@TabletModePositioner@@UEAAXPEAUHWND__@@IPEAK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_ee4684b34cbbc9b29a5b46cb0674d720_::operator()(__int64 a1, HWND a2, _BYTE *a3, _BYTE *a4)
{
  __int64 result; // rax
  HWND Window; // rsi
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, HWND, __int64 *); // rbx
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 1;
  *a4 = 1;
  result = GetWindowLongPtrW(a2, -20);
  if ( (result & 0x40000) != 0 )
  {
    result = (__int64)GetWindow(a2, 4u);
    Window = (HWND)result;
    while ( Window )
    {
      *a4 = 0;
      v12 = 0LL;
      v10 = *(_QWORD *)(*(_QWORD *)a1 + 336LL);
      v11 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v10 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      if ( v11(v10, Window, &v12) >= 0
        && (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 248LL) + 184LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 248LL),
             v12) )
      {
        *a3 = 0;
        return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      }
      Window = GetWindow(Window, 4u);
      result = Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    }
  }
  return result;
}
