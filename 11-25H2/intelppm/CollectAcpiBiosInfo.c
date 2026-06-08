/*
 * XREFs of CollectAcpiBiosInfo @ 0x140049AA8
 * Callers:
 *     ProcLibGlobalInit @ 0x14004A9C8 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     GetAcpiTable @ 0x1400294F4 (GetAcpiTable.c)
 */

__int64 __fastcall CollectAcpiBiosInfo(ULONG a1, __int64 a2, const CHAR *a3, const CHAR *a4)
{
  int AcpiTable; // ebx
  int v6; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  AcpiTable = (unsigned int)GetAcpiTable(a1, (ULONG)&P, a3, a4);
  if ( AcpiTable >= 0 )
  {
    if ( *((_DWORD *)P + 14) )
    {
      dword_140019AF4 = 268439553;
      dword_140019AFC = 0;
      dword_140019AF8 = *((_DWORD *)P + 14);
    }
    if ( *((_DWORD *)P + 15) )
    {
      dword_140019B00 = 268439553;
      HIDWORD(qword_140019B04) = 0;
      LODWORD(qword_140019B04) = *((_DWORD *)P + 15);
    }
    if ( *((_DWORD *)P + 16) )
    {
      dword_140019B0C = 268439553;
      dword_140019B14 = 0;
      dword_140019B10 = *((_DWORD *)P + 16);
    }
    if ( *((_DWORD *)P + 17) )
    {
      dword_140019B18 = 268439553;
      HIDWORD(qword_140019B1C) = 0;
      LODWORD(qword_140019B1C) = *((_DWORD *)P + 17);
    }
    if ( *((_DWORD *)P + 18) )
    {
      dword_140019B24 = 134219777;
      dword_140019B2C = 0;
      dword_140019B28 = *((_DWORD *)P + 18);
    }
    dword_140019B30 = *((_DWORD *)P + 12);
    byte_140019B36 = *((_BYTE *)P + 105);
    byte_140019B37 = *((_BYTE *)P + 104);
    AcpiInfo = *((_WORD *)P + 48);
    word_140019AF2 = *((_WORD *)P + 49);
    byte_140019B34 = *((_BYTE *)P + 55);
    byte_140019B35 = *((_BYTE *)P + 95);
    ExFreePoolWithTag(P, (ULONG)0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = AcpiTable;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x5Du,
      (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
      v6);
  }
  return (unsigned int)AcpiTable;
}
