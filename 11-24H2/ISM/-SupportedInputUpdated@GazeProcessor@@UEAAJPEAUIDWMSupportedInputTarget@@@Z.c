/*
 * XREFs of ?SupportedInputUpdated@GazeProcessor@@UEAAJPEAUIDWMSupportedInputTarget@@@Z @ 0x1801B8B80
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$_Emplace@AEBQEAUIDWMSupportedInputTarget@@@?$list@PEAUIDWMSupportedInputTarget@@V?$allocator@PEAUIDWMSupportedInputTarget@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIDWMSupportedInputTarget@@PEAX@1@QEAU21@AEBQEAUIDWMSupportedInputTarget@@@Z @ 0x1801B7F40 (--$_Emplace@AEBQEAUIDWMSupportedInputTarget@@@-$list@PEAUIDWMSupportedInputTarget@@V-$allocator@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GazeProcessor::SupportedInputUpdated(GazeProcessor *this, struct IDWMSupportedInputTarget *a2)
{
  __int64 v3; // rax
  int v5; // eax
  char **v6; // rdx
  char *i; // rcx
  __int64 v8; // rcx
  unsigned int *v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int *v13; // rdx
  int v15; // [rsp+20h] [rbp-20h] BYREF
  __int128 v16; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v15 = 0;
  v3 = *(_QWORD *)a2;
  *(_QWORD *)&v16 = a2;
  v5 = (*(__int64 (__fastcall **)(struct IDWMSupportedInputTarget *, int *))(v3 + 40))(a2, &v15);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x163,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)(unsigned int)v5,
      v15);
  v6 = (char **)*((_QWORD *)this + 42);
  for ( i = *v6; i != (char *)v6; i = *(char **)i )
  {
    if ( *((struct IDWMSupportedInputTarget **)i + 2) == a2 )
    {
      if ( (v15 & 0x4000) == 0 )
      {
        **((_QWORD **)i + 1) = *(_QWORD *)i;
        *(_QWORD *)(*(_QWORD *)i + 8LL) = *((_QWORD *)i + 1);
        --*((_QWORD *)this + 43);
        std::_Deallocate<16,0>(i, (const struct std::nothrow_t *)0x18);
        if ( !*((_QWORD *)this + 43) )
        {
          v8 = *((_QWORD *)this + 5);
          v9 = (unsigned int *)*((_QWORD *)this + 6);
          v16 = 0LL;
          DWORD2(v16) = 0;
          LODWORD(v16) = 3;
          v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v8 + 80LL))(v8, *v9, &v16);
          if ( v10 < 0 )
          {
            v11 = 386LL;
LABEL_15:
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)v11,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
              (const char *)(unsigned int)v10);
            return 0LL;
          }
        }
      }
      return 0LL;
    }
  }
  if ( (v15 & 0x4000) != 0 )
  {
    std::list<IDWMSupportedInputTarget *>::_Emplace<IDWMSupportedInputTarget * const &>(
      (__int64)this + 336,
      (__int64)v6,
      &v16);
    if ( *((_QWORD *)this + 43) == 1LL )
    {
      v12 = *((_QWORD *)this + 5);
      v13 = (unsigned int *)*((_QWORD *)this + 6);
      v16 = 0LL;
      LODWORD(v16) = 3;
      DWORD2(v16) = 1;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v12 + 80LL))(v12, *v13, &v16);
      if ( v10 < 0 )
      {
        v11 = 372LL;
        goto LABEL_15;
      }
    }
  }
  return 0LL;
}
