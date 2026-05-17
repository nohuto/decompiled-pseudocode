/*
 * XREFs of RtlpSetProcessDebugInformationRemote @ 0x180133FF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x1800042C0 (RtlExitUserThread.c)
 *     RtlSetProcessDebugInformation @ 0x180133BB0 (RtlSetProcessDebugInformation.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 */

void __fastcall __noreturn RtlpSetProcessDebugInformationRemote(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // ebx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 144);
    if ( v3 )
      *(_QWORD *)(a1 + 144) = v3 - v2;
    v4 = *(_QWORD *)(a1 + 104);
    if ( v4 )
      *(_QWORD *)(a1 + 104) = v4 - v2;
  }
  v5 = RtlSetProcessDebugInformation(NtCurrentTeb()->ClientId.UniqueProcess, *(_DWORD *)(a1 + 64), a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = v5;
  NtUnmapViewOfSection(-1LL);
  RtlExitUserThread(v6);
}
