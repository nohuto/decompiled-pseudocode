/*
 * XREFs of ?ResultFromCaughtExceptionInternal@details@wil@@YA?AUResultStatus@12@PEAG_KPEA_N@Z @ 0x18009CB10
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180066200 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18009B9A4 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal(__int64 a1, _WORD *a2, __int64 a3, _BYTE *a4)
{
  int v8; // eax
  __int64 result; // rax
  const wil::ResultException *v10; // rbx
  __int64 *v11; // rbp
  int v12; // eax
  const wil::ResultException *v13; // rbx
  __int64 *v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-88h] BYREF
  const wil::ResultException *v16; // [rsp+20h] [rbp-68h] BYREF
  const stdext::bad_alloc *v17; // [rsp+28h] [rbp-60h] BYREF
  const wil::ResultException *v18; // [rsp+30h] [rbp-58h] BYREF
  const stdext::bad_alloc *v19; // [rsp+38h] [rbp-50h] BYREF
  stdext::exception *v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+50h] [rbp-38h]
  __int64 v23; // [rsp+90h] [rbp+8h]
  const struct wil::ResultException *v24; // [rsp+98h] [rbp+10h]
  const struct stdext::exception *v25; // [rsp+98h] [rbp+10h]
  const struct wil::ResultException *v26; // [rsp+98h] [rbp+10h]
  const struct stdext::exception *v27; // [rsp+98h] [rbp+10h]
  const struct stdext::exception *v28; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v29; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v30; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v31; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v32; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v33; // [rsp+A0h] [rbp+18h]
  _BYTE *v34; // [rsp+A8h] [rbp+20h]
  _BYTE *v35; // [rsp+A8h] [rbp+20h]

  if ( a2 )
    *a2 = 0;
  *a4 = 0;
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
    LODWORD(v21) = v8;
    HIDWORD(v21) = wil::details::HrToNtStatus((wil::details *)(unsigned int)v8);
    LOBYTE(v22) = 0;
    *(_QWORD *)a1 = v21;
    *(_DWORD *)(a1 + 8) = v22;
    return a1;
  }
  if ( wil::g_pfnResultFromCaughtException )
  {
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v16 )
    {
      *v34 = 1;
      v10 = v16;
      wil::details::MaybeGetExceptionString(v16, v24, v29);
      v21 = *((_QWORD *)v10 + 3);
      LOBYTE(v22) = (*((_BYTE *)v10 + 20) & 8) != 0;
      goto LABEL_11;
    }
    catch ( const stdext::bad_alloc *v17 )
    {
      wil::details::MaybeGetExceptionString(v17, v25, v30);
      LODWORD(v21) = -2147024882;
      HIDWORD(v21) = wil::details::HrToNtStatus((wil::details *)0x8007000ELL);
      LOBYTE(v22) = 0;
      goto LABEL_11;
    }
    catch ( ... )
    {
      v14 = &v15;
      v11 = v14;
      v12 = wil::details::RecognizeCaughtExceptionFromCallback((wil::details *)v14[19], (unsigned __int16 *)v14[20]);
      if ( v12 < 0 )
      {
        *((_DWORD *)v11 + 18) = v12;
        *((_DWORD *)v11 + 19) = wil::details::HrToNtStatus((wil::details *)(unsigned int)v12);
        *((_BYTE *)v11 + 80) = 0;
        goto LABEL_11;
      }
      goto LABEL_10;
    }
  }
  try
  {
    throw;
  }
  catch ( const wil::ResultException *v18 )
  {
    *v35 = 1;
    v13 = v18;
    wil::details::MaybeGetExceptionString(v18, v26, v31);
    v21 = *((_QWORD *)v13 + 3);
    LOBYTE(v22) = (*((_BYTE *)v13 + 20) & 8) != 0;
    goto LABEL_11;
  }
  catch ( const stdext::bad_alloc *v19 )
  {
    wil::details::MaybeGetExceptionString(v19, v27, v32);
    LODWORD(v21) = -2147024882;
    HIDWORD(v21) = wil::details::HrToNtStatus((wil::details *)0x8007000ELL);
    LOBYTE(v22) = 0;
    goto LABEL_11;
  }
  catch ( stdext::exception *v20 )
  {
    wil::details::MaybeGetExceptionString(v20, v28, v33);
    LODWORD(v21) = -2147024322;
    HIDWORD(v21) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
    LOBYTE(v22) = 0;
    goto LABEL_11;
  }
  catch ( ... )
  {
LABEL_10:
    LODWORD(v21) = 0;
    HIDWORD(v21) = wil::details::HrToNtStatus(0LL);
    LOBYTE(v22) = 0;
LABEL_11:
    result = v23;
    *(_QWORD *)v23 = v21;
    *(_DWORD *)(v23 + 8) = v22;
    return result;
  }
  return result;
}
