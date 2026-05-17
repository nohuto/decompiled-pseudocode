/*
 * XREFs of LdrpMUIEtwOutput @ 0x18011554C
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18005F740 (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpTraceLoadMUIDll @ 0x1800790FC (LdrpTraceLoadMUIDll.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800F3BC4 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     _itow_s @ 0x18012C900 (_itow_s.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpMUIEtwOutput(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  int ModuleInfoFromVirtualMemory; // r14d
  __int64 v9; // rdi
  unsigned int v10; // esi
  wchar_t *v11; // rax
  __int64 v12; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h]
  _QWORD v16[5]; // [rsp+58h] [rbp-A8h]
  wchar_t Buffer[64]; // [rsp+80h] [rbp-80h] BYREF
  WCHAR SourceString[264]; // [rsp+100h] [rbp+0h] BYREF

  v4 = a1;
  v15 = a1;
  v16[0] = L"Type:";
  v16[1] = L" Name:";
  v16[2] = L" Language:";
  v16[3] = L" Item:";
  ModuleInfoFromVirtualMemory = 0;
  v9 = 2147353476LL;
  DestinationString = 0LL;
  if ( (a4 & 0xE) != 0 )
  {
    *(_DWORD *)&DestinationString.Length = 34078720;
    DestinationString.Buffer = SourceString;
    v10 = 0;
    RtlAppendUnicodeToString(&DestinationString.Length, L"SR - ");
    do
    {
      RtlAppendUnicodeToString(&DestinationString.Length, (const wchar_t *)v16[v10]);
      v11 = *(wchar_t **)(a2 + 8LL * v10);
      if ( (unsigned __int64)v11 < 0x10000 || v10 == 3 )
      {
        itow_s((int)v11, Buffer, 0x40uLL, 10);
        v11 = Buffer;
      }
      RtlAppendUnicodeToString(&DestinationString.Length, v11);
      ++v10;
    }
    while ( v10 < a3 );
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v12 = 2147353476LL;
    LdrpTraceLoadMUIDll(&DestinationString.Length, *(unsigned __int8 *)v12);
    memset_thunk_772440563353939046(SourceString, 0, DestinationString.Length);
    v4 = v15;
  }
  if ( (a4 & 1) != 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(v4, SourceString, 0x208u, 0LL, 0LL, 0LL, 0LL);
    if ( ModuleInfoFromVirtualMemory >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v9 = (__int64)NtCurrentPeb()->SharedData + 554;
      LdrpTraceLoadMUIDll(&DestinationString.Length, *(unsigned __int8 *)v9);
    }
  }
  return (unsigned int)ModuleInfoFromVirtualMemory;
}
