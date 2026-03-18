/*
 * XREFs of NVMeLogEtwControllerInfo @ 0x14001890C
 * Callers:
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 *     NVMeHwPassiveInitialize @ 0x1400185A0 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     FillControllerConfiguration @ 0x1400178B4 (FillControllerConfiguration.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

_OWORD *__fastcall NVMeLogEtwControllerInfo(__int64 a1)
{
  _OWORD *result; // rax
  _DWORD v3[172]; // [rsp+D0h] [rbp-2C8h] BYREF

  memset(v3, 0, sizeof(v3));
  result = FillControllerConfiguration(a1, v3);
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
    result = (_OWORD *)StorPortExtendedFunction(105LL, a1, 0LL, 1LL);
  if ( *(_BYTE *)(a1 + 3752) )
  {
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      return (_OWORD *)StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  }
  return result;
}
