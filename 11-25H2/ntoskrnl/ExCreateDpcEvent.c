/*
 * XREFs of ExCreateDpcEvent @ 0x14064B680
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObCreateObject @ 0x140858920 (ObCreateObject.c)
 *     ObDeleteCapturedInsertInfo @ 0x1409130A0 (ObDeleteCapturedInsertInfo.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExCreateDpcEvent(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 Pool2; // rdi
  __int64 result; // rax
  int v8; // ebx
  PVOID v9; // rbx
  char *v10; // rcx
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  Object = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225626LL;
  v8 = ObCreateObject(0, (_DWORD)ExEventObjectType, 0, 0, 0, 24, 0, 0, (__int64)&Object);
  if ( v8 >= 0 )
  {
    v9 = Object;
    v10 = (char *)Object;
    *((_DWORD *)Object + 1) = 0;
    *(_WORD *)v10 = 1;
    v10[2] = 6;
    *((_QWORD *)v10 + 2) = v10 + 8;
    *((_QWORD *)v10 + 1) = v10 + 8;
    ObDeleteCapturedInsertInfo(v10);
    ObfReferenceObjectWithTag(v9, 0x65447845u);
    ObfDereferenceObjectWithTag(v9, 0x746C6644u);
    *(_QWORD *)(Pool2 + 48) = a3;
    result = 0LL;
    *(_QWORD *)(Pool2 + 56) = v9;
    *(_BYTE *)(Pool2 + 17) = 5;
    *a1 = Pool2;
    *a2 = v9;
  }
  else
  {
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)v8;
  }
  return result;
}
