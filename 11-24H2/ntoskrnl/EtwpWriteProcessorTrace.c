/*
 * XREFs of EtwpWriteProcessorTrace @ 0x14064FFD0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall EtwpWriteProcessorTrace(__int64 *a1, __int64 a2, int a3, int a4)
{
  int v4; // r10d
  unsigned int v5; // r10d
  __int64 v6; // rdx
  __int64 *v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+3Ch] [rbp-2Ch]
  __int64 v11; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]

  v4 = *((_DWORD *)a1 + 12);
  *((_DWORD *)a1 + 9) = a4;
  v8 = a1 + 1;
  v5 = v4 & 0xFFFFE600 | 2;
  v10 = 0;
  *((_DWORD *)a1 + 12) = v5;
  *((_DWORD *)a1 + 8) = a3;
  v9 = 32;
  v11 = a2;
  v6 = *a1;
  v12 = a3;
  v13 = 0;
  return EtwpLogKernelEvent((__int64)&v8, *(_QWORD *)(v6 + 1360), *(_DWORD *)v6, 2u, 7968, v5);
}
