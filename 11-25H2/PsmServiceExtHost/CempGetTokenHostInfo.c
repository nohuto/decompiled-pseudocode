/*
 * XREFs of CempGetTokenHostInfo @ 0x180039E20
 * Callers:
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180038F80 (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A4CC (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     HamRpcSrvCreateAutoRestartActivityForDesktopBridge @ 0x18006FD40 (HamRpcSrvCreateAutoRestartActivityForDesktopBridge.c)
 *     HamRpcSrvCloseDesktopBridgeActivity @ 0x18009D100 (HamRpcSrvCloseDesktopBridgeActivity.c)
 * Callees:
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CempGetTokenHostInfo(HANDLE TokenHandle, char *a2)
{
  NTSTATUS result; // eax
  const void **Heap; // r14
  NTSTATUS v6; // ebx
  const void *v7; // rbx
  void *v8; // rcx
  ULONG v9; // eax
  __int64 v10; // rbx
  int v11; // edi
  int v12; // esi
  __int64 v13; // rdx
  _WORD *v14; // rcx
  __int16 v15; // ax
  _WORD *v16; // rax
  ULONG TokenInformationLength; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v20[464]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD SourceSid[4]; // [rsp+210h] [rbp+110h] BYREF
  int v22; // [rsp+250h] [rbp+150h]
  int TokenInformation; // [rsp+254h] [rbp+154h] BYREF
  int v24; // [rsp+258h] [rbp+158h]
  __int64 v25; // [rsp+260h] [rbp+160h] BYREF

  v18 = 0;
  TokenInformationLength = 0;
  memset_0(v20, 0, 0x228uLL);
  v19 = 464;
  result = PsmGetKeyFromToken(TokenHandle, v20, &v19, 0LL);
  if ( result >= 0 )
  {
    result = NtQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
    if ( (int)(result + 0x80000000) < 0 || result == -1073741789 )
    {
      Heap = (const void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, TokenInformationLength);
      if ( Heap )
      {
        v6 = NtQueryInformationToken(TokenHandle, TokenUser, Heap, TokenInformationLength, &TokenInformationLength);
        if ( v6 >= 0 )
        {
          v7 = *Heap;
          v8 = (void *)*Heap;
          memset(SourceSid, 0, sizeof(SourceSid));
          v22 = 0;
          v9 = RtlLengthSid(v8);
          memcpy_0(SourceSid, v7, v9);
          v6 = NtQueryInformationToken(TokenHandle, TokenSessionId, &TokenInformation, 4u, &TokenInformationLength);
          if ( v6 >= 0 )
          {
            v6 = PsmQueryBackgroundActivationType(TokenHandle, &v18);
            if ( v6 >= 0 )
            {
              v24 = 1 << v18;
              v6 = RtlQueryTokenHostIdAsUlong64(TokenHandle, &v25);
              if ( v6 >= 0 )
              {
                v10 = v25;
                v11 = v24;
                v12 = TokenInformation;
                memset_0(a2, 0, 0x228uLL);
                v13 = 232LL;
                v14 = a2;
                do
                {
                  if ( v13 == -2147483414 )
                    break;
                  v15 = *(_WORD *)((char *)v14 + v20 - a2);
                  if ( !v15 )
                    break;
                  *v14++ = v15;
                  --v13;
                }
                while ( v13 );
                v16 = v14 - 1;
                if ( v13 )
                  v16 = v14;
                *v16 = 0;
                RtlCopySid(0x44u, a2 + 464, SourceSid);
                *((_QWORD *)a2 + 68) = v10;
                v6 = 0;
                *((_DWORD *)a2 + 133) = v12;
                *((_DWORD *)a2 + 134) = v11;
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
