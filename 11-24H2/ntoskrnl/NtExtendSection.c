/*
 * XREFs of NtExtendSection @ 0x1409469D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     MmExtendSection @ 0x140946018 (MmExtendSection.c)
 */

__int64 __fastcall NtExtendSection(ULONG_PTR BugCheckParameter1, LARGE_INTEGER *a2)
{
  char PreviousMode; // r9
  __int64 result; // rax
  __int64 v6; // rcx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+70h] [rbp+18h]
  LARGE_INTEGER v9; // [rsp+78h] [rbp+20h] BYREF

  Object[0] = 0LL;
  v9.QuadPart = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a2;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
    v9 = *a2;
  }
  else
  {
    v9 = *a2;
  }
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             16,
             (__int64)MmSectionObjectType,
             PreviousMode,
             0x63536D4Du,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v8 = MmExtendSection((__int64)Object[0], &v9, 0);
    ObfDereferenceObjectWithTag(Object[0], 0x63536D4Du);
    *a2 = v9;
    return v8;
  }
  return result;
}
