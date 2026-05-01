/*
 * XREFs of ?UpdateLastActivatedTime@CClassicWindowManager@@UEAAJPEAUHWND__@@@Z @ 0x180167D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CClassicWindowManager::UpdateLastActivatedTime(CClassicWindowManager *this, HWND a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 i; // rdi
  __int64 v6; // rbx
  int v7; // esi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+70h] [rbp+40h] BYREF
  __int64 v14; // [rsp+78h] [rbp+48h] BYREF
  __int64 v15; // [rsp+80h] [rbp+50h]
  __int64 v16; // [rsp+88h] [rbp+58h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v14 = 0LL;
  v15 = 0LL;
  v4 = 0LL;
  for ( i = 0LL; i < *((_QWORD *)this + 14); ++i )
  {
    v16 = 0LL;
    v6 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * i);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v13 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v6)(v6, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v13) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)v13 + 192LL))(v13, a2) )
    {
      v7 = 0;
    }
    else
    {
      v7 = -1;
    }
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( !v7 )
    {
      v4 = i;
      v9 = 0;
      goto LABEL_14;
    }
  }
  v9 = -2147319765;
LABEL_14:
  if ( v9 >= 0 )
  {
    v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 13) + 8 * v4);
    v9 = (**v10)(v10, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v14);
    if ( v9 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL))(v14);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v9;
}
