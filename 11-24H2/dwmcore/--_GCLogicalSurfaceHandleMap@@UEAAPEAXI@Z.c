/*
 * XREFs of ??_GCLogicalSurfaceHandleMap@@UEAAPEAXI@Z @ 0x18025E6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveElement@?$CGenericTableMap@PEAXULSEENTRY@CLogicalSurfaceHandleMap@@@@QEAAXPEAULSEENTRY@CLogicalSurfaceHandleMap@@@Z @ 0x1801EFC2C (-RemoveElement@-$CGenericTableMap@PEAXULSEENTRY@CLogicalSurfaceHandleMap@@@@QEAAXPEAULSEENTRY@CL.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CLogicalSurfaceHandleMap *__fastcall CLogicalSurfaceHandleMap::`scalar deleting destructor'(
        CLogicalSurfaceHandleMap *this,
        char a2)
{
  struct _RTL_GENERIC_TABLE *i; // rdi
  PVOID v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CLogicalSurfaceHandleMap::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
        ;
        CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::RemoveElement(i, v5) )
  {
    RestartKey = 0LL;
    v5 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v5 )
      break;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
