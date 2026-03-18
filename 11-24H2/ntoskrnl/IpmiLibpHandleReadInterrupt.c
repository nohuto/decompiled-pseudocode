/*
 * XREFs of IpmiLibpHandleReadInterrupt @ 0x1406A0864
 * Callers:
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x1406A0228 (IpmiLibpKcsReceiveResponseFromBmc.c)
 * Callees:
 *     IpmiLibWriteOneByte @ 0x14069FB88 (IpmiLibWriteOneByte.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IpmiLibpHandleReadInterrupt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 *a5)
{
  int v6; // edi
  __int64 result; // rax
  _WORD *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = a1;
  LOBYTE(v10) = 0;
  v6 = a4;
  if ( !qword_140EF9C30 )
    return 3221225485LL;
  result = guard_dispatch_icall_no_overrides(qword_140EF9C38, &WheaIpmiContext, a2, &v10);
  if ( (int)result >= 0 )
  {
    if ( (_BYTE)v10 )
    {
      switch ( (unsigned __int8)v10 )
      {
        case 1u:
          return 258LL;
        case 2u:
          return 0LL;
        case 0xFFu:
          return 3221225534LL;
        default:
          return 3221225473LL;
      }
    }
    else
    {
      IpmiLibWriteOneByte(0LL, 0, 0x68u);
      v8 = a5;
      v9 = *a5;
      if ( (int)v9 <= v6 - 1 )
      {
        *(_BYTE *)(v9 + a3) = 0;
        *v8 = v9 + 1;
      }
      return 261LL;
    }
  }
  return result;
}
