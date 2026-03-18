/*
 * XREFs of HalpHandlePreviousMcaErrorsOnProcessor @ 0x140B3BA0C
 * Callers:
 *     HalpHandlePreviousMcaErrors @ 0x140B3B8C4 (HalpHandlePreviousMcaErrors.c)
 *     HalpInitializeMce @ 0x140B3BBE4 (HalpInitializeMce.c)
 * Callees:
 *     HalpMcaReadErrorPresence @ 0x14047C5D4 (HalpMcaReadErrorPresence.c)
 *     HalpMcaClearError @ 0x14053D028 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x14053D5DC (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x14053D8B4 (HalpMcaReportError.c)
 *     HalpMceInitializeErrorPacketContents @ 0x140B5E8D8 (HalpMceInitializeErrorPacketContents.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalpHandlePreviousMcaErrorsOnProcessor(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  char v5; // r14
  _DWORD *v6; // rdi
  __int64 Pool2; // rax
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  v5 = a1;
  if ( (int)HalpMcaReadErrorPresence(a1, a3) >= 0 )
  {
    if ( a2 )
    {
      v6 = a2;
    }
    else
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v6 = (_DWORD *)Pool2;
      if ( !Pool2 )
        return;
      HalpMceInitializeErrorPacketContents(Pool2);
    }
    while ( (int)HalpMcaReadError(17, v6 + 20, &v8, 0LL, a3) >= 0 )
    {
      if ( v5 )
      {
        v6[5] = v8;
        v6[3] = 1;
        HalpMcaReportError((__int64)v6, (__int64)(v6 + 20), a3);
      }
      HalpMcaClearError((__int64)(v6 + 20), a3);
    }
    if ( !a2 )
      ExFreePoolWithTag(v6, 0x576C6148u);
  }
}
