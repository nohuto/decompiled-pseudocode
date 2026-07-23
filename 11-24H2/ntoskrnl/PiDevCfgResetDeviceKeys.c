/*
 * XREFs of PiDevCfgResetDeviceKeys @ 0x1407295D4
 * Callers:
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A7F31C (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14094C14C (PiDevCfgEnumDeviceKeys.c)
 *     IopOpenRegistryKeyEx @ 0x140A39394 (IopOpenRegistryKeyEx.c)
 */

__int64 __fastcall PiDevCfgResetDeviceKeys(int a1, int a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  _DWORD v8[2]; // [rsp+40h] [rbp-18h] BYREF
  const wchar_t *v9; // [rsp+48h] [rbp-10h]
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  v8[1] = 0;
  Handle = 0LL;
  v8[0] = 2621478;
  v9 = L"Configuration\\Reset";
  v5 = IopOpenRegistryKeyEx(&Handle, a3, v8, 131097LL);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    v6 = 0;
  }
  else if ( v5 >= 0 )
  {
    v6 = PiDevCfgEnumDeviceKeys(a1, a2, (_DWORD)Handle, -1, 0, (__int64)PiDevCfgResetDeviceKeyCallback, 0LL);
  }
  if ( Handle )
    ZwClose(Handle);
  return v6;
}
