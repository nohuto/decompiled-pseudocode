/*
 * XREFs of VslGetEtwDebugId @ 0x14058A3B4
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x1409F91A0 (EtwpLocateDbgIdForRegEntry.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslGetEtwDebugId(__int64 a1, __int64 a2, struct _MDL **a3, unsigned int *a4)
{
  struct _MDL *Pool2; // rbx
  int v9; // edi
  __int64 *v11[10]; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v12[8]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v13; // [rsp+88h] [rbp-41h]
  __int64 v14; // [rsp+90h] [rbp-39h]
  __int64 *v15; // [rsp+98h] [rbp-31h]
  __int64 *v16; // [rsp+A0h] [rbp-29h]
  unsigned int v17; // [rsp+A8h] [rbp-21h]

  memset_0(v12, 0, 0x68uLL);
  memset_0(v11, 0, 0x48uLL);
  Pool2 = *a3;
  while ( 1 )
  {
    v9 = VslpLockPagesForTransfer((__int64)v11, Pool2, *a4, IoModifyAccess, 0);
    if ( v9 < 0 )
      break;
    v13 = *(_QWORD *)(a1 + 368);
    v16 = v11[7];
    v15 = v11[0];
    v14 = a2;
    v9 = VslpEnterIumSecureMode(2u, 0x11u, 0, (__int64)v12);
    VslpUnlockPagesForTransfer(v11);
    *a4 = v17;
    if ( v9 >= 0 )
    {
      *a3 = Pool2;
      return (unsigned int)v9;
    }
    if ( v9 != -1073741789 )
      break;
    if ( Pool2 != *a3 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (struct _MDL *)ExAllocatePool2(0x100uLL, *a4, 0x54736D56u);
    if ( !Pool2 )
    {
      v9 = -1073741670;
      break;
    }
  }
  if ( Pool2 != *a3 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v9;
}
