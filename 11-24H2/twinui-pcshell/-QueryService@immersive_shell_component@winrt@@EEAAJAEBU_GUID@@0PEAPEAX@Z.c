/*
 * XREFs of ?QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18014A730
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA?AU?$com_ptr@UIServiceProvider@@@1@XZ @ 0x1802AF758 (--$get_site@UIServiceProvider@@@immersive_shell_component@winrt@@IEAA-AU-$com_ptr@UIServiceProvi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::immersive_shell_component::QueryService(
        RTL_SRWLOCK *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  char *v8; // r13
  char v9; // al
  const char *v10; // r9
  __int64 (__fastcall ***v11)(_QWORD, const struct _GUID *, void **); // rbx
  RTL_SRWLOCK *v12; // r14
  _QWORD *Ptr; // rdx
  _QWORD *i; // rax
  __int64 v15; // rcx
  char v16; // di
  __int64 v17; // rcx
  int v18; // edi
  __int64 result; // rax
  int v20; // edi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, const struct _GUID *, void **); // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v8 = (char *)&this[-1];
  v9 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))this[-1].Ptr + 8))(this - 1);
  try
  {
    if ( v9 )
      return 0LL;
    LOBYTE(v22) = 0;
    v11 = 0LL;
    v23 = 0LL;
    v12 = this + 9;
    AcquireSRWLockShared(this + 9);
    Ptr = this[6].Ptr;
    for ( i = this[5].Ptr; i != Ptr; i += 4 )
    {
      v15 = *(_QWORD *)&a2->Data1 - *i;
      if ( *(_QWORD *)&a2->Data1 == *i )
        v15 = *(_QWORD *)a2->Data4 - i[1];
      if ( !v15 )
        break;
    }
    if ( i == Ptr )
    {
      v16 = v22;
    }
    else
    {
      v16 = 1;
      v17 = i[2];
      if ( v17 )
      {
        v11 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))i[2];
        v23 = v11;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    if ( v12 )
      ReleaseSRWLockShared(v12);
    if ( v16 )
    {
      if ( v11 )
      {
        v18 = (**v11)(v11, a3, a4);
        if ( v18 < 0 )
        {
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v23);
          return (unsigned int)v18;
        }
      }
      else
      {
        result = (**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v8)(v8, a3, a4);
        if ( (int)result < 0 )
          return result;
      }
      goto LABEL_20;
    }
    winrt::immersive_shell_component::get_site<IServiceProvider>(v8, &v22);
    if ( v22 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, const struct _GUID *, void **))(*(_QWORD *)v22 + 24LL))(
              v22,
              a2,
              a3,
              a4);
      if ( v20 >= 0 )
      {
        if ( v22 )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v22);
LABEL_20:
        if ( v11 )
          winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v23);
        return 0LL;
      }
      if ( v22 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v22);
      if ( v11 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v23);
      result = (unsigned int)v20;
    }
    else
    {
      if ( v11 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v23);
      result = 2147500033LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x10E,
                           (unsigned int)"shellcommon\\internal\\shell\\inc\\winrt/immersive_shell_component.h",
                           v10);
  }
  return result;
}
