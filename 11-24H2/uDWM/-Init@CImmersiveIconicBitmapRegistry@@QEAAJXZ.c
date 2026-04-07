/*
 * XREFs of ?Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ @ 0x180087EA0
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x18007FA54 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::Init(CImmersiveIconicBitmapRegistry *this)
{
  unsigned int v2; // ebx
  NTSTATUS v3; // eax
  __int64 v4; // rax
  int v5; // ecx
  _BYTE SystemInformation[8]; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+38h] [rbp-50h]
  int v9; // [rsp+3Ch] [rbp-4Ch]

  v2 = 0;
  memset_0(SystemInformation, 0, 0x40uLL);
  v3 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( v3 >= 0 )
  {
    v4 = (unsigned int)(v9 * v8);
    if ( (unsigned int)v4 > 0x40000000 )
      v5 = (12 * v4 - 0x300000000LL) / 0xC0000000uLL + 8;
    else
      v5 = 8;
    *((_DWORD *)this + 2) = v5;
  }
  else
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3 | 0x10000000, 0x38u, 0LL);
  }
  return v2;
}
