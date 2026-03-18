/*
 * XREFs of UsbhBuildVendorSpecificCompatibleIDs @ 0x140035E90
 * Callers:
 *     UsbhBuildDeviceCompatibleID @ 0x140035D4C (UsbhBuildDeviceCompatibleID.c)
 *     UsbhBuildClassCompatibleID @ 0x140058F70 (UsbhBuildClassCompatibleID.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhMakeId @ 0x14001BA60 (UsbhMakeId.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

char *__fastcall UsbhBuildVendorSpecificCompatibleIDs(__int64 a1, __int64 a2, void *a3, int *a4)
{
  _DWORD *v7; // rsi
  unsigned __int16 v8; // r13
  unsigned __int16 v9; // r15
  unsigned __int16 v10; // bp
  unsigned __int16 v11; // r14
  char *Id; // r8
  int v13; // r8d
  char *result; // rax
  wchar_t *v15; // rdx
  unsigned __int16 v16; // ax
  char *v17; // rax
  char *v18; // rax
  char *v19; // rax
  char *v20; // r8
  wchar_t *v21; // r14
  unsigned __int16 v22; // ax
  wchar_t *v23; // rdx
  char *v24; // rax
  char *v25; // rax
  char *v26; // r8
  unsigned __int16 v27; // ax
  int v29; // [rsp+98h] [rbp+20h] BYREF

  v7 = PdoExt(a2);
  v29 = *a4;
  v8 = *((_WORD *)v7 + 704);
  if ( (v7[355] & 0x20) != 0 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
  }
  else
  {
    v9 = *((unsigned __int8 *)v7 + 2438);
    v10 = *((unsigned __int8 *)v7 + 2439);
    v11 = *((unsigned __int8 *)v7 + 2440);
  }
  Id = UsbhMakeId(0, L"USB\\COMPAT_VID_nnnn", a3, &v29, 0, 4, v8, 0LL);
  if ( !Id )
  {
    v13 = 1667855921;
LABEL_6:
    Log(a1, 4096, v13, a2, -1073741670LL);
    return 0LL;
  }
  v15 = L"&DevClass_nn";
  v16 = 0;
  if ( (v7[355] & 0x20) == 0 )
  {
    v16 = v9;
    v15 = L"&Class_nn";
  }
  v17 = UsbhMakeId(0, v15, Id, &v29, 0, 2, v16, 0LL);
  if ( !v17 )
  {
    v13 = 1667855922;
    goto LABEL_6;
  }
  v18 = UsbhMakeId(0, L"&SubClass_nn", v17, &v29, 0, 2, v10, 0LL);
  if ( !v18 )
  {
    v13 = 1667855923;
    goto LABEL_6;
  }
  v19 = UsbhMakeId(0, L"&Prot_nn", v18, &v29, 1u, 2, v11, 0LL);
  if ( !v19 )
  {
    v13 = 1667855924;
    goto LABEL_6;
  }
  v20 = UsbhMakeId(0, L"USB\\COMPAT_VID_nnnn", v19, &v29, 0, 4, v8, 0LL);
  if ( !v20 )
  {
    v13 = 1667855925;
    goto LABEL_6;
  }
  v21 = L"&DevClass_nn";
  v22 = 0;
  if ( (v7[355] & 0x20) == 0 )
    v22 = v9;
  v23 = L"&DevClass_nn";
  if ( (v7[355] & 0x20) == 0 )
    v23 = L"&Class_nn";
  v24 = UsbhMakeId(0, v23, v20, &v29, 0, 2, v22, 0LL);
  if ( !v24 )
  {
    v13 = 1667855926;
    goto LABEL_6;
  }
  v25 = UsbhMakeId(0, L"&SubClass_nn", v24, &v29, 1u, 2, v10, 0LL);
  if ( !v25 )
  {
    v13 = 1667855927;
    goto LABEL_6;
  }
  v26 = UsbhMakeId(0, L"USB\\COMPAT_VID_nnnn", v25, &v29, 0, 4, v8, 0LL);
  if ( !v26 )
  {
    v13 = 1667855928;
    goto LABEL_6;
  }
  v27 = 0;
  if ( (v7[355] & 0x20) == 0 )
  {
    v27 = v9;
    v21 = L"&Class_nn";
  }
  result = UsbhMakeId(0, v21, v26, &v29, 1u, 2, v27, 0LL);
  if ( !result )
  {
    v13 = 1667855929;
    goto LABEL_6;
  }
  *a4 = v29;
  return result;
}
