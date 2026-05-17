/*
 * XREFs of RtlpQueryProcessDebugInformationRemote @ 0x1801359E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180008DE0 (RtlExitUserThread.c)
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 */

void __fastcall __noreturn RtlpQueryProcessDebugInformationRemote(__int64 a1)
{
  signed int ProcessDebugInformation; // edi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  _DWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  ProcessDebugInformation = RtlQueryProcessDebugInformation(
                              (__int128 *)NtCurrentTeb()->ClientId.UniqueProcess,
                              *(_DWORD *)(a1 + 64),
                              a1);
  if ( ProcessDebugInformation >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( v3 )
    {
      v4 = *(_QWORD *)(a1 + 96);
      if ( v4 )
        *(_QWORD *)(a1 + 96) = v4 + v3;
      v5 = *(_QWORD *)(a1 + 104);
      if ( v5 )
        *(_QWORD *)(a1 + 104) = v3 + v5;
      v6 = *(_DWORD **)(a1 + 112);
      if ( v6 )
      {
        v7 = 0LL;
        for ( *(_QWORD *)(a1 + 112) = (char *)v6 + v3; (unsigned int)v7 < *v6; v7 = (unsigned int)(v7 + 1) )
        {
          v8 = 24 * v7;
          v9 = *(_QWORD *)&v6[24 * v7 + 20];
          if ( v9 )
            *(_QWORD *)&v6[v8 + 20] = v3 + v9;
          v10 = *(_QWORD *)&v6[v8 + 22];
          if ( v10 )
            *(_QWORD *)&v6[v8 + 22] = v3 + v10;
        }
      }
      v11 = *(_QWORD *)(a1 + 120);
      if ( v11 )
        *(_QWORD *)(a1 + 120) = v3 + v11;
      v12 = *(_QWORD *)(a1 + 144);
      if ( v12 )
        *(_QWORD *)(a1 + 144) = v3 + v12;
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  NtUnmapViewOfSection(-1LL);
  RtlExitUserThread(ProcessDebugInformation);
}
