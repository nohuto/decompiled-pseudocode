/*
 * XREFs of HvlDebuggerSupportInitialize @ 0x14057F7A0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     strstr @ 0x1404FB270 (strstr.c)
 *     atol @ 0x1404FB4C0 (atol.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     strncmp @ 0x1406C0A20 (strncmp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 */

void __fastcall HvlDebuggerSupportInitialize(__int64 a1)
{
  const char *v2; // rcx
  char *v3; // rsi
  char *v4; // rbx
  char *v5; // rax
  char *v6; // rbx
  __int64 v7; // rax
  char *v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char *v12; // rax
  const char *v13; // rbx
  int v14; // r14d
  char *v15; // rax
  const char *v16; // rbx
  char v17; // si
  char *v18; // rax
  int v19; // ebx
  char *v20; // rax
  char *v21; // rdi
  __int16 v22; // di
  ANSI_STRING SourceString; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v25[3]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v26; // [rsp+4Ch] [rbp-B4h]
  __int16 v27; // [rsp+4Eh] [rbp-B2h]
  char v28; // [rsp+50h] [rbp-B0h]
  char v29; // [rsp+53h] [rbp-ADh]
  int v30; // [rsp+100h] [rbp+0h]
  __int16 v31; // [rsp+10Ch] [rbp+Ch]
  int v32; // [rsp+11Ch] [rbp+1Ch]
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
            memset_0(v25, 0, 0x110uLL);
            v32 = 1;
            if ( v3 )
              v31 = 0x8000;
            else
              v31 = -32765;
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
              v29 = 1;
              guard_dispatch_icall_no_overrides(0LL, v25);
              RtlFreeAnsiString(&DestinationString);
            }
          }
        }
        else if ( v3 )
        {
          v8 = strstr(v3, "COM");
          if ( v8 )
          {
            v9 = atol(v8 + 3) - 1;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                v11 = v10 - 1;
                if ( v11 )
                {
                  if ( v11 == 1 )
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
          v12 = strstr(v4, "=");
          v13 = v12;
          if ( v12 )
          {
            v14 = atol(v12 + 1);
            v15 = strstr(v13, ".");
            if ( v15 )
            {
              v16 = v15 + 1;
              v17 = atol(v15 + 1);
              v18 = strstr(v16, ".");
              if ( v18 )
              {
                v19 = v17 & 0x1F | (32 * (atol(v18 + 1) & 7));
                v20 = strstr(*(const char **)(a1 + 216), "HYPERVISORDBGTYPE=");
                v21 = v20;
                if ( v20 )
                {
                  if ( !strncmp(v20 + 18, "1394", 4uLL) )
                  {
                    v22 = -32767;
                  }
                  else
                  {
                    if ( strncmp(v21 + 18, "NET", 3uLL) )
                      return;
                    v22 = -32765;
                  }
                  memset_0(v25, 0, 0x110uLL);
                  v25[2] = -1;
                  v26 = -1;
                  v29 = 1;
                  v25[0] = v14;
                  v25[1] = v19;
                  if ( v22 == -32767 )
                  {
                    v27 = 12;
                    v28 = 16;
                  }
                  else
                  {
                    v27 = 2;
                    v28 = -1;
                  }
                  v30 = 0;
                  guard_dispatch_icall_no_overrides(0LL, v25);
                }
              }
            }
          }
        }
      }
    }
  }
}
