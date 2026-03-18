/*
 * XREFs of DbgkpLkmdSnapKernelStack @ 0x14057B408
 * Callers:
 *     DbgkpLkmdSnapThreadInContext @ 0x1406FC55C (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x140228B88 (KeEnumerateKernelStackSegments.c)
 *     DbgkpLkmdSnapDataEx @ 0x14057B304 (DbgkpLkmdSnapDataEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall DbgkpLkmdSnapKernelStack(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rsi
  __int64 v10; // rdi
  _BYTE *v11; // rbx
  _QWORD v14[2]; // [rsp+38h] [rbp-C8h] BYREF
  char v15; // [rsp+48h] [rbp-B8h]
  int v16; // [rsp+49h] [rbp-B7h]
  __int16 v17; // [rsp+4Dh] [rbp-B3h]
  char v18; // [rsp+4Fh] [rbp-B1h]
  __int64 v19; // [rsp+50h] [rbp-B0h]
  _BYTE v20[48]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  _BYTE v23[152]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+138h] [rbp+38h]
  __int64 v25; // [rsp+140h] [rbp+40h]

  v6 = (__int64 *)(a3 + 88);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( a5 )
  {
    v10 = *(_QWORD *)(a5 + 152);
  }
  else
  {
    v10 = *v6;
    if ( a4 )
    {
      memset_0(v23, 0, 0x4D0uLL);
      v24 = v10;
      v25 = v10;
    }
  }
  v14[0] = a1;
  v14[1] = v10;
  v15 = a4;
  v19 = a6;
  KeEnumerateKernelStackSegments(
    a2,
    (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))DbgkpLkmdSnapKernelStackSegmentCallback,
    (__int64)v14);
  if ( a4 )
  {
    v11 = v23;
    if ( a5 )
      v11 = (_BYTE *)a5;
    memset_0(v20, 0, 0x40uLL);
    v22 = *((_QWORD *)v11 + 31);
    v21 = *((_QWORD *)v11 + 20);
    DbgkpLkmdSnapDataEx(a1);
    *v6 = v10 - 64;
    *(_BYTE *)(a3 + 388) = -1;
  }
  return 0LL;
}
