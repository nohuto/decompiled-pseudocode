/*
 * XREFs of MiValidateExistingImage @ 0x140943A54
 * Callers:
 *     MiShareExistingControlArea @ 0x1409425C0 (MiShareExistingControlArea.c)
 * Callees:
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x1405E56E0 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     MiRelocateImageAgain @ 0x1408F642C (MiRelocateImageAgain.c)
 *     SeGetImageRequiredSigningLevel @ 0x1409350E8 (SeGetImageRequiredSigningLevel.c)
 *     SeCompareSigningLevels @ 0x1409354F0 (SeCompareSigningLevels.c)
 *     MiValidateSectionSigningPolicy @ 0x1409579F8 (MiValidateSectionSigningPolicy.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1)
{
  __int64 v1; // r14
  char v2; // r12
  __int64 v3; // r15
  int v4; // esi
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  int v10; // ecx
  __int64 v11; // r13
  unsigned int v12; // ebp
  int v13; // ecx
  _BYTE *v14; // rdi
  int Flink; // r15d
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  char v21; // bp
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  char v25; // [rsp+90h] [rbp+8h] BYREF
  __int64 v26; // [rsp+98h] [rbp+10h]

  v1 = *((_QWORD *)a1 + 8);
  v2 = 0;
  v3 = *((_QWORD *)a1 + 7);
  v4 = 0;
  v26 = v3;
  if ( (*(_DWORD *)(v1 + 56) & 0x800) != 0 && (*a1 & 0x40000) != 0 )
  {
    dword_140E2D6F8 = 12;
    return 3221226547LL;
  }
  result = MiRelocateImageAgain(v1, (*a1 >> 5) & 1);
  if ( (int)result < 0 )
  {
    dword_140E2D6F8 = 13;
    return result;
  }
  v9 = *a1;
  if ( (*a1 & 0x80u) == 0 )
  {
    if ( (v9 & 0x20) != 0 )
    {
      v10 = 1;
    }
    else if ( (v9 & 0x10) != 0 )
    {
      v10 = (*a1 & 0x800) != 0 ? 8 : 2;
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    v10 = 4;
  }
  v11 = *(_QWORD *)v1;
  v12 = v10 | 0x10;
  if ( (v9 & 0x400) == 0 )
    v12 = v10;
  v13 = *a1;
  if ( (v9 & 0x200) != 0 && (v9 & 0x10) == 0 )
  {
    v14 = a1 + 6;
    Flink = (int)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink;
    LOBYTE(v7) = *((_BYTE *)a1 + 24);
    LOBYTE(v8) = *(_BYTE *)(v11 + 15) & 0xF;
    v25 = 0;
    result = SeGetImageRequiredSigningLevel(v26, v12, v7, v8, &v25);
    if ( (int)result < 0 )
    {
      dword_140E2D6F8 = 14;
      return result;
    }
    v13 = *a1;
    if ( (*a1 & 0x400) == 0 )
    {
      if ( *v14 && (Flink & 0x800000) != 0 )
      {
        v4 = 1;
        v14 = a1 + 6;
      }
      if ( (Flink & 0x1000000) != 0 )
      {
        v2 = 8;
      }
      else if ( (Flink & 0x2000000) != 0 )
      {
        v2 = 6;
      }
    }
    LODWORD(v3) = v26;
    *v14 = v25;
  }
  if ( (v13 & 0x40000) != 0 )
  {
    v12 |= 0x40000000u;
    if ( !*((_BYTE *)a1 + 24) )
      *((_BYTE *)a1 + 24) = 4;
  }
  v16 = v12 | 0x20000000;
  if ( (v13 & 0x200000) == 0 )
    v16 = v12;
  if ( (unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() && (*a1 & 0x8000000) != 0 )
    v16 |= 0x200000u;
  if ( (*a1 & 0x200) != 0 )
  {
    v19 = (*(_QWORD *)((*(_QWORD *)(v1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 40) & 0xFFFFFFFFFFFFFFF8uLL) >> 3;
    if ( v19 > 0xFFFFFFFFFFFFFFFLL )
      v19 = *(_QWORD *)((*(_QWORD *)(v1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 40) & 0xFFFFFFFFFFFFFFF8uLL;
    v20 = *a1;
    v21 = *(_BYTE *)(v11 + 15) & 0xF;
    if ( (v20 & 0x10) != 0
      || (v20 = *((_QWORD *)a1 + 20), LOBYTE(v17) = *((_BYTE *)a1 + 24), qword_140F04918)
      && (LOBYTE(v19) = *(_BYTE *)(v11 + 15) & 0xF,
          v22 = guard_dispatch_icall_no_overrides(v16, v17, v19, (*(unsigned __int8 *)(v11 + 15) >> 4) & 7),
          LOBYTE(v17) = *((_BYTE *)a1 + 24),
          v22)
      || (LOBYTE(v20) = v21, !(unsigned int)SeCompareSigningLevels(v20, v17, v19, v18))
      || (v16 & 0x40000000) != 0 && (*(_DWORD *)(v1 + 92) & 0xC0000) != 0x80000
      || !v21 && *(char *)(*(_QWORD *)(v11 + 56) + 46LL) < 0 )
    {
      v4 |= 2u;
    }
    LOBYTE(v17) = v2;
    LOBYTE(v20) = v21;
    v23 = SeCompareSigningLevels(v20, v17, v19, v18);
    v24 = v4 | 4;
    if ( v23 )
      v24 = v4;
    v4 = v24;
    if ( (*a1 & 0x4000000) != 0 )
      v4 = v24 | 8;
  }
  result = MiValidateSectionSigningPolicy(1, v3, v1, a1[42], *((_QWORD *)a1 + 20), v16, v4, *((_BYTE *)a1 + 24), v2);
  if ( (int)result < 0 )
    dword_140E2D6F8 = 15;
  return result;
}
