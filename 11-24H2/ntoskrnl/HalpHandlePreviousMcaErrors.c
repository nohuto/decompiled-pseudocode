/*
 * XREFs of HalpHandlePreviousMcaErrors @ 0x140B4B8C4
 * Callers:
 *     HalpInitializeMce @ 0x140B4BBE4 (HalpInitializeMce.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x140B4BA0C (HalpHandlePreviousMcaErrorsOnProcessor.c)
 *     HalpMceInitializeErrorPacketContents @ 0x140B6D988 (HalpMceInitializeErrorPacketContents.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalpHandlePreviousMcaErrors(char a1)
{
  __int64 Pool2; // rax
  void *v3; // rsi
  ULONG v4; // edi
  ULONG ActiveProcessorCount; // ebp
  __int64 v6; // r14
  char v7; // cl
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v9; // rcx
  __int64 i; // rbx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL);
  v3 = (void *)Pool2;
  if ( Pool2 )
  {
    HalpMceInitializeErrorPacketContents(Pool2);
    v4 = 0;
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( ActiveProcessorCount )
    {
      v6 = 0LL;
      do
      {
        *(_DWORD *)Affinity.Reserved = 0;
        Affinity.Reserved[2] = 0;
        v7 = *(_DWORD *)((_BYTE *)KiGlobalState + v6) & 0x3F;
        Affinity.Group = *(_DWORD *)((char *)KiGlobalState + v6) >> 6;
        Affinity.Mask = 1LL << v7;
        if ( v4 )
          p_PreviousAffinity = 0LL;
        else
          p_PreviousAffinity = &PreviousAffinity;
        KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
        for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
        {
          LOBYTE(v9) = a1;
          HalpHandlePreviousMcaErrorsOnProcessor(v9, v3, *(_QWORD *)(i + 172));
        }
        ++v4;
        v6 += 4LL;
      }
      while ( v4 < ActiveProcessorCount );
    }
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    ExFreePoolWithTag(v3, 0x576C6148u);
  }
}
