/*
 * XREFs of PdcTaskClientRequest @ 0x1401593C4
 * Callers:
 *     ?ndisPMPDCTaskClient@@YAXPEAX@Z @ 0x1400BB8B0 (-ndisPMPDCTaskClient@@YAXPEAX@Z.c)
 *     ?ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1400BD928 (-ndisSetPdcTaskClientExpiryTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPdcTaskClientDisableTimeoutWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x14014ACF0 (-ndisPdcTaskClientDisableTimeoutWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     PdcPortSendMessageSynchronously @ 0x1400EBC1C (PdcPortSendMessageSynchronously.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     PdcAcquireRwLockExclusive @ 0x140159540 (PdcAcquireRwLockExclusive.c)
 *     PdcReleaseRwLockExclusive @ 0x1401595A4 (PdcReleaseRwLockExclusive.c)
 */

__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  int v7; // ecx
  _DWORD v9[200]; // [rsp+20h] [rbp-328h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( a1 && *(_DWORD *)a1 == 1667458128 )
  {
    PdcAcquireRwLockExclusive(a1 + 8);
    if ( !a2 && !*(_DWORD *)(a1 + 48) )
    {
      v4 = -1073741823;
LABEL_15:
      PdcReleaseRwLockExclusive(a1 + 8);
      return (unsigned int)v4;
    }
    v5 = *(_DWORD *)(a1 + 48);
    v4 = 0;
    if ( a2 )
    {
      if ( v5 )
        goto LABEL_12;
    }
    else if ( v5 != 1 )
    {
      goto LABEL_12;
    }
    v6 = *(_QWORD *)(a1 + 40);
    v9[10] = 7;
    LOBYTE(v9[14]) = a2 != 0;
    PdcPortSendMessageSynchronously(v6, (__int64)v9);
    v4 = *(_DWORD *)(a1 + 52);
    if ( v4 < 0 )
      goto LABEL_15;
LABEL_12:
    v7 = *(_DWORD *)(a1 + 48);
    if ( a2 )
      *(_DWORD *)(a1 + 48) = v7 + 1;
    else
      *(_DWORD *)(a1 + 48) = v7 - 1;
    goto LABEL_15;
  }
  return (unsigned int)-1073741585;
}
