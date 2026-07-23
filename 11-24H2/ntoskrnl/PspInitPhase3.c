/*
 * XREFs of PspInitPhase3 @ 0x140C37444
 * Callers:
 *     PsInitSystem @ 0x140BE07F8 (PsInitSystem.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspMapSystemDll @ 0x1409220D8 (PspMapSystemDll.c)
 *     PspReferenceSystemDll @ 0x1409222A8 (PspReferenceSystemDll.c)
 */

bool PspInitPhase3()
{
  ULONG_PTR v0; // rbx
  int v1; // esi
  __int64 v2; // r8
  __int64 v3; // r9
  ULONG_PTR v4; // rdi
  _OWORD v6[3]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v7[8]; // [rsp+50h] [rbp-88h] BYREF
  ULONG_PTR v8; // [rsp+58h] [rbp-80h]
  ULONG_PTR v9; // [rsp+60h] [rbp-78h]
  __int64 v10; // [rsp+68h] [rbp-70h]

  v0 = 0LL;
  memset(v6, 0, sizeof(v6));
  if ( !VslVsmEnabled )
    return 1;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v6);
  v1 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)PspSystemDlls[0], 0, 0);
  if ( v1 >= 0 )
  {
    v4 = PspReferenceSystemDll(*(signed __int64 **)PspSystemDlls[0]);
    if ( (int)PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)off_140FD8150, 0, 0) >= 0 )
      v0 = PspReferenceSystemDll((signed __int64 *)*off_140FD8150);
    memset_0(v7, 0, 0x68uLL);
    v10 = 0LL;
    v8 = v4;
    v9 = v0;
    v1 = VslpEnterIumSecureMode(2u, 4u, 0, (__int64)v7);
    if ( v0 )
      ObFastDereferenceObject((__int64 *)*off_140FD8150, v0, 0x64537350u);
    if ( v4 )
      ObFastDereferenceObject(*(__int64 **)PspSystemDlls[0], v4, 0x64537350u);
  }
  KiUnstackDetachProcess((__int64)v6, 0, v2, v3);
  return v1 >= 0;
}
