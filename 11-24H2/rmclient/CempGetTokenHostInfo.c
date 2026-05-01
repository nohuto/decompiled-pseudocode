/*
 * XREFs of CempGetTokenHostInfo @ 0x18000CEF0
 * Callers:
 *     HamQueryCallerTerminateReason @ 0x18000CE00 (HamQueryCallerTerminateReason.c)
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x18000D8B0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 * Callees:
 *     CempHostInfoInitialize @ 0x18000D510 (CempHostInfoInitialize.c)
 *     memcpy_0 @ 0x18001C1C2 (memcpy_0.c)
 *     memset_0 @ 0x18001C1CE (memset_0.c)
 *     __security_check_cookie @ 0x18001C200 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CempGetTokenHostInfo(HANDLE TokenHandle, __int64 a2)
{
  NTSTATUS result; // eax
  void **Heap; // r14
  NTSTATUS v6; // ebx
  void *v7; // rbx
  ULONG v8; // eax
  ULONG TokenInformationLength; // [rsp+30h] [rbp-278h] BYREF
  int v10; // [rsp+34h] [rbp-274h] BYREF
  int v11; // [rsp+38h] [rbp-270h] BYREF
  _BYTE v12[464]; // [rsp+40h] [rbp-268h] BYREF
  _BYTE v13[68]; // [rsp+210h] [rbp-98h] BYREF
  unsigned int TokenInformation; // [rsp+254h] [rbp-54h] BYREF
  unsigned int v15; // [rsp+258h] [rbp-50h]
  __int64 v16; // [rsp+260h] [rbp-48h] BYREF

  v10 = 0;
  TokenInformationLength = 0;
  memset_0(v12, 0, 0x228uLL);
  v11 = 464;
  result = PsmGetKeyFromToken(TokenHandle, v12, &v11, 0LL);
  if ( result >= 0 )
  {
    result = NtQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
    if ( (int)(result + 0x80000000) < 0 || result == -1073741789 )
    {
      Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, TokenInformationLength);
      if ( Heap )
      {
        v6 = NtQueryInformationToken(TokenHandle, TokenUser, Heap, TokenInformationLength, &TokenInformationLength);
        if ( v6 >= 0 )
        {
          v7 = *Heap;
          memset_0(v13, 0, sizeof(v13));
          v8 = RtlLengthSid(v7);
          memcpy_0(v13, v7, v8);
          v6 = NtQueryInformationToken(TokenHandle, TokenSessionId, &TokenInformation, 4u, &TokenInformationLength);
          if ( v6 >= 0 )
          {
            v6 = PsmQueryBackgroundActivationType(TokenHandle, &v10);
            if ( v6 >= 0 )
            {
              v15 = 1 << v10;
              v6 = RtlQueryTokenHostIdAsUlong64(TokenHandle, &v16);
              if ( v6 >= 0 )
              {
                CempHostInfoInitialize(v12, v13, TokenInformation, v15, v16, a2);
                v6 = 0;
              }
            }
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v6;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
