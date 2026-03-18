/*
 * XREFs of NVMeReenumerateNameSpaceCancelMerge @ 0x14002A1A8
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x14002A530 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     ResumeIrpCommands @ 0x14002D47C (ResumeIrpCommands.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceCancelMerge(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  int v6; // edx

  if ( a2 )
  {
    v3 = (__int64 *)(a1 + 1672);
    v4 = a2;
    do
    {
      v5 = *v3;
      if ( *v3 )
      {
        v6 = *(_DWORD *)(v5 + 20);
        if ( (v6 & 0x20) != 0 )
          *(_DWORD *)(v5 + 20) = v6 & 0xFFFFFFDF;
      }
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  *(_DWORD *)(a1 + 24) &= ~0x100u;
  StorPortResume(a1);
  return ResumeIrpCommands(a1);
}
