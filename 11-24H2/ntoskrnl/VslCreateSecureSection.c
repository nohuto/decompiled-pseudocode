/*
 * XREFs of VslCreateSecureSection @ 0x140A52D90
 * Callers:
 *     <none>
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     MmSizeOfMdl @ 0x14044DA00 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslCreateSecureSection(_QWORD *a1, __int64 a2, struct _MDL *a3, int a4, int a5)
{
  SIZE_T v9; // rax
  __int64 result; // rax
  int v11; // ebx
  __int64 *v12[10]; // [rsp+30h] [rbp-A1h] BYREF
  _BYTE v13[8]; // [rsp+80h] [rbp-51h] BYREF
  __int64 v14; // [rsp+88h] [rbp-49h]
  int v15; // [rsp+90h] [rbp-41h]
  __int64 *v16; // [rsp+98h] [rbp-39h]
  __int64 v17; // [rsp+A0h] [rbp-31h]
  __int64 *v18; // [rsp+A8h] [rbp-29h]

  memset_0(v13, 0, 0x68uLL);
  memset_0(v12, 0, 0x48uLL);
  *a1 = 0LL;
  if ( (a5 & 0xFFFFFFFE) != 0 )
    return 3221225716LL;
  if ( (a5 & 1) == 0 && ((a3->ByteCount & 0xFFF) != 0 || a3->ByteOffset) )
    return 3221225713LL;
  v9 = MmSizeOfMdl((PVOID)a3->ByteOffset, a3->ByteCount);
  if ( v9 > 0xFFFFFFFF )
    return 3221225713LL;
  result = VslpLockPagesForTransfer((__int64)v12, a3, v9, IoReadAccess, 0);
  if ( (int)result >= 0 )
  {
    v16 = v12[0];
    v18 = v12[7];
    v14 = *(_QWORD *)(a2 + 368);
    v15 = a4;
    v11 = VslpEnterIumSecureMode(2u, 0x44u, 0, (__int64)v13);
    VslpUnlockPagesForTransfer(v12);
    if ( v11 >= 0 )
      *a1 = v17;
    return (unsigned int)v11;
  }
  return result;
}
