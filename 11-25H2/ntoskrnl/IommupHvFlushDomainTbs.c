/*
 * XREFs of IommupHvFlushDomainTbs @ 0x1404D1710
 * Callers:
 *     HalpIommuFlushDomainTbs @ 0x14026EE00 (HalpIommuFlushDomainTbs.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IommupHvFlushDomainTbs(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  BOOL v4; // r14d
  KIRQL v5; // r12
  __int64 *v6; // rbx
  char v7; // r15
  __int64 v8; // rdx
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( qword_140FC0940 && qword_140FC0818 && a3 )
  {
    v4 = a2 + a3 - 1 >= a2;
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 88));
    v6 = *(__int64 **)(a1 + 72);
    v7 = 0;
    while ( v6 != (__int64 *)(a1 + 72) )
    {
      v8 = *((unsigned int *)v6 + 4);
      if ( (_DWORD)v8 )
      {
        guard_dispatch_icall_no_overrides(0LL, v8);
      }
      else if ( !v7 )
      {
        v9 = 0LL;
        LODWORD(v9) = *(_DWORD *)(a1 + 48);
        BYTE4(v9) = 1;
        guard_dispatch_icall_no_overrides(&v9, v4);
        v7 = 1;
      }
      v6 = (__int64 *)*v6;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 88), v5);
  }
}
