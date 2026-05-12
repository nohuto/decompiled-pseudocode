/*
 * XREFs of NvmeControllerGetChangedNamespaceListLog @ 0x1400BEBD0
 * Callers:
 *     NvmeControllerReenumerationRoutine @ 0x1400BF370 (NvmeControllerReenumerationRoutine.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1400BE764 (BuildGetLogPageCommand.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerGetChangedNamespaceListLog(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *ExtendedCommand; // rdi
  int v5; // esi
  __int64 v6; // rax
  __int128 v8; // [rsp+50h] [rbp-18h] BYREF

  v8 = 0LL;
  ExtendedCommand = 0LL;
  if ( (a1[121] & 1) == 0 || (a1[121] & 2) != 0 || (a1[121] & 4) != 0 || (a1[121] & 8) != 0 || (a1[121] & 0x10) != 0 )
  {
    v5 = -1073741436;
  }
  else if ( a1[161] && *(_DWORD *)a1[161] )
  {
    v5 = -2147483631;
  }
  else
  {
    ExtendedCommand = (__int64 *)NvmeControllerGetExtendedCommand(a1);
    if ( ExtendedCommand )
    {
      v5 = NvmeAllocateDmaBuffer(a1, 4096LL, a3, &v8, (char *)&v8 + 8, 0);
      if ( v5 >= 0 )
      {
        LOBYTE(a3) = 4;
        v6 = *ExtendedCommand;
        *((_WORD *)ExtendedCommand + 26) = *(_WORD *)(a1[16] + 1092LL);
        *(_DWORD *)(*ExtendedCommand + 4256) = *(_DWORD *)(v6 + 4256) | 1;
        *(_DWORD *)(*ExtendedCommand + 4256) |= 0x20u;
        *(_DWORD *)(*ExtendedCommand + 4256) |= 2u;
        *(_DWORD *)(*ExtendedCommand + 4256) &= ~0x40u;
        *(_WORD *)(*ExtendedCommand + 4252) = 0;
        *(_QWORD *)(*ExtendedCommand + 4184) = 0LL;
        *(_QWORD *)(*ExtendedCommand + 4192) = NvmeControllerGetLogPageCompletionForAER;
        *(_QWORD *)(*ExtendedCommand + 4200) = ExtendedCommand;
        *(_OWORD *)(*ExtendedCommand + 4160) = v8;
        *(_DWORD *)(*ExtendedCommand + 4248) = 4096;
        BuildGetLogPageCommand(
          (__int64)a1,
          *ExtendedCommand + 4096,
          a3,
          0x1000u,
          *((__int64 *)&v8 + 1),
          -1,
          0LL,
          0,
          *ExtendedCommand,
          ExtendedCommand[1]);
        v5 = NvmeControllerProcessCommand(a1, ExtendedCommand);
        if ( v5 >= 0 )
          return (unsigned int)v5;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( (_QWORD)v8 )
    NvmeFreeDmaBuffer((_DWORD)a1, 4096, a3, v8, *((__int64 *)&v8 + 1));
  if ( ExtendedCommand )
    NvmeControllerReclaimExtendedCommand(a1, ExtendedCommand);
  return (unsigned int)v5;
}
