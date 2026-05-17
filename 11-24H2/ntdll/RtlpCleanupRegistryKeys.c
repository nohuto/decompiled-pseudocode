/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x18013F570
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18007CC10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x18007CC94 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18007D580 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x1800D16D0 (RtlpGetSystemDefaultUILanguage.c)
 *     LdrpOpenKey @ 0x1800EA970 (LdrpOpenKey.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800EB0C0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlCleanUpTEBLangLists @ 0x1800EC160 (RtlCleanUpTEBLangLists.c)
 *     RtlStringLengthWorkerW @ 0x1800F7628 (RtlStringLengthWorkerW.c)
 *     _wcsicmp @ 0x180122C70 (_wcsicmp.c)
 *     _MuiRegAllocArray_0 @ 0x1801414A8 (_MuiRegAllocArray_0.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtEnumerateKey @ 0x1801622D0 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x180163800 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x180163C60 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x180163E00 (NtIsUILanguageComitted.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  unsigned __int64 Heap; // r15
  __int64 v1; // rdx
  int SystemDefaultUILanguage; // ebx
  __int64 v3; // rdi
  void *v4; // r11
  unsigned int v5; // r12d
  unsigned int v6; // edi
  _QWORD *v7; // rsi
  unsigned int v8; // r13d
  int v9; // r14d
  unsigned __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  void *v16; // rcx
  char v18; // [rsp+38h] [rbp-D0h]
  unsigned __int16 v19; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE v23; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE v24[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v27[2]; // [rsp+80h] [rbp-88h] BYREF
  wchar_t *String2; // [rsp+88h] [rbp-80h]
  char v29; // [rsp+98h] [rbp-70h] BYREF

  Handle = 0LL;
  Heap = 0LL;
  v19 = 0;
  v27[1] = 0;
  *(_OWORD *)v24 = 0LL;
  LOWORD(v20) = 0;
  v18 = 0;
  v26 = 0LL;
  LODWORD(v25) = 0;
  v23 = 0LL;
  NtIsUILanguageComitted();
  SystemDefaultUILanguage = RtlpCreateProcessRegistryInfo(&v26, v1);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_47;
  v3 = v26;
  SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(&v19, v26);
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_47;
  String2 = (wchar_t *)&v29;
  v27[0] = 11272192;
  if ( !(unsigned __int8)RtlLCIDToCultureName(v19, (__int64)v27) || !v3 )
  {
    SystemDefaultUILanguage = -1073741823;
    goto LABEL_47;
  }
  v22 = 0LL;
  SystemDefaultUILanguage = RtlStringLengthWorkerW(
                              L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages",
                              0x7FFFLL,
                              &v22);
  if ( SystemDefaultUILanguage < 0 )
  {
LABEL_47:
    if ( v23 )
      NtClose(v23);
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    v24[1] = v4;
    LOWORD(v24[0]) = 2 * v22;
    WORD1(v24[0]) = 2 * v22 + 2;
    SystemDefaultUILanguage = LdrpOpenKey((__int64)v24, 0LL, 0xF003Fu, &v23);
    if ( SystemDefaultUILanguage >= 0 )
    {
      v5 = 0;
      v6 = 0;
      v7 = 0LL;
      v8 = 0;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x200uLL);
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
            v9 = NtEnumerateKey(v23, v5, 0LL, Heap, 512, &v25);
            if ( v9 < 0 )
            {
LABEL_21:
              if ( Handle )
                NtClose(Handle);
              SystemDefaultUILanguage = 0;
              if ( v9 != -2147483622 )
                SystemDefaultUILanguage = v9;
              if ( v7 )
              {
                if ( v6 )
                {
                  if ( SystemDefaultUILanguage < 0 )
                  {
                    do
                    {
                      v16 = (void *)v7[--v6];
                      Handle = v16;
                      if ( v16 )
                        NtClose(v16);
                    }
                    while ( v6 );
                  }
                  else
                  {
                    do
                    {
                      v12 = (void *)v7[--v6];
                      Handle = v12;
                      if ( v12 )
                      {
                        v18 = 1;
                        NtDeleteKey(v12);
                        NtClose(Handle);
                      }
                    }
                    while ( v6 );
                  }
                }
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v7);
              }
              if ( SystemDefaultUILanguage >= 0 && v18 )
              {
                ZwGetMUIRegistryInfo(2LL, 0LL, 0LL);
                RtlCleanUpTEBLangLists();
                RtlpInitMuiCriticalSection();
                RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
                SystemDefaultUILanguage = RtlpMuiRegFreeRegistryInfo(g_RegInfo, 0xFFFu);
                if ( SystemDefaultUILanguage >= 0 )
                {
                  if ( g_RegInfo )
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, g_RegInfo);
                  g_RegInfo = 0LL;
                }
                RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
              }
              goto LABEL_47;
            }
            v10 = *(unsigned int *)(Heap + 12);
            ++v5;
            if ( v10 + 24 <= 0x200 )
            {
              *(_WORD *)(Heap + 2 * (v10 >> 1) + 16) = 0;
              if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v26, (const wchar_t *)(Heap + 16), 0, &v20) < 0 )
              {
                if ( wcsicmp((const wchar_t *)(Heap + 16), String2) )
                  break;
              }
            }
          }
          *(_OWORD *)v24 = 0LL;
          if ( Heap != -16LL )
            break;
LABEL_17:
          if ( (int)LdrpOpenKey((__int64)v24, (__int64)v23, 0xF003Fu, &Handle) >= 0 )
          {
            if ( v7 )
            {
              if ( v6 >= v8 )
              {
                v13 = (_QWORD *)MuiRegAllocArray_0(v11, v8 + 10);
                v14 = v13;
                if ( !v13 )
                {
LABEL_20:
                  v9 = -1073741801;
                  goto LABEL_21;
                }
                memmove(v13, v7, v8);
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v7);
                v8 += 10;
                v7 = v14;
              }
            }
            else
            {
              v8 = 10;
              v7 = (_QWORD *)MuiRegAllocArray_0(v11, 10LL);
              if ( !v7 )
                goto LABEL_20;
            }
            v15 = v6++;
            v7[v15] = Handle;
            Handle = 0LL;
          }
        }
        v22 = 0LL;
        if ( (int)RtlStringLengthWorkerW((_WORD *)(Heap + 16), 0x7FFFLL, &v22) >= 0 )
        {
          v24[1] = (HANDLE)(Heap + 16);
          LOWORD(v24[0]) = 2 * v22;
          WORD1(v24[0]) = 2 * v22 + 2;
          goto LABEL_17;
        }
      }
    }
  }
  return (unsigned int)SystemDefaultUILanguage;
}
