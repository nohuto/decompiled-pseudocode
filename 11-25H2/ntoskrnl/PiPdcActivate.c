/*
 * XREFs of PiPdcActivate @ 0x14096C3B4
 * Callers:
 *     IopProcessInvalidateBusRelationsRequest @ 0x14096C15C (IopProcessInvalidateBusRelationsRequest.c)
 *     PnpActivatePdcForDeviceEvent @ 0x14096C250 (PnpActivatePdcForDeviceEvent.c)
 * Callees:
 *     Pdcv2ActivationClientActivate @ 0x14096C430 (Pdcv2ActivationClientActivate.c)
 */

__int64 __fastcall PiPdcActivate(const wchar_t *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int v5; // [rsp+28h] [rbp-50h]
  _DWORD v6[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v7; // [rsp+48h] [rbp-30h]
  __int64 v8; // [rsp+50h] [rbp-28h]
  __int128 v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+90h] [rbp+18h] BYREF
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  result = 0LL;
  v10 = 0;
  v11 = 0LL;
  if ( *(_QWORD *)&PnpPdcClientHandle )
  {
    v6[0] = 1;
    v9 = 0LL;
    v6[1] = 60;
    v8 = a2;
    v7 = 2LL;
    Pdcv2ActivationClientActivate(PnpPdcClientHandle, (int)v6, 0, a4, a1, v5, (__int64)&v11, (LARGE_INTEGER)&v10);
    return v11;
  }
  return result;
}
