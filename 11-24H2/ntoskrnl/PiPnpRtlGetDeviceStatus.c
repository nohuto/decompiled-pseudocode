/*
 * XREFs of PiPnpRtlGetDeviceStatus @ 0x1409F6860
 * Callers:
 *     <none>
 * Callees:
 *     ZwPlugPlayControl @ 0x1406A8BB0 (ZwPlugPlayControl.c)
 */

__int64 __fastcall PiPnpRtlGetDeviceStatus(__int64 a1, __int128 *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6)
{
  __int128 v8; // xmm0
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+30h] [rbp-20h]
  int v12; // [rsp+34h] [rbp-1Ch]
  int v13; // [rsp+38h] [rbp-18h]
  int v14; // [rsp+3Ch] [rbp-14h]
  int v15; // [rsp+40h] [rbp-10h]
  int v16; // [rsp+44h] [rbp-Ch]

  if ( !a2 || !a3 || !a4 || !a5 )
    return 3221225485LL;
  v8 = *a2;
  v16 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v15 = 0;
  v10 = v8;
  v14 = a6;
  result = ZwPlugPlayControl(14LL, (__int64)&v10);
  if ( (int)result >= 0 )
  {
    *a3 = v12;
    *a4 = v13;
    *a5 = v15;
  }
  return result;
}
