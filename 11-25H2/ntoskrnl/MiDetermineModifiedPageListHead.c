/*
 * XREFs of MiDetermineModifiedPageListHead @ 0x14021BAB0
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiUpdatePageAttributeStamp @ 0x140476CA0 (MiUpdatePageAttributeStamp.c)
 * Callees:
 *     MiSetStoreVirtualPagefileValue @ 0x140226180 (MiSetStoreVirtualPagefileValue.c)
 *     MiMakePageFilePte @ 0x14022828C (MiMakePageFilePte.c)
 */

__int64 __fastcall MiDetermineModifiedPageListHead(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 PageFilePte; // rdx
  __int64 v18; // rax
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r11
  __int64 v21; // r8
  _QWORD v22[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  if ( (v3 & 2) != 0 )
    return a2 + 88 * (((unsigned __int16)v3 >> 12) + 48LL);
  if ( (unsigned __int16)v3 >> 12 != *(_DWORD *)(a2 + 1204) )
    goto LABEL_17;
  if ( qword_140E2D940 && (v3 & 0x10) == 0 )
    v3 &= ~qword_140E2D940;
  v6 = HIDWORD(v3);
  if ( v6 - 2 > 2 || !(_DWORD)v6 )
  {
LABEL_17:
    if ( (a3 & 1) != 0 && *(_DWORD *)(a2 + 1204) != -1 && (*(_BYTE *)(a1 + 34) & 8) == 0 )
    {
      v8 = *(unsigned int *)(a2 + 1204);
      v9 = *(_QWORD *)(a1 + 16);
      v22[0] = v9;
      v10 = v9;
      v11 = *(_QWORD *)(a2 + 8 * v8 + 18528);
      if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v18 = v22[0];
        if ( (v22[0] & 1) != 0 && ((v22[0] & 0x42) == 0 || (v22[0] & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v21 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v22 >> 3) & 0x1FF));
              if ( (v21 & 0x20) != 0 )
                v18 = v22[0] | 0x20LL;
              v10 = v18 | 0x42;
              if ( (v21 & 0x42) == 0 )
                v10 = v18;
            }
          }
        }
      }
      v12 = -9LL;
      if ( (v10 & 0x400) != 0 )
        v12 = -2049LL;
      v13 = v10 & v12;
      v22[0] = v13;
      if ( (v9 & 0x400) == 0 )
      {
        v13 &= 0xFFFFFFFFFFFFFFF9uLL;
        v22[0] = v13;
      }
      if ( v11 )
      {
        v14 = *(unsigned __int16 *)(v11 + 172);
        if ( v13 )
        {
          if ( qword_140E2D940 )
          {
            if ( (v13 & 0x10) != 0 )
              v15 = (unsigned int)v13 & 0xFFFFFFEF;
            else
              v15 = ~(_DWORD)qword_140E2D940 & (unsigned int)v13;
            v16 = v15 | 0x300000000LL;
            if ( (qword_140E2D940 & v16) != 0 )
              PageFilePte = v16 | 0x10;
            else
              PageFilePte = qword_140E2D940 | v16;
          }
          else
          {
            PageFilePte = (unsigned int)v13 | 0x300000000LL;
          }
        }
        else
        {
          PageFilePte = MiMakePageFilePte(3LL, v9, v14);
        }
        v13 = (v14 << 12) ^ (PageFilePte ^ (v14 << 12)) & 0xFFFFFFFFFFFF0FFFuLL;
        v22[0] = v13;
      }
      *(_QWORD *)(a1 + 16) = v13;
      return a2 + 4096;
    }
    return a2 + 3968;
  }
  if ( (_DWORD)v6 == 4 )
  {
    if ( (a3 & 2) != 0 )
    {
      *(_QWORD *)(a1 + 16) = MiSetStoreVirtualPagefileValue(a2, *(_QWORD *)(a1 + 16), 3LL);
      return a2 + 3968;
    }
    return a2 + 3968;
  }
  if ( (_DWORD)v6 == 3 )
    return a2 + 4096;
  if ( (_DWORD)v6 != 2 )
    return a2 + 3968;
  return a2 + 88 * (*(unsigned int *)(a2 + 1204) + 48LL);
}
