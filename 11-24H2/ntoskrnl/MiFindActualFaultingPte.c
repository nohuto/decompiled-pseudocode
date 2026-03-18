/*
 * XREFs of MiFindActualFaultingPte @ 0x140302F80
 * Callers:
 *     MiIsFaultPteIntact @ 0x140302E80 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140302F80 (MiFindActualFaultingPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiCheckVirtualAddress @ 0x1402FF5B0 (MiCheckVirtualAddress.c)
 *     MiFindActualFaultingPte @ 0x140302F80 (MiFindActualFaultingPte.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiFindActualFaultingPte(__int64 a1, unsigned __int64 a2)
{
  bool v3; // zf
  __int64 v4; // r10
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r11
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  int v16; // [rsp+20h] [rbp-99h] BYREF
  struct _LIST_ENTRY *v17; // [rsp+28h] [rbp-91h] BYREF
  unsigned __int64 v18; // [rsp+30h] [rbp-89h]
  unsigned __int64 v19; // [rsp+38h] [rbp-81h]
  unsigned __int64 v20; // [rsp+40h] [rbp-79h]
  __int64 v21; // [rsp+48h] [rbp-71h]
  _OWORD v22[4]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v23; // [rsp+90h] [rbp-29h]
  __int128 v24; // [rsp+A0h] [rbp-19h]
  __int128 v25; // [rsp+B0h] [rbp-9h]
  __int128 v26; // [rsp+C0h] [rbp+7h]
  __int128 v27; // [rsp+D0h] [rbp+17h]
  __int64 v28; // [rsp+E0h] [rbp+27h]

  v3 = (*(_BYTE *)(a1 + 69) & 1) == 0;
  memset(v22, 0, sizeof(v22));
  v28 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( v3 )
  {
    result = *(_QWORD *)(a1 + 72);
    if ( result != ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      return result;
    v11 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_21:
    v13 = MI_READ_PTE_LOCK_FREE(v11);
    v14 = v13;
    if ( (v13 & 1) != 0 )
      return 0LL;
    if ( (v13 & 0x400) == 0 )
      return v11;
    if ( (v13 & 2) != 0 )
      return 0LL;
    if ( (unsigned int)MiIsPrototypePteVadLookup(v13) )
    {
      v17 = 0LL;
      v16 = 0;
      v15 = MiCheckVirtualAddress(a2, &v16, &v17);
      if ( v17 )
        MiUnlockVadTree(1, 0x11u);
      if ( !v15 )
        return 0LL;
    }
    else
    {
      if ( qword_140E2DB80 )
      {
        if ( (v14 & 0x10) != 0 )
          v14 &= ~0x10uLL;
        else
          v14 &= ~qword_140E2DB80;
      }
      v15 = v14 >> 16;
    }
    BYTE5(v23) &= ~1u;
    *(_QWORD *)&v22[0] = v15;
    BYTE4(v23) = 17;
    WORD1(v23) = 0;
    *((_QWORD *)&v23 + 1) = ((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    result = MiFindActualFaultingPte(v22, v15);
    if ( !result )
      return v11;
    return result;
  }
  v18 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v21 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = 4LL;
  while ( 1 )
  {
    v5 = (unsigned __int64)*(&v17 + v4--);
    v6 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      v7 = *(_QWORD *)v5;
      if ( (v6 & 1) == 0 )
        return v5;
      if ( ((v6 & 0x42) == 0 || (v6 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v10 = *(_QWORD *)(KernelWaitTime + 8 * ((v5 >> 3) & 0x1FF));
            if ( (v10 & 0x20) != 0 )
              LOBYTE(v7) = v6 | 0x20;
            LOBYTE(v6) = v7 | 0x42;
            if ( (v10 & 0x42) == 0 )
              LOBYTE(v6) = v7;
          }
        }
      }
    }
    if ( (v6 & 1) == 0 )
      return v5;
    if ( (v6 & 0x80u) != 0LL )
      return 0LL;
    if ( v4 == 1 )
    {
      v11 = v18;
      goto LABEL_21;
    }
  }
}
