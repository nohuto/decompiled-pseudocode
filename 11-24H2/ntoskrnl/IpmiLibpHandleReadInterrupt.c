/*
 * XREFs of IpmiLibpHandleReadInterrupt @ 0x1406A196C
 * Callers:
 *     IpmiLibpKcsReceiveResponseFromBmc @ 0x1406A132C (IpmiLibpKcsReceiveResponseFromBmc.c)
 * Callees:
 *     IpmiLibWriteOneByte @ 0x1406A0C8C (IpmiLibWriteOneByte.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IpmiLibpHandleReadInterrupt(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, _WORD *a5)
{
  int v6; // edi
  __int64 result; // rax
  __int64 v8; // rdx

  v6 = a4;
  if ( !qword_140EF9F30 )
    return 3221225485LL;
  result = guard_dispatch_icall_no_overrides(qword_140EF9F38, &WheaIpmiContext);
  if ( (int)result >= 0 )
  {
    IpmiLibWriteOneByte(0LL, 0, 0x68u);
    v8 = (unsigned __int16)*a5;
    if ( (int)v8 <= v6 - 1 )
    {
      *(_BYTE *)(v8 + a3) = 0;
      *a5 = v8 + 1;
    }
    return 261LL;
  }
  return result;
}
