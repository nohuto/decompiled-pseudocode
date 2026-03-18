/*
 * XREFs of RIMIDESetLinkCollectionUsageValues @ 0x1401E6D44
 * Callers:
 *     RIMIDEInjectDeviceInput @ 0x140121AFC (RIMIDEInjectDeviceInput.c)
 * Callees:
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMIDESetLinkCollectionUsageValues(__int64 a1, __int64 a2, __int64 a3, USHORT a4, _DWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  ULONG ReportLength; // ecx
  CHAR *Report; // r12
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r13
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 i; // rbx
  ULONG v19; // [rsp+40h] [rbp-D8h]
  ULONG UsageLength[3]; // [rsp+44h] [rbp-D4h] BYREF
  _QWORD v21[16]; // [rsp+50h] [rbp-C8h] BYREF

  memset(v21, 0, 0x78uLL);
  v8 = *(_QWORD *)(a1 + 440);
  v9 = 0LL;
  UsageLength[0] = 1;
  v10 = 0LL;
  ReportLength = *(unsigned __int16 *)(v8 + 44);
  Report = *(CHAR **)(v8 + 24);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(v8 + 16);
  v19 = ReportLength;
  while ( !(_DWORD)v10 )
  {
    if ( HidP_SetUsageValue(
           HidP_Input,
           *(_WORD *)(a3 + 12 * v10),
           a4,
           *(_WORD *)(a3 + 12 * v10 + 2),
           *(_DWORD *)(a3 + 12 * v10 + 4),
           PreparsedData,
           Report,
           ReportLength) < 0 )
    {
      v14 = *(_DWORD *)(a3 + 12 * v10 + 4);
      if ( v14 == 1 )
      {
        if ( (unsigned int)v9 >= 0xA )
          return 0LL;
        v15 = 3 * v9;
        v16 = *(_DWORD *)(a3 + 12 * v10 + 8);
        v9 = (unsigned int)(v9 + 1);
        *(_QWORD *)((char *)v21 + 4 * v15) = *(_QWORD *)(a3 + 12 * v10);
        *((_DWORD *)&v21[1] + v15) = v16;
      }
      else if ( v14 )
      {
        return 0LL;
      }
    }
    ReportLength = v19;
    v10 = 1LL;
  }
  if ( (unsigned int)v9 <= 0xA )
  {
    for ( i = 0LL; (unsigned int)i < (unsigned int)v9; i = (unsigned int)(i + 1) )
    {
      if ( UsageLength[0] <= 1 )
      {
        if ( HidP_SetUsages(
               HidP_Input,
               *((_WORD *)v21 + 6 * i),
               a4,
               (PUSAGE)v21 + 6 * i + 1,
               UsageLength,
               PreparsedData,
               Report,
               ReportLength) < 0 )
          return 0LL;
        ReportLength = v19;
        if ( a5 && *((_WORD *)v21 + 6 * i) == 13 && *((_WORD *)v21 + 6 * i + 1) == 66 )
          ++*a5;
      }
    }
  }
  return 1LL;
}
