/*
 * XREFs of ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x14003FE60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z @ 0x1400400E0 (-ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x1400581B8 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::ConnectPipesToRightSubmix(
        CSubmixImpl *this,
        struct ISubmixInternal *a2,
        struct CPipeInstance *a3)
{
  const struct CPipeInstance **v6; // rbp
  const struct CPipeInstance *v7; // rbp
  CPipeInstance *v8; // rcx
  int v9; // ebx
  _QWORD *v10; // r15
  _QWORD *v11; // rbx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, struct ISubmixInternal *, const struct CPipeInstance *, __int64); // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  _QWORD *v18; // rax
  int v19; // eax
  unsigned int v20; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (const struct CPipeInstance **)((char *)this + 272);
  if ( *((_QWORD *)this + 34) )
  {
    v9 = CFormatConverterPipe::ConnectToRightSubmix(
           (CSubmixImpl *)((char *)this + 272),
           a2,
           a3,
           (unsigned int)(*((_DWORD *)this + 64) - 2) <= 1);
    if ( v9 < 0 )
    {
      v17 = 413LL;
      goto LABEL_22;
    }
  }
  v7 = *v6;
  if ( !v7 )
    v7 = a3;
  v8 = (CPipeInstance *)*((_QWORD *)this + 3);
  if ( v8 )
  {
    if ( !v7 )
    {
      v9 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 24LL))(
             a2,
             *((_QWORD *)this + 3));
      if ( v9 < 0 )
      {
        v17 = 437LL;
        goto LABEL_22;
      }
      goto LABEL_7;
    }
    v9 = CPipeInstance::ConnectToRightPipe(v8, v7);
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 40LL))(
             a2,
             *((_QWORD *)this + 3));
      if ( v9 >= 0 )
      {
LABEL_7:
        *((_BYTE *)this + 312) = 1;
        goto LABEL_8;
      }
      v17 = 432LL;
    }
    else
    {
      v17 = 429LL;
    }
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
LABEL_8:
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v10 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v10 )
  {
    v13 = v10[2];
    v10 = (_QWORD *)*v10;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = *(__int64 (__fastcall **)(__int64, struct ISubmixInternal *, const struct CPipeInstance *, __int64))(*(_QWORD *)v13 + 56LL);
    v15 = (*(__int64 (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 56LL))(this);
    v16 = v14(v13, a2, v7, v15);
    v9 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C2,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v16);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      if ( this != (CSubmixImpl *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      return (unsigned int)v9;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v11 = (_QWORD *)*((_QWORD *)this + 15);
  do
  {
    if ( !v11 )
    {
      if ( this != (CSubmixImpl *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      return 0LL;
    }
    v18 = (_QWORD *)v11[2];
    v11 = (_QWORD *)*v11;
    v19 = (*(__int64 (__fastcall **)(_QWORD, struct ISubmixInternal *, const struct CPipeInstance *))(*(_QWORD *)*v18 + 136LL))(
            *v18,
            a2,
            v7);
    v20 = v19;
  }
  while ( v19 >= 0 );
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1CA,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v19);
  if ( this != (CSubmixImpl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return v20;
}
