/*
 * XREFs of ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z @ 0x1801BE2DC
 * Callers:
 *     ?IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z @ 0x1801BDD54 (-IsShaderLinkingBlacklistedGpu@CCommonRegistryData@@SA_NII@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001C330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x180201884 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 */

char __fastcall CCommonRegistryData::ParseGpuIdListKey(
        const unsigned __int16 *a1,
        struct CCommonRegistryData::GpuId **a2,
        unsigned int *a3)
{
  char *v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // edi
  unsigned int v8; // eax
  __int16 v9; // bx
  __int16 v10; // ax
  char v11; // dl
  __int16 v12; // ax
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  char *EndPtr; // [rsp+40h] [rbp-30h] BYREF
  char *pvData; // [rsp+48h] [rbp-28h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+60h] [rbp-10h]
  __int64 v23; // [rsp+64h] [rbp-Ch]
  DWORD pcbData; // [rsp+A0h] [rbp+30h] BYREF
  int v25; // [rsp+A4h] [rbp+34h]
  int v26; // [rsp+B8h] [rbp+48h] BYREF
  __int16 v27; // [rsp+BCh] [rbp+4Ch]

  v25 = HIDWORD(a1);
  pcbData = 0;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\Dwm",
         L"ShaderLinkingGPUBlacklist",
         2u,
         0LL,
         0LL,
         &pcbData) )
  {
    return 0;
  }
  pvData = (char *)MIDL_user_allocate(++pcbData);
  v5 = pvData;
  if ( !pvData
    || RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\Dwm",
         L"ShaderLinkingGPUBlacklist",
         2u,
         0LL,
         pvData,
         &pcbData) )
  {
LABEL_21:
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&pvData);
    return 0;
  }
  v22 = 0;
  v6 = 0;
  v23 = 0LL;
  v21 = 0LL;
  v7 = 0;
  EndPtr = pvData;
  while ( *v5 )
  {
    v8 = strtoul(v5, &EndPtr, 16);
    v9 = v8;
    if ( v8 - 1 > 0xFFFE || *EndPtr != 58 )
      goto LABEL_20;
    v10 = strtoul(EndPtr + 1, &EndPtr, 16);
    v11 = 0;
    if ( *EndPtr == 42 )
    {
      v10 *= 16;
      v11 = 1;
      ++EndPtr;
    }
    HIWORD(v26) = v10;
    v12 = -16;
    LOWORD(v26) = v9;
    if ( !v11 )
      v12 = -1;
    v13 = v7 + 1;
    v27 = v12;
    if ( v7 + 1 < v7 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
      goto LABEL_20;
    }
    if ( v13 > v6 )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v21, 6, 1, &v26);
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xC0u, 0LL);
LABEL_20:
        DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v21);
        goto LABEL_21;
      }
      v7 = HIDWORD(v23);
      v6 = v23;
    }
    else
    {
      v14 = v21;
      v15 = v7++;
      HIDWORD(v23) = v13;
      v16 = 3 * v15;
      *(_DWORD *)(v21 + 2 * v16) = v26;
      *(_WORD *)(v14 + 2 * v16 + 4) = v27;
    }
    v5 = EndPtr;
  }
  *a3 = v7;
  DynArrayImpl<0>::DetachData(&v21, 6LL, a2);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v21);
  std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&pvData);
  return 1;
}
