/*
 * XREFs of EtwpTraceProcessRundown @ 0x1408EF628
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1408EF230 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpBuildProcessEvent @ 0x1408EFB30 (EtwpBuildProcessEvent.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpTraceProcessRundown(int a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  int v8; // r8d
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v11; // [rsp+68h] [rbp-98h] BYREF
  _WORD v12[2]; // [rsp+70h] [rbp-90h] BYREF
  int v13; // [rsp+74h] [rbp-8Ch]
  PVOID v14; // [rsp+78h] [rbp-88h]
  __int64 v15; // [rsp+80h] [rbp-80h] BYREF
  PVOID P[2]; // [rsp+88h] [rbp-78h] BYREF
  int v17[4]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  __int64 v20[84]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v21[18]; // [rsp+360h] [rbp+260h] BYREF

  v13 = 0;
  LODWORD(v10) = 0;
  v11 = 0LL;
  *(_OWORD *)P = 0LL;
  memset_0(v20, 0, sizeof(v20));
  LOBYTE(v8) = *(_BYTE *)(a4 + 65);
  v15 = 0LL;
  v19 = 0LL;
  v14 = *(PVOID *)(a4 + 16);
  v12[1] = *(_WORD *)(a4 + 24);
  *(_OWORD *)v17 = 0LL;
  v12[0] = 0;
  v18 = 0LL;
  EtwpBuildProcessEvent(
    a1,
    a3,
    v8,
    (int)v17,
    (__int64)&v15,
    (__int64)v21,
    (__int64)&v10,
    (__int64)v20,
    (PSTRING)P,
    (__int64)v12,
    (__int64)&v11);
  EtwpLogKernelEvent((__int64)v21, *(_QWORD *)(a2 + 1360), *(_DWORD *)a2, v10, a3, 6297605 - (a3 != 807));
  if ( v14 != *(PVOID *)(a4 + 16) )
    ExFreePoolWithTag(v14, 0);
  if ( P[1] )
    ExFreePool(P[1]);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return 0LL;
}
