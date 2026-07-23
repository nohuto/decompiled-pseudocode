/*
 * XREFs of MiInitializeCreateSectionPacket @ 0x14098B630
 * Callers:
 *     MmCreateSectionEx @ 0x14098AECC (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x14098B1B8 (MmCreateCacheManagerSection.c)
 *     MiCreateSection @ 0x14098B3C0 (MiCreateSection.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     MiHugePagesSupported @ 0x1404900F8 (MiHugePagesSupported.c)
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x1405E2D38 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
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
  int v14; // ecx
  __int64 result; // rax
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // edi
  int v19; // eax
  char v20; // al
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  _BYTE *v24; // r8
  unsigned int v25; // ecx
  int ProtectionMask; // eax
  __int64 v27; // r8
  unsigned int v28; // ecx
  ULONG **v29; // [rsp+30h] [rbp-18h] BYREF

  v12 = a5;
  if ( (a5 & 0x7F) != 0 )
    return 3221225485LL;
  *((_QWORD *)a1 + 1) = a2;
  *((_QWORD *)a1 + 19) = a3;
  *((_QWORD *)a1 + 20) = a7;
  a1[42] = a12;
  a1[5] = a5;
  a1[7] = a4;
  *((_BYTE *)a1 + 72) = a11;
  *((_BYTE *)a1 + 24) = a8;
  if ( (a6 & 1) != 0 )
    *a1 |= 0x400u;
  if ( (a6 & 2) != 0 )
  {
    v14 = *a1;
    *a1 = v14 | 1;
    if ( (a6 & 4) != 0 )
    {
      if ( (v14 & 0x2000000) != 0 )
        return 3221227793LL;
      *a1 = v14 | 0x4001;
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
    v16 = 20944;
    if ( !_bittest(&v16, a8) )
      return 3221225485LL;
    *a1 |= 0x4000000u;
  }
  if ( (a6 & 0x40) != 0 )
    *a1 |= 0x10000000u;
  v17 = a1[35] ^ ((unsigned __int16)a4 ^ (unsigned __int16)a1[35]) & 0xFFF;
  *((_QWORD *)a1 + 6) = a10;
  a1[35] = v17;
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
    v18 = v12 & 0xFFEFFFFF;
    v19 = *a1 | 0x20;
    *a1 = v19;
    if ( (v18 & 0x400000) != 0 )
    {
      v18 &= ~0x400000u;
      *a1 = v19 | 0x80;
      v20 = 12;
    }
    else
    {
      v20 = 1;
    }
    goto LABEL_32;
  }
  if ( (v12 & 0x2000000) != 0 )
  {
    *a1 |= 0x10u;
    v21 = v12 & 0x400000;
    if ( (v12 & 0x400000) != 0 )
      v12 &= ~0x400000u;
    v20 = 12;
    if ( !v21 )
      v20 = 4;
    v18 = v12 & 0xFDFFFFFF;
LABEL_32:
    v12 = v18 | 0x1000000;
    *((_BYTE *)a1 + 24) = v20;
  }
  v29 = 0LL;
  if ( (v12 & 0x40000) != 0 )
  {
    if ( !a9 || a10 )
      return 3221225485LL;
    result = PsReferencePartitionByHandle(a9, 2, a11, 0x70434D4Du, &v29);
    if ( (int)result < 0 )
      return result;
    if ( *v29 == &MiSystemPartition )
      PsDereferencePartition((__int64)v29);
    else
      *((_QWORD *)a1 + 22) = v29;
    *((_QWORD *)a1 + 5) = 0LL;
    v12 &= ~0x40000u;
  }
  if ( (v12 & 0x1000000) != 0 )
  {
    if ( (a6 & 8) != 0 )
      *a1 |= 0x40000u;
    if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
      *a1 |= 0x240000u;
    if ( (unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() && (a6 & 0x20) != 0 )
      *a1 |= 0x8000000u;
    if ( (v12 & 0x11000000) == 0x11000000 )
    {
      if ( a1[7] != 2 )
        return 3221225541LL;
      v12 &= ~0x10000000u;
    }
    else
    {
      v22 = *a1;
      v23 = *a1 | 0x200;
      *a1 = v23;
      if ( (v23 & 0x20) != 0 && (MiFlags & 0x8000) != 0 )
      {
        *a1 = v22 | 0x40200;
      }
      else if ( (MiFlags & 0x80000) != 0 )
      {
        *a1 = v22 | 0x40200;
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
  if ( (v12 & 0x20000) == 0 )
    goto LABEL_66;
  if ( !(unsigned int)MiHugePagesSupported() )
    return 3221225659LL;
  if ( v24 && *v24 )
  {
LABEL_66:
    v25 = a1[7];
    a1[4] = v12;
    ProtectionMask = MiMakeProtectionMask(v25);
    a1[8] = ProtectionMask;
    if ( ProtectionMask == -1 )
      return 3221225541LL;
    if ( !v27 )
      return 0LL;
    *((_BYTE *)a1 + 192) = *(_BYTE *)v27;
    a1[49] = *(_DWORD *)(v27 + 4);
    v28 = *(_DWORD *)(v27 + 8);
    if ( v28 <= (unsigned __int16)KeNumberNodes )
    {
      a1[43] = v28;
      if ( (*(_DWORD *)(v27 + 20) & 1) != 0 )
        *a1 |= 0x2000000u;
      return 0LL;
    }
  }
  return 3221225485LL;
}
