/*
 * XREFs of NtUnmapViewOfSection @ 0x1408E4C70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall NtUnmapViewOfSection(ULONG_PTR a1, unsigned __int64 a2)
{
  char PreviousMode; // r9
  __int64 result; // rax
  unsigned int v4; // edi
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 && a2 > 0x7FFFFFFEFFFFLL )
    return 3221225497LL;
  result = ObpReferenceObjectByHandleWithTag(
             a1,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x77566D4Du,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v4 = MiUnmapViewOfSection((PRKPROCESS)Object);
    ObfDereferenceObjectWithTag(Object, 0x77566D4Du);
    return v4;
  }
  return result;
}
