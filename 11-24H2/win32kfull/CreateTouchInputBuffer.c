/*
 * XREFs of CreateTouchInputBuffer @ 0x140279684
 * Callers:
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x140278658 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 * Callees:
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall CreateTouchInputBuffer(__int64 a1, ULONG a2, __int64 a3, int a4, ULONG a5)
{
  __int64 v5; // rax
  ULONG v6; // r13d
  int v7; // r12d
  void *Report; // rsi
  ULONG ReportLength; // r14d
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r15
  USHORT v11; // di
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int128 *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int16 v23; // r13
  int v24; // r12d
  char v25; // r12
  ULONG v26; // ecx
  ULONG v27; // ecx
  ULONG v28; // eax
  USHORT UsageList[2]; // [rsp+48h] [rbp-91h] BYREF
  ULONG UsageLength; // [rsp+4Ch] [rbp-8Dh] BYREF
  ULONG v32[2]; // [rsp+50h] [rbp-89h] BYREF
  __int128 UsageValue; // [rsp+58h] [rbp-81h]
  __int128 v34; // [rsp+68h] [rbp-71h]
  __int128 v35; // [rsp+78h] [rbp-61h]
  __int128 v36; // [rsp+88h] [rbp-51h]
  __int128 v37; // [rsp+98h] [rbp-41h]
  __int128 v38; // [rsp+A8h] [rbp-31h]
  __int128 v39; // [rsp+B8h] [rbp-21h]
  __int128 v40; // [rsp+C8h] [rbp-11h]
  __int128 v41; // [rsp+D8h] [rbp-1h]
  USHORT v42; // [rsp+138h] [rbp+5Fh] BYREF
  ULONG v43; // [rsp+140h] [rbp+67h]
  __int64 v44; // [rsp+148h] [rbp+6Fh]
  int v45; // [rsp+150h] [rbp+77h]

  v45 = a4;
  v44 = a3;
  v43 = a2;
  *(_DWORD *)UsageList = 3276866;
  v42 = 207;
  v5 = *(_QWORD *)(a1 + 440);
  v6 = a2;
  UsageLength = 2;
  v32[0] = 1;
  v7 = a4;
  v32[1] = 1;
  Report = *(void **)(v5 + 24);
  ReportLength = *(unsigned __int16 *)(v5 + 44);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(v5 + 16);
  memset_0(Report, 0, *(unsigned __int16 *)(v5 + 44));
  v11 = 1;
  v12 = 0;
  while ( (unsigned __int16)(v11 - 1) < 4u )
  {
    v13 = v7 + (unsigned int)(unsigned __int16)(v11 - 1);
    if ( (unsigned int)v13 > v6 - 1 )
      break;
    v14 = (__int128 *)(144 * v13 + v44);
    v15 = v14[1];
    UsageValue = *v14;
    v16 = v14[2];
    v34 = v15;
    v17 = v14[3];
    v35 = v16;
    v18 = v14[4];
    v36 = v17;
    v19 = v14[5];
    v37 = v18;
    v20 = v14[6];
    v38 = v19;
    v21 = v14[7];
    v39 = v20;
    v22 = v14[8];
    v40 = v21;
    v41 = v22;
    if ( HidP_SetUsageValue(
           HidP_Input,
           0xDu,
           v11,
           0x51u,
           DWORD1(UsageValue),
           PreparsedData,
           (PCHAR)Report,
           ReportLength) < 0 )
      return 0LL;
    if ( HidP_SetUsageValue(HidP_Input, 1u, v11, 0x30u, v35, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    if ( HidP_SetUsageValue(HidP_Input, 1u, v11, 0x31u, DWORD1(v35), PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    v23 = WORD6(UsageValue);
    v24 = BYTE12(UsageValue) & 4;
    if ( (BYTE12(UsageValue) & 4) != 0
      && HidP_SetUsages(HidP_Input, 0xDu, v11, UsageList, &UsageLength, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( (v23 & 2) != 0
      && !v24
      && HidP_SetUsages(HidP_Input, 0xDu, v11, &UsageList[1], v32, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( v23 < 0
      && HidP_SetUsages(HidP_Input, 0xFF00u, v11, &v42, &v32[1], PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    v25 = BYTE4(v39);
    if ( (BYTE4(v39) & 4) != 0
      && HidP_SetUsageValue(HidP_Input, 0xDu, v11, 0x30u, HIDWORD(v41), PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( (v25 & 2) != 0
      && HidP_SetUsageValue(HidP_Input, 0xDu, v11, 0x3Fu, DWORD2(v41), PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( (v25 & 1) != 0 )
    {
      v26 = DWORD2(v39) - v40;
      if ( DWORD2(v39) - (int)v40 < 0 )
        v26 = v40 - DWORD2(v39);
      if ( HidP_SetUsageValue(HidP_Input, 0xDu, v11, 0x48u, v26, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
        return 0LL;
      v27 = HIDWORD(v39) - DWORD1(v40);
      if ( HIDWORD(v39) - DWORD1(v40) < 0 )
        v27 = DWORD1(v40) - HIDWORD(v39);
      if ( HidP_SetUsageValue(HidP_Input, 0xDu, v11, 0x49u, v27, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
        return 0LL;
    }
    v7 = v45;
    ++v11;
    v6 = v43;
  }
  v28 = 0;
  if ( !v7 )
    v28 = v6;
  if ( HidP_SetUsageValue(HidP_Input, 0xDu, 0, 0x54u, v28, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    return 0LL;
  if ( !a5 )
    return 1LL;
  LOBYTE(v12) = HidP_SetUsageValue(HidP_Input, 0xDu, 0, 0x56u, a5, PreparsedData, (PCHAR)Report, ReportLength) >= 0;
  return v12;
}
