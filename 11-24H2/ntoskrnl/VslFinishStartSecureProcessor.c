/*
 * XREFs of VslFinishStartSecureProcessor @ 0x14058CF6C
 * Callers:
 *     KeWriteProtectProcessorState @ 0x140B56770 (KeWriteProtectProcessorState.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x140266DCC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140267E9C (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslFinishStartSecureProcessor(__int64 a1, struct _MDL *a2)
{
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v5; // ebx
  __int64 *v7[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v8[8]; // [rsp+80h] [rbp-88h] BYREF
  PHYSICAL_ADDRESS v10; // [rsp+90h] [rbp-78h]
  __int64 *v11; // [rsp+98h] [rbp-70h]
  __int64 *v12; // [rsp+A0h] [rbp-68h]

  memset_0(v8, 0, 0x68uLL);
  memset_0(v7, 0, 0x48uLL);
  PhysicalAddress.QuadPart = 0LL;
  if ( *(_DWORD *)(a1 + 36) )
    PhysicalAddress = MmGetPhysicalAddress(*(PVOID *)(a1 - 328));
  v10 = PhysicalAddress;
  v5 = VslpLockPagesForTransfer((__int64)v7, a2, 0x4D0u, IoWriteAccess, 0);
  if ( v5 >= 0 )
  {
    v11 = v7[0];
    v12 = v7[7];
    v5 = VslpEnterIumSecureMode(2u, 3LL, 0, (__int64)v8);
    VslpUnlockPagesForTransfer(v7);
  }
  return (unsigned int)v5;
}
