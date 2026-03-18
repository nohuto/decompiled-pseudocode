/*
 * XREFs of ?IsAllowedToCallMiracast@@YA_NXZ @ 0x14006AD68
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1401AE950 (DxgkNetDispStartMiracastDisplayDevice.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1401AEBC0 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?OpenThreadToken@@YAJPEAPEAX@Z @ 0x1400551CC (-OpenThreadToken@@YAJPEAPEAX@Z.c)
 */

char IsAllowedToCallMiracast(void)
{
  void *v0; // rdi
  PSID *v1; // r14
  PSID *v2; // r12
  char v3; // bl
  int v4; // eax
  HANDLE v5; // rsi
  PUCHAR v6; // rax
  ULONG v7; // eax
  void *v8; // rax
  unsigned int v9; // eax
  ULONG *v10; // r15
  signed int i; // r13d
  ULONG v12; // ebx
  PULONG v13; // rax
  ULONG ReturnLength[6]; // [rsp+30h] [rbp-18h] BYREF
  ULONG TokenInformationLength; // [rsp+90h] [rbp+48h] BYREF
  HANDLE TokenHandle; // [rsp+98h] [rbp+50h] BYREF
  int TokenInformation; // [rsp+A0h] [rbp+58h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+60h]

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
        v1 = (PSID *)operator new[]((unsigned int)TokenHandle, 0x4B677844u, 256LL);
        if ( v1 )
        {
          if ( ZwQueryInformationToken(v5, TokenAppContainerSid, v1, (ULONG)TokenHandle, (PULONG)&TokenHandle) >= 0 )
          {
            v7 = RtlLengthRequiredSid(8u);
            v8 = (void *)operator new[](v7, 0x4B677844u, 256LL);
            v0 = v8;
            if ( v8 )
            {
              if ( RtlInitializeSid(v8, &IdentifierAuthority, 8u) >= 0 )
              {
                v9 = 0;
                v10 = (ULONG *)&unk_1400D4A90;
                while ( 1 )
                {
                  v19 = v9;
                  if ( v9 >= 6 )
                    break;
                  for ( i = 0; i < 8; ++i )
                  {
                    v12 = *v10;
                    v13 = RtlSubAuthoritySid(v0, i);
                    ++v10;
                    *v13 = v12;
                  }
                  if ( RtlEqualSid(*v1, v0) )
                    goto LABEL_6;
                  v9 = v19 + 1;
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
        v2 = (PSID *)operator new[](TokenInformationLength, 0x4B677844u, 256LL);
        if ( ZwQueryInformationToken(v5, TokenIntegrityLevel, v2, TokenInformationLength, &TokenInformationLength) >= 0 )
        {
          v6 = RtlSubAuthorityCountSid(*v2);
          if ( *RtlSubAuthoritySid(*v2, (unsigned int)*v6 - 1) >= 0x1000 )
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
