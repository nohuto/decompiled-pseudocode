/*
 * XREFs of NvmeAdapterSendControlAddSubsystemPort @ 0x1400D6D98
 * Callers:
 *     NvmeAdapterCreateAddSubsystemPort @ 0x1400CDE2C (NvmeAdapterCreateAddSubsystemPort.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeCallMiniportAdapterControlSafe @ 0x1400716E8 (NvmeCallMiniportAdapterControlSafe.c)
 *     McTemplateK0qjzqsdqs_EtwWriteTransfer @ 0x1400CBAC4 (McTemplateK0qjzqsdqs_EtwWriteTransfer.c)
 */

__int64 __fastcall NvmeAdapterSendControlAddSubsystemPort(__int64 a1, __int64 a2)
{
  __int64 Pool; // rax
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // r8
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm1
  __int64 v15; // rdx
  __int64 v16; // r8

  Pool = RaidAllocatePool(256LL, 662LL, 1179541842LL, *(_QWORD *)(a1 + 8));
  v5 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 43384833;
    *(_DWORD *)(Pool + 8) = 1;
    *(_WORD *)(Pool + 16) = 648;
    *(_DWORD *)(Pool + 12) = 66184;
    v7 = 2LL;
    *(_QWORD *)(Pool + 22) = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 64LL);
    *(_QWORD *)(Pool + 30) = a2;
    *(_WORD *)(Pool + 46) = *(_WORD *)(a2 + 4);
    if ( (*(_BYTE *)(a2 + 32) & 2) != 0 )
      *(_DWORD *)(Pool + 18) |= 1u;
    v8 = 2LL;
    v9 = (_OWORD *)(a2 + 60);
    v10 = (_OWORD *)(Pool + 50);
    do
    {
      *v10 = *v9;
      v10[1] = v9[1];
      v10[2] = v9[2];
      v10[3] = v9[3];
      v10[4] = v9[4];
      v10[5] = v9[5];
      v10[6] = v9[6];
      v10 += 8;
      v11 = v9[7];
      v9 += 8;
      *(v10 - 1) = v11;
      --v8;
    }
    while ( v8 );
    v12 = (_OWORD *)(v5 + 306);
    v13 = (_OWORD *)(a2 + 316);
    do
    {
      *v12 = *v13;
      v12[1] = v13[1];
      v12[2] = v13[2];
      v12[3] = v13[3];
      v12[4] = v13[4];
      v12[5] = v13[5];
      v12[6] = v13[6];
      v12 += 8;
      v14 = v13[7];
      v13 += 8;
      *(v12 - 1) = v14;
      --v7;
    }
    while ( v7 );
    *(_OWORD *)(v5 + 562) = *(_OWORD *)(a2 + 572);
    *(_OWORD *)(v5 + 578) = *(_OWORD *)(a2 + 588);
    v6 = NvmeCallMiniportAdapterControlSafe(a1 + 168);
    if ( v6 < 0 )
    {
      if ( (byte_14017146A & 4) != 0 )
        McTemplateK0qjzqsdqs_EtwWriteTransfer(
          a1 + 1032,
          v15,
          v16,
          *(_DWORD *)(a1 + 56),
          a1 + 1032,
          *(const wchar_t **)(a1 + 1016),
          1,
          (const char *)(a2 + 60),
          v6,
          *(_DWORD *)(v5 + 594),
          (const char *)(v5 + 598));
    }
    else
    {
      *(_QWORD *)(a2 + 48) = *(_QWORD *)(v5 + 38);
    }
    ExFreePoolWithTag((PVOID)v5, 0x464E6152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
