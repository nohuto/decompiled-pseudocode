/*
 * XREFs of ?ResultFromCaughtException_WinRt@details@wil@@YAJPEA_W_KPEA_N@Z @ 0x18021DCF0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn wil::details::ResultFromCaughtException_WinRt(
        wil::details *this,
        wchar_t *a2,
        __int64 a3,
        bool *a4)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r9
  __int64 *v6; // rbp
  unsigned __int64 v7; // r8
  int v8; // eax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r9
  __int64 *v12; // rdx
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  const wil::ResultException *v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+28h] [rbp-40h] BYREF
  const std::bad_alloc *v16; // [rsp+30h] [rbp-38h] BYREF
  const wil::ResultException *v17; // [rsp+38h] [rbp-30h] BYREF
  __int64 v18; // [rsp+40h] [rbp-28h] BYREF
  const std::bad_alloc *v19; // [rsp+48h] [rbp-20h] BYREF
  std::exception *v20; // [rsp+50h] [rbp-18h] BYREF
  const struct wil::ResultException *v21; // [rsp+70h] [rbp+8h]
  const struct std::exception *v22; // [rsp+70h] [rbp+8h]
  const struct wil::ResultException *v23; // [rsp+70h] [rbp+8h]
  const struct std::exception *v24; // [rsp+70h] [rbp+8h]
  const struct std::exception *v25; // [rsp+70h] [rbp+8h]
  wchar_t *v26; // [rsp+78h] [rbp+10h]
  wchar_t *v27; // [rsp+78h] [rbp+10h]
  wchar_t *v28; // [rsp+78h] [rbp+10h]
  wchar_t *v29; // [rsp+78h] [rbp+10h]
  wchar_t *v30; // [rsp+78h] [rbp+10h]
  _BYTE *v31; // [rsp+80h] [rbp+18h]
  _BYTE *v32; // [rsp+80h] [rbp+18h]

  if ( wil::g_pfnResultFromCaughtException )
  {
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v14 )
    {
      wil::details::MaybeGetExceptionString(v14, v21, v26, v4);
      return;
    }
    catch ( Platform::Exception *v15 )
    {
      *v31 = 1;
      __abi_translateCurrentException(0);
    }
    catch ( const std::bad_alloc *v16 )
    {
      wil::details::MaybeGetExceptionString(v16, v22, v27, v5);
      return;
    }
    catch ( ... )
    {
      v12 = &v13;
      v6 = v12;
      v8 = wil::details::RecognizeCaughtExceptionFromCallback((wil::details *)v12[14], (wchar_t *)v12[15], v7);
      *((_DWORD *)v6 + 34) = v8;
      if ( v8 < 0 )
        return;
      return;
    }
  }
  try
  {
    throw;
  }
  catch ( const wil::ResultException *v17 )
  {
    wil::details::MaybeGetExceptionString(v17, v23, v28, v9);
    return;
  }
  catch ( Platform::Exception *v18 )
  {
    *v32 = 1;
    __abi_translateCurrentException(0);
  }
  catch ( const std::bad_alloc *v19 )
  {
    wil::details::MaybeGetExceptionString(v19, v24, v29, v10);
    return;
  }
  catch ( std::exception *v20 )
  {
    wil::details::MaybeGetExceptionString(v20, v25, v30, v11);
    return;
  }
  catch ( ... )
  {
    return;
  }
}
