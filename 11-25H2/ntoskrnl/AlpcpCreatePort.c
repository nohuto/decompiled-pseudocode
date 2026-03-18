/*
 * XREFs of AlpcpCreatePort @ 0x1409E01E8
 * Callers:
 *     AlpcpCreateConnectionPort @ 0x1409DFF40 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObCreateObjectEx @ 0x14085BE20 (ObCreateObjectEx.c)
 */

__int64 __fastcall AlpcpCreatePort(unsigned __int8 a1, int a2, void **a3)
{
  int Object; // ebx
  __int64 v6; // [rsp+20h] [rbp-38h]

  Object = ObCreateObjectEx(a1, AlpcPortObjectType, a2, a1, v6, 472, 0, 0, a3, 0LL);
  if ( Object >= 0 )
    memset_0(*a3, 0, 0x1D8uLL);
  return (unsigned int)Object;
}
