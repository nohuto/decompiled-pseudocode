/*
 * XREFs of ExpGetDeviceDataInformation @ 0x140829BF4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExpStringFree @ 0x1406EDB70 (ExpStringFree.c)
 *     KseQueryDeviceDataList @ 0x140829150 (KseQueryDeviceDataList.c)
 *     ExpStringCapture @ 0x14082984C (ExpStringCapture.c)
 *     KseQueryDeviceData @ 0x14082A670 (KseQueryDeviceData.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpGetDeviceDataInformation(int a1, unsigned __int64 a2, int a3)
{
  void *Pool2; // rdi
  int v6; // ebx
  int DeviceData; // eax
  unsigned int v8; // ecx
  __int128 v10; // [rsp+40h] [rbp-48h] BYREF
  __int128 v11; // [rsp+50h] [rbp-38h] BYREF
  SIZE_T Length[2]; // [rsp+60h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+98h] [rbp+10h] BYREF
  void *v14; // [rsp+A8h] [rbp+20h] BYREF

  SourceString = 0LL;
  v14 = 0LL;
  Pool2 = 0LL;
  if ( !a2 || a3 != 48 )
    return 3221225476LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a2 + 48 > 0x7FFFFFFF0000LL || a2 + 48 < a2 )
    Pool2 = 0LL;
  v10 = *(_OWORD *)a2;
  v11 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)Length = *(_OWORD *)(a2 + 32);
  v6 = ExpStringCapture(&SourceString, (unsigned __int16 *)&v10);
  if ( v6 >= 0 )
  {
    if ( a1 != 136 || (v6 = ExpStringCapture(&v14, (unsigned __int16 *)&v11), v6 >= 0) )
    {
      if ( !HIDWORD(Length[0]) )
        goto LABEL_18;
      if ( !Length[1] )
      {
        v6 = -1073741811;
        goto LABEL_22;
      }
      ProbeForWrite((volatile void *)Length[1], HIDWORD(Length[0]), 2u);
      Pool2 = (void *)ExAllocatePool2(0x101uLL);
      if ( Pool2 )
      {
LABEL_18:
        if ( a1 == 136 )
          DeviceData = KseQueryDeviceData(SourceString, (int)v14, (int)Length, (int)Length + 4, Pool2);
        else
          DeviceData = KseQueryDeviceDataList(SourceString, (char *)Pool2, HIDWORD(Length[0]), (_DWORD *)Length + 1);
        v6 = DeviceData;
        v8 = HIDWORD(Length[0]);
        *(_QWORD *)(a2 + 32) = Length[0];
        if ( DeviceData >= 0 )
          memmove((void *)Length[1], Pool2, v8);
        goto LABEL_22;
      }
      v6 = -1073741801;
    }
  }
LABEL_22:
  ExpStringFree((void *)SourceString);
  ExpStringFree(v14);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4E494444u);
  return (unsigned int)v6;
}
