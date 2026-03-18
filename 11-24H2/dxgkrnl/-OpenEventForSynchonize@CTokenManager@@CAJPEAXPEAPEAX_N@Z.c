/*
 * XREFs of ?OpenEventForSynchonize@CTokenManager@@CAJPEAXPEAPEAX_N@Z @ 0x14009A58C
 * Callers:
 *     ?OpenSectionAndEvents@CTokenManager@@UEAAJPEAPEAXPEA_K00@Z @ 0x140056AF0 (-OpenSectionAndEvents@CTokenManager@@UEAAJPEAPEAXPEA_K00@Z.c)
 *     ?GetAnalogExclusiveTokenEvent@CTokenManager@@UEAAJPEAPEAX@Z @ 0x14009A370 (-GetAnalogExclusiveTokenEvent@CTokenManager@@UEAAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTokenManager::OpenEventForSynchonize(void *a1, void **a2, unsigned __int8 a3)
{
  int v4; // esi
  unsigned int v5; // ebx
  NTSTATUS v6; // eax
  PVOID v7; // rbp
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  *a2 = (void *)-1LL;
  v4 = a3;
  v5 = -1073741811;
  if ( a1 )
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v7 = Object;
    v5 = v6;
    if ( v6 >= 0 )
    {
      v5 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 2 * v4 + 0x100000, (POBJECT_TYPE)ExEventObjectType, 0, a2);
      ObfDereferenceObject(v7);
    }
  }
  return v5;
}
