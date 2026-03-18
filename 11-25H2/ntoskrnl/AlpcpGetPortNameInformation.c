/*
 * XREFs of AlpcpGetPortNameInformation @ 0x140735DCC
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x140735E84 (AlpcpPortQueryServerInfo.c)
 *     AlpcpLogWaitForNewMessage @ 0x140736994 (AlpcpLogWaitForNewMessage.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x1408C0E20 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpGetPortNameInformation(int a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // edi
  int NameStringMode; // ebx
  __int64 Pool2; // rax
  void *v9; // rdi
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF

  v3 = *a3;
  v11 = 0;
  NameStringMode = ObQueryNameStringMode(a1, 0, 0, (unsigned int)&v11, 0);
  if ( NameStringMode == -1073741820 )
  {
    if ( v11 <= v3 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v9 = (void *)Pool2;
      if ( Pool2 )
      {
        NameStringMode = ObQueryNameStringMode(a1, Pool2, v11, (unsigned int)&v11, 0);
        if ( NameStringMode < 0 )
          ExFreePoolWithTag(v9, 0);
        else
          *a2 = v9;
      }
      else
      {
        NameStringMode = -1073741801;
      }
    }
    *a3 = v11;
  }
  return (unsigned int)NameStringMode;
}
