/*
 * XREFs of ??0SectionObj@Gre@@QEAA@$$QEAVSectionHandle@01@W4AccessMode@01@D@Z @ 0x140124C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID *__fastcall Gre::SectionObj::SectionObj(PVOID *a1, HANDLE *a2, int a3, KPROCESSOR_MODE a4)
{
  ACCESS_MASK v6; // edx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v6 = 983071;
  *a1 = 0LL;
  if ( !a3 )
    v6 = 4;
  Object = 0LL;
  ObReferenceObjectByHandle(*a2, v6, MmSectionObjectType, a4, &Object, 0LL);
  *a1 = Object;
  return a1;
}
