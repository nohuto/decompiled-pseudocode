/*
 * XREFs of MiUpdateWorkingSetAgeDistribution @ 0x1403851C0
 * Callers:
 *     MiRemoveWsleList @ 0x14024AF10 (MiRemoveWsleList.c)
 *     MiRemoveWsle @ 0x14038B0E4 (MiRemoveWsle.c)
 * Callees:
 *     MiVolunteerForTrimFirst @ 0x140385450 (MiVolunteerForTrimFirst.c)
 *     MiInsertActivePageTableLinksTail @ 0x14038556C (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x14038573C (MiRemoveActivePageTableLinks.c)
 *     MiRebuildPageTableAges @ 0x140385AC4 (MiRebuildPageTableAges.c)
 */

__int64 __fastcall MiUpdateWorkingSetAgeDistribution(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        unsigned __int64 a4,
        char a5)
{
  __int64 v6; // rdi
  unsigned int v9; // ebp
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r8
  unsigned __int8 v14; // al
  __int64 v16; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v19; // rdx
  __int64 v20; // rbx

  v6 = a3;
  v9 = 0;
  v10 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v11 = *(_QWORD *)v10;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v16 = *(_QWORD *)v10;
    if ( (v11 & 1) != 0 && ((v11 & 0x42) == 0 || (v11 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v19 = *(_QWORD *)(KernelWaitTime + 8 * ((v10 >> 3) & 0x1FF));
          if ( (v19 & 0x20) != 0 )
            v16 = v11 | 0x20;
          v11 = v16 | 0x42;
          if ( (v19 & 0x42) == 0 )
            v11 = v16;
        }
      }
    }
  }
  v12 = 48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v13 = (*(_QWORD *)v12 >> 45) & 0x3FFLL;
  v14 = (*(_QWORD *)v12 >> 55) & 7;
  if ( (a5 & 8) == 0 )
  {
    if ( (_BYTE)v6 != v14 )
    {
      if ( (unsigned __int8)v6 <= v14 )
        goto LABEL_5;
      v20 = *(_QWORD *)v12;
      if ( (*(_DWORD *)(v12 + 36) & 0x4000000) != 0 )
        MiRemoveActivePageTableLinks(a1, v12, 0LL);
      *(_QWORD *)v12 = v20 & 0xFC001FFFFFFFFFFFuLL | ((a4 & 0x3FF | ((unsigned __int64)(v6 & 7) << 10)) << 45);
LABEL_11:
      MiInsertActivePageTableLinksTail(a1, v12, (unsigned __int8)v6, 0LL);
      goto LABEL_5;
    }
    *(_QWORD *)v12 = ((unsigned __int64)(unsigned int)(v13 + a4) << 45) ^ (*(_QWORD *)v12 ^ ((unsigned __int64)(unsigned int)(v13 + a4) << 45)) & 0xFF801FFFFFFFFFFFuLL;
    if ( v13 + a4 )
    {
      if ( (*(_DWORD *)(v12 + 36) & 0x4000000) != 0 )
        goto LABEL_5;
      *(_QWORD *)v12 = *(_QWORD *)v12 & 0xFC001FFFFFFFFFFFuLL | ((((_WORD)v13 + (_WORD)a4) & 0x3FF | ((unsigned __int64)(v6 & 7) << 10)) << 45);
      goto LABEL_11;
    }
    MiRebuildPageTableAges(a1, a2, 0LL);
    v9 = 1;
  }
LABEL_5:
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 8 * v6 + 40), a4);
  if ( (_BYTE)v6 == 7 )
    MiVolunteerForTrimFirst(a1, a4, v13);
  return v9;
}
