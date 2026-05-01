/*
 * XREFs of ?ResultFromCaughtExceptionInternal@details@wil@@YA?AUResultStatus@12@PEAG_KPEA_N@Z @ 0x180008A90
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180002E20 (_CxxThrowException_0.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180006810 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall wil::details::ResultFromCaughtExceptionInternal(
        int *a1,
        wil *a2,
        unsigned __int16 *a3,
        const struct wil::FailureInfo *a4)
{
  int v8; // eax
  int *result; // rax
  int v10; // eax
  __int64 v11; // r8
  const wil::ResultException *v12; // rbx
  __int64 v13; // rax
  int v14; // eax
  unsigned __int16 **v15; // rbp
  wil *v16; // rcx
  __int64 v17; // rbx
  const struct wil::FailureInfo *v18; // r9
  _BYTE *v19; // rbp
  unsigned __int16 *v20; // rbx
  __int64 v21; // rax
  _BYTE *v22; // rbp
  unsigned __int16 *v23; // rbx
  __int64 v24; // rax
  _BYTE *v25; // rdx
  _BYTE *v26; // rdx
  _BYTE *v27; // rdx
  _BYTE v28[32]; // [rsp+0h] [rbp-88h] BYREF
  const wil::ResultException *v29; // [rsp+20h] [rbp-68h] BYREF
  const wil::ResultException *v30; // [rsp+28h] [rbp-60h] BYREF
  const std::bad_alloc *v31; // [rsp+30h] [rbp-58h] BYREF
  const std::bad_alloc *v32; // [rsp+38h] [rbp-50h] BYREF
  std::exception *v33; // [rsp+40h] [rbp-48h] BYREF
  __int64 v34; // [rsp+48h] [rbp-40h]
  int v35; // [rsp+50h] [rbp-38h]
  int *v37; // [rsp+90h] [rbp+8h]

  if ( a2 )
    *(_WORD *)a2 = 0;
  *(_BYTE *)a4 = 0;
  if ( g_pfnResultFromCaughtException_CppWinRt )
  {
    v8 = g_pfnResultFromCaughtException_CppWinRt(a2, a3, a4);
    if ( v8 < 0 )
      goto LABEL_5;
  }
  if ( g_pfnResultFromCaughtException_WinRt )
  {
    v8 = g_pfnResultFromCaughtException_WinRt(a2, a3, a4);
LABEL_5:
    *a1 = v8;
    a1[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)v8);
    a1[2] = 0;
    return a1;
  }
  try
  {
    if ( wil::g_pfnResultFromCaughtException )
      throw;
  }
  catch ( const wil::ResultException *v29 )
  {
    *(_BYTE *)a4 = 1;
    v12 = v29;
    if ( a2 )
      wil::GetFailureLogString(a2, a3, (__int64)v29 + 24, a4);
    v34 = *((_QWORD *)v12 + 4);
    v35 = (unsigned __int8)(*((_BYTE *)v12 + 28) & 8) >> 3;
    result = a1;
    *(_QWORD *)a1 = v34;
    a1[2] = v35;
    return result;
  }
  catch ( const std::bad_alloc *v31 )
  {
    if ( a2 )
    {
      v13 = (*(__int64 (__fastcall **)(const std::bad_alloc *))(*(_QWORD *)v31 + 8LL))(v31);
      StringCchPrintfW((unsigned __int16 *)a2, (unsigned __int64)a3, L"std::exception: %hs", v13);
    }
    LODWORD(v34) = -2147024882;
    HIDWORD(v34) = wil::details::HrToNtStatus((wil::details *)0x8007000ELL);
    v35 = 0;
    result = a1;
    *(_QWORD *)a1 = v34;
    a1[2] = v35;
    return result;
  }
  catch ( ... )
  {
    v14 = wil::details::RecognizeCaughtExceptionFromCallback(a2, a3);
    if ( v14 < 0 )
    {
      LODWORD(v34) = v14;
      HIDWORD(v34) = wil::details::HrToNtStatus((wil::details *)(unsigned int)v14);
      v35 = 0;
      result = a1;
      *(_QWORD *)a1 = v34;
      a1[2] = v35;
      return result;
    }
    goto LABEL_10;
  }
  try
  {
    throw;
  }
  catch ( const wil::ResultException *v30 )
  {
    v25 = v28;
    v15 = (unsigned __int16 **)v25;
    **((_BYTE **)v25 + 21) = 1;
    v16 = (wil *)*((_QWORD *)v25 + 19);
    v17 = *((_QWORD *)v25 + 5);
    if ( v16 )
      wil::GetFailureLogString(v16, v15[20], v17 + 24, v18);
    *((_DWORD *)v15 + 18) = *(_DWORD *)(v17 + 32);
    *((_DWORD *)v15 + 19) = *(_DWORD *)(v17 + 36);
    *((_DWORD *)v15 + 20) = (unsigned __int8)(*(_BYTE *)(v17 + 28) & 8) >> 3;
    result = v37;
    *(_QWORD *)v37 = v34;
    v37[2] = v35;
    return result;
  }
  catch ( const std::bad_alloc *v32 )
  {
    v26 = v28;
    v19 = v26;
    v20 = (unsigned __int16 *)*((_QWORD *)v26 + 19);
    if ( v20 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v19 + 7) + 8LL))(*((_QWORD *)v19 + 7));
      StringCchPrintfW(v20, *((_QWORD *)v19 + 20), L"std::exception: %hs", v21);
    }
    *((_DWORD *)v19 + 18) = -2147024882;
    *((_DWORD *)v19 + 19) = wil::details::HrToNtStatus((wil::details *)0x8007000ELL);
    *((_DWORD *)v19 + 20) = 0;
    result = v37;
    *(_QWORD *)v37 = v34;
    v37[2] = v35;
    return result;
  }
  catch ( std::exception *v33 )
  {
    v27 = v28;
    v22 = v27;
    v23 = (unsigned __int16 *)*((_QWORD *)v27 + 19);
    if ( v23 )
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v22 + 8) + 8LL))(*((_QWORD *)v22 + 8));
      StringCchPrintfW(v23, *((_QWORD *)v22 + 20), L"std::exception: %hs", v24);
    }
    *((_DWORD *)v22 + 18) = -2147024322;
    *((_DWORD *)v22 + 19) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
    *((_DWORD *)v22 + 20) = 0;
    result = v37;
    *(_QWORD *)v37 = v34;
    v37[2] = v35;
    return result;
  }
  catch ( ... )
  {
LABEL_10:
    *a1 = 0;
    v10 = wil::details::HrToNtStatus(0LL);
    *(_DWORD *)(v11 + 4) = v10;
    *(_DWORD *)(v11 + 8) = 0;
    return (int *)v11;
  }
  return result;
}
