/*
 * XREFs of EtwpEnableDisableSpecialGuids @ 0x140A0EA2C
 * Callers:
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpLogFileNameRundown @ 0x1407B102C (EtwpLogFileNameRundown.c)
 *     EtwpEnableDisableUMGL @ 0x140A0EC2C (EtwpEnableDisableUMGL.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x140A0EDBC (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A0EEA0 (EtwpCheckLoggerAccessAndDoRundown.c)
 */

__int64 __fastcall EtwpEnableDisableSpecialGuids(
        __int64 a1,
        _QWORD *a2,
        unsigned __int16 a3,
        int a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        _BYTE *a8)
{
  char v8; // r10
  unsigned int v10; // r15d
  int v11; // r9d
  unsigned int v14; // r11d
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // bp
  unsigned int i; // r8d
  GUID *v19; // r12
  __int64 v20; // rsi
  unsigned int j; // edx
  int v22; // edx
  __int64 v24; // r8
  __int64 v25; // r8
  unsigned int v26; // ecx
  __int64 v27; // r9
  int v29; // [rsp+30h] [rbp-38h]

  v8 = 1;
  v10 = a3;
  v11 = a5;
  v14 = -1073741275;
  v15 = 2LL;
  *a8 = 1;
  if ( a4 == 2 )
  {
    v25 = *(_QWORD *)&SystemTraceControlGuid.Data1 - *a2;
    if ( *(_QWORD *)&SystemTraceControlGuid.Data1 == *a2 )
      v25 = *(_QWORD *)SystemTraceControlGuid.Data4 - a2[1];
    v26 = 0;
    if ( v25 || a1 != EtwpHostSiloState )
      goto LABEL_17;
    if ( a5 != 1 )
    {
      if ( a5 != 2 )
        return v26;
      v8 = 0;
    }
    LOBYTE(v11) = v8;
    return (unsigned int)EtwpCheckGuidAccessAndDoRundown(a1, 2, v10, v11, a6, a7);
  }
  v16 = 0LL;
  if ( a4 == 1 )
  {
    v17 = 1;
  }
  else
  {
    if ( a4 )
    {
LABEL_17:
      *a8 = 0;
      return v14;
    }
    v17 = 0;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= 0xA )
    {
      v24 = *(_QWORD *)&KernelRundownGuid.Data1 - *a2;
      if ( *(_QWORD *)&KernelRundownGuid.Data1 == *a2 )
        v24 = *(_QWORD *)KernelRundownGuid.Data4 - a2[1];
      if ( v24 )
        goto LABEL_17;
      if ( !v17 )
        return 0;
      v27 = (unsigned int)(a5 - 1);
      if ( a5 == 1 )
      {
        v15 = *(unsigned __int8 *)(a1 + 4504);
      }
      else
      {
        v27 = (unsigned int)(a5 - 2);
        if ( a5 == 2 )
        {
          v15 = *(unsigned __int8 *)(a1 + 4504);
          goto LABEL_41;
        }
        v27 = (unsigned int)(a5 - 4);
        if ( a5 != 4 )
        {
          v27 = (unsigned int)(a5 - 8);
          if ( a5 == 16 )
            return (unsigned int)EtwpLogFileNameRundown((_QWORD *)a1, v10);
LABEL_41:
          LOBYTE(v27) = v16;
          return (unsigned int)EtwpCheckLoggerAccessAndDoRundown(a1, v15, v10, v27);
        }
      }
      LOBYTE(v16) = 1;
      goto LABEL_41;
    }
    v19 = (&EtwpUmglProviders)[2 * i];
    v20 = *(_QWORD *)&v19->Data1 - *a2;
    if ( *(_QWORD *)&v19->Data1 == *a2 )
      v20 = *(_QWORD *)v19->Data4 - a2[1];
    if ( !v20 )
      break;
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= a7 )
    {
      v22 = 0;
      goto LABEL_12;
    }
    if ( *(_DWORD *)(a6 + 16LL * j + 12) == -2147483644 )
      break;
  }
  v16 = *(_QWORD *)(a6 + 16LL * j);
  v22 = *(_DWORD *)(a6 + 16LL * j + 8) >> 2;
LABEL_12:
  v29 = v22;
  LOBYTE(v22) = v17;
  return EtwpEnableDisableUMGL(
           a1,
           v22,
           (unsigned __int16)v10,
           a5,
           *((unsigned __int8 *)&(&EtwpUmglProviders)[2 * i] + 8),
           v16,
           v29);
}
