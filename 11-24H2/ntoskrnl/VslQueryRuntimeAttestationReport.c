/*
 * XREFs of VslQueryRuntimeAttestationReport @ 0x14070DA00
 * Callers:
 *     ExpQueryRuntimeAttestationReport @ 0x1407B59D0 (ExpQueryRuntimeAttestationReport.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlCopyToUser @ 0x1406FA008 (RtlCopyToUser.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslQueryRuntimeAttestationReport(__int64 a1, void *a2, unsigned int *a3, char a4)
{
  struct _MDL *v7; // rdi
  __int16 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // r14d
  struct _MDL *Pool2; // rax
  int v12; // ebx
  size_t v13; // rax
  __int16 v15; // [rsp+30h] [rbp-118h]
  __int64 *v16[10]; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v17[8]; // [rsp+90h] [rbp-B8h] BYREF
  __int16 v18; // [rsp+98h] [rbp-B0h]
  __int64 v19; // [rsp+A0h] [rbp-A8h]
  __int128 v20; // [rsp+A8h] [rbp-A0h]
  __int128 v21; // [rsp+B8h] [rbp-90h]
  __int64 *v22; // [rsp+C8h] [rbp-80h]
  __int64 *v23; // [rsp+D0h] [rbp-78h]
  size_t Size; // [rsp+D8h] [rbp-70h]

  v7 = 0LL;
  v8 = *(_WORD *)(a1 + 2);
  v15 = v8;
  memset_0(v16, 0, 0x48uLL);
  v9 = *(_QWORD *)(a1 + 8);
  memset_0(v17, 0, 0x68uLL);
  if ( *(_WORD *)a1 != 1 || v8 != 1 || !a3 || !v9 || (v9 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    goto LABEL_23;
  v10 = *a3;
  if ( !a2 )
  {
    if ( !v10 )
    {
LABEL_14:
      v18 = v15;
      v19 = v9;
      if ( a2 )
      {
        v20 = *(_OWORD *)(a1 + 16);
        v21 = *(_OWORD *)(a1 + 32);
        v22 = v16[0];
        v23 = v16[7];
      }
      v12 = VslpEnterIumSecureMode(2u, 0x116u, 0, (__int64)v17);
      v13 = (unsigned int)Size;
      *a3 = Size;
      if ( v12 >= 0 && a2 )
      {
        if ( (unsigned int)v13 <= v10 )
        {
          if ( a4 )
            RtlCopyToUser(a2, v7, v13);
          else
            RtlCopyVolatileMemory(a2, v7, v13);
        }
        else
        {
          v12 = -1073741595;
        }
      }
      goto LABEL_24;
    }
LABEL_23:
    v12 = -1073741811;
    goto LABEL_24;
  }
  if ( !v10 )
    goto LABEL_23;
  Pool2 = (struct _MDL *)ExAllocatePool2(0x40uLL, *a3, 0x54736D56u);
  v7 = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_24;
  }
  v12 = VslpLockPagesForTransfer((__int64)v16, Pool2, v10, IoWriteAccess, 2u);
  if ( v12 >= 0 )
    goto LABEL_14;
LABEL_24:
  if ( v16[0] )
    VslpUnlockPagesForTransfer(v16);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v12;
}
