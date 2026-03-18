/*
 * XREFs of ControllerEnable @ 0x14000C780
 * Callers:
 *     NVMeControllerInitPart1 @ 0x14001D11C (NVMeControllerInitPart1.c)
 * Callees:
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 */

__int64 __fastcall ControllerEnable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  unsigned int i; // edi
  __int64 v7; // r9
  bool v8; // dl
  signed __int32 v10[8]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v11[8]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+28h] [rbp-30h] BYREF
  int v13; // [rsp+38h] [rbp-20h]

  v5 = *(_DWORD *)(a1 + 204) / 0xAu;
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) |= 1u;
  _InterlockedOr(v10, 0);
  for ( i = 0; ; ++i )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL) & 1) != 0 )
      return 0LL;
    if ( i >= v5 )
      break;
    v11[0] = 0;
    StorPortExtendedFunction(109LL, a1, v11, a4);
    if ( v11[0] == 2 )
    {
      v13 = 0;
      v12 = 0LL;
      if ( !(unsigned int)StorPortExtendedFunction(106LL, a1, &v12, v7) )
      {
        v8 = 1;
        if ( DWORD2(v12) )
          v8 = 100 * HIDWORD(v12) >= (unsigned int)(5 * DWORD2(v12));
        if ( (_DWORD)v12 && 100 * DWORD1(v12) < (unsigned int)(5 * v12) || !v8 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(a1 + 4000));
          return 3238002700LL;
        }
      }
    }
    StorPortStallExecution(10000LL);
  }
  return 3238002689LL;
}
