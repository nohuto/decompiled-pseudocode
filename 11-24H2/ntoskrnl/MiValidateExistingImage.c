/*
 * XREFs of MiValidateExistingImage @ 0x14098DCCC
 * Callers:
 *     MiShareExistingControlArea @ 0x14098C830 (MiShareExistingControlArea.c)
 * Callees:
 *     Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline @ 0x1405E2D38 (Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     MiValidateSectionSigningPolicy @ 0x14093C388 (MiValidateSectionSigningPolicy.c)
 *     SeGetImageRequiredSigningLevel @ 0x1409FA728 (SeGetImageRequiredSigningLevel.c)
 *     SeCompareSigningLevels @ 0x1409FA8D0 (SeCompareSigningLevels.c)
 *     MiRelocateImageAgain @ 0x140AEAE48 (MiRelocateImageAgain.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1)
{
  __int64 v1; // r14
  char v2; // r12
  PVOID v3; // r15
  char v4; // si
  __int64 result; // rax
  int v7; // edx
  int v8; // ecx
  __int64 v9; // r13
  int v10; // ebp
  int v11; // ecx
  _BYTE *v12; // rdi
  int Flink; // r15d
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // bp
  int v18; // eax
  int v19; // eax
  char v20; // cl
  __int64 v21; // [rsp+90h] [rbp+8h] BYREF
  PVOID Object; // [rsp+98h] [rbp+10h]

  v1 = *((_QWORD *)a1 + 8);
  v2 = 0;
  v3 = (PVOID)*((_QWORD *)a1 + 7);
  v4 = 0;
  Object = v3;
  if ( (*(_DWORD *)(v1 + 56) & 0x800) != 0 && (*a1 & 0x40000) != 0 )
  {
    dword_140E2D838 = 12;
    return 3221226547LL;
  }
  result = MiRelocateImageAgain(v1, (*a1 >> 5) & 1, (*a1 >> 28) & 1);
  if ( (int)result < 0 )
  {
    dword_140E2D838 = 13;
    return result;
  }
  v7 = *a1;
  if ( (*a1 & 0x80u) == 0 )
  {
    if ( (v7 & 0x20) != 0 )
    {
      v8 = 1;
    }
    else if ( (v7 & 0x10) != 0 )
    {
      v8 = (*a1 & 0x800) != 0 ? 8 : 2;
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v8 = 4;
  }
  v9 = *(_QWORD *)v1;
  v10 = v8 | 0x10;
  if ( (v7 & 0x400) == 0 )
    v10 = v8;
  v11 = *a1;
  if ( (v7 & 0x200) != 0 && (v7 & 0x10) == 0 )
  {
    v12 = a1 + 6;
    Flink = (int)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink;
    LOBYTE(v21) = 0;
    result = SeGetImageRequiredSigningLevel(Object, (__int64)&v21);
    if ( (int)result < 0 )
    {
      dword_140E2D838 = 14;
      return result;
    }
    v11 = *a1;
    if ( (*a1 & 0x400) == 0 )
    {
      if ( *v12 && (Flink & 0x800000) != 0 )
      {
        v4 = 1;
        v12 = a1 + 6;
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
    v3 = Object;
    *v12 = v21;
  }
  if ( (v11 & 0x40000) != 0 )
  {
    v10 |= 0x40000000u;
    if ( !*((_BYTE *)a1 + 24) )
      *((_BYTE *)a1 + 24) = 4;
  }
  v14 = v10 | 0x20000000;
  if ( (v11 & 0x200000) == 0 )
    v14 = v10;
  if ( (unsigned int)Feature_TrustedLaunchHosts__private_IsEnabledDeviceUsageNoInline() && (*a1 & 0x8000000) != 0 )
    v14 |= 0x200000u;
  if ( (*a1 & 0x200) != 0 )
  {
    v16 = *a1;
    v17 = *(_BYTE *)(v9 + 15) & 0xF;
    if ( (v16 & 0x10) != 0
      || (v16 = *((_QWORD *)a1 + 20), LOBYTE(v15) = *((_BYTE *)a1 + 24), qword_140F04BB8)
      && (v18 = guard_dispatch_icall_no_overrides(v14, v15), LOBYTE(v15) = *((_BYTE *)a1 + 24), v18)
      || (LOBYTE(v16) = v17, !(unsigned int)SeCompareSigningLevels(v16, v15))
      || (v14 & 0x40000000) != 0 && (*(_DWORD *)(v1 + 92) & 0xC0000) != 0x80000
      || !v17 && *(char *)(*(_QWORD *)(v9 + 56) + 46LL) < 0 )
    {
      v4 |= 2u;
    }
    LOBYTE(v15) = v2;
    LOBYTE(v16) = v17;
    v19 = SeCompareSigningLevels(v16, v15);
    v20 = v4 | 4;
    if ( v19 )
      v20 = v4;
    v4 = v20;
    if ( (*a1 & 0x4000000) != 0 )
      v4 = v20 | 8;
  }
  result = MiValidateSectionSigningPolicy(
             1u,
             (__int64)v3,
             v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             v14,
             v4,
             *((_BYTE *)a1 + 24),
             v2);
  if ( (int)result < 0 )
    dword_140E2D838 = 15;
  return result;
}
