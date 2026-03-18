/*
 * XREFs of MiCommitPagefileBackedSection @ 0x1408F7B54
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiAddViewsForSection @ 0x14020DA70 (MiAddViewsForSection.c)
 *     MiVadPureReserve @ 0x140236380 (MiVadPureReserve.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     MiChargeSegmentCommit @ 0x1408F7C78 (MiChargeSegmentCommit.c)
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
      result = MiAddViewsForSection((int **)i, 1uLL, 8LL);
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
