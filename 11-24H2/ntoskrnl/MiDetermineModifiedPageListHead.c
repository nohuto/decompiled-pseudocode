/*
 * XREFs of MiDetermineModifiedPageListHead @ 0x140300F80
 * Callers:
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiUpdatePageAttributeStamp @ 0x1403F034C (MiUpdatePageAttributeStamp.c)
 * Callees:
 *     MiMakePageFilePte @ 0x140215C78 (MiMakePageFilePte.c)
 *     MiSetStoreVirtualPagefileValue @ 0x1402FAC20 (MiSetStoreVirtualPagefileValue.c)
 */

__int64 __fastcall MiDetermineModifiedPageListHead(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v6; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 PageFilePte; // rdx
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r11
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r10
  _QWORD v22[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  if ( (v3 & 2) != 0 )
    return a2 + 88 * (((unsigned __int16)v3 >> 12) + 48LL);
  if ( (unsigned __int16)v3 >> 12 != *(_DWORD *)(a2 + 1204) )
    goto LABEL_43;
  if ( qword_140E2DCC0 && (v3 & 0x10) == 0 )
    v3 &= ~qword_140E2DCC0;
  v6 = HIDWORD(v3);
  if ( v6 - 2 > 2 || !(_DWORD)v6 )
  {
LABEL_43:
    if ( (a3 & 1) != 0 && *(_DWORD *)(a2 + 1204) != -1 && (*(_BYTE *)(a1 + 34) & 8) == 0 )
    {
      v19 = *(unsigned int *)(a2 + 1204);
      v20 = *(_QWORD *)(a1 + 16);
      v22[0] = v20;
      v18 = v20;
      v21 = *(_QWORD *)(a2 + 8 * v19 + 18528);
      if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        v17 = v22[0];
        if ( (v22[0] & 1) != 0 && ((v22[0] & 0x42) == 0 || (v22[0] & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            KernelWaitTime = Process[2].KernelWaitTime;
            if ( KernelWaitTime )
            {
              v16 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v22 >> 3) & 0x1FF));
              if ( (v16 & 0x20) != 0 )
                v17 = v22[0] | 0x20LL;
              v18 = v17 | 0x42;
              if ( (v16 & 0x42) == 0 )
                v18 = v17;
            }
          }
        }
      }
      v8 = -9LL;
      if ( (v18 & 0x400) != 0 )
        v8 = -2049LL;
      v9 = v18 & v8;
      v22[0] = v9;
      if ( (v20 & 0x400) == 0 )
      {
        v9 &= 0xFFFFFFFFFFFFFFF9uLL;
        v22[0] = v9;
      }
      if ( v21 )
      {
        v10 = *(unsigned __int16 *)(v21 + 172);
        if ( v9 )
        {
          if ( qword_140E2DCC0 )
          {
            if ( (v9 & 0x10) != 0 )
              v11 = (unsigned int)v9 & 0xFFFFFFEF;
            else
              v11 = ~(_DWORD)qword_140E2DCC0 & (unsigned int)v9;
            v12 = v11 | 0x300000000LL;
            if ( (qword_140E2DCC0 & v12) != 0 )
              PageFilePte = v12 | 0x10;
            else
              PageFilePte = qword_140E2DCC0 | v12;
          }
          else
          {
            PageFilePte = (unsigned int)v9 | 0x300000000LL;
          }
        }
        else
        {
          PageFilePte = MiMakePageFilePte(3LL);
        }
        v9 = (v10 << 12) ^ (PageFilePte ^ (v10 << 12)) & 0xFFFFFFFFFFFF0FFFuLL;
        v22[0] = v9;
      }
      *(_QWORD *)(a1 + 16) = v9;
      return a2 + 4096;
    }
    return a2 + 3968;
  }
  if ( (_DWORD)v6 == 4 )
  {
    if ( (a3 & 2) != 0 )
    {
      *(_QWORD *)(a1 + 16) = MiSetStoreVirtualPagefileValue(a2, *(_QWORD *)(a1 + 16), 3u);
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
