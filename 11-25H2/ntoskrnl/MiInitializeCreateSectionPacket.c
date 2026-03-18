/*
 * XREFs of MiInitializeCreateSectionPacket @ 0x14093CB10
 * Callers:
 *     MmCreateSectionEx @ 0x14093C3AC (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x14093C698 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x14093C8A0 (MiCreateSection.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     MiHugePagesSupported @ 0x140496578 (MiHugePagesSupported.c)
 *     PsReferencePartitionByHandle @ 0x14093B9BC (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall MiInitializeCreateSectionPacket(
        int *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        unsigned __int8 a8,
        ULONG_PTR a9,
        __int64 a10,
        char a11,
        int a12)
{
  unsigned int v12; // edi
  int v14; // eax
  unsigned int v15; // ecx
  int ProtectionMask; // eax
  __int64 v17; // r8
  unsigned int v18; // ecx
  __int64 result; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // edi
  int v24; // eax
  char v25; // al
  int v26; // r9d
  _BYTE *v27; // r8
  int v28; // eax
  ULONG **v29; // [rsp+30h] [rbp-18h] BYREF

  v12 = a5;
  if ( (a5 & 0x7F) != 0 )
    return 3221225485LL;
  *((_QWORD *)a1 + 19) = a3;
  *((_QWORD *)a1 + 20) = a7;
  a1[42] = a12;
  a1[5] = a5;
  *((_QWORD *)a1 + 1) = a2;
  a1[7] = a4;
  *((_BYTE *)a1 + 72) = a11;
  *((_BYTE *)a1 + 24) = a8;
  if ( (a6 & 1) != 0 )
    *a1 |= 0x400u;
  if ( (a6 & 2) != 0 )
  {
    v20 = *a1;
    *a1 |= 1u;
    if ( (a6 & 4) != 0 )
    {
      if ( (v20 & 0x2000000) != 0 )
        return 3221227793LL;
      *a1 = v20 | 0x4001;
    }
  }
  if ( (a6 & 0x10) != 0 )
  {
    if ( a11 )
      return 3221225485LL;
    if ( (a5 & 0x2100000) != 0 )
      return 3221225485LL;
    if ( (a5 & 0x11000000) == 0x11000000 )
      return 3221225485LL;
    if ( (a5 & 0x1000000) == 0 )
      return 3221225485LL;
    if ( a8 > 0xEu )
      return 3221225485LL;
    v28 = 20944;
    if ( !_bittest(&v28, a8) )
      return 3221225485LL;
    *a1 |= 0x4000000u;
  }
  v14 = a1[35];
  *((_QWORD *)a1 + 6) = a10;
  a1[35] = v14 ^ ((unsigned __int16)a4 ^ (unsigned __int16)v14) & 0xFFF;
  *((_QWORD *)a1 + 5) = a9;
  if ( (a5 & 0x1100000) == 0x1100000 )
  {
    *a1 |= 0x100u;
    v12 = a5 & 0xFFEFFFFF;
  }
  if ( (v12 & 0x100000) != 0 )
  {
    if ( (v12 & 0x200000) != 0 )
      return 3221225485LL;
    v23 = v12 & 0xFFEFFFFF;
    v24 = *a1 | 0x20;
    *a1 = v24;
    if ( (v23 & 0x400000) != 0 )
    {
      v23 &= ~0x400000u;
      *a1 = v24 | 0x80;
      v25 = 12;
    }
    else
    {
      v25 = 1;
    }
  }
  else
  {
    if ( (v12 & 0x2000000) == 0 )
      goto LABEL_10;
    *a1 |= 0x10u;
    v26 = v12 & 0x400000;
    if ( (v12 & 0x400000) != 0 )
      v12 &= ~0x400000u;
    v25 = 12;
    if ( !v26 )
      v25 = 4;
    v23 = v12 & 0xFDFFFFFF;
  }
  v12 = v23 | 0x1000000;
  *((_BYTE *)a1 + 24) = v25;
LABEL_10:
  v29 = 0LL;
  if ( (v12 & 0x40000) == 0 )
    goto LABEL_11;
  if ( !a9 || a10 )
    return 3221225485LL;
  result = PsReferencePartitionByHandle(a9, 2, a11, 0x70434D4Du, &v29);
  if ( (int)result >= 0 )
  {
    if ( *v29 == &MiSystemPartition )
      PsDereferencePartition((__int64)v29);
    else
      *((_QWORD *)a1 + 22) = v29;
    v12 &= ~0x40000u;
    *((_QWORD *)a1 + 5) = 0LL;
LABEL_11:
    if ( (v12 & 0x1000000) != 0 )
    {
      if ( (a6 & 8) != 0 )
        *a1 |= 0x40000u;
      if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
        *a1 |= 0x240000u;
      if ( (v12 & 0x11000000) == 0x11000000 )
      {
        if ( a1[7] != 2 )
          return 3221225541LL;
        v12 &= ~0x10000000u;
      }
      else
      {
        v21 = *a1;
        v22 = *a1 | 0x200;
        *a1 = v22;
        if ( (v22 & 0x20) != 0 && (MiFlags & 0x8000) != 0 )
        {
          *a1 = v21 | 0x40200;
        }
        else if ( (MiFlags & 0x80000) != 0 )
        {
          *a1 = v21 | 0x40200;
        }
      }
    }
    else if ( (v12 & 0x10000000) != 0 )
    {
      a1[7] |= 0x200u;
    }
    else if ( (v12 & 0x40000000) != 0 )
    {
      a1[7] |= 0x400u;
    }
    if ( (v12 & 0x20000) != 0 )
    {
      if ( !(unsigned int)MiHugePagesSupported() )
        return 3221225659LL;
      if ( !v27 || !*v27 )
        return 3221225485LL;
    }
    v15 = a1[7];
    a1[4] = v12;
    ProtectionMask = MiMakeProtectionMask(v15);
    a1[8] = ProtectionMask;
    if ( ProtectionMask != -1 )
    {
      if ( !v17 )
        return 0LL;
      *((_BYTE *)a1 + 192) = *(_BYTE *)v17;
      a1[49] = *(_DWORD *)(v17 + 4);
      v18 = *(_DWORD *)(v17 + 8);
      if ( v18 <= (unsigned __int16)KeNumberNodes )
      {
        a1[43] = v18;
        if ( (*(_DWORD *)(v17 + 20) & 1) != 0 )
          *a1 |= 0x2000000u;
        return 0LL;
      }
      return 3221225485LL;
    }
    return 3221225541LL;
  }
  return result;
}
