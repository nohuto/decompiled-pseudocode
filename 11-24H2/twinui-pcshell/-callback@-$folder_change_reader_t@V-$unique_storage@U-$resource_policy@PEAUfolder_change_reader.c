/*
 * XREFs of ?callback@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX1K_KPEAU_TP_IO@@@Z @ 0x180218450
 * Callers:
 *     <none>
 * Callees:
 *     ?StartIo@folder_change_reader_state@details@wil@@QEAAJXZ @ 0x1802B9190 (-StartIo@folder_change_reader_state@details@wil@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::callback(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PVOID Overlapped,
        ULONG IoResult)
{
  char *v5; // rbx
  unsigned __int64 v6; // rdx
  _WORD *v7; // rcx
  __int64 v8; // r8
  __int16 v9; // ax
  _WORD *v10; // rax
  PVOID v11; // rcx
  PVOID Ptr; // rcx
  RTL_SRWLOCK *v13; // rbx
  unsigned int v14; // [rsp+20h] [rbp-E0h] BYREF
  _WORD *v15; // [rsp+28h] [rbp-D8h] BYREF
  _WORD v16[264]; // [rsp+30h] [rbp-D0h] BYREF

  if ( IoResult )
  {
    if ( IoResult != 1022 )
      return;
    Ptr = Context[14].Ptr;
    v15 = 0LL;
    v14 = 0;
    if ( !Ptr )
LABEL_19:
      __fastfail(7u);
    (*(void (__fastcall **)(PVOID, unsigned int *, _WORD **))(*(_QWORD *)Ptr + 32LL))(Ptr, &v14, &v15);
  }
  else
  {
    v5 = (char *)&Context[23];
    while ( v5 )
    {
      v6 = (unsigned __int64)*((unsigned int *)v5 + 2) >> 1;
      if ( v6 <= 0x7FFFFFFE )
      {
        v7 = v16;
        v8 = 260LL;
        do
        {
          if ( !(v6 + v8 - 260) )
            break;
          v9 = *(_WORD *)((char *)v7 + v5 - (char *)v16 + 12);
          if ( !v9 )
            break;
          *v7++ = v9;
          --v8;
        }
        while ( v8 );
        v10 = v7 - 1;
        if ( v8 )
          v10 = v7;
        *v10 = 0;
      }
      else
      {
        v16[0] = 0;
      }
      v11 = Context[14].Ptr;
      v15 = v16;
      v14 = *((_DWORD *)v5 + 1);
      if ( !v11 )
        goto LABEL_19;
      (*(void (__fastcall **)(PVOID, unsigned int *, _WORD **))(*(_QWORD *)v11 + 32LL))(v11, &v14, &v15);
      if ( *(_DWORD *)v5 )
        v5 += *(unsigned int *)v5;
      else
        v5 = 0LL;
    }
  }
  v13 = (RTL_SRWLOCK *)((unsigned __int64)&Context[22] & -(__int64)(TryAcquireSRWLockShared(Context + 22) != 0));
  if ( v13 )
  {
    if ( Context[21].Ptr )
      wil::details::folder_change_reader_state::StartIo((wil::details::folder_change_reader_state *)Context);
    ReleaseSRWLockShared(v13);
  }
}
