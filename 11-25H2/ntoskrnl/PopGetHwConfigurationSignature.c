/*
 * XREFs of PopGetHwConfigurationSignature @ 0x140B4CE34
 * Callers:
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x1402AA7A0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140413F40 (MmMapIoSpaceEx.c)
 *     HalGetMemoryCachingRequirements @ 0x14047F870 (HalGetMemoryCachingRequirements.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 PopGetHwConfigurationSignature()
{
  void *v0; // rbx
  unsigned int v1; // r14d
  unsigned int v2; // esi
  _DWORD *Pool2; // rax
  _DWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  _DWORD *v6; // rax
  ULONG ReturnLength; // [rsp+20h] [rbp-30h] BYREF
  int v9; // [rsp+24h] [rbp-2Ch] BYREF
  _DWORD SystemInformation[6]; // [rsp+28h] [rbp-28h] BYREF

  v9 = 0;
  SystemInformation[4] = 0;
  v0 = 0LL;
  SystemInformation[0] = 1094930505;
  SystemInformation[3] = 0;
  v1 = 0;
  ReturnLength = 0;
  SystemInformation[1] = 1;
  SystemInformation[2] = 1346584902;
  v2 = 4;
  if ( ZwQuerySystemInformation(SystemFirmwareTableInformation, SystemInformation, 0x14u, &ReturnLength) == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL);
    v4 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1094930505;
      Pool2[1] = 1;
      Pool2[2] = 1346584902;
      Pool2[3] = ReturnLength - 16;
      if ( ZwQuerySystemInformation(SystemFirmwareTableInformation, Pool2, ReturnLength, &ReturnLength) >= 0
        && *((_BYTE *)v4 + 24) >= 5u )
      {
        v5 = (unsigned int)v4[13];
        HalGetMemoryCachingRequirements(v5, 64LL, &v9);
        if ( v9 != 1 )
        {
          v2 = 516;
          if ( v9 == 2 )
            v2 = 1028;
        }
        v6 = (_DWORD *)MmMapIoSpaceEx(v5, 64LL, v2);
        v0 = v6;
        if ( *v6 == 1396916550 )
          v1 = v6[2];
      }
      ExFreePoolWithTag(v4, 0x206D654Du);
      if ( v0 )
        MmUnmapIoSpace(v0, 0x40uLL);
    }
  }
  return v1;
}
