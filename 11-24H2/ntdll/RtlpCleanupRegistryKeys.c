/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x18013D760
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180011550 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x1800115D4 (RtlpInitMuiCriticalSection.c)
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180099AC0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlCleanUpTEBLangLists @ 0x1800CA500 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800CAFA0 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800CC110 (RtlpMuiRegFreeRegistryInfo.c)
 *     LdrpOpenKey @ 0x1800E61E0 (LdrpOpenKey.c)
 *     RtlStringLengthWorkerW @ 0x1800F1D78 (RtlStringLengthWorkerW.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     _MuiRegAllocArray_0 @ 0x18013F698 (_MuiRegAllocArray_0.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtEnumerateKey @ 0x180160690 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x180161BC0 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x180162020 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x1801621C0 (NtIsUILanguageComitted.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  wchar_t *Heap; // r15
  int SystemDefaultUILanguage; // ebx
  PLCID v2; // rdi
  wchar_t *v3; // r11
  ULONG v4; // r12d
  unsigned int v5; // edi
  _QWORD *v6; // rsi
  unsigned int v7; // r13d
  NTSTATUS v8; // r14d
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  void *v15; // rcx
  char v17; // [rsp+38h] [rbp-D0h]
  LANGID DefaultUILanguageId; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  _UNICODE_STRING KeyHandle_8; // [rsp+60h] [rbp-A8h] BYREF
  ULONG ResultLength[2]; // [rsp+70h] [rbp-98h] BYREF
  PLCID Lcid; // [rsp+78h] [rbp-90h] BYREF
  _UNICODE_STRING String; // [rsp+80h] [rbp-88h] BYREF
  char v27; // [rsp+98h] [rbp-70h] BYREF

  Handle = 0LL;
  Heap = 0LL;
  DefaultUILanguageId = 0;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  KeyHandle_8 = 0LL;
  LOWORD(v19) = 0;
  v17 = 0;
  Lcid = 0LL;
  ResultLength[0] = 0;
  KeyHandle = 0LL;
  NtIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_47;
  v2 = Lcid;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId, Lcid);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_47;
  String.Buffer = (wchar_t *)&v27;
  *(_DWORD *)&String.Length = 11272192;
  if ( !RtlLCIDToCultureName(DefaultUILanguageId, &String) || !v2 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_47;
  }
  v21 = 0LL;
  SystemDefaultUILanguage = RtlStringLengthWorkerW(
                              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages",
                              0x7FFFLL,
                              &v21);
  if ( SystemDefaultUILanguage < 0 )
  {
LABEL_47:
    if ( KeyHandle )
      NtClose(KeyHandle);
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    KeyHandle_8.Buffer = v3;
    KeyHandle_8.Length = 2 * v21;
    KeyHandle_8.MaximumLength = 2 * v21 + 2;
    SystemDefaultUILanguage = LdrpOpenKey(&KeyHandle_8, 0LL, 0xF003Fu, &KeyHandle);
    if ( SystemDefaultUILanguage >= 0 )
    {
      v4 = 0;
      v5 = 0;
      v6 = 0LL;
      v7 = 0;
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x200uLL);
      if ( !Heap )
      {
        SystemDefaultUILanguage = -1073741801;
        goto LABEL_47;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v8 = NtEnumerateKey(KeyHandle, v4, KeyBasicInformation, Heap, 0x200u, ResultLength);
            if ( v8 < 0 )
            {
LABEL_21:
              if ( Handle )
                NtClose(Handle);
              SystemDefaultUILanguage = 0;
              if ( v8 != -2147483622 )
                SystemDefaultUILanguage = v8;
              if ( v6 )
              {
                if ( v5 )
                {
                  if ( SystemDefaultUILanguage < 0 )
                  {
                    do
                    {
                      v15 = (void *)v6[--v5];
                      Handle = v15;
                      if ( v15 )
                        NtClose(v15);
                    }
                    while ( v5 );
                  }
                  else
                  {
                    do
                    {
                      v11 = (void *)v6[--v5];
                      Handle = v11;
                      if ( v11 )
                      {
                        v17 = 1;
                        NtDeleteKey(v11);
                        NtClose(Handle);
                      }
                    }
                    while ( v5 );
                  }
                }
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
              }
              if ( SystemDefaultUILanguage >= 0 && v17 )
              {
                ZwGetMUIRegistryInfo(2u, 0LL, 0LL);
                RtlCleanUpTEBLangLists();
                RtlpInitMuiCriticalSection();
                RtlEnterCriticalSection(&RegistryInfoCritSect);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo((__int64)g_RegInfo, 0xFFFu);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( g_RegInfo )
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_RegInfo);
                  g_RegInfo = 0LL;
                }
                RtlLeaveCriticalSection(&RegistryInfoCritSect);
              }
              goto LABEL_47;
            }
            v9 = *((unsigned int *)Heap + 3);
            ++v4;
            if ( v9 + 24 <= 0x200 )
            {
              Heap[(v9 >> 1) + 8] = 0;
              if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)Lcid, Heap + 8, 0, &v19) < 0 )
              {
                if ( wcsicmp(Heap + 8, String.Buffer) )
                  break;
              }
            }
          }
          KeyHandle_8 = 0LL;
          if ( Heap != (wchar_t *)-16LL )
            break;
LABEL_17:
          if ( LdrpOpenKey(&KeyHandle_8, KeyHandle, 0xF003Fu, &Handle) >= 0 )
          {
            if ( v6 )
            {
              if ( v5 >= v7 )
              {
                v12 = (_QWORD *)MuiRegAllocArray_0(v10, v7 + 10);
                v13 = v12;
                if ( !v12 )
                {
LABEL_20:
                  v8 = -1073741801;
                  goto LABEL_21;
                }
                memmove(v12, v6, v7);
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
                v7 += 10;
                v6 = v13;
              }
            }
            else
            {
              v7 = 10;
              v6 = (_QWORD *)MuiRegAllocArray_0(v10, 10LL);
              if ( !v6 )
                goto LABEL_20;
            }
            v14 = v5++;
            v6[v14] = Handle;
            Handle = 0LL;
          }
        }
        v21 = 0LL;
        if ( (int)RtlStringLengthWorkerW(Heap + 8, 0x7FFFLL, &v21) >= 0 )
        {
          KeyHandle_8.Buffer = Heap + 8;
          KeyHandle_8.Length = 2 * v21;
          KeyHandle_8.MaximumLength = 2 * v21 + 2;
          goto LABEL_17;
        }
      }
    }
  }
  return (unsigned int)SystemDefaultUILanguage;
}
