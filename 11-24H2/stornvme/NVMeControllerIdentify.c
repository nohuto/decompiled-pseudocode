/*
 * XREFs of NVMeControllerIdentify @ 0x140026FDC
 * Callers:
 *     NVMeControllerInitPart1 @ 0x14001D11C (NVMeControllerInitPart1.c)
 *     NVMeControllerIdentifyWorkItem @ 0x1400222F0 (NVMeControllerIdentifyWorkItem.c)
 * Callees:
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     IsIntelChatham @ 0x140017C70 (IsIntelChatham.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeControllerIdentify(__int64 a1)
{
  int i; // ecx
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // edx
  _DWORD *v6; // rbx

  LocalCommandReuse(a1, a1 + 1008);
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= i )
    ++i;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v3 = *(_QWORD *)(a1 + 1104);
  v4 = *(_QWORD *)(a1 + 1568);
  *(_BYTE *)(v3 + 4096) = 6;
  *(_DWORD *)(v3 + 4100) = 0;
  *(_QWORD *)(v3 + 4120) = v4;
  *(_BYTE *)(v3 + 4136) = 1;
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1u);
  v5 = -1056964607;
  switch ( *(_BYTE *)(a1 + 1019) & 0x3F )
  {
    case 1:
      if ( IsIntelChatham(a1) )
      {
        v6 = *(_DWORD **)(a1 + 1560);
        if ( *(_WORD *)v6 != 0x8086 )
        {
          memset(v6, v5, 0x1000uLL);
          *((_BYTE *)v6 + 261) |= 1u;
          *((_QWORD *)v6 + 3) = 0x326D616874616843LL;
          v5 = 0;
          *v6 = 538017926;
          v6[1] = 842084402;
          *((_BYTE *)v6 + 64) = 48;
          *((_BYTE *)v6 + 72) = 1;
          *(_WORD *)((char *)v6 + 73) = 1059;
          *((_BYTE *)v6 + 259) = 3;
          *((_WORD *)v6 + 256) = 17510;
          v6[129] = 1;
        }
      }
      break;
    case 5:
      return (unsigned int)-1056964596;
    case 8:
      return (unsigned int)-1056964599;
    case 9:
      return (unsigned int)-1056964594;
  }
  return v5;
}
