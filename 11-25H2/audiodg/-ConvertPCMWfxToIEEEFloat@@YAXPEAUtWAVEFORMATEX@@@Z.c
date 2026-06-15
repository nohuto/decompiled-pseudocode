/*
 * XREFs of ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x14003F614
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140010720 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140011698 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertPCMWfxToIEEEFloat(struct tWAVEFORMATEX *a1)
{
  __int64 v1; // rax
  WORD nChannels; // ax

  if ( a1 )
  {
    if ( a1->wFormatTag == 1 )
    {
      a1->wFormatTag = 3;
      goto LABEL_11;
    }
    if ( a1->wFormatTag == 0xFFFE )
    {
      v1 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
        v1 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
      if ( !v1 && (a1[1].wFormatTag & 7) == 0 )
      {
        a1[1].wFormatTag = 32;
        *(GUID *)((char *)&a1[1].nSamplesPerSec + 2) = GUID_00000003_0000_0010_8000_00aa00389b71;
LABEL_11:
        nChannels = a1->nChannels;
        a1->wBitsPerSample = 32;
        nChannels *= 4;
        a1->nBlockAlign = nChannels;
        a1->nAvgBytesPerSec = a1->nSamplesPerSec * nChannels;
      }
    }
  }
}
