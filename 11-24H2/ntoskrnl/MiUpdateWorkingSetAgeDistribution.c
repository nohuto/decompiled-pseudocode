/*
 * XREFs of MiUpdateWorkingSetAgeDistribution @ 0x1403923F0
 * Callers:
 *     MiRemoveWsle @ 0x1402007F4 (MiRemoveWsle.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertActivePageTableLinksTail @ 0x140392798 (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x1403929A8 (MiRemoveActivePageTableLinks.c)
 *     MiRebuildPageTableAges @ 0x140392C6C (MiRebuildPageTableAges.c)
 */

__int64 __fastcall MiUpdateWorkingSetAgeDistribution(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        signed __int64 a4,
        char a5)
{
  __int64 v6; // rdi
  unsigned int v9; // r15d
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // r13d
  __int64 v15; // r8
  unsigned __int8 v16; // al
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v20; // rdx
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 *v23; // rbp
  __int64 *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 **v27; // rcx
  __int64 **v28; // rbx
  __int64 *v29; // rax
  __int64 **v30; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v6 = a3;
  v9 = 0;
  v10 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v11 = *(_QWORD *)v10;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v12 = *(_QWORD *)v10;
    if ( (v11 & 1) != 0 && ((v11 & 0x42) == 0 || (v11 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v20 = *(_QWORD *)(KernelWaitTime + 8 * ((v10 >> 3) & 0x1FF));
          if ( (v20 & 0x20) != 0 )
            v12 = v11 | 0x20;
          v11 = v12 | 0x42;
          if ( (v20 & 0x42) == 0 )
            v11 = v12;
        }
      }
    }
  }
  v13 = 48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v14 = 1;
  v15 = (*(_QWORD *)v13 >> 45) & 0x3FFLL;
  v16 = (*(_QWORD *)v13 >> 55) & 7;
  if ( (a5 & 8) == 0 )
  {
    if ( (_BYTE)v6 != v16 )
    {
      if ( (unsigned __int8)v6 <= v16 )
        goto LABEL_8;
      v25 = *(_QWORD *)v13;
      if ( (*(_DWORD *)(v13 + 36) & 0x4000000) != 0 )
        MiRemoveActivePageTableLinks(a1, v13, 0LL);
      *(_QWORD *)v13 = v25 & 0xFC001FFFFFFFFFFFuLL | ((a4 & 0x3FF | ((unsigned __int64)(v6 & 7) << 10)) << 45);
LABEL_25:
      MiInsertActivePageTableLinksTail(a1, v13, (unsigned __int8)v6, 0LL);
      goto LABEL_8;
    }
    *(_QWORD *)v13 = ((unsigned __int64)(unsigned int)(v15 + a4) << 45) ^ (*(_QWORD *)v13 ^ ((unsigned __int64)(unsigned int)(v15 + a4) << 45)) & 0xFF801FFFFFFFFFFFuLL;
    if ( v15 + a4 )
    {
      if ( (*(_DWORD *)(v13 + 36) & 0x4000000) != 0 )
        goto LABEL_8;
      *(_QWORD *)v13 = *(_QWORD *)v13 & 0xFC001FFFFFFFFFFFuLL | ((((_WORD)v15 + (_WORD)a4) & 0x3FF | ((unsigned __int64)(v6 & 7) << 10)) << 45);
      goto LABEL_25;
    }
    MiRebuildPageTableAges(a1, a2, 0LL);
    v9 = 1;
  }
LABEL_8:
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 8 * v6 + 40), a4);
  if ( (_BYTE)v6 != 7 )
    return v9;
  v21 = (_QWORD *)*((_QWORD *)qword_140E300C8 + *(unsigned __int16 *)(a1 + 174));
  v22 = v21[2200];
  if ( *(_QWORD *)(a1 + 96) >= *(_QWORD *)(v22 + 56) )
  {
    if ( a4 < 0 )
      return v9;
    v23 = (__int64 *)(a1 + 24);
    if ( !*v23 )
      return v9;
    v24 = (__int64 *)v21[2201];
  }
  else
  {
    if ( a4 > 0 )
      return v9;
    v23 = (__int64 *)(a1 + 24);
    if ( !*v23 )
      return v9;
    v24 = (__int64 *)v21[2202];
    v14 = 2;
  }
  if ( v24 == v23 )
    return v9;
  ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
  if ( *(_BYTE *)(v22 + 53) || (v26 = *v23) == 0 )
  {
    *(_BYTE *)(v22 + 54) = 1;
  }
  else
  {
    if ( *(__int64 **)(v26 + 8) != v23 || (v27 = (__int64 **)v23[1], *v27 != v23) )
LABEL_37:
      __fastfail(3u);
    v28 = (__int64 **)(v21 + 2201);
    *v27 = (__int64 *)v26;
    *(_QWORD *)(v26 + 8) = v27;
    if ( v14 == 1 )
    {
      v29 = *v28;
      if ( (__int64 **)(*v28)[1] != v28 )
        goto LABEL_37;
      *v23 = (__int64)v29;
      v23[1] = (__int64)v28;
      v29[1] = (__int64)v23;
      *v28 = v23;
    }
    else
    {
      v30 = (__int64 **)v28[1];
      if ( *v30 != (__int64 *)v28 )
        goto LABEL_37;
      *v23 = (__int64)v28;
      v23[1] = (__int64)v30;
      *v30 = v23;
      v28[1] = v23;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    SpinLock = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&SpinLock, retaddr);
  return v9;
}
