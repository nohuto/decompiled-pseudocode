/*
 * XREFs of EtwpSpinLockConfigRunDown @ 0x1407B1A94
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall EtwpSpinLockConfigRunDown(__int64 a1, char a2)
{
  unsigned int v2; // r8d
  bool v3; // cf
  __int64 v4; // rdx
  _DWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v9 = 0;
  v2 = *(_DWORD *)a1;
  v3 = a2 != 0;
  v4 = *(_QWORD *)(a1 + 1360);
  v6[0] = EtwpSpinLockSpinThreshold;
  v6[2] = EtwpSpinLockAcquireSampleRate;
  v6[1] = EtwpSpinLockContentionSampleRate;
  v6[3] = EtwpSpinLockHoldThreshold;
  v7 = v6;
  v8 = 16;
  return EtwpLogKernelEvent((__int64)&v7, v4, v2, 1u, 3916 - v3, 0x601903u);
}
