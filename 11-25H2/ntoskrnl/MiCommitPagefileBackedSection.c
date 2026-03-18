/*
 * XREFs of MiCommitPagefileBackedSection @ 0x1409FC6A4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiAddViewsForSection @ 0x140213970 (MiAddViewsForSection.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiVadPureReserve @ 0x140384DA0 (MiVadPureReserve.c)
 *     MiChargeSegmentCommit @ 0x1409FC7C8 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MiCommitPagefileBackedSection(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // rax
  __int64 ProtoPteAddress; // rbp
  __int64 result; // rax
  unsigned __int64 *i; // rbx
  int v11; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 *v12; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 *v13; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+A8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 44);
  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v12 = 0LL;
  v13 = 0LL;
  v11 = 0;
  v7 = *(unsigned int *)(a2 + 48);
  v14 = v3;
  if ( (v2 | MmCompatibleProtectionMask[(v7 >> 7) & 7] | 0x700) != (MmCompatibleProtectionMask[(v7 >> 7) & 7] | 0x700) )
    return 3221225550LL;
  ProtoPteAddress = MiGetProtoPteAddress(a2, v5 >> 12, 0, &v12);
  MiGetProtoPteAddress(a2, v3 >> 12, 0, &v13);
  if ( MiVadPureReserve(a2) )
  {
    for ( i = v12; ; i = (unsigned __int64 *)i[2] )
    {
      result = MiAddViewsForSection((int **)i, 1uLL, 8);
      if ( (int)result < 0 )
        break;
      if ( i == v13 )
      {
        if ( !ProtoPteAddress )
          ProtoPteAddress = MiGetProtoPteAddress(a2, v5 >> 12, 0, &v12);
        v3 = v14;
        goto LABEL_3;
      }
    }
  }
  else
  {
LABEL_3:
    if ( (unsigned int)MiChargeSegmentCommit(v12, ProtoPteAddress) )
      return MiSetProtectionOnSection(*(_QWORD *)(a1 + 88), a2, v5, v3, v2, 0, &v11, 0LL);
    else
      return 3221225773LL;
  }
  return result;
}
