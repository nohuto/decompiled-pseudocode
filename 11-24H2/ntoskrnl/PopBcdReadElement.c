/*
 * XREFs of PopBcdReadElement @ 0x140A72168
 * Callers:
 *     PopBcdCopyLoaderObjectSettings @ 0x1407632B4 (PopBcdCopyLoaderObjectSettings.c)
 *     PopBcdGetApplicationPathFromResumeObject @ 0x140763580 (PopBcdGetApplicationPathFromResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x140763790 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140A71D1C (PopBcdSetDefaultResumeObjectElements.c)
 * Callees:
 *     BcdGetElementData @ 0x1409BF8B0 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdReadElement(__int64 a1, unsigned int a2, _QWORD *a3, _DWORD *a4)
{
  int ElementData; // ebx
  __int64 Pool2; // rax
  void *v10; // rdi
  _DWORD v12[6]; // [rsp+20h] [rbp-18h] BYREF

  v12[0] = 0;
  if ( (unsigned int)BcdGetElementData(a1, a2, 0LL, v12) == -1073741789 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v10 = (void *)Pool2;
    if ( Pool2 )
    {
      ElementData = BcdGetElementData(a1, a2, Pool2, v12);
      if ( ElementData < 0 )
      {
        ExFreePoolWithTag(v10, 0);
      }
      else
      {
        ElementData = 0;
        *a4 = v12[0];
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
