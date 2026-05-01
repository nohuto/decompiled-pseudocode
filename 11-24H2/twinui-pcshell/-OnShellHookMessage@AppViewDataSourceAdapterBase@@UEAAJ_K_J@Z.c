/*
 * XREFs of ?OnShellHookMessage@AppViewDataSourceAdapterBase@@UEAAJ_K_J@Z @ 0x180184D90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AppViewDataSourceAdapterBase::OnShellHookMessage(RTL_SRWLOCK *this, __int64 a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rsi
  const char *v7; // r9
  __int64 *Ptr; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rax
  _BYTE *v12; // rdi
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h]

  v6 = this + 13;
  AcquireSRWLockExclusive(this + 13);
  try
  {
    if ( a2 == 6 )
    {
      v17 = 0LL;
      Ptr = (__int64 *)this[3].Ptr;
      v9 = *Ptr;
      v17 = 0LL;
      (*(void (__fastcall **)(__int64 *, __int64, unsigned __int64 *))(v9 + 48))(Ptr, a3, &v17);
      v10 = v17;
      if ( v17 )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v17 + 8LL))(v17);
        v11 = (_QWORD *)*((_QWORD *)this[11].Ptr + 1);
        v12 = this[11].Ptr;
        while ( !*((_BYTE *)v11 + 25) )
        {
          if ( v11[4] < v10 )
          {
            v11 = (_QWORD *)v11[2];
          }
          else
          {
            v12 = v11;
            v11 = (_QWORD *)*v11;
          }
        }
        if ( v12[25] || v10 < *((_QWORD *)v12 + 4) )
          v12 = this[11].Ptr;
        (*(void (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)v10 + 16LL))(v10, 0LL);
        if ( v12 == this[11].Ptr )
        {
          v14 = 0LL;
          v18 = 0LL;
          v15 = 0LL;
        }
        else
        {
          v14 = *((_QWORD *)v12 + 5);
          v18 = v14;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          v15 = v14;
        }
        if ( v15 )
          (*((void (__fastcall **)(RTL_SRWLOCK *, unsigned __int64, __int64))this[-1].Ptr + 12))(this - 1, v17, v14);
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        v10 = v17;
      }
      if ( v10 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5A,
                           (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewDataSourceAdapterBase.h",
                           v7);
  }
  return result;
}
