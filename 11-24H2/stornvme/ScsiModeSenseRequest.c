/*
 * XREFs of ScsiModeSenseRequest @ 0x1400057D0
 * Callers:
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 */

__int64 __fastcall ScsiModeSenseRequest(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  _DWORD *v7; // r9
  unsigned int v8; // edx
  unsigned __int8 v9; // cl
  unsigned int v10; // r15d

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(_QWORD *)(a2 + 64);
    v6 = 60LL;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 24);
    v6 = 16LL;
  }
  v7 = (_DWORD *)(a2 + v6);
  v8 = 4;
  if ( *a3 != 26 )
    v8 = 8;
  v9 = a3[2];
  if ( v9 >= 0x40u || !v5 )
    goto LABEL_15;
  if ( *v7 < v8 )
  {
    NVMeSetSenseData(a2, 6, 5, 0x24u);
    return 3238002692LL;
  }
  else
  {
    if ( v9 != 63 && v9 != 8 )
    {
LABEL_15:
      NVMeSetSenseData(a2, 6, 5, 0x24u);
      return 3238002694LL;
    }
    if ( *v7 - v8 < 0xC )
    {
      NVMeSetSenseData(a2, 18, 5, 0x24u);
      return 3238002694LL;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 56) & 2) != 0 )
        v10 = 0x80000000;
      else
        v10 = *(_DWORD *)(a1 + 244);
      if ( (unsigned int)StorPortExtendedFunction(82LL, a1, 512LL, 0LL) )
      {
        if ( v10 != 0x80000000 )
          StorPortExtendedFunction(82LL, a1, 512LL, 0LL);
      }
      *(_BYTE *)(a2 + 3) = 4;
      return 3238002691LL;
    }
  }
}
