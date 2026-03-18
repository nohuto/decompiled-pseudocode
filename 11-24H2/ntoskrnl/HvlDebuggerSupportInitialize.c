/*
 * XREFs of HvlDebuggerSupportInitialize @ 0x140582420
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     strstr @ 0x1404FD9B0 (strstr.c)
 *     atol @ 0x1404FDC00 (atol.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     strncmp @ 0x1406BFB20 (strncmp.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408ADC70 (RtlAnsiStringToUnicodeString.c)
 */

void __fastcall HvlDebuggerSupportInitialize(__int64 a1)
{
  const char *v2; // rcx
  char *v3; // rsi
  char *v4; // rbx
  char *v5; // rax
  char *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  char *v14; // rax
  const char *v15; // rbx
  int v16; // r14d
  char *v17; // rax
  const char *v18; // rbx
  char v19; // si
  char *v20; // rax
  int v21; // ebx
  char *v22; // rax
  char *v23; // rdi
  __int16 v24; // di
  __int64 v25; // r8
  __int64 v26; // r9
  STRING SourceString; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v29[3]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v30; // [rsp+4Ch] [rbp-B4h]
  __int16 v31; // [rsp+4Eh] [rbp-B2h]
  char v32; // [rsp+50h] [rbp-B0h]
  char v33; // [rsp+53h] [rbp-ADh]
  int v34; // [rsp+100h] [rbp+0h]
  __int16 v35; // [rsp+10Ch] [rbp+Ch]
  int v36; // [rsp+11Ch] [rbp+1Ch]
  wchar_t *Buffer; // [rsp+120h] [rbp+20h]
  int Length; // [rsp+128h] [rbp+28h]

  DestinationString = 0LL;
  if ( (HvlpRootFlags & 8) != 0 )
  {
    if ( a1 )
    {
      v2 = *(const char **)(a1 + 216);
      if ( v2 )
      {
        v3 = strstr(v2, "HYPERVISORDBGPORT=");
        v4 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGDEVICE=");
        v5 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGACPIPATH=");
        if ( v5 )
        {
          v6 = strstr(v5, "\\");
          if ( v6 )
          {
            memset_0(v29, 0, 0x110uLL);
            v36 = 1;
            if ( v3 )
              v35 = 0x8000;
            else
              v35 = -32765;
            v7 = (__int64)strstr(v6, " ");
            if ( v7 )
            {
              LOWORD(v7) = v7 - (_WORD)v6;
            }
            else
            {
              v7 = -1LL;
              do
                ++v7;
              while ( v6[v7] );
            }
            *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
            SourceString.Buffer = v6;
            SourceString.Length = v7;
            SourceString.MaximumLength = v7;
            if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) >= 0 )
            {
              Buffer = DestinationString.Buffer;
              Length = DestinationString.Length;
              v33 = 1;
              guard_dispatch_icall_no_overrides(0LL, v29, v8, v9);
              RtlFreeAnsiString(&DestinationString);
            }
          }
        }
        else if ( v3 )
        {
          v10 = strstr(v3, "COM");
          if ( v10 )
          {
            v11 = atol(v10 + 3) - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                v13 = v12 - 1;
                if ( v13 )
                {
                  if ( v13 == 1 )
                    KdHvComPortInUse = 744LL;
                }
                else
                {
                  KdHvComPortInUse = 1000LL;
                }
              }
              else
              {
                KdHvComPortInUse = 760LL;
              }
            }
            else
            {
              KdHvComPortInUse = 1016LL;
            }
          }
        }
        else if ( v4 )
        {
          v14 = strstr(v4, "=");
          v15 = v14;
          if ( v14 )
          {
            v16 = atol(v14 + 1);
            v17 = strstr(v15, ".");
            if ( v17 )
            {
              v18 = v17 + 1;
              v19 = atol(v17 + 1);
              v20 = strstr(v18, ".");
              if ( v20 )
              {
                v21 = v19 & 0x1F | (32 * (atol(v20 + 1) & 7));
                v22 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGTYPE=");
                v23 = v22;
                if ( v22 )
                {
                  if ( !strncmp(v22 + 18, "1394", 4uLL) )
                  {
                    v24 = -32767;
                  }
                  else
                  {
                    if ( strncmp(v23 + 18, "NET", 3uLL) )
                      return;
                    v24 = -32765;
                  }
                  memset_0(v29, 0, 0x110uLL);
                  v29[2] = -1;
                  v30 = -1;
                  v33 = 1;
                  v29[0] = v16;
                  v29[1] = v21;
                  if ( v24 == -32767 )
                  {
                    v31 = 12;
                    v32 = 16;
                  }
                  else
                  {
                    v31 = 2;
                    v32 = -1;
                  }
                  v34 = 0;
                  guard_dispatch_icall_no_overrides(0LL, v29, v25, v26);
                }
              }
            }
          }
        }
      }
    }
  }
}
