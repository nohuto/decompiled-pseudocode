/*
 * XREFs of CollectAcpiBiosInfo @ 0x140042610
 * Callers:
 *     ProcLibGlobalInit @ 0x140043530 (ProcLibGlobalInit.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     GetAcpiTable @ 0x14002D384 (GetAcpiTable.c)
 */

__int64 __fastcall CollectAcpiBiosInfo(ULONG a1, __int64 a2, const CHAR *a3, const CHAR *a4)
{
  int v4; // edx
  int AcpiTable; // ebx
  int v7; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  P = 0LL;
  AcpiTable = (unsigned int)GetAcpiTable(a1, (ULONG)&P, a3, a4);
  if ( AcpiTable >= 0 )
  {
    if ( *((_DWORD *)P + 14) )
    {
      dword_140014544 = 268439553;
      dword_14001454C = 0;
      dword_140014548 = *((_DWORD *)P + 14);
    }
    if ( *((_DWORD *)P + 15) )
    {
      dword_140014550 = 268439553;
      HIDWORD(qword_140014554) = 0;
      LODWORD(qword_140014554) = *((_DWORD *)P + 15);
    }
    if ( *((_DWORD *)P + 16) )
    {
      dword_14001455C = 268439553;
      dword_140014564 = 0;
      dword_140014560 = *((_DWORD *)P + 16);
    }
    if ( *((_DWORD *)P + 17) )
    {
      dword_140014568 = 268439553;
      HIDWORD(qword_14001456C) = 0;
      LODWORD(qword_14001456C) = *((_DWORD *)P + 17);
    }
    if ( *((_DWORD *)P + 18) )
    {
      dword_140014574 = 134219777;
      dword_14001457C = 0;
      dword_140014578 = *((_DWORD *)P + 18);
    }
    dword_140014580 = *((_DWORD *)P + 12);
    byte_140014586 = *((_BYTE *)P + 105);
    byte_140014587 = *((_BYTE *)P + 104);
    AcpiInfo = *((_WORD *)P + 48);
    word_140014542 = *((_WORD *)P + 49);
    byte_140014584 = *((_BYTE *)P + 55);
    byte_140014585 = *((_BYTE *)P + 95);
    ExFreePoolWithTag(P, (ULONG)0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = AcpiTable;
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      3,
      93,
      (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids,
      v7);
  }
  return (unsigned int)AcpiTable;
}
