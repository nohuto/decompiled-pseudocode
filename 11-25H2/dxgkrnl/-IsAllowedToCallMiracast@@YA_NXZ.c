/*
 * XREFs of ?IsAllowedToCallMiracast@@YA_NXZ @ 0x14006B148
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1401AC470 (DxgkNetDispStartMiracastDisplayDevice.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1401AC6E0 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?OpenThreadToken@@YAJPEAPEAX@Z @ 0x140055A1C (-OpenThreadToken@@YAJPEAPEAX@Z.c)
 */

char IsAllowedToCallMiracast(void)
{
  void *v0; // rdi
  PSID *v1; // r14
  PSID *v2; // r12
  char v3; // bl
  int v4; // eax
  HANDLE v5; // rsi
  __int64 v6; // r9
  PUCHAR v7; // rax
  __int64 v8; // r9
  ULONG v9; // eax
  __int64 v10; // r9
  void *v11; // rax
  unsigned int v12; // eax
  ULONG *v13; // r15
  signed int i; // r13d
  ULONG v15; // ebx
  PULONG v16; // rax
  ULONG ReturnLength[6]; // [rsp+30h] [rbp-18h] BYREF
  ULONG TokenInformationLength; // [rsp+90h] [rbp+48h] BYREF
  HANDLE TokenHandle; // [rsp+98h] [rbp+50h] BYREF
  int TokenInformation; // [rsp+A0h] [rbp+58h] BYREF
  unsigned int v22; // [rsp+A8h] [rbp+60h]

  v0 = 0LL;
  TokenHandle = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  v3 = 0;
  v4 = OpenThreadToken(&TokenHandle);
  v5 = TokenHandle;
  if ( v4 >= 0 )
  {
    TokenInformation = 0;
    ReturnLength[0] = 0;
    if ( ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, ReturnLength) >= 0 )
    {
      if ( TokenInformation )
      {
        LODWORD(TokenHandle) = 0;
        ZwQueryInformationToken(v5, TokenAppContainerSid, 0LL, 0, (PULONG)&TokenHandle);
        v1 = (PSID *)operator new[]((unsigned int)TokenHandle, 0x4B677844u, 256LL, v8);
        if ( v1 )
        {
          if ( ZwQueryInformationToken(v5, TokenAppContainerSid, v1, (ULONG)TokenHandle, (PULONG)&TokenHandle) >= 0 )
          {
            v9 = RtlLengthRequiredSid(8u);
            v11 = (void *)operator new[](v9, 0x4B677844u, 256LL, v10);
            v0 = v11;
            if ( v11 )
            {
              if ( RtlInitializeSid(v11, &IdentifierAuthority, 8u) >= 0 )
              {
                v12 = 0;
                v13 = (ULONG *)&unk_1400D3450;
                while ( 1 )
                {
                  v22 = v12;
                  if ( v12 >= 6 )
                    break;
                  for ( i = 0; i < 8; ++i )
                  {
                    v15 = *v13;
                    v16 = RtlSubAuthoritySid(v0, i);
                    ++v13;
                    *v16 = v15;
                  }
                  if ( RtlEqualSid(*v1, v0) )
                    goto LABEL_6;
                  v12 = v22 + 1;
                }
                v3 = 0;
              }
            }
          }
        }
      }
      else
      {
        TokenInformationLength = 0;
        ZwQueryInformationToken(v5, TokenIntegrityLevel, 0LL, 0, &TokenInformationLength);
        v2 = (PSID *)operator new[](TokenInformationLength, 0x4B677844u, 256LL, v6);
        if ( ZwQueryInformationToken(v5, TokenIntegrityLevel, v2, TokenInformationLength, &TokenInformationLength) >= 0 )
        {
          v7 = RtlSubAuthorityCountSid(*v2);
          if ( *RtlSubAuthoritySid(*v2, (unsigned int)*v7 - 1) >= 0x1000 )
LABEL_6:
            v3 = 1;
        }
      }
    }
  }
  if ( v5 )
    ZwClose(v5);
  if ( v1 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v1);
  if ( v0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v0);
  if ( v2 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  return v3;
}
