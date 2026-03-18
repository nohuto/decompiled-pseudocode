/*
 * XREFs of RIMGetDeviceButtons @ 0x1C0188A58
 * Callers:
 *     RIMPopulatePointerDevice @ 0x1C01825C0 (RIMPopulatePointerDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0187030 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     _IsValidParallelButton @ 0x1C00D3CC0 (_IsValidParallelButton.c)
 *     Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage @ 0x1C00D3EF4 (Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C01851CC (rimHidP_GetSpecificButtonCaps.c)
 *     RIMPbuttonToCursor @ 0x1C018B318 (RIMPbuttonToCursor.c)
 *     RIMValidatePTPButtons @ 0x1C01B4110 (RIMValidatePTPButtons.c)
 */

__int64 RIMGetDeviceButtons(__int64 a1, __int64 a2, __int64 a3, ...)
{
  _WORD *v3; // rsi
  unsigned int v7; // r13d
  unsigned __int16 v8; // di
  __int64 v9; // r14
  int SpecificButtonCaps; // esi
  char *v11; // rdi
  unsigned int v12; // ecx
  _QWORD *v13; // r12
  __int64 v14; // rax
  unsigned int j; // r8d
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int i; // r8d
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // r14d
  __int64 v22; // r12
  int v23; // r15d
  __int64 v24; // rax
  unsigned int k; // edx
  __int16 v26; // ax
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // r11d
  __int64 v32; // rdx
  int IsEnabledDeviceUsage; // eax
  int v34; // edx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  int v39; // [rsp+40h] [rbp-18h]
  int v40; // [rsp+48h] [rbp-10h]
  unsigned int v42; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v43; // [rsp+B0h] [rbp+58h]
  _WORD *v44; // [rsp+B8h] [rbp+60h]
  va_list va; // [rsp+B8h] [rbp+60h]
  __int64 v46; // [rsp+C0h] [rbp+68h] BYREF
  va_list va1; // [rsp+C0h] [rbp+68h]
  va_list va2; // [rsp+C8h] [rbp+70h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v44 = va_arg(va1, _WORD *);
  va_copy(va2, va1);
  v46 = va_arg(va2, _QWORD);
  v43 = a3;
  v3 = v44;
  v7 = 0;
  v42 = (unsigned __int16)v44[23];
  v8 = 0;
  v39 = 0;
  v40 = 0;
  if ( *(_DWORD *)(a2 + 1040) )
  {
    LODWORD(v46) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2923);
  }
  if ( (unsigned int)Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage() || *v3 != 5 )
    v8 = *(_WORD *)(a2 + 776);
  if ( v42 )
  {
    v9 = Win32AllocPoolZInit(72LL * v42, 0x65687352u);
    if ( v9 )
    {
      SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0LL, 0LL, v8, 0LL, v9, (__int64)&v42, a3);
      v11 = (char *)v9;
      if ( SpecificButtonCaps < 0 )
      {
LABEL_56:
        Win32FreePool(v11);
        goto LABEL_58;
      }
      v12 = v42;
      if ( !v42 )
      {
        LODWORD(v46) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2954);
        v12 = v42;
      }
      if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 5) > 1 )
      {
        v13 = (_QWORD *)(a2 + 1024);
        v14 = Win32AllocPoolZInit(12LL * *(unsigned int *)(a2 + 768), 0x78647352u);
        *(_QWORD *)(a2 + 1024) = v14;
        if ( v14 )
        {
          *(_DWORD *)(a2 + 1036) = *(_DWORD *)(a2 + 768);
          if ( (unsigned int)Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage() )
          {
            for ( i = 0; i < *(_DWORD *)(a2 + 1036); *(_DWORD *)(*v13 + 4 * v20) = 1 )
            {
              ++*(_DWORD *)(a1 + 716);
              v19 = i++;
              v20 = 3 * v19;
              *(_DWORD *)(*v13 + 4 * v20 + 4) = *(_DWORD *)(a1 + 716);
            }
            if ( (*(_DWORD *)(a2 + 360) & 2) != 0 )
            {
              v21 = 0;
              v22 = v43;
              if ( v42 )
              {
                v23 = 0;
                do
                {
                  if ( !(unsigned int)IsValidParallelButton(a2, (unsigned __int16 *)&v11[72 * v21], v22) )
                    ++v23;
                  ++v21;
                }
                while ( v21 < v42 );
                v39 = v23;
              }
              goto LABEL_30;
            }
          }
          else if ( *(_DWORD *)(a2 + 24) != 7
                 || (SpecificButtonCaps = RIMValidatePTPButtons(v9, v42), SpecificButtonCaps >= 0) )
          {
            for ( j = 0; j < *(_DWORD *)(a2 + 1036); *(_DWORD *)(*v13 + 4 * v17) = 1 )
            {
              ++*(_DWORD *)(a1 + 716);
              v16 = j++;
              v17 = 3 * v16;
              *(_DWORD *)(*v13 + 4 * v17 + 4) = *(_DWORD *)(a1 + 716);
            }
          }
        }
        else
        {
          SpecificButtonCaps = -1073741668;
        }
        v22 = v43;
LABEL_30:
        if ( (unsigned int)Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage() )
        {
          if ( *(_DWORD *)(a2 + 24) == 7 )
          {
            LOWORD(v46) = v44[23];
            SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0LL, 0LL, 0LL, 0LL, (__int64)v11, (__int64)va1, v22);
            if ( SpecificButtonCaps >= 0 )
              SpecificButtonCaps = RIMValidatePTPButtons(v11, (unsigned __int16)v46);
          }
        }
        goto LABEL_53;
      }
      *(_DWORD *)(a2 + 1036) = 0;
      v24 = Win32AllocPoolZInit(12LL * v12, 0x78647352u);
      *(_QWORD *)(a2 + 1024) = v24;
      if ( v24 )
      {
        for ( k = 0; k < v42; ++k )
        {
          if ( v7 >= 2 )
            break;
          if ( *(_WORD *)(v9 + 72LL * k) == 13 )
          {
            v26 = *(_WORD *)(v9 + 72LL * k + 56);
            if ( v26 == 66 )
            {
              v40 = 1;
            }
            else if ( v26 != 69 && v26 != 60 || v7 && *(_WORD *)(v9 + 72LL * (v7 - 1) + 56) != 66 )
            {
              continue;
            }
            v27 = ++*(_DWORD *)(a1 + 716);
            v28 = v7++;
            ++*(_DWORD *)(a2 + 1036);
            *((_DWORD *)va + v28) = v27;
          }
        }
        if ( *(_DWORD *)(a2 + 1036) > v42 )
        {
          LODWORD(v46) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2994);
        }
        if ( v40 )
        {
          v29 = *(_QWORD *)(a2 + 1024);
          *(_DWORD *)(v29 + 4) = (_DWORD)v44;
          **(_DWORD **)(a2 + 1024) = RIMPbuttonToCursor(66LL, v29, 0LL);
          if ( v7 > 1 )
          {
            v32 = *(_QWORD *)(a2 + 1024);
            *(_DWORD *)(v32 + 16) = HIDWORD(v44);
            *(_DWORD *)(*(_QWORD *)(a2 + 1024) + 12LL) = RIMPbuttonToCursor(v31, v32, v30);
          }
          goto LABEL_53;
        }
      }
      SpecificButtonCaps = -1073741668;
LABEL_53:
      *(_DWORD *)(a2 + 1040) = v42;
      IsEnabledDeviceUsage = Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage();
      v34 = *(_DWORD *)(a2 + 384);
      if ( IsEnabledDeviceUsage )
      {
        v35 = v42 - v39;
        *(_DWORD *)(a2 + 1044) = v42 - v39;
        *(_DWORD *)(a2 + 384) = v34 + v35;
      }
      else
      {
        *(_DWORD *)(a2 + 384) = *(_DWORD *)(a2 + 1040) + v34;
      }
      goto LABEL_56;
    }
  }
  SpecificButtonCaps = -1073741668;
LABEL_58:
  v36 = *(unsigned int *)(a2 + 1040);
  if ( (_DWORD)v36 )
  {
    if ( SpecificButtonCaps != -1073741668 )
    {
      v37 = Win32AllocPoolZInit(2 * v36, 0x65687352u);
      *(_QWORD *)(a2 + 816) = v37;
      if ( !v37 )
        return (unsigned int)-1073741668;
    }
  }
  else
  {
    return (unsigned int)-1073741668;
  }
  return (unsigned int)SpecificButtonCaps;
}
