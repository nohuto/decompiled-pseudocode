/*
 * XREFs of EtwpTraceALPC @ 0x14064CD70
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceALPC(__int64 a1, int a2)
{
  __int16 v2; // r9
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp-20h] BYREF
  int v5; // [rsp+38h] [rbp-18h]
  int v6; // [rsp+3Ch] [rbp-14h]

  switch ( *(_DWORD *)(a1 + 16) )
  {
    case 1:
      v2 = 6689;
      goto LABEL_19;
    case 2:
      v2 = 6690;
      goto LABEL_19;
    case 3:
      v2 = 6691;
      goto LABEL_19;
  }
  if ( *(_DWORD *)(a1 + 16) != 4 )
  {
    switch ( *(_DWORD *)(a1 + 16) )
    {
      case 5:
        v2 = 6693;
        break;
      case 6:
        v2 = 6694;
        break;
      case 7:
        v2 = 6695;
        break;
      case 8:
        v5 = 8;
        v2 = 6696;
LABEL_20:
        v4 = a1 + 24;
        goto LABEL_21;
      case 9:
        v2 = 6697;
        break;
      default:
        return result;
    }
LABEL_19:
    v5 = 4;
    goto LABEL_20;
  }
  v2 = 6692;
  v4 = a1 + 24;
  v5 = a2 - 24;
LABEL_21:
  v6 = 0;
  return EtwTraceKernelEvent((int)&v4, 1, 0x100000u, v2, 5249282);
}
