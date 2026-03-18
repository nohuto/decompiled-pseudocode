/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0020E44
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C0020E00 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncChildLink @ 0x1C0021130 (DwmAsyncChildLink.c)
 *     DwmAsyncChildUnlink @ 0x1C002174C (DwmAsyncChildUnlink.c)
 *     DwmAsyncOwnerChange @ 0x1C00AA8FC (DwmAsyncOwnerChange.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1C00B1DD0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00B26E0 (FreeHwndList.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  unsigned int v3; // ebp
  int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  _QWORD *i; // r14
  int v9; // esi
  void *v10; // rax
  void *v11; // rax
  ShellWindowManagement *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  _QWORD *j; // r14
  __int64 v17; // rax
  int v18; // r13d
  void *v19; // rax
  void *v20; // rax
  __int64 v22; // rax
  void *v23; // rax
  void *v24; // rax
  void *v25; // rax
  void *v26; // rax
  void *v27; // rax
  int v28; // [rsp+70h] [rbp+8h]

  v3 = 1;
  v4 = a2;
  v5 = BuildHwndList(*(ShellWindowManagement **)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 112LL));
  v7 = v5;
  if ( !v5 )
    return 0;
  for ( i = (_QWORD *)(v5 + 32); *i != 1LL; ++i )
  {
    LOBYTE(v6) = 1;
    v22 = HMValidateHandleNoSecure(*i, v6);
    if ( v22 )
    {
      if ( v4 )
      {
        v28 = *(_DWORD *)(*(_QWORD *)(v22 + 40) + 236LL);
        v23 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildLink(v23, v28);
        v24 = (void *)ReferenceDwmApiPort();
        DwmAsyncOwnerChange(v24);
        v4 = a2;
      }
      else
      {
        v27 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildUnlink(v27);
      }
    }
  }
  FreeHwndList(v7);
  if ( v4 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 236LL);
    v10 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildLink(v10, v9);
    v11 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v11);
  }
  else
  {
    v26 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildUnlink(v26);
  }
  v12 = *(ShellWindowManagement **)(*((_QWORD *)a1 + 13) + 112LL);
  if ( v12 )
  {
    v13 = BuildHwndList(v12);
    v15 = v13;
    if ( v13 )
    {
      for ( j = (_QWORD *)(v13 + 32); *j != 1LL; ++j )
      {
        LOBYTE(v14) = 1;
        v17 = HMValidateHandleNoSecure(*j, v14);
        if ( v17 )
        {
          if ( v4 )
          {
            v18 = *(_DWORD *)(*(_QWORD *)(v17 + 40) + 236LL);
            v19 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildLink(v19, v18);
            v20 = (void *)ReferenceDwmApiPort();
            DwmAsyncOwnerChange(v20);
            v4 = a2;
          }
          else
          {
            v25 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildUnlink(v25);
          }
        }
      }
      FreeHwndList(v15);
      return v3;
    }
    return 0;
  }
  return v3;
}
