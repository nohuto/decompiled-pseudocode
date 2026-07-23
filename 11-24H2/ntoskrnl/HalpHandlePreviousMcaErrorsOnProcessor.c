/*
 * XREFs of HalpHandlePreviousMcaErrorsOnProcessor @ 0x140B4DA4C
 * Callers:
 *     HalpHandlePreviousMcaErrors @ 0x140B4D904 (HalpHandlePreviousMcaErrors.c)
 *     HalpInitializeMce @ 0x140B4DC24 (HalpInitializeMce.c)
 * Callees:
 *     HalpMcaReadErrorPresence @ 0x140478664 (HalpMcaReadErrorPresence.c)
 *     HalpMcaClearError @ 0x14053D158 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x14053D70C (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x14053D9E4 (HalpMcaReportError.c)
 *     HalpMceInitializeErrorPacketContents @ 0x140B6F228 (HalpMceInitializeErrorPacketContents.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
      Pool2 = ExAllocatePool2(0x40uLL, 0x4F8uLL, 0x576C6148u);
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
