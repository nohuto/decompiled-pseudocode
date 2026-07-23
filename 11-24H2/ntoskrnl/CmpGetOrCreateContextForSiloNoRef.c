/*
 * XREFs of CmpGetOrCreateContextForSiloNoRef @ 0x1409DBAC4
 * Callers:
 *     CmInitServerSiloState @ 0x1407D6024 (CmInitServerSiloState.c)
 *     CmInitSiloNamespace @ 0x1409DBA58 (CmInitSiloNamespace.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     CmpGetContextForSiloNoRef @ 0x1409DBCA0 (CmpGetContextForSiloNoRef.c)
 *     CmpAllocateSiloContext @ 0x1409DBCD0 (CmpAllocateSiloContext.c)
 *     CmpAttachContextToSilo @ 0x1409DBE28 (CmpAttachContextToSilo.c)
 */

__int64 __fastcall CmpGetOrCreateContextForSiloNoRef(__int64 a1, __int64 *a2)
{
  __int64 ContextForSiloNoRef; // rax
  int v5; // eax
  PVOID v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  Object = 0LL;
  ContextForSiloNoRef = CmpGetContextForSiloNoRef(a1);
  if ( ContextForSiloNoRef )
  {
    v7 = 0;
    *a2 = ContextForSiloNoRef;
  }
  else
  {
    v5 = CmpAllocateSiloContext(a1, &Object);
    v6 = Object;
    v7 = v5;
    if ( v5 >= 0 )
    {
      v8 = CmpAttachContextToSilo(a1, Object);
      v7 = v8;
      if ( v8 == -1073741637 )
      {
        v7 = 0;
        *a2 = CmpGetContextForSiloNoRef(a1);
      }
      else if ( v8 >= 0 )
      {
        v7 = 0;
        *a2 = (__int64)v6;
      }
    }
    if ( v6 )
      ObfDereferenceObjectWithTag(v6, 0x20314D43u);
  }
  return v7;
}
