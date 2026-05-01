/*
 * XREFs of ?OnHotkey@CShellSnapComponent@@UEAAX_K_J@Z @ 0x180224580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CShellSnapComponent::OnHotkey(CShellSnapComponent *this, unsigned int a2, int a3)
{
  HWND ForegroundWindow; // r14
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, HWND, __int64 *); // rbx
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  ForegroundWindow = GetForegroundWindow();
  if ( ForegroundWindow )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 32LL))(*((_QWORD *)this + 12)) )
    {
      v9 = 0LL;
      v7 = *((_QWORD *)this + 10);
      v8 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v7 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
      if ( v8(v7, ForegroundWindow, &v9) < 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
        return;
      }
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 40LL))(*((_QWORD *)this + 12), v9);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 12) + 24LL))(
      *((_QWORD *)this + 12),
      HIWORD(a3),
      (unsigned __int16)a3,
      a2);
  }
}
