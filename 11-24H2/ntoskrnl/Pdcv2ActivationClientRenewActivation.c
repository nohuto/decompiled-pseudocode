/*
 * XREFs of Pdcv2ActivationClientRenewActivation @ 0x14078DA44
 * Callers:
 *     PopAdaptiveStandbyActivatorCallback @ 0x1405D83C0 (PopAdaptiveStandbyActivatorCallback.c)
 *     PopWin32kActivatorCallback @ 0x14074B620 (PopWin32kActivatorCallback.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     PdcPortSendMessageSynchronously @ 0x1404897EC (PdcPortSendMessageSynchronously.c)
 *     PdcpResizeDiagnosticContext @ 0x140604BC8 (PdcpResizeDiagnosticContext.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION @ 0x1406053A8 (Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     Pdcv2pValidateActivationParameters @ 0x1409EBDB4 (Pdcv2pValidateActivationParameters.c)
 *     PdcAcquireRwLockExclusive2 @ 0x140A45F04 (PdcAcquireRwLockExclusive2.c)
 *     PdcReleaseRwLockExclusive2 @ 0x140A52844 (PdcReleaseRwLockExclusive2.c)
 */

__int64 __fastcall Pdcv2ActivationClientRenewActivation(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // r12
  __int64 v7; // rsi
  int v8; // ebx
  unsigned int v9; // r8d
  const wchar_t *v10; // r8
  char *v11; // rcx
  unsigned int v12; // eax
  const wchar_t *v13; // r8
  _BYTE v15[40]; // [rsp+28h] [rbp-E0h] BYREF
  int v16; // [rsp+50h] [rbp-B8h]
  int v17; // [rsp+60h] [rbp-A8h]
  unsigned int v18; // [rsp+64h] [rbp-A4h]
  __int64 v19; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+70h] [rbp-98h]
  int v21; // [rsp+78h] [rbp-90h]
  wchar_t pszDest[130]; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v23[114]; // [rsp+180h] [rbp+78h] BYREF
  char v24; // [rsp+388h] [rbp+280h] BYREF

  memset_0(v15, 0, 0x320uLL);
  v24 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( a3 )
  {
    *a3 = 1;
    if ( a1 )
    {
      v6 = a1;
      if ( *(_DWORD *)(a1 + 16) == 1094927440 )
      {
        v7 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)v7 == 843138128 )
        {
          if ( (unsigned __int8)Pdcv2pValidateActivationParameters(a2) )
          {
            PdcAcquireRwLockExclusive2(v7 + 8, &v24);
            if ( *(_QWORD *)(v7 + 40) )
            {
              v10 = *(const wchar_t **)(a2 + 16);
              v19 = *(_QWORD *)(a2 + 8);
              v20 = *(_QWORD *)(a1 + 592);
              v21 = *(_DWORD *)(a2 + 4);
              v16 = 11;
              if ( v10 )
                RtlStringCchCopyW(pszDest, 0x80uLL, v10);
              v11 = *(char **)(a2 + 24);
              if ( v11 )
                PdcpResizeDiagnosticContext(v11, v23);
              v8 = PdcPortSendMessageSynchronously(*(struct _EX_RUNDOWN_REF **)(v7 + 40), (__int64)v15);
              if ( v8 >= 0 )
              {
                v12 = v18;
                ++*(_DWORD *)(a1 + 64);
                v13 = *(const wchar_t **)(a2 + 16);
                v8 = v17;
                *a3 = v12;
                *(_DWORD *)(a1 + 56) = v12;
                *(_BYTE *)(a1 + 60) = 0;
                if ( v13 )
                {
                  if ( *v13 )
                    RtlStringCchCopyW((NTSTRSAFE_PWSTR)(a1 + 328), 0x80uLL, v13);
                }
              }
            }
            else
            {
              v8 = -1073740032;
            }
          }
          else
          {
            v8 = -1073741584;
          }
        }
        else
        {
          v8 = -1073741585;
          v7 = 0LL;
        }
      }
      else
      {
        v8 = -1073741585;
        v6 = 0LL;
      }
    }
    else
    {
      v8 = -1073741585;
    }
    v9 = *a3;
  }
  else
  {
    v8 = -1073741583;
    v9 = -1;
  }
  Pdcv2EventWrite_ACTIVATION_CLIENT_RENEW_ACTIVATION(v6, (_DWORD *)v7, v9, v8);
  if ( v24 )
    PdcReleaseRwLockExclusive2(v7 + 8, &v24);
  return (unsigned int)v8;
}
