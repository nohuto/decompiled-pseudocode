/*
 * XREFs of ExpGetDeviceDataInformation @ 0x140943494
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExpStringFree @ 0x1406F748C (ExpStringFree.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     KseQueryDeviceDataList @ 0x1409424A0 (KseQueryDeviceDataList.c)
 *     ExpStringCapture @ 0x140942D04 (ExpStringCapture.c)
 *     KseQueryDeviceData @ 0x140944120 (KseQueryDeviceData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetDeviceDataInformation(int a1, unsigned __int64 a2, int a3)
{
  void *Pool2; // rdi
  int v6; // ebx
  unsigned int v7; // ebx
  int DeviceData; // eax
  unsigned int v9; // ecx
  __int128 v11; // [rsp+40h] [rbp-48h] BYREF
  __int128 v12; // [rsp+50h] [rbp-38h] BYREF
  SIZE_T Length[2]; // [rsp+60h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp+10h] BYREF
  void *v15; // [rsp+A8h] [rbp+20h] BYREF

  SourceString = 0LL;
  v15 = 0LL;
  Pool2 = 0LL;
  if ( !a2 || a3 != 48 )
    return 3221225476LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a2 + 48 > 0x7FFFFFFF0000LL || a2 + 48 < a2 )
    Pool2 = 0LL;
  v11 = *(_OWORD *)a2;
  v12 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)Length = *(_OWORD *)(a2 + 32);
  v6 = ExpStringCapture(&SourceString, (unsigned __int16 *)&v11);
  if ( v6 >= 0 )
  {
    if ( a1 != 136 || (v6 = ExpStringCapture(&v15, (unsigned __int16 *)&v12), v6 >= 0) )
    {
      if ( !HIDWORD(Length[0]) )
        goto LABEL_18;
      if ( !Length[1] )
      {
        v6 = -1073741811;
        goto LABEL_22;
      }
      v7 = HIDWORD(Length[0]);
      ProbeForWrite((volatile void *)Length[1], HIDWORD(Length[0]), 2u);
      Pool2 = (void *)ExAllocatePool2(0x101uLL, v7, 0x4E494444u);
      if ( Pool2 )
      {
LABEL_18:
        if ( a1 == 136 )
          DeviceData = KseQueryDeviceData(SourceString, (int)v15, (int)Length, (int)Length + 4, Pool2);
        else
          DeviceData = KseQueryDeviceDataList(SourceString, (char *)Pool2, HIDWORD(Length[0]), (_DWORD *)Length + 1);
        v6 = DeviceData;
        v9 = HIDWORD(Length[0]);
        *(_QWORD *)(a2 + 32) = Length[0];
        if ( DeviceData >= 0 )
          memmove((void *)Length[1], Pool2, v9);
        goto LABEL_22;
      }
      v6 = -1073741801;
    }
  }
LABEL_22:
  ExpStringFree((void *)SourceString);
  ExpStringFree(v15);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4E494444u);
  return (unsigned int)v6;
}
