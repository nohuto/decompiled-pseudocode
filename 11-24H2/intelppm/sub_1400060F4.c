/*
 * XREFs of sub_1400060F4 @ 0x1400060F4
 * Callers:
 *     sub_140030280 @ 0x140030280 (sub_140030280.c)
 *     sub_140035700 @ 0x140035700 (sub_140035700.c)
 * Callees:
 *     sub_140003834 @ 0x140003834 (sub_140003834.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400060F4(_DWORD *a1)
{
  ULONG ActiveProcessorCount; // ebp
  ULONG i; // ebx
  int ProcessorIdByNtNumber; // edi
  unsigned int v5; // ebp
  unsigned int j; // ebx
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  for ( i = 0; i < ActiveProcessorCount; ++i )
  {
    ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(i, &v10);
    if ( ProcessorIdByNtNumber >= 0 && v10 == a1[12] )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
      if ( (unsigned int)KeCheckProcessorAffinityEx(&unk_140019580) )
      {
        ProcessorIdByNtNumber = -1073741811;
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          v9 = v10;
          v8 = a1[13];
          sub_140003834((__int64)off_140018050->DeviceExtension, 2u, 1u, 0x31u, (__int64)&unk_140014AD0, v8, v9);
        }
      }
      else
      {
        a1[14] = i;
        KeAddProcessorAffinityEx(&unk_140019580, i);
      }
      (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
      return (unsigned int)ProcessorIdByNtNumber;
    }
  }
  if ( _bittest64(&qword_140019140, 0x2Du) )
  {
    v5 = HalPrivateDispatchTable[145](0xFFFFFFFFLL);
    for ( j = 0; j < v5; ++j )
    {
      ProcessorIdByNtNumber = ((__int64 (__fastcall *)(_QWORD, int *))HalPrivateDispatchTable[146])(j, &v10);
      if ( ProcessorIdByNtNumber >= 0 && v10 == a1[12] )
      {
        a1[14] = -1;
        a1[18] = j;
        return (unsigned int)ProcessorIdByNtNumber;
      }
    }
  }
  return (unsigned int)-1073741275;
}
