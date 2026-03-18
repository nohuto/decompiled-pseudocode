/*
 * XREFs of ACPIInitReadRegistryKeys @ 0x1400C5868
 * Callers:
 *     DriverEntry @ 0x1400C64B0 (DriverEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x14000AE88 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 *     OSReadRegValue @ 0x1400B6898 (OSReadRegValue.c)
 *     OSOpenHandle @ 0x1400B7118 (OSOpenHandle.c)
 *     OSCloseHandle @ 0x1400BE908 (OSCloseHandle.c)
 */

void ACPIInitReadRegistryKeys()
{
  void *v0; // rbx
  void *v1; // rsi
  int v2; // eax
  unsigned int v3; // edi
  _BYTE *Pool2; // rax
  int v5; // eax
  unsigned __int16 v6; // r9
  char *v7; // rax
  __int64 v8; // rdi
  int v9; // edi
  unsigned int v10; // r14d
  _BYTE *v11; // rax
  unsigned int v12; // edi
  char *v13; // rax
  char *v14; // r14
  unsigned int v15; // edx
  char *v16; // rcx
  char v17; // al
  int v18; // [rsp+28h] [rbp-10h]
  int v19; // [rsp+28h] [rbp-10h]
  unsigned int v20; // [rsp+70h] [rbp+38h] BYREF
  int v21; // [rsp+78h] [rbp+40h] BYREF
  int v22; // [rsp+80h] [rbp+48h] BYREF
  void *v23; // [rsp+88h] [rbp+50h] BYREF

  v23 = 0LL;
  v0 = 0LL;
  v20 = 4;
  v22 = 0;
  v21 = 0;
  v1 = 0LL;
  if ( (int)OSReadRegValue("Attributes", 0LL, &v21, &v20) >= 0 )
    AcpiOverrideAttributes |= v21 & 0xFFFEFFFF;
  AcpiProcessorString = 0LL;
  v2 = OSOpenHandle("\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0", 0LL, (__int64)&v23);
  if ( v2 >= 0 )
  {
    v3 = 40;
    while ( 1 )
    {
      if ( v0 )
        ExFreePoolWithTag(v0, 0);
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, v3, 1399874369LL);
      v0 = Pool2;
      if ( !Pool2 )
        break;
      v20 = v3;
      v3 += 10;
      v5 = OSReadRegValue("Identifier", v23, Pool2, &v20);
      if ( v5 != -2147483643 )
      {
        if ( v5 >= 0 )
        {
          v7 = strstr((const char *)v0, "Stepping");
          if ( v7 )
            *(v7 - 1) = 0;
          v8 = -1LL;
          do
            ++v8;
          while ( *((_BYTE *)v0 + v8) );
          v9 = v8 + 1;
          v10 = 10;
          while ( 1 )
          {
            if ( v1 )
              ExFreePoolWithTag(v1, 0);
            v11 = (_BYTE *)ExAllocatePool2(256LL, v10, 1399874369LL);
            v1 = v11;
            if ( !v11 )
              break;
            v20 = v10;
            v10 += 10;
            v5 = OSReadRegValue("VendorIdentifier", v23, v11, &v20);
            if ( v5 != -2147483643 )
            {
              if ( v5 >= 0 )
              {
                v12 = v20 + 2 + v9;
                v13 = (char *)ExAllocatePool2(64LL, v12, 1399874369LL);
                v14 = v13;
                if ( v13 )
                {
                  RtlStringCchPrintfA(v13, v12, "%s - %s", (const char *)v1, (const char *)v0);
                  v15 = 0;
                  if ( v12 )
                  {
                    v16 = v14;
                    do
                    {
                      v17 = *v16;
                      if ( !*v16 )
                        break;
                      if ( v17 < 32 || v17 == 44 )
                        *v16 = 32;
                      ++v15;
                      ++v16;
                    }
                    while ( v15 < v12 );
                  }
                  *((_QWORD *)&AcpiProcessorString + 1) = v14;
                  WORD1(AcpiProcessorString) = v12;
                  LOWORD(AcpiProcessorString) = v12;
                  v20 = 4;
                  if ( (int)OSReadRegValue("ProcDevAsyncStart", 0LL, &v22, &v20) < 0
                    || (AcpiProcessorAsyncStart = 1, !v22) )
                  {
                    AcpiProcessorAsyncStart = 0;
                  }
                }
                goto LABEL_38;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_38;
              v6 = 18;
              goto LABEL_14;
            }
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v6 = 17;
LABEL_14:
          v19 = v5;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xBu,
            v6,
            (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
            v19);
        }
        break;
      }
    }
LABEL_38:
    if ( v23 )
      OSCloseHandle(v23);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
    if ( v0 )
      ExFreePoolWithTag(v0, 0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xBu,
      0x10u,
      (__int64)&WPP_d6d09210be433525947e6da7c5185dc5_Traceguids,
      v18);
  }
}
