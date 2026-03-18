/*
 * XREFs of PspInitPhase3 @ 0x140C24038
 * Callers:
 *     PsInitSystem @ 0x140BCD7F8 (PsInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PspMapSystemDll @ 0x14090B898 (PspMapSystemDll.c)
 *     PspReferenceSystemDll @ 0x14090BA68 (PspReferenceSystemDll.c)
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
    if ( (int)PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)off_140FD7158, 0, 0) >= 0 )
      v0 = PspReferenceSystemDll((signed __int64 *)*off_140FD7158);
    memset_0(v5, 0, 0x68uLL);
    v8 = 0LL;
    v6 = v2;
    v7 = v0;
    v1 = VslpEnterIumSecureMode(2u, 4u, 0, (__int64)v5);
    if ( v0 )
      ObFastDereferenceObject((__int64 *)*off_140FD7158, v0, 1683190608LL);
    if ( v2 )
      ObFastDereferenceObject(*(__int64 **)PspSystemDlls[0], v2, 1683190608LL);
  }
  KiUnstackDetachProcess((__int64)v4, 0LL);
  return v1 >= 0;
}
