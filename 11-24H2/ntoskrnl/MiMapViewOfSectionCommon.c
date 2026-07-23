/*
 * XREFs of MiMapViewOfSectionCommon @ 0x1408A25C0
 * Callers:
 *     NtMapViewOfSection @ 0x1408A2010 (NtMapViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x140987880 (MiMapViewOfSectionExCommon.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiMapViewOfSectionCommon(
        __int64 a1,
        ULONG_PTR a2,
        int a3,
        __int64 *a4,
        __int64 *a5,
        unsigned __int64 a6,
        int a7,
        char a8,
        char a9,
        __int64 *a10)
{
  int ProtectionMask; // eax
  int v13; // r8d
  ULONG_PTR v14; // r10
  PVOID *v15; // rsi
  __int64 result; // rax
  _KPROCESS *v17; // rcx
  int v18; // r13d
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx

  *(_OWORD *)a10 = 0LL;
  *((_OWORD *)a10 + 1) = 0LL;
  *((_OWORD *)a10 + 2) = 0LL;
  ProtectionMask = MiMakeProtectionMask(a7 & 0xBFFFFFFF);
  *((_DWORD *)a10 + 6) = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  *((_DWORD *)a10 + 6) = ProtectionMask & 7;
  v15 = (PVOID *)(a10 + 5);
  if ( v13 )
  {
    *v15 = (PVOID)v14;
    a10[4] = a2;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(v14, 8, (__int64)PsProcessType, a9, 0x77566D4Du, a10 + 5, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v17 = (_KPROCESS *)*v15;
    if ( (*((_BYTE *)*v15 + 368) & 1) != 0 && KeGetCurrentThread()->ApcState.Process != v17 )
    {
      ObfDereferenceObjectWithTag(v17, 0x77566D4Du);
      return 3221225506LL;
    }
    v18 = ObpReferenceObjectByHandleWithTag(
            a2,
            *((_DWORD *)MmMakeSectionAccess + *((unsigned int *)a10 + 6)),
            (__int64)MmSectionObjectType,
            a9,
            0x77566D4Du,
            a10 + 4,
            0LL,
            0LL);
    if ( v18 < 0 )
    {
      ObfDereferenceObjectWithTag(*v15, 0x77566D4Du);
      return (unsigned int)v18;
    }
  }
  if ( a9 )
  {
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
      v19 = (__int64)a4;
    *(_QWORD *)v19 = *(_QWORD *)v19;
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v20 = (__int64)a5;
    *(_QWORD *)v20 = *(_QWORD *)v20;
  }
  *a10 = *a4;
  a10[1] = *a5;
  if ( a6 )
  {
    if ( a9 )
    {
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = 0x7FFFFFFF0000LL;
      if ( a6 < 0x7FFFFFFF0000LL )
        v21 = a6;
      *(_BYTE *)v21 = *(_BYTE *)v21;
      *(_BYTE *)(v21 + 7) = *(_BYTE *)(v21 + 7);
    }
    a10[2] = *(_QWORD *)a6;
  }
  else
  {
    a10[2] = 0LL;
  }
  v22 = *a10;
  if ( (unsigned __int64)*a10 <= 0x7FFFFFFEFFFFLL )
  {
    v23 = a10[1];
    if ( v23 <= 0x7FFFFFFF0000LL - v22 && v23 + v22 <= 0xFFFFFFFFFFFFFFFFuLL >> a8 )
      return 0LL;
  }
  if ( !a3 )
  {
    ObfDereferenceObjectWithTag((PVOID)a10[4], 0x77566D4Du);
    ObfDereferenceObjectWithTag(*v15, 0x77566D4Du);
  }
  return 3221225485LL;
}
