/*
 * XREFs of ObpDeleteDirectoryName @ 0x140A087E8
 * Callers:
 *     ObpDecrementHandleCount @ 0x140844E00 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x1408501F0 (ObCloseHandleTableEntry.c)
 *     ObpDeleteNameCheck @ 0x14085AF80 (ObpDeleteNameCheck.c)
 *     ObpInsertOrLocateNamedObject @ 0x140915990 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x140A08860 (ObpMarkDirectoryObjectsTemporary.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
