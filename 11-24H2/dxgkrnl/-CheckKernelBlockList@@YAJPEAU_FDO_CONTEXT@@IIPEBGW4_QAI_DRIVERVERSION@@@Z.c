/*
 * XREFs of ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x140237DCC
 * Callers:
 *     DxgkInitializeBlockList @ 0x140239070 (DxgkInitializeBlockList.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     DxgkFreeUnicodeString @ 0x140237C00 (DxgkFreeUnicodeString.c)
 *     ?CompareMultiString@@YAEPEAGU_UNICODE_STRING@@@Z @ 0x140238100 (-CompareMultiString@@YAEPEAGU_UNICODE_STRING@@@Z.c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x140238184 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1402383BC (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall CheckKernelBlockList(
        struct _FDO_CONTEXT *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5)
{
  unsigned int BlockListStrings; // eax
  __int64 v7; // rsi
  unsigned int v8; // edi
  struct _UNICODE_STRING *v9; // rdi
  __int64 v10; // r14
  struct _UNICODE_STRING v11; // xmm0
  int v12; // eax
  struct _UNICODE_STRING *v13; // rbx
  unsigned int v15[4]; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v16; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v17; // [rsp+70h] [rbp-90h] BYREF

  v15[0] = 0;
  BlockListStrings = FindBlockListStrings(
                       L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BlockList\\Kernel",
                       a2,
                       a3,
                       a4,
                       a5,
                       v15,
                       &v17);
  v7 = v15[0];
  v8 = BlockListStrings;
  if ( v15[0] >= 0x14 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 720;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"foundStringCount < MAX_TRUE_CONDITIONS",
      720LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (_DWORD)v7 )
  {
    v9 = &v17;
    v10 = v7;
    do
    {
      v11 = *v9;
      v16 = *v9;
      if ( CompareMultiString(L"GPU_PV_ALL", &v16) )
        *((_DWORD *)a1 + 1462) |= 0x80u;
      v16 = v11;
      if ( CompareMultiString(L"GPU_PV_HIGH_SECURITY", &v16) )
        *((_DWORD *)a1 + 1462) |= 0x200u;
      v16 = v11;
      if ( CompareMultiString(L"GPU_P_ALL", &v16) )
        *((_DWORD *)a1 + 1462) |= 0x100u;
      v16 = v11;
      if ( CompareMultiString(L"DISABLE_MPO", &v16) )
        *((_DWORD *)a1 + 1462) |= 0x400u;
      v16 = v11;
      if ( CompareMultiString(L"DISABLE_HWSCH", &v16) )
        *((_DWORD *)a1 + 1462) |= 0x800u;
      ++v9;
      --v10;
    }
    while ( v10 );
    v15[0] = 0;
    v12 = ConvertStringsToOneMultiString(&v17, v7, (unsigned __int16 **)a1 + 732, v15);
    v8 = v12;
    if ( v12 < 0 )
    {
      if ( v12 == -1073741637 )
        *((_BYTE *)a1 + 5868) = 1;
    }
    else
    {
      *((_DWORD *)a1 + 1466) = 2 * v15[0];
    }
    v13 = &v17;
    do
    {
      DxgkFreeUnicodeString((__int64)v13++);
      --v7;
    }
    while ( v7 );
  }
  return v8;
}
