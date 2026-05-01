/*
 * XREFs of ?ResultFromCaughtException_CppWinRt@details@wil@@YAJPEAG_KPEA_N@Z @ 0x180220B00
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn wil::details::ResultFromCaughtException_CppWinRt(
        wil::details *this,
        unsigned __int16 *a2,
        __int64 a3,
        bool *a4)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r9
  __int64 *v9; // rbp
  unsigned __int64 v10; // r8
  int v11; // eax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r9
  __int64 *v18; // rdx
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  const winrt::hresult_error *v20; // [rsp+20h] [rbp-68h] BYREF
  const winrt::hresult_error *v21; // [rsp+28h] [rbp-60h] BYREF
  const wil::ResultException *v22; // [rsp+30h] [rbp-58h] BYREF
  const std::bad_alloc *v23; // [rsp+38h] [rbp-50h] BYREF
  const std::out_of_range *v24; // [rsp+40h] [rbp-48h] BYREF
  const std::invalid_argument *v25; // [rsp+48h] [rbp-40h] BYREF
  const wil::ResultException *v26; // [rsp+50h] [rbp-38h] BYREF
  const std::bad_alloc *v27; // [rsp+58h] [rbp-30h] BYREF
  const std::out_of_range *v28; // [rsp+60h] [rbp-28h] BYREF
  const std::invalid_argument *v29; // [rsp+68h] [rbp-20h] BYREF
  const std::exception *v30; // [rsp+70h] [rbp-18h] BYREF
  const struct wil::ResultException *v31; // [rsp+90h] [rbp+8h]
  const struct winrt::hresult_error *v32; // [rsp+90h] [rbp+8h]
  const struct std::exception *v33; // [rsp+90h] [rbp+8h]
  const struct std::exception *v34; // [rsp+90h] [rbp+8h]
  const struct std::exception *v35; // [rsp+90h] [rbp+8h]
  const struct wil::ResultException *v36; // [rsp+90h] [rbp+8h]
  const struct winrt::hresult_error *v37; // [rsp+90h] [rbp+8h]
  const struct std::exception *v38; // [rsp+90h] [rbp+8h]
  const struct std::exception *v39; // [rsp+90h] [rbp+8h]
  const struct std::exception *v40; // [rsp+90h] [rbp+8h]
  const struct std::exception *v41; // [rsp+90h] [rbp+8h]
  unsigned __int16 *v42; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v43; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v44; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v45; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v46; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v47; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v48; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v49; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v50; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v51; // [rsp+98h] [rbp+10h]
  unsigned __int16 *v52; // [rsp+98h] [rbp+10h]
  _BYTE *v53; // [rsp+A0h] [rbp+18h]
  _BYTE *v54; // [rsp+A0h] [rbp+18h]
  int v55; // [rsp+A8h] [rbp+20h] BYREF

  if ( wil::g_pfnResultFromCaughtException )
  {
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v22 )
    {
      *v53 = 1;
      wil::details::MaybeGetExceptionString(v22, v31, v42, v4);
      return;
    }
    catch ( const winrt::hresult_error *v20 )
    {
      wil::details::MaybeGetExceptionString(v20, v32, v43, v5);
      winrt::hresult_error::to_abi(v20, &v55);
      return;
    }
    catch ( const std::bad_alloc *v23 )
    {
      wil::details::MaybeGetExceptionString(v23, v33, v44, v6);
      return;
    }
    catch ( const std::out_of_range *v24 )
    {
      wil::details::MaybeGetExceptionString(v24, v34, v45, v7);
      return;
    }
    catch ( const std::invalid_argument *v25 )
    {
      wil::details::MaybeGetExceptionString(v25, v35, v46, v8);
      return;
    }
    catch ( ... )
    {
      v18 = &v19;
      v9 = v18;
      v11 = wil::details::RecognizeCaughtExceptionFromCallback(
              (wil::details *)v18[18],
              (unsigned __int16 *)v18[19],
              v10);
      *((_DWORD *)v9 + 42) = v11;
      if ( v11 < 0 )
        return;
      return;
    }
  }
  try
  {
    throw;
  }
  catch ( const wil::ResultException *v26 )
  {
    *v54 = 1;
    wil::details::MaybeGetExceptionString(v26, v36, v47, v12);
    return;
  }
  catch ( const winrt::hresult_error *v21 )
  {
    wil::details::MaybeGetExceptionString(v21, v37, v48, v13);
    winrt::hresult_error::to_abi(v21, &v55);
    return;
  }
  catch ( const std::bad_alloc *v27 )
  {
    wil::details::MaybeGetExceptionString(v27, v38, v49, v14);
    return;
  }
  catch ( const std::out_of_range *v28 )
  {
    wil::details::MaybeGetExceptionString(v28, v39, v50, v15);
    return;
  }
  catch ( const std::invalid_argument *v29 )
  {
    wil::details::MaybeGetExceptionString(v29, v40, v51, v16);
    return;
  }
  catch ( const std::exception *v30 )
  {
    wil::details::MaybeGetExceptionString(v30, v41, v52, v17);
    return;
  }
  catch ( ... )
  {
    return;
  }
}
