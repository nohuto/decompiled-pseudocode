/*
 * XREFs of VmMapSectionExecuteNoAcg @ 0x14079E700
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     MmMapViewOfSectionEx @ 0x14047E1D4 (MmMapViewOfSectionEx.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall VmMapSectionExecuteNoAcg(void *a1, int a2, __int64 a3, __int64 a4)
{
  int v7; // edi
  PVOID v8; // rbx
  __int64 v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+58h] [rbp-30h]
  PVOID Object; // [rsp+70h] [rbp-18h] BYREF

  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 8u, MmSectionObjectType, 0, &Object, 0LL);
  if ( v7 < 0 )
  {
    v8 = Object;
  }
  else
  {
    v10 = a4;
    v8 = Object;
    v7 = MmMapViewOfSectionEx(
           (int)Object,
           (int)KeGetCurrentThread()->ApcState.Process,
           a2,
           a3,
           v10,
           0,
           16,
           0LL,
           0,
           0,
           0LL,
           v11,
           0x20000000);
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v7;
}
