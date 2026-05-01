/*
 * XREFs of ?GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z @ 0x180148B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CClassicWindowManager::GetApplicationViewWindow(CClassicWindowManager *this, HWND a2)
{
  HWND Window; // rsi
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  unsigned __int64 i; // rdi
  __int64 v7; // rbx
  int v8; // r15d
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v14; // [rsp+78h] [rbp+48h] BYREF
  __int64 v15; // [rsp+80h] [rbp+50h] BYREF
  __int64 v16; // [rsp+88h] [rbp+58h]

  Window = a2;
  v4 = 0LL;
  while ( Window )
  {
    if ( v4 )
      break;
    v14 = 0LL;
    v16 = 0LL;
    v5 = 0LL;
    for ( i = 0LL; i < *((_QWORD *)this + 16); ++i )
    {
      v7 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * i);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v15 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
             v7,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v15) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v15 + 192LL))(v15, Window) )
      {
        v8 = 0;
      }
      else
      {
        v8 = -1;
      }
      v9 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      if ( !v8 )
      {
        v5 = i;
        v10 = 0;
        goto LABEL_16;
      }
    }
    v10 = -2147319765;
LABEL_16:
    if ( v10 >= 0 )
    {
      v13 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 15) + 8 * v5);
      if ( (**v13)(v13, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v14) >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 128LL))(v14) )
          v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
      }
    }
    Window = GetWindow(Window, 4u);
    v11 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return v4;
}
