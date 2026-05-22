/*
 * XREFs of ?CreateDeviceInfo@Win32kInterop@@AEAA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@W4InputType@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x18004D648
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@@@Z @ 0x18004CC5C (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@.c)
 * Callees:
 *     ?CopyPnpInstancePath@Win32kInterop@@AEAAXKPEBGKPEAG@Z @ 0x18004D750 (-CopyPnpInstancePath@Win32kInterop@@AEAAXKPEBGKPEAG@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

Win32kInterop **__fastcall Win32kInterop::CreateDeviceInfo(__int64 a1, Win32kInterop **a2, int a3, __int64 a4)
{
  _DWORD *v7; // rbx
  Win32kInterop *v8; // rcx
  unsigned int v9; // r9d
  Win32kInterop *v10; // rax
  int v11; // ecx
  Win32kInterop *v13; // rax
  int v14; // ecx
  __int64 v15; // xmm0_8

  v7 = operator new(0x60CuLL);
  memset_0(v7, 0, 0x60CuLL);
  v7[2] = 1548;
  *a2 = (Win32kInterop *)v7;
  *v7 = *(_DWORD *)(a4 + 4);
  *((_DWORD *)*a2 + 1) = a3;
  *((_BYTE *)*a2 + 12) = *(_DWORD *)(a4 + 12) != 0;
  *((_DWORD *)*a2 + 4) = *(_DWORD *)(a4 + 16);
  v8 = *a2;
  *((_DWORD *)v8 + 18) = *(_DWORD *)(a4 + 48);
  Win32kInterop::CopyPnpInstancePath(
    v8,
    *(_DWORD *)(a4 + 48),
    (const unsigned __int16 *)(a4 + 52),
    v9,
    (unsigned __int16 *)*a2 + 38);
  if ( a3 == 2 )
  {
    v10 = *a2;
    v11 = *(_DWORD *)(a4 + 28);
    *(_QWORD *)((char *)v10 + 44) = *(_QWORD *)(a4 + 20);
    *((_DWORD *)v10 + 13) = v11;
  }
  else if ( a3 == 4 )
  {
    v13 = *a2;
    v14 = *(_DWORD *)(a4 + 44);
    v15 = *(_QWORD *)(a4 + 36);
    *(_OWORD *)((char *)v13 + 44) = *(_OWORD *)(a4 + 20);
    *(_QWORD *)((char *)v13 + 60) = v15;
    *((_DWORD *)v13 + 17) = v14;
  }
  else
  {
    *((_WORD *)*a2 + 16) = *(_WORD *)(a4 + 24);
    *((_WORD *)*a2 + 17) = *(_WORD *)(a4 + 26);
    *((_WORD *)*a2 + 18) = *(_WORD *)(a4 + 28);
  }
  return a2;
}
