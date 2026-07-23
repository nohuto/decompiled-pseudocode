/*
 * XREFs of VslRegisterLogPages @ 0x1404C2A70
 * Callers:
 *     PsIumResumeAfterHibernate @ 0x1404F4A8C (PsIumResumeAfterHibernate.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 VslRegisterLogPages()
{
  struct _MDL *v0; // rbx
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 *v7[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v8[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 *v9; // [rsp+88h] [rbp-80h]
  __int64 *v10; // [rsp+90h] [rbp-78h]

  v0 = (struct _MDL *)PspIumLogBuffer;
  memset_0(v8, 0, 0x68uLL);
  memset_0(v7, 0, 0x48uLL);
  if ( !*(_QWORD *)&HvlpVsmVtlCallVa )
    return 3221225629LL;
  result = VslpLockPagesForTransfer((__int64)v7, v0, 0x2000u, IoWriteAccess, 2u);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = 2;
      LOBYTE(v3) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v3, v2);
    }
    v9 = v7[0];
    v10 = v7[7];
    v6 = VslpEnterIumSecureMode(2u, 0xFEu, 0, (__int64)v8);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    }
    __writecr8(CurrentIrql);
    VslpUnlockPagesForTransfer(v7);
    return v6;
  }
  return result;
}
