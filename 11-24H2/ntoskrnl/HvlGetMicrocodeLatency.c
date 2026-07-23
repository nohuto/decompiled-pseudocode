/*
 * XREFs of HvlGetMicrocodeLatency @ 0x14070CDF0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvcallInitInputControl @ 0x140450570 (HvcallInitInputControl.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HvlGetMicrocodeLatency(_QWORD *a1)
{
  unsigned int v1; // edi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // r14
  __int64 v7; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v8[24]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C0h]
  _BYTE v10[24]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+60h] [rbp-A0h]
  _BYTE v12[32]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v13[2064]; // [rsp+88h] [rbp-78h] BYREF

  v1 = 0;
  *a1 = 0LL;
  LODWORD(v11) = 0;
  LODWORD(v9) = 0;
  v7 = 0LL;
  v3 = HvlpAcquireHypercallPage((__int64)v10, 1, (__int64)v12, 16LL);
  v4 = HvlpAcquireHypercallPage((__int64)v8, 2, (__int64)v13, 1032LL);
  *(_OWORD *)v3 = 0LL;
  *(_DWORD *)v3 = 48;
  v5 = v4;
  HvcallInitInputControl(123, &v7);
  if ( (unsigned __int16)HvcallInitiateHypercall(v7) )
    return (unsigned int)-1073741823;
  else
    *a1 = *v5;
  return v1;
}
