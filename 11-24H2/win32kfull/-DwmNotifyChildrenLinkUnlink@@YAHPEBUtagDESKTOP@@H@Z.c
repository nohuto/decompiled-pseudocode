/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1401851D4
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x14026B47C (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     DwmAsyncOwnerChange @ 0x14009188C (DwmAsyncOwnerChange.c)
 *     DwmAsyncChildLink @ 0x1401854E0 (DwmAsyncChildLink.c)
 *     DwmAsyncChildUnlink @ 0x1401855A4 (DwmAsyncChildUnlink.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  unsigned int v3; // ebp
  int v4; // r12d
  struct tagBWL *v5; // rax
  __int64 v6; // rdx
  struct tagBWL *v7; // r13
  __int64 *i; // r14
  __int64 v9; // rbx
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rsi
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  void *v19; // rax
  struct tagWND *v20; // rcx
  __int64 v22; // rdx
  int v23; // esi
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rbx
  _QWORD *v28; // rdi
  __int64 v29; // rbx
  void *v30; // rax
  void *v31; // rax
  struct tagBWL *v32; // rax
  __int64 v33; // rdx
  struct tagBWL *v34; // r15
  __int64 *j; // r14
  __int64 v36; // rbx
  void *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 *v40; // rsi
  int v41; // r13d
  void *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  _QWORD *v45; // rdi
  void *v46; // rax
  int v47; // [rsp+70h] [rbp+8h]

  v3 = 1;
  v4 = a2;
  v5 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 112LL), 3LL, 0LL, 1);
  v7 = v5;
  if ( !v5 )
    return 0;
  for ( i = (__int64 *)((char *)v5 + 32); *i != 1; ++i )
  {
    LOBYTE(v6) = 1;
    v11 = HMValidateHandleNoSecure(*i, v6);
    v13 = (__int64 *)v11;
    if ( v11 )
    {
      if ( v4 )
      {
        v47 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 236LL);
        v14 = (void *)ReferenceDwmApiPort(v12, v6);
        DwmAsyncChildLink(v14, v47);
        v17 = (_QWORD *)v13[15];
        if ( v17 )
          v17 = (_QWORD *)*v17;
        v9 = *v13;
        v10 = (void *)ReferenceDwmApiPort(v16, v15);
        DwmAsyncOwnerChange(v10, v9, (__int64)v17);
        v4 = a2;
      }
      else
      {
        v31 = (void *)ReferenceDwmApiPort(v12, v6);
        DwmAsyncChildUnlink(v31);
      }
    }
  }
  FreeHwndList(v7, v6);
  if ( v4 )
  {
    v22 = *((_QWORD *)a1 + 14);
    v23 = *(_DWORD *)(*(_QWORD *)(v22 + 40) + 236LL);
    v24 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL), v22);
    DwmAsyncChildLink(v24, v23);
    v27 = (__int64 *)*((_QWORD *)a1 + 14);
    v28 = (_QWORD *)v27[15];
    if ( v28 )
      v28 = (_QWORD *)*v28;
    v29 = *v27;
    v30 = (void *)ReferenceDwmApiPort(v26, v25);
    DwmAsyncOwnerChange(v30, v29, (__int64)v28);
  }
  else
  {
    v19 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL), v18);
    DwmAsyncChildUnlink(v19);
  }
  v20 = *(struct tagWND **)(*((_QWORD *)a1 + 14) + 112LL);
  if ( v20 )
  {
    v32 = BuildHwndList(v20, 3LL, 0LL, 1);
    v34 = v32;
    if ( v32 )
    {
      for ( j = (__int64 *)((char *)v32 + 32); *j != 1; ++j )
      {
        LOBYTE(v33) = 1;
        v38 = HMValidateHandleNoSecure(*j, v33);
        v40 = (__int64 *)v38;
        if ( v38 )
        {
          if ( v4 )
          {
            v41 = *(_DWORD *)(*(_QWORD *)(v38 + 40) + 236LL);
            v42 = (void *)ReferenceDwmApiPort(v39, v33);
            DwmAsyncChildLink(v42, v41);
            v45 = (_QWORD *)v40[15];
            if ( v45 )
              v45 = (_QWORD *)*v45;
            v36 = *v40;
            v37 = (void *)ReferenceDwmApiPort(v44, v43);
            DwmAsyncOwnerChange(v37, v36, (__int64)v45);
            v4 = a2;
          }
          else
          {
            v46 = (void *)ReferenceDwmApiPort(v39, v33);
            DwmAsyncChildUnlink(v46);
          }
        }
      }
      FreeHwndList(v34, v33);
      return v3;
    }
    return 0;
  }
  return v3;
}
