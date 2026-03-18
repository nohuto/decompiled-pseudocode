/*
 * XREFs of RIMGetPointerDeviceProperties @ 0x1401E09D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     _IsValidParallelButton @ 0x140111868 (_IsValidParallelButton.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetPreparsedData @ 0x1401DE368 (GetPreparsedData.c)
 *     _PopulatePropertyUsageValues @ 0x1401DE448 (_PopulatePropertyUsageValues.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMGetPointerDeviceProperties(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // ebx
  struct _HIDP_BUTTON_CAPS *v6; // r12
  USHORT v7; // r15
  int v10; // ecx
  __int64 v11; // rax
  struct _HIDP_PREPARSED_DATA *v12; // r14
  struct _HIDP_VALUE_CAPS *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // r14d
  int v17; // r8d
  unsigned int v18; // r15d
  __int64 v19; // r8
  __int64 v20; // rcx
  USHORT v22; // [rsp+50h] [rbp-20h]
  int v23; // [rsp+54h] [rbp-1Ch] BYREF
  USHORT ButtonCapsLength[2]; // [rsp+58h] [rbp-18h] BYREF
  int v25; // [rsp+5Ch] [rbp-14h]
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+60h] [rbp-10h] BYREF
  PVOID Buffer; // [rsp+68h] [rbp-8h]
  USHORT ValueCapsLength; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v29; // [rsp+C0h] [rbp+50h]

  v29 = a3;
  *(_DWORD *)ButtonCapsLength = 0;
  v5 = 0;
  v23 = 0;
  v6 = 0LL;
  ValueCapsLength = 0;
  v7 = 0;
  v22 = 0;
  PreparsedData = 0LL;
  if ( (unsigned int)GetPreparsedData(a1, &PreparsedData) )
  {
    v10 = *(_DWORD *)(a1 + 368);
    if ( (v10 & 2) != 0 )
    {
      if ( !*(_QWORD *)(a1 + 768) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3762);
        v10 = *(_DWORD *)(a1 + 368);
      }
      v11 = *(_QWORD *)(a1 + 768);
      v7 = *(_WORD *)(v11 + 4);
      v22 = *(_WORD *)(v11 + 10);
    }
    if ( (v10 & 0x20) != 0 )
      v7 = *(_WORD *)(a1 + 784);
    if ( !a4 )
    {
      v25 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3773);
    }
    v12 = PreparsedData;
    if ( HidP_GetSpecificValueCaps(HidP_Input, 0, v7, 0, 0LL, &ValueCapsLength, PreparsedData) == -1072627705 )
    {
      v13 = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(
                                         256LL,
                                         72LL * (ValueCapsLength + (unsigned int)v22),
                                         0x63767355u);
      Buffer = v13;
      if ( !v13 )
        return v5;
      if ( (unsigned int)PopulatePropertyUsageValues(
                           a1,
                           (unsigned int *)&v23,
                           a4,
                           v7,
                           ValueCapsLength,
                           v13,
                           a2,
                           v29,
                           v12) )
      {
        v14 = *(_QWORD *)(a1 + 768);
        if ( !v14 || !*(_WORD *)(v14 + 8) )
          goto LABEL_20;
        if ( v23 >= a4 )
        {
          v25 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3797);
        }
        if ( !*(_WORD *)(*(_QWORD *)(a1 + 768) + 10LL) )
        {
          v25 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3798);
        }
        if ( (unsigned int)PopulatePropertyUsageValues(
                             a1,
                             (unsigned int *)&v23,
                             a4,
                             *(_WORD *)(*(_QWORD *)(a1 + 768) + 8LL),
                             v22,
                             (PHIDP_VALUE_CAPS)Buffer + (unsigned int)v23,
                             a2,
                             v29,
                             v12) )
        {
LABEL_20:
          v15 = (unsigned int)v23;
          v16 = a2 - v23;
          if ( a2 == v23 )
          {
            v17 = 3826;
          }
          else
          {
            *(_DWORD *)ButtonCapsLength = *(_DWORD *)(a1 + 1048);
            v6 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInitImpl(
                                               256LL,
                                               72LL * *(unsigned int *)ButtonCapsLength,
                                               0x63767355u);
            if ( !v6 )
              goto LABEL_36;
            if ( HidP_GetSpecificButtonCaps(HidP_Input, 0, v7, 0, v6, ButtonCapsLength, PreparsedData) < 0 )
              goto LABEL_36;
            if ( v16 > *(_DWORD *)ButtonCapsLength )
            {
              v25 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3843);
              if ( v16 > *(_DWORD *)ButtonCapsLength )
                goto LABEL_36;
            }
            memset((void *)(v29 + 28 * v15), 0, 28LL * v16);
            v18 = 0;
            v5 = 1;
            while ( (unsigned int)v15 < a2 && v18 < *(_DWORD *)ButtonCapsLength )
            {
              if ( (*(_DWORD *)(a1 + 368) & 2) == 0
                || (unsigned int)IsValidParallelButton(a1, &v6[v18].UsagePage, PreparsedData) )
              {
                v19 = v29;
                v20 = 28LL * (unsigned int)v15;
                LODWORD(v15) = v15 + 1;
                *(_WORD *)(v20 + v29 + 24) = v6[v18].UsagePage;
                *(_WORD *)(v20 + v19 + 26) = v6[v18].Range.UsageMin;
                *(_DWORD *)(v20 + v19 + 4) = 1;
              }
              ++v18;
            }
            if ( (_DWORD)v15 == a2 )
              goto LABEL_36;
            v17 = 3855;
          }
          v25 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v17);
        }
      }
LABEL_36:
      GreDeleteFastMutex((char *)Buffer);
      if ( v6 )
        GreDeleteFastMutex((char *)v6);
      return v5;
    }
  }
  return 0LL;
}
