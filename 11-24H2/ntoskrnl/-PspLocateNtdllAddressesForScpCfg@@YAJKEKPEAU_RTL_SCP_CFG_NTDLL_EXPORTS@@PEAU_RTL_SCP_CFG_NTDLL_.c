/*
 * XREFs of ?PspLocateNtdllAddressesForScpCfg@@YAJKEKPEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@@Z @ 0x140C38490
 * Callers:
 *     PsInitializeScpCfgPages @ 0x140C386CC (PsInitializeScpCfgPages.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsQuerySystemDllInfo @ 0x14091D988 (PsQuerySystemDllInfo.c)
 *     MmGetScpCfgFunctionOffset @ 0x140A65E84 (MmGetScpCfgFunctionOffset.c)
 *     ?PspCopyNtdllExport@@YAJPEBU_PS_SYSTEM_DLL_INFO@@KPEADPEAX_K@Z @ 0x140C381D0 (-PspCopyNtdllExport@@YAJPEBU_PS_SYSTEM_DLL_INFO@@KPEADPEAX_K@Z.c)
 */

__int64 __fastcall PspLocateNtdllAddressesForScpCfg(
        __int64 a1,
        char a2,
        __int64 a3,
        struct _RTL_SCP_CFG_NTDLL_EXPORTS *a4,
        struct _RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC *a5)
{
  __int64 SystemDllInfo; // rsi
  unsigned int v8; // ebx
  PIMAGE_NT_HEADERS v9; // r14
  __int64 result; // rax
  unsigned __int64 v11; // r9
  __int64 SizeOfImage; // r10
  unsigned int i; // r11d
  unsigned __int64 *v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r14
  int v18; // r14d
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  unsigned int ScpCfgFunctionOffset; // eax
  __int64 v22; // r9
  int v23; // edx
  unsigned int v24; // eax
  __int64 v25; // r9
  int v26; // edx
  unsigned int v27; // eax
  __int64 v28; // r9
  int v29; // edx
  unsigned int v30; // eax
  __int64 v31; // r9
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-78h] BYREF
  __int64 v33; // [rsp+40h] [rbp-68h]
  _QWORD v34[9]; // [rsp+48h] [rbp-60h]

  memset_0(a5, 0, 0x40uLL);
  SystemDllInfo = PsQuerySystemDllInfo(a2 == 0 ? 3 : 0);
  v8 = 0;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, *(PVOID *)(SystemDllInfo + 32), 0LL, &OutHeaders);
  v9 = OutHeaders;
  result = PspCopyNtdllExport(
             (const struct _PS_SYSTEM_DLL_INFO *)SystemDllInfo,
             OutHeaders->OptionalHeader.SizeOfImage,
             "RtlpScpCfgNtdllExports",
             a4,
             0x68uLL);
  if ( (int)result >= 0 )
  {
    v11 = *(_QWORD *)(SystemDllInfo + 24);
    SizeOfImage = v9->OptionalHeader.SizeOfImage;
    for ( i = 0; i < 4; ++i )
    {
      v14 = (unsigned __int64 *)((char *)a4 + 16 * i);
      v15 = v14[1];
      v16 = *v14;
      if ( v15 <= *v14
        || v15 - v16 > 0x1000
        || (v17 = *(_QWORD *)(SystemDllInfo + 24), v17 + SizeOfImage <= v17)
        || v16 < v17
        || v15 > v17 + SizeOfImage )
      {
        result = 3221225485LL;
        v18 = 0;
      }
      else
      {
        result = 0LL;
        v18 = 1;
      }
      if ( !v18 )
        return result;
      *v14 = *(_QWORD *)(SystemDllInfo + 32) + v16 - *(_QWORD *)(SystemDllInfo + 24);
      v14[1] = *(_QWORD *)(SystemDllInfo + 32) + v15 - *(_QWORD *)(SystemDllInfo + 24);
    }
    v33 = *((_QWORD *)a4 + 8);
    v34[0] = 8LL;
    v34[1] = *((_QWORD *)a4 + 9);
    v34[2] = 8LL;
    v34[3] = *((_QWORD *)a4 + 10);
    v34[4] = 8LL;
    v34[5] = *((_QWORD *)a4 + 11);
    v34[6] = 8LL;
    v34[7] = *((_QWORD *)a4 + 12);
    v34[8] = 1LL;
    while ( v8 < 5 )
    {
      v19 = v34[2 * v8 - 1];
      v20 = v19 + v34[2 * v8];
      if ( v11 + SizeOfImage <= v11 || v20 <= v19 || v19 < v11 || v20 > v11 + SizeOfImage )
        return 3221225485LL;
      ++v8;
    }
    ScpCfgFunctionOffset = MmGetScpCfgFunctionOffset(320, SizeOfImage);
    PspNtdllScpFunctions = v22 + ScpCfgFunctionOffset;
    v24 = MmGetScpCfgFunctionOffset(448, v23);
    qword_140FC7648 = v25 + v24;
    v27 = MmGetScpCfgFunctionOffset(64, v26);
    qword_140FC7650 = v28 + v27;
    v30 = MmGetScpCfgFunctionOffset(192, v29);
    qword_140FC7658 = v31 + v30;
    return 0LL;
  }
  return result;
}
