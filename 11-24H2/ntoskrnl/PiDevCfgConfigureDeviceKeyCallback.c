/*
 * XREFs of PiDevCfgConfigureDeviceKeyCallback @ 0x1409CC950
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiDevCfgCopyDeviceProperties @ 0x1406F8BA0 (PiDevCfgCopyDeviceProperties.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1409CDFE8 (PiDevCfgCopyDeviceKeys.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 *     IopCreateRegistryKeyEx @ 0x140A6AFFC (IopCreateRegistryKeyEx.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceKeyCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        void *a5,
        __int64 a6,
        __int64 a7)
{
  void *v7; // rdi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // rdx
  HANDLE v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-30h]
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  __int128 v20; // [rsp+38h] [rbp-18h] BYREF
  void *v21; // [rsp+80h] [rbp+30h] BYREF

  Handle = 0LL;
  v7 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  if ( *(_DWORD *)(a3 + 16) == 16 && !wcsicmp(*(const wchar_t **)a3, L"Properties") )
  {
    v11 = PiDevCfgCopyDeviceProperties(a5, a6, *(_QWORD *)(a2 + 8), 1LL, v18, a7);
LABEL_4:
    v12 = v11;
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(a3 + 8) & 1) == 0 || (a4 & 0x801) != 0x800 )
  {
    v14 = a6;
    v15 = a5;
LABEL_12:
    v11 = PiDevCfgCopyDeviceKeys(v15, v14, a3, a7);
    goto LABEL_4;
  }
  *((_QWORD *)&v20 + 1) = L"Classes";
  LODWORD(v20) = 1048590;
  v16 = IopOpenRegistryKeyEx(&Handle, a5, &v20, 131097LL);
  v12 = v16;
  if ( v16 == -1073741772 )
  {
    v12 = 0;
    goto LABEL_5;
  }
  if ( v16 >= 0 )
  {
    v17 = IopCreateRegistryKeyEx(&v21, a6, &v20, 131103LL, 0, 0LL);
    v7 = v21;
    v12 = v17;
    if ( v17 >= 0 )
    {
      v15 = Handle;
      v14 = (__int64)v21;
      goto LABEL_12;
    }
  }
LABEL_5:
  if ( Handle )
    ZwClose(Handle);
  if ( v7 )
    ZwClose(v7);
  return v12;
}
