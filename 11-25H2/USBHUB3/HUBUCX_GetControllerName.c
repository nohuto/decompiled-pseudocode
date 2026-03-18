/*
 * XREFs of HUBUCX_GetControllerName @ 0x140027368
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016B00 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     WMI_AcquireBusInfo @ 0x14008F768 (WMI_AcquireBusInfo.c)
 *     WMI_AcquireControllerName @ 0x14008F864 (WMI_AcquireControllerName.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     memmove @ 0x140045DC0 (memmove.c)
 */

__int64 __fastcall HUBUCX_GetControllerName(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v4; // rsi
  _DWORD *Pool2; // rdi
  int v7; // ebx
  size_t v8; // r8
  _DWORD v10[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+78h] [rbp+20h] BYREF

  v10[0] = 0;
  v4 = a3;
  v11 = 16;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 16LL, 1748191317LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, unsigned int *, _DWORD *))(a1 + 664))(
         *(_QWORD *)(a1 + 616),
         1LL,
         Pool2,
         &v11,
         v10);
  if ( v7 == -1073741789 )
  {
    v11 = v10[0];
    ExFreePoolWithTag(Pool2, 0x68334855u);
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v11, 1748191317LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, unsigned int *, _DWORD *))(a1 + 664))(
           *(_QWORD *)(a1 + 616),
           1LL,
           Pool2,
           &v11,
           v10);
  }
  if ( v7 >= 0 )
  {
    if ( (unsigned int)v4 >= 4 )
    {
      *a2 = Pool2[2];
      v8 = (unsigned int)Pool2[2];
      if ( v4 - 4 < v8 )
        v8 = (unsigned int)(v4 - 4);
      memmove(a2 + 1, Pool2 + 3, v8);
    }
    else
    {
      v7 = -1073741789;
    }
  }
  ExFreePoolWithTag(Pool2, 0x68334855u);
  return (unsigned int)v7;
}
