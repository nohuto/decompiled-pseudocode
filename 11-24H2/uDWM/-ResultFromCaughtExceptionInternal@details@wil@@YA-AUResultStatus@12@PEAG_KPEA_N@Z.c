/*
 * XREFs of ?ResultFromCaughtExceptionInternal@details@wil@@YA?AUResultStatus@12@PEAG_KPEA_N@Z @ 0x18009FB00
 * Callers:
 *     <none>
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180089598 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     _CxxThrowException_0 @ 0x1800F6360 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall wil::details::ResultFromCaughtExceptionInternal(int *a1, _WORD *a2, __int64 a3, _BYTE *a4)
{
  int v8; // eax
  int *result; // rax
  int v10; // eax
  __int64 v11; // r8
  const wil::ResultException *v12; // rbx
  __int64 *v13; // rbp
  int v14; // eax
  const wil::ResultException *v15; // rbx
  __int64 *v16; // rdx
  __int64 v17; // [rsp+0h] [rbp-88h] BYREF
  const wil::ResultException *v18; // [rsp+20h] [rbp-68h] BYREF
  const stdext::bad_alloc *v19; // [rsp+28h] [rbp-60h] BYREF
  const wil::ResultException *v20; // [rsp+30h] [rbp-58h] BYREF
  const stdext::bad_alloc *v21; // [rsp+38h] [rbp-50h] BYREF
  stdext::exception *v22; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+48h] [rbp-40h]
  int v24; // [rsp+50h] [rbp-38h]
  int *v25; // [rsp+90h] [rbp+8h]
  _DWORD *v26; // [rsp+90h] [rbp+8h]
  const struct wil::ResultException *v27; // [rsp+98h] [rbp+10h]
  const struct stdext::exception *v28; // [rsp+98h] [rbp+10h]
  const struct wil::ResultException *v29; // [rsp+98h] [rbp+10h]
  const struct stdext::exception *v30; // [rsp+98h] [rbp+10h]
  const struct stdext::exception *v31; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v32; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v33; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v34; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v35; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v36; // [rsp+A0h] [rbp+18h]
  _BYTE *v37; // [rsp+A8h] [rbp+20h]
  _BYTE *v38; // [rsp+A8h] [rbp+20h]

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
    *a1 = v8;
    a1[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)v8);
    a1[2] = 0;
    return a1;
  }
  if ( wil::g_pfnResultFromCaughtException )
  {
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v18 )
    {
      *v37 = 1;
      v12 = v18;
      wil::details::MaybeGetExceptionString(v18, v27, v32);
      v23 = *((_QWORD *)v12 + 3);
      v24 = (unsigned __int8)(*((_BYTE *)v12 + 20) & 8) >> 3;
      result = v25;
      *(_QWORD *)v25 = v23;
      v25[2] = v24;
      return result;
    }
    catch ( const stdext::bad_alloc *v19 )
    {
      wil::details::MaybeGetExceptionString(v19, v28, v33);
      LODWORD(v23) = -2147024882;
      HIDWORD(v23) = wil::details::HrToNtStatus((wil::details *)0x8007000ELL);
      v24 = 0;
      result = v25;
      *(_QWORD *)v25 = v23;
      v25[2] = v24;
      return result;
    }
    catch ( ... )
    {
      v16 = &v17;
      v13 = v16;
      v14 = wil::details::RecognizeCaughtExceptionFromCallback((wil::details *)v16[19], (unsigned __int16 *)v16[20]);
      if ( v14 < 0 )
      {
        *((_DWORD *)v13 + 18) = v14;
        *((_DWORD *)v13 + 19) = wil::details::HrToNtStatus((wil::details *)(unsigned int)v14);
        *((_DWORD *)v13 + 20) = 0;
        result = v25;
        *(_QWORD *)v25 = v23;
        v25[2] = v24;
        return result;
      }
      goto LABEL_10;
    }
  }
  try
  {
    throw;
  }
  catch ( const wil::ResultException *v20 )
  {
    *v38 = 1;
    v15 = v20;
    wil::details::MaybeGetExceptionString(v20, v29, v34);
    v23 = *((_QWORD *)v15 + 3);
    v24 = (unsigned __int8)(*((_BYTE *)v15 + 20) & 8) >> 3;
    result = v25;
    *(_QWORD *)v25 = v23;
    v25[2] = v24;
    return result;
  }
  catch ( const stdext::bad_alloc *v21 )
  {
    wil::details::MaybeGetExceptionString(v21, v30, v35);
    LODWORD(v23) = -2147024882;
    HIDWORD(v23) = wil::details::HrToNtStatus((wil::details *)0x8007000ELL);
    v24 = 0;
    result = v25;
    *(_QWORD *)v25 = v23;
    v25[2] = v24;
    return result;
  }
  catch ( stdext::exception *v22 )
  {
    wil::details::MaybeGetExceptionString(v22, v31, v36);
    LODWORD(v23) = -2147024322;
    HIDWORD(v23) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
    v24 = 0;
    result = v25;
    *(_QWORD *)v25 = v23;
    v25[2] = v24;
    return result;
  }
  catch ( ... )
  {
LABEL_10:
    *v26 = 0;
    v10 = wil::details::HrToNtStatus(0LL);
    *(_DWORD *)(v11 + 4) = v10;
    *(_DWORD *)(v11 + 8) = 0;
    return (int *)v11;
  }
  return result;
}
