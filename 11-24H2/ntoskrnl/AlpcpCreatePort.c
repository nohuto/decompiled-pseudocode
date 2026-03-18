/*
 * XREFs of AlpcpCreatePort @ 0x1408623B4
 * Callers:
 *     AlpcpCreateConnectionPort @ 0x14086210C (AlpcpCreateConnectionPort.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObCreateObjectEx @ 0x14089C4F0 (ObCreateObjectEx.c)
 */

__int64 __fastcall AlpcpCreatePort(int a1, int a2, void **a3)
{
  int Object; // ebx

  Object = ObCreateObjectEx(a1, (_DWORD)AlpcPortObjectType, a2, (_BYTE)a1);
  if ( Object >= 0 )
    memset_0(*a3, 0, 0x1D8uLL);
  return (unsigned int)Object;
}
