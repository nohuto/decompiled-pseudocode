/*
 * XREFs of ?ResultFromCaughtExceptionInternal@details@wil@@YA?AUResultStatus@12@PEAG_KPEA_N@Z @ 0x1800A5810
 * Callers:
 *     <none>
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x1800A60DC (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall wil::details::ResultFromCaughtExceptionInternal(int *a1, _WORD *a2, __int64 a3, _BYTE *a4)
{
  int v8; // eax
  int v9; // edx
  int *result; // rax
  int v11; // eax
  __int64 v12; // r8
  _DWORD *v13; // rbp
  __int64 v14; // rbx
  unsigned __int64 v15; // r9
  _DWORD *v16; // rbp
  unsigned __int64 v17; // r9
  int v18; // edx
  _DWORD *v19; // rbp
  unsigned __int64 v20; // r8
  int v21; // eax
  _BYTE *v22; // rdx
  _DWORD *v23; // rbp
  __int64 v24; // rbx
  unsigned __int64 v25; // r9
  _DWORD *v26; // rbp
  unsigned __int64 v27; // r9
  int v28; // edx
  _DWORD *v29; // rbp
  unsigned __int64 v30; // r9
  int v31; // edx
  _BYTE *v32; // rdx
  _BYTE *v33; // rdx
  _BYTE *v34; // rdx
  _BYTE *v35; // rdx
  _BYTE *v36; // rdx
  _BYTE *v37; // rdx
  _BYTE v38[32]; // [rsp+0h] [rbp-88h] BYREF
  const wil::ResultException *v39; // [rsp+20h] [rbp-68h] BYREF
  const std::bad_alloc *v40; // [rsp+28h] [rbp-60h] BYREF
  const wil::ResultException *v41; // [rsp+30h] [rbp-58h] BYREF
  const std::bad_alloc *v42; // [rsp+38h] [rbp-50h] BYREF
  std::exception *v43; // [rsp+40h] [rbp-48h] BYREF
  __int64 v44; // [rsp+48h] [rbp-40h]
  int v45; // [rsp+50h] [rbp-38h]
  int *v46; // [rsp+90h] [rbp+8h]
  _DWORD *v47; // [rsp+90h] [rbp+8h]

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
    a1[1] = wil::details::HrToNtStatus((wil::details *)(unsigned int)v8, v9);
    a1[2] = 0;
    return a1;
  }
  if ( wil::g_pfnResultFromCaughtException )
  {
    try
    {
      throw;
    }
    catch ( const wil::ResultException *v39 )
    {
      v32 = v38;
      v13 = v32;
      **((_BYTE **)v32 + 21) = 1;
      v14 = *((_QWORD *)v32 + 4);
      wil::details::MaybeGetExceptionString(
        (wil::details *)v14,
        *((const struct wil::ResultException **)v32 + 19),
        *((unsigned __int16 **)v32 + 20),
        v15);
      v13[18] = *(_DWORD *)(v14 + 32);
      v13[19] = *(_DWORD *)(v14 + 36);
      v13[20] = (unsigned __int8)(*(_BYTE *)(v14 + 28) & 8) >> 3;
      result = v46;
      *(_QWORD *)v46 = v44;
      v46[2] = v45;
      return result;
    }
    catch ( const std::bad_alloc *v40 )
    {
      v33 = v38;
      v16 = v33;
      wil::details::MaybeGetExceptionString(
        *((wil::details **)v33 + 5),
        *((const struct std::exception **)v33 + 19),
        *((unsigned __int16 **)v33 + 20),
        v17);
      v16[18] = -2147024882;
      v16[19] = wil::details::HrToNtStatus((wil::details *)0x8007000ELL, v18);
      v16[20] = 0;
      result = v46;
      *(_QWORD *)v46 = v44;
      v46[2] = v45;
      return result;
    }
    catch ( ... )
    {
      v34 = v38;
      v19 = v34;
      v21 = wil::details::RecognizeCaughtExceptionFromCallback(
              *((wil::details **)v34 + 19),
              *((unsigned __int16 **)v34 + 20),
              v20);
      if ( v21 < 0 )
      {
        v19[18] = v21;
        v19[19] = wil::details::HrToNtStatus((wil::details *)(unsigned int)v21, (int)v22);
        v19[20] = 0;
        result = v46;
        *(_QWORD *)v46 = v44;
        v46[2] = v45;
        return result;
      }
      goto LABEL_10;
    }
  }
  try
  {
    throw;
  }
  catch ( const wil::ResultException *v41 )
  {
    v35 = v38;
    v23 = v35;
    **((_BYTE **)v35 + 21) = 1;
    v24 = *((_QWORD *)v35 + 6);
    wil::details::MaybeGetExceptionString(
      (wil::details *)v24,
      *((const struct wil::ResultException **)v35 + 19),
      *((unsigned __int16 **)v35 + 20),
      v25);
    v23[18] = *(_DWORD *)(v24 + 32);
    v23[19] = *(_DWORD *)(v24 + 36);
    v23[20] = (unsigned __int8)(*(_BYTE *)(v24 + 28) & 8) >> 3;
    result = v46;
    *(_QWORD *)v46 = v44;
    v46[2] = v45;
    return result;
  }
  catch ( const std::bad_alloc *v42 )
  {
    v36 = v38;
    v26 = v36;
    wil::details::MaybeGetExceptionString(
      *((wil::details **)v36 + 7),
      *((const struct std::exception **)v36 + 19),
      *((unsigned __int16 **)v36 + 20),
      v27);
    v26[18] = -2147024882;
    v26[19] = wil::details::HrToNtStatus((wil::details *)0x8007000ELL, v28);
    v26[20] = 0;
    result = v46;
    *(_QWORD *)v46 = v44;
    v46[2] = v45;
    return result;
  }
  catch ( std::exception *v43 )
  {
    v37 = v38;
    v29 = v37;
    wil::details::MaybeGetExceptionString(
      *((wil::details **)v37 + 8),
      *((const struct std::exception **)v37 + 19),
      *((unsigned __int16 **)v37 + 20),
      v30);
    v29[18] = -2147024322;
    v29[19] = wil::details::HrToNtStatus((wil::details *)0x8007023ELL, v31);
    v29[20] = 0;
    result = v46;
    *(_QWORD *)v46 = v44;
    v46[2] = v45;
    return result;
  }
  catch ( ... )
  {
    v22 = v38;
LABEL_10:
    *v47 = 0;
    v11 = wil::details::HrToNtStatus(0LL, (int)v22);
    *(_DWORD *)(v12 + 4) = v11;
    *(_DWORD *)(v12 + 8) = 0;
    return (int *)v12;
  }
  return result;
}
