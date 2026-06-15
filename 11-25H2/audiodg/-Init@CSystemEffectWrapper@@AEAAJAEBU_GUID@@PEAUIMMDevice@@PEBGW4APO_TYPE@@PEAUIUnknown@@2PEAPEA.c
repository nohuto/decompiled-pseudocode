/*
 * XREFs of ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x14000DEE8
 * Callers:
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x14000DE58 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     StringCopyWorkerW_0 @ 0x140064414 (StringCopyWorkerW_0.c)
 *     StringExHandleFillBehindNullW @ 0x140064490 (StringExHandleFillBehindNullW.c)
 *     StringExValidateDestW @ 0x1400644B8 (StringExValidateDestW.c)
 *     StringExValidateSrcW @ 0x1400644DC (StringExValidateSrcW.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007506C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::Init(
        unsigned __int64 a1,
        const IID *a2,
        size_t a3,
        const wchar_t *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  size_t v10; // r13
  unsigned __int64 v11; // r15
  HRESULT Instance; // ebx
  SIZE_T v13; // rax
  const wchar_t *v14; // rax
  size_t v15; // r8
  DWORD v16; // r9d
  wchar_t *v17; // r14
  size_t v18; // r8
  DWORD v19; // r9d
  HRESULT v20; // eax
  DWORD v21; // r8d
  unsigned __int64 v22; // r15
  unsigned __int64 v24; // rax
  int v25; // eax
  HRESULT v26; // r14d
  STRSAFE_PCNZWCH ppszSrc; // [rsp+50h] [rbp-90h] BYREF
  size_t pcchNewDestLength; // [rsp+58h] [rbp-88h] BYREF
  _QWORD v29[13]; // [rsp+60h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+0h]
  size_t pcchToRead; // [rsp+F8h] [rbp+18h] BYREF

  pcchToRead = a3;
  v29[0] = 0LL;
  *(IID *)(a1 + 144) = *a2;
  *(_DWORD *)(a1 + 168) = a5;
  *(_QWORD *)(a1 + 176) = a6;
  v10 = -1LL;
  do
    ++v10;
  while ( a4[v10] );
  *(_QWORD *)(a1 + 160) = 0LL;
  v11 = -1LL;
  if ( v10 + 1 >= v10 )
    v11 = v10 + 1;
  Instance = v10 + 1 < v10 ? 0x80070216 : 0;
  if ( v10 + 1 >= v10 )
  {
    v13 = 2 * v11;
    v29[1] = (v11 * (unsigned __int128)2uLL) >> 64;
    if ( is_mul_ok(v11, 2uLL) )
    {
      Instance = 0;
    }
    else
    {
      v13 = -1LL;
      Instance = -2147024362;
    }
    if ( Instance >= 0 )
    {
      v14 = (const wchar_t *)CoTaskMemAlloc(v13);
      v17 = (wchar_t *)v14;
      *(_QWORD *)(a1 + 160) = v14;
      Instance = 0;
      if ( !v14 )
        Instance = -2147024882;
      if ( Instance >= 0 )
      {
        pcchToRead = v10;
        ppszSrc = a4;
        if ( StringExValidateDestW(v14, v11, v15, v16) < 0 || StringExValidateSrcW(&ppszSrc, &pcchToRead, v18, v19) < 0 )
        {
          if ( v11 )
            *v17 = 0;
        }
        else if ( v11 )
        {
          pcchNewDestLength = 0LL;
          v20 = StringCopyWorkerW_0(v17, v11, &pcchNewDestLength, ppszSrc, pcchToRead);
          v22 = v11 - pcchNewDestLength;
          if ( v20 >= 0 && v22 > 1 )
            StringExHandleFillBehindNullW(&v17[pcchNewDestLength], 2 * v22, v21);
        }
      }
    }
  }
  if ( Instance >= 0 )
  {
    if ( !a7 )
      goto LABEL_24;
    v25 = CoRegisterDeviceCatalog(a7, v29);
    v26 = v25;
    if ( v25 >= 0 )
    {
      Instance = 0;
    }
    else
    {
      Instance = -2147009265;
      if ( v25 == -2147009265 )
        goto LABEL_17;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp",
        (const char *)(unsigned int)v25);
      Instance = v26;
    }
    if ( Instance >= 0 )
    {
LABEL_24:
      Instance = CoCreateInstance(
                   a2,
                   (LPUNKNOWN)((a1 + 8) & ((unsigned __int128)-(__int128)a1 >> 64)),
                   1u,
                   &GUID_00000000_0000_0000_c000_000000000046,
                   (LPVOID *)(a1 + 136));
      if ( Instance >= 0 )
      {
        v24 = a1 + 128;
        if ( !a6 )
          v24 = a1 + 8;
        *a8 = v24 & -(__int64)(a1 != 0);
      }
    }
  }
LABEL_17:
  if ( v29[0] )
    CoRevokeDeviceCatalog();
  return (unsigned int)Instance;
}
