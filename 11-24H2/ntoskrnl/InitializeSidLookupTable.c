/*
 * XREFs of InitializeSidLookupTable @ 0x140796620
 * Callers:
 *     SddlBaseInitialize @ 0x140607EA0 (SddlBaseInitialize.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 */

char InitializeSidLookupTable()
{
  _DWORD *v0; // rbx
  unsigned int v1; // edi
  int v2; // edx
  char *v3; // rcx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  _SID_IDENTIFIER_AUTHORITY *p_IdentifierAuthority; // rdx
  ULONG v13; // edx
  PULONG v14; // rax
  int v16; // [rsp+20h] [rbp-20h] BYREF
  __int16 v17; // [rsp+24h] [rbp-1Ch]
  int v18; // [rsp+28h] [rbp-18h] BYREF
  __int16 v19; // [rsp+2Ch] [rbp-14h]
  int v20; // [rsp+30h] [rbp-10h] BYREF
  __int16 v21; // [rsp+34h] [rbp-Ch]
  _SID_IDENTIFIER_AUTHORITY v22; // [rsp+38h] [rbp-8h] BYREF
  _SID_IDENTIFIER_AUTHORITY v23; // [rsp+68h] [rbp+28h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+70h] [rbp+30h] BYREF
  _SID_IDENTIFIER_AUTHORITY v25; // [rsp+78h] [rbp+38h] BYREF

  *(_WORD *)&v22.Value[4] = 256;
  *(_DWORD *)v22.Value = 0;
  v0 = &unk_140E0CE50;
  v20 = 0;
  v1 = 0;
  v18 = 0;
  *(_DWORD *)v23.Value = 0;
  v16 = 0;
  *(_DWORD *)v25.Value = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v21 = 512;
  v19 = 768;
  *(_WORD *)&v23.Value[4] = 1280;
  v17 = 4096;
  *(_WORD *)&v25.Value[4] = 3840;
  *(_WORD *)&IdentifierAuthority.Value[4] = 4608;
  do
  {
    if ( *((_BYTE *)v0 - 16) != 1 || !*(_QWORD *)v0 )
    {
      v2 = v0[3];
      v3 = (char *)&unk_140E0CE60 + 104 * v1;
      *(_QWORD *)v0 = v3;
      v4 = v2 - 1;
      if ( !v4 )
      {
        RtlInitializeSid(v3, &v22, 1u);
        *RtlSubAuthoritySid(*(PSID *)v0, 0) = v0[2];
        goto LABEL_25;
      }
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 2;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( !v8 )
            {
              RtlInitializeSid(v3, &v23, 2u);
              *RtlSubAuthoritySid(*(PSID *)v0, 0) = 32;
              goto LABEL_18;
            }
            v9 = v8 - 2;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( v10 )
              {
                v11 = v10 - 1;
                if ( !v11 )
                {
                  RtlInitializeSid(v3, &v23, 6u);
                  *RtlSubAuthoritySid(*(PSID *)v0, 0) = 84;
                  v14 = RtlSubAuthoritySid(*(PSID *)v0, 1u);
                  *(_OWORD *)v14 = 0LL;
                  v14[4] = 0;
                  goto LABEL_25;
                }
                if ( v11 != 1 )
                  goto LABEL_26;
                p_IdentifierAuthority = &IdentifierAuthority;
                goto LABEL_14;
              }
              RtlInitializeSid(v3, &v25, 2u);
              *RtlSubAuthoritySid(*(PSID *)v0, 0) = 2;
LABEL_18:
              v13 = 1;
              goto LABEL_15;
            }
            p_IdentifierAuthority = (_SID_IDENTIFIER_AUTHORITY *)&v16;
          }
          else
          {
            p_IdentifierAuthority = &v23;
          }
        }
        else
        {
          p_IdentifierAuthority = (_SID_IDENTIFIER_AUTHORITY *)&v18;
        }
      }
      else
      {
        p_IdentifierAuthority = (_SID_IDENTIFIER_AUTHORITY *)&v20;
      }
LABEL_14:
      RtlInitializeSid(v3, p_IdentifierAuthority, 1u);
      v13 = 0;
LABEL_15:
      *RtlSubAuthoritySid(*(PSID *)v0, v13) = v0[2];
LABEL_25:
      *((_BYTE *)v0 - 16) = 1;
    }
LABEL_26:
    ++v1;
    v0 += 26;
  }
  while ( v1 < 0x43 );
  return 1;
}
