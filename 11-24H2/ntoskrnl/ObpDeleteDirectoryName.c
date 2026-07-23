/*
 * XREFs of ObpDeleteDirectoryName @ 0x1409DF600
 * Callers:
 *     ObpDecrementHandleCount @ 0x14083D360 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x140848260 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x1408A3D30 (ObpDeleteNameCheck.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409DF020 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x1409DF678 (ObpMarkDirectoryObjectsTemporary.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

POBJECT_TYPE __fastcall ObpDeleteDirectoryName(char *Object)
{
  _QWORD *v2; // rdi
  POBJECT_TYPE result; // rax
  void *v4; // rcx

  v2 = 0LL;
LABEL_2:
  v2 = (_QWORD *)ObpMarkDirectoryObjectsTemporary(Object, v2);
  while ( 1 )
  {
    result = (POBJECT_TYPE)ObfDereferenceObjectWithTag(Object, 0x6944624Fu);
    if ( !v2 )
      return result;
    Object = (char *)v2[1];
    v4 = v2;
    v2 = (_QWORD *)*v2;
    ExFreePoolWithTag(v4, 0);
    result = ObpDirectoryObjectType;
    if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) == ObpDirectoryObjectType->Index )
    {
      if ( Object )
        goto LABEL_2;
      return result;
    }
  }
}
