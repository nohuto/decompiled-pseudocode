/*
 * XREFs of NtCreateMutant @ 0x1409F51C0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeMutantEx @ 0x140449AE8 (KeInitializeMutantEx.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateMutant(__int64 *a1, int a2, int a3, char a4)
{
  char PreviousMode; // di
  __int64 v8; // rcx
  int inserted; // ecx
  __int64 v11; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+58h] [rbp-10h] BYREF

  v13 = 0LL;
  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a1;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  inserted = ObCreateObjectEx(PreviousMode, ExMutantObjectType, a3, PreviousMode, v11, 56, 0, 0, &Object, 0LL);
  if ( inserted >= 0 )
  {
    KeInitializeMutantEx((__int64)Object, a4, ExpForceEnableMutantAutoboost != 0);
    inserted = ObInsertObjectEx((char *)Object, 0LL, a2, 0, 0, 0LL, (__int64)&v13);
    LODWORD(Object) = inserted;
    if ( inserted >= 0 )
      *a1 = v13;
  }
  return (unsigned int)inserted;
}
