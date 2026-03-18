/*
 * XREFs of ObpDestroyTypeArray @ 0x1409D65D4
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1407442A0 (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x1409D5F50 (ObGetObjectInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDestroyTypeArray(_QWORD *P)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)P; i = (unsigned int)(i + 1) )
    {
      v3 = P[i + 1];
      if ( v3 )
        ObfDereferenceObject((PVOID)(v3 + 80));
    }
    ExFreePoolWithTag(P, 0x7241624Fu);
  }
}
