/*
 * XREFs of IommupHvFlushDomainTbs @ 0x1403AC1BC
 * Callers:
 *     HalpIommuFlushDomainTbs @ 0x1403AC8F8 (HalpIommuFlushDomainTbs.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x140246D40 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IommupHvFlushDomainTbs(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // r14d
  unsigned __int64 v6; // rcx
  unsigned int v7; // ecx
  __int64 v8; // r9
  KIRQL v9; // r12
  __int64 *v10; // rbx
  char v11; // r15
  __int64 v12; // rdx
  _QWORD v13[7]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = 0LL;
  v13[0] = 0LL;
  if ( qword_140FC10E0 && qword_140FC0FB8 && a3 )
  {
    v4 = a2 + a3 - 1;
    if ( v4 >= a2 )
    {
      v5 = 1;
      _BitScanReverse64(&v6, a2 ^ v4);
      v7 = v6 + 1;
      if ( v7 <= 0xC )
        v7 = 12;
      v13[0] = (v7 - 12) ^ ((v7 - 12) ^ a2 & -(1LL << v7)) & 0xFFFFFFFFFFFFFFC0uLL;
    }
    else
    {
      v5 = 0;
    }
    v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 88));
    v10 = *(__int64 **)(a1 + 72);
    v11 = 0;
    while ( v10 != (__int64 *)(a1 + 72) )
    {
      v12 = *((unsigned int *)v10 + 4);
      if ( (_DWORD)v12 )
      {
        guard_dispatch_icall_no_overrides(0LL, v12, v5, v13);
      }
      else if ( !v11 )
      {
        v14 = 0LL;
        LODWORD(v14) = *(_DWORD *)(a1 + 48);
        LOBYTE(v8) = 1;
        BYTE4(v14) = 1;
        guard_dispatch_icall_no_overrides(&v14, v5, v13, v8);
        v11 = 1;
      }
      v10 = (__int64 *)*v10;
    }
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 88), v9);
  }
}
