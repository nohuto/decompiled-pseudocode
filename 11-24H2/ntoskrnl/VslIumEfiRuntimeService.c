/*
 * XREFs of VslIumEfiRuntimeService @ 0x140260670
 * Callers:
 *     <none>
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall VslIumEfiRuntimeService(unsigned int a1, struct _MDL *a2, unsigned int a3, __int128 *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 result; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int64 *v17[10]; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v18[8]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v19; // [rsp+88h] [rbp-41h]
  __int64 *v20; // [rsp+90h] [rbp-39h]
  __int64 *v21; // [rsp+98h] [rbp-31h]
  unsigned __int64 v22; // [rsp+A0h] [rbp-29h]
  __int128 v23; // [rsp+A8h] [rbp-21h]
  __int128 v24; // [rsp+B8h] [rbp-11h]

  v5 = a1;
  memset_0(v18, 0, 0x68uLL);
  memset_0(v17, 0, 0x48uLL);
  if ( a2 )
  {
    LODWORD(result) = VslpLockPagesForTransfer((__int64)v17, a2, a3, IoModifyAccess, 1u);
    if ( (result & 0x80000000) != 0LL )
      return (int)result;
  }
  v20 = v17[0];
  v21 = v17[7];
  v19 = v5;
  if ( a4 )
  {
    v15 = a4[1];
    v23 = *a4;
    v24 = v15;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v8, 15LL);
  }
  ExAcquireSpinLockExclusiveAtDpcLevel(&VslpIumEfiLock);
  LOBYTE(v10) = 2;
  v11 = VslpEnterIumSecureMode(v10, 252LL, 0LL, v18);
  ExReleaseSpinLockExclusiveFromDpcLevel(&VslpIumEfiLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
  }
  __writecr8(CurrentIrql);
  if ( a4 )
  {
    v16 = v24;
    *a4 = v23;
    a4[1] = v16;
  }
  if ( v11 == -1073741811 )
  {
    v13 = 0x8000000000000002uLL;
  }
  else if ( v11 == -1073741801 )
  {
    v13 = 0x8000000000000009uLL;
  }
  else
  {
    v13 = v22;
    if ( v11 )
      v13 = 0x8000000000000003uLL;
  }
  if ( v17[0] )
    VslpUnlockPagesForTransfer(v17);
  return v13;
}
