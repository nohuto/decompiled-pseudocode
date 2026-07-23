/*
 * XREFs of MiValidateExistingImage @ 0x14093F22C
 * Callers:
 *     MiShareExistingControlArea @ 0x14093DCC0 (MiShareExistingControlArea.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SeGetImageRequiredSigningLevel @ 0x14091DE58 (SeGetImageRequiredSigningLevel.c)
 *     SeCompareSigningLevels @ 0x14091E260 (SeCompareSigningLevels.c)
 *     MiRelocateImageAgain @ 0x14093FE24 (MiRelocateImageAgain.c)
 *     MiValidateSectionSigningPolicy @ 0x140945CA8 (MiValidateSectionSigningPolicy.c)
 */

__int64 __fastcall MiValidateExistingImage(unsigned int *a1)
{
  __int64 *v1; // r14
  char v2; // r12
  void *v3; // r15
  int v4; // edi
  __int64 result; // rax
  int v7; // edx
  int v8; // ecx
  __int64 v9; // r13
  unsigned int v10; // ebp
  int v11; // ecx
  _BYTE *v12; // rsi
  int Flink; // r15d
  char v14; // r8
  char v15; // r9
  unsigned int v16; // esi
  __int64 v17; // rcx
  char v18; // bp
  int v19; // eax
  int v20; // ecx
  __int64 v21; // [rsp+90h] [rbp+8h] BYREF
  PVOID Object; // [rsp+98h] [rbp+10h]

  v1 = (__int64 *)*((_QWORD *)a1 + 8);
  v2 = 0;
  v3 = (void *)*((_QWORD *)a1 + 7);
  v4 = 0;
  Object = v3;
  if ( (v1[7] & 0x800) != 0 && (*a1 & 0x40000) != 0 )
  {
    dword_140E2D4B8 = 12;
    return 3221226547LL;
  }
  result = MiRelocateImageAgain(v1, (*a1 >> 5) & 1);
  if ( (int)result < 0 )
  {
    dword_140E2D4B8 = 13;
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
  v9 = *v1;
  v10 = v8 | 0x10;
  if ( (v7 & 0x400) == 0 )
    v10 = v8;
  v11 = *a1;
  if ( (v7 & 0x200) != 0 && (v7 & 0x10) == 0 )
  {
    v12 = a1 + 6;
    Flink = (int)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink;
    v14 = *((_BYTE *)a1 + 24);
    v15 = *(_BYTE *)(v9 + 15) & 0xF;
    LOBYTE(v21) = 0;
    result = SeGetImageRequiredSigningLevel(Object, v10, v14, v15, (char *)&v21);
    if ( (int)result < 0 )
    {
      dword_140E2D4B8 = 14;
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
    LODWORD(v3) = (_DWORD)Object;
    *v12 = v21;
  }
  if ( (v11 & 0x40000) != 0 )
  {
    v10 |= 0x40000000u;
    if ( !*((_BYTE *)a1 + 24) )
      *((_BYTE *)a1 + 24) = 4;
  }
  v16 = v10 | 0x20000000;
  if ( (v11 & 0x200000) == 0 )
    v16 = v10;
  if ( (v11 & 0x200) != 0 )
  {
    v17 = *a1;
    v18 = *(_BYTE *)(v9 + 15) & 0xF;
    if ( (v17 & 0x10) != 0
      || (v17 = *((_QWORD *)a1 + 20), qword_140F04538) && (unsigned int)guard_dispatch_icall_no_overrides(v16)
      || (LOBYTE(v17) = v18, !(unsigned int)SeCompareSigningLevels(v17))
      || (v16 & 0x40000000) != 0 && (*((_DWORD *)v1 + 23) & 0xC0000) != 0x80000
      || !v18 && *(char *)(*(_QWORD *)(v9 + 56) + 46LL) < 0 )
    {
      v4 |= 2u;
    }
    LOBYTE(v17) = v18;
    v19 = SeCompareSigningLevels(v17);
    v20 = v4 | 4;
    if ( v19 )
      v20 = v4;
    v4 = v20;
    if ( (*a1 & 0x4000000) != 0 )
      v4 = v20 | 8;
  }
  result = MiValidateSectionSigningPolicy(
             1,
             (_DWORD)v3,
             (_DWORD)v1,
             a1[42],
             *((_QWORD *)a1 + 20),
             v16,
             v4,
             *((_BYTE *)a1 + 24),
             v2);
  if ( (int)result < 0 )
    dword_140E2D4B8 = 15;
  return result;
}
