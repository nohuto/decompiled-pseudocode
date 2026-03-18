/*
 * XREFs of ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1401A8FA8
 * Callers:
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x140187F08 (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1401A913C (-TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1401C7468 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1402254CC (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002ED20 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x140033390 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall TranslateUmdFileNameToVm(char *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // r14
  char *v6; // rsi
  int v7; // ebx
  char *NtSystemRoot; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int16 v15[4]; // [rsp+30h] [rbp-458h] BYREF
  unsigned __int16 v16[260]; // [rsp+38h] [rbp-450h] BYREF
  wchar_t String[264]; // [rsp+240h] [rbp-248h] BYREF

  v4 = a2;
  RtlStringCbCopyW((char *)String, 0x104uLL, a1);
  _wcslwr(String);
  v6 = (char *)wcsstr(String, L"\\filerepository\\");
  v7 = 0;
  if ( v6 )
  {
    RtlStringCbCopyW((char *)v15, 0x208uLL, (char *)L"\\??\\");
    NtSystemRoot = (char *)RtlGetNtSystemRoot();
    v7 = RtlStringCbCatW(v15, v9, NtSystemRoot);
    if ( v7 >= 0 )
    {
      v7 = RtlStringCbCatW(v15, v10, (char *)L"\\System32\\");
      if ( v7 >= 0 )
      {
        v7 = RtlStringCbCatW(v15, v11, (char *)L"HostDriverStore");
        if ( v7 >= 0 )
          v7 = RtlStringCbCatW(v15, v12, v6);
      }
    }
    if ( v7 < 0 )
      goto LABEL_14;
    v7 = RtlStringCbCopyW(a1, 2 * v4, (char *)v16);
    if ( v7 >= 0 )
    {
      if ( !a3 )
        return (unsigned int)v7;
    }
    else
    {
      if ( !a3 )
      {
LABEL_14:
        WdLogSingleEntry1(3LL, v7);
        WdLogGlobalForLineNumber = 2695;
        return (unsigned int)v7;
      }
      v7 = -2147483643;
    }
    v13 = -1LL;
    do
      ++v13;
    while ( v15[v13] );
    *a3 = 2 * v13 + 2;
    if ( v7 < 0 )
      goto LABEL_14;
  }
  return (unsigned int)v7;
}
