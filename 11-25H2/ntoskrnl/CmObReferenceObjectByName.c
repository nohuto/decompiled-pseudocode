/*
 * XREFs of CmObReferenceObjectByName @ 0x140BA9D80
 * Callers:
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140863588 (CmKeyBodyReplicateToVirtual.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     CmKeyBodyRemapToVirtual @ 0x140AAC100 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByNameEx @ 0x140914400 (ObReferenceObjectByNameEx.c)
 */

__int64 __fastcall CmObReferenceObjectByName(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  int v7; // eax
  PADAPTER_OBJECT v8; // rcx
  unsigned int v9; // ebx
  PADAPTER_OBJECT v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = ObReferenceObjectByNameEx(a1, a2, a3, (struct _OBJECT_TYPE *)CmKeyObjectType, a5, a6, &v11);
  v8 = v11;
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( *(_DWORD *)&v11->Version == 1803104306 )
    {
      *a7 = v11;
      v8 = 0LL;
      v9 = 0;
    }
    else
    {
      v9 = -1073741816;
    }
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  return v9;
}
