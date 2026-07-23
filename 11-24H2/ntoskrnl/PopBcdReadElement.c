/*
 * XREFs of PopBcdReadElement @ 0x140A6B548
 * Callers:
 *     PopBcdCopyLoaderObjectSettings @ 0x140762C84 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140762F44 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x140763154 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A6B0FC (PopBcdSetDefaultResumeObjectElements.c)
 * Callees:
 *     BcdGetElementData @ 0x1409A5F00 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
    Pool2 = (void *)ExAllocatePool2(0x100uLL, BufferSize[0], 0x64634250u);
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
