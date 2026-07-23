/*
 * XREFs of MiLogRelocationRva @ 0x14093E524
 * Callers:
 *     MiParseImageLoadConfig @ 0x14093D160 (MiParseImageLoadConfig.c)
 *     MiCaptureImageCfgContext @ 0x14093D928 (MiCaptureImageCfgContext.c)
 *     MiLogRelocationFaults @ 0x14093DD34 (MiLogRelocationFaults.c)
 *     MiParseComAndCetHeaders @ 0x14093DDBC (MiParseComAndCetHeaders.c)
 * Callees:
 *     PfLogFileDataAccess @ 0x14022A610 (PfLogFileDataAccess.c)
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     MiOffsetToProtos @ 0x1402C28D0 (MiOffsetToProtos.c)
 *     PfSnLogPageFault @ 0x14034E5A0 (PfSnLogPageFault.c)
 */

void __fastcall MiLogRelocationRva(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int16 v6; // di
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v12[0] = 0LL;
  v5 = a2;
  v6 = a1;
  v7 = MiOffsetToProtos(a4, a1, v12);
  if ( v7 )
  {
    v8 = (v12[0] << 12) + ((unsigned __int64)*(unsigned int *)(v7 + 36) << 9);
    if ( (PfSnNumActiveTraces || DWORD2(xmmword_140F0E6E8))
      && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) >= 2 )
    {
      v9 = ((unsigned __int64)(v6 & 0xFFF) + v5 + 4095) >> 12;
      v10 = v9 + 1;
      if ( (v8 & 0xFFF) == 0 )
        v10 = v9;
      v11 = v8 & 0xFFFFFFFFFFFFF000uLL;
      if ( DWORD2(xmmword_140F0E6E8) )
        PfLogFileDataAccess(*(_QWORD *)(a3 + 24), (__int64)KeGetCurrentThread(), v11, v10, 0);
      if ( PfSnNumActiveTraces && v10 )
      {
        do
        {
          PfSnLogPageFault(a3, v11, 2);
          v11 += 4096LL;
          --v10;
        }
        while ( v10 );
      }
    }
  }
}
