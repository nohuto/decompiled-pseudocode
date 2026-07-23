/*
 * XREFs of PopBcdReadElement @ 0x140A25794
 * Callers:
 *     PopBcdCopyLoaderObjectSettings @ 0x1407537F4 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140753AC0 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x140753CD0 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A24DD4 (PopBcdSetDefaultResumeObjectElements.c)
 * Callees:
 *     BcdGetElementData @ 0x140A25774 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdReadElement(HANDLE BcdObjectHandle, ULONG BcdElement, _QWORD *a3, _DWORD *a4)
{
  NTSTATUS ElementData; // ebx
  void *Pool2; // rax
  void *v10; // rdi
  ULONG BufferSize[6]; // [rsp+20h] [rbp-18h] BYREF

  BufferSize[0] = 0;
  if ( BcdGetElementData(BcdObjectHandle, BcdElement, 0LL, BufferSize) == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v10 = Pool2;
    if ( Pool2 )
    {
      ElementData = BcdGetElementData(BcdObjectHandle, BcdElement, Pool2, BufferSize);
      if ( ElementData < 0 )
      {
        ExFreePoolWithTag(v10, 0);
      }
      else
      {
        ElementData = 0;
        *a4 = BufferSize[0];
        *a3 = v10;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)ElementData;
}
