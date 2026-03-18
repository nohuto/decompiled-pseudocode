/*
 * XREFs of PspInitPhase3 @ 0x140C35304
 * Callers:
 *     PsInitSystem @ 0x140BDE7F8 (PsInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PspMapSystemDll @ 0x1408FF7F8 (PspMapSystemDll.c)
 *     PspReferenceSystemDll @ 0x1408FF9C8 (PspReferenceSystemDll.c)
 */

bool PspInitPhase3()
{
  ULONG_PTR v0; // rbx
  int v1; // esi
  ULONG_PTR v2; // rdi
  _OWORD v4[3]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v5[8]; // [rsp+50h] [rbp-88h] BYREF
  ULONG_PTR v6; // [rsp+58h] [rbp-80h]
  ULONG_PTR v7; // [rsp+60h] [rbp-78h]
  __int64 v8; // [rsp+68h] [rbp-70h]

  v0 = 0LL;
  memset(v4, 0, sizeof(v4));
  if ( !VslVsmEnabled )
    return 1;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v4);
  v1 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)PspSystemDlls[0], 0, 0);
  if ( v1 >= 0 )
  {
    v2 = PspReferenceSystemDll(*(signed __int64 **)PspSystemDlls[0]);
    if ( (int)PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)off_140FD7150, 0, 0) >= 0 )
      v0 = PspReferenceSystemDll((signed __int64 *)*off_140FD7150);
    memset_0(v5, 0, 0x68uLL);
    v8 = 0LL;
    v6 = v2;
    v7 = v0;
    v1 = VslpEnterIumSecureMode(2u, 4LL, 0, (__int64)v5);
    if ( v0 )
      ObFastDereferenceObject((__int64 *)*off_140FD7150, v0, 0x64537350u);
    if ( v2 )
      ObFastDereferenceObject(*(__int64 **)PspSystemDlls[0], v2, 0x64537350u);
  }
  KiUnstackDetachProcess((__int64)v4, 0);
  return v1 >= 0;
}
