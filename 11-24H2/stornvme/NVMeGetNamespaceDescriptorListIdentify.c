/*
 * XREFs of NVMeGetNamespaceDescriptorListIdentify @ 0x140028C30
 * Callers:
 *     NVMeControllerInitPart1 @ 0x14001D11C (NVMeControllerInitPart1.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x14002AC14 (NVMeReenumerateNameSpaceRescan.c)
 * Callees:
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     BuildIdentifyCommandGeneric @ 0x14001F0F4 (BuildIdentifyCommandGeneric.c)
 */

void __fastcall NVMeGetNamespaceDescriptorListIdentify(__int64 a1)
{
  unsigned __int8 *v1; // rbp
  unsigned int i; // esi
  __int64 v4; // r9
  int j; // edx
  int v6; // eax
  unsigned __int8 *v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // [rsp+20h] [rbp-48h]

  v1 = *(unsigned __int8 **)(a1 + 1656);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 224); ++i )
    {
      if ( *(_QWORD *)(a1 + 8LL * i + 1672) )
      {
        LocalCommandReuse(a1, a1 + 1008);
        for ( j = 0; j < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= j )
          ++j;
        *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
        BuildIdentifyCommandGeneric(
          a1,
          *(_QWORD *)(a1 + 1104) + 4096LL,
          3,
          v4,
          v11,
          0,
          *(_QWORD *)(a1 + 1664),
          i + 1,
          0);
        ProcessCommand(a1, a1 + 1016);
        WaitForCommandComplete(a1, a1 + 1016, 1u);
        if ( *(_BYTE *)(a1 + 1019) == 1 )
        {
          v6 = *v1;
          v7 = v1;
          v8 = 0;
          while ( v6 && v8 < 0x1000 )
          {
            if ( v6 == 4 )
            {
              if ( v7[4] == 2 )
              {
                v10 = *(_QWORD *)(a1 + 8LL * i + 1672);
                *(_DWORD *)(v10 + 20) |= 0x100u;
                *(_DWORD *)(a1 + 24) |= 0x2000u;
              }
              break;
            }
            v9 = v7[1];
            v8 += v9 + 4;
            v7 += v9 + 4;
            v6 = *v7;
          }
        }
      }
    }
  }
}
