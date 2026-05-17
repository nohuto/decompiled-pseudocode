/*
 * XREFs of RtlpCleanupRegistryKeys @ 0x180140C60
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800871E0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlCleanUpTEBLangLists @ 0x180087620 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180089F60 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18008BAC0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x18008BB44 (RtlpInitMuiCriticalSection.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x1800A8000 (RtlpGetSystemDefaultUILanguage.c)
 *     LdrpOpenKey @ 0x1800EBDC0 (LdrpOpenKey.c)
 *     RtlStringLengthWorkerW @ 0x1800F9288 (RtlStringLengthWorkerW.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 *     _MuiRegAllocArray_0 @ 0x180142B98 (_MuiRegAllocArray_0.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtEnumerateKey @ 0x180163860 (NtEnumerateKey.c)
 *     NtDeleteKey @ 0x180164D90 (NtDeleteKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1801651F0 (ZwGetMUIRegistryInfo.c)
 *     NtIsUILanguageComitted @ 0x180165390 (NtIsUILanguageComitted.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 RtlpCleanupRegistryKeys()
{
  __int64 Heap; // r15
  int ProcessRegistryInfo; // ebx
  __int64 v2; // r8
  __int64 v3; // r9
  _WORD *v4; // rdi
  void *v5; // r11
  unsigned int v6; // r12d
  unsigned int v7; // edi
  _QWORD *v8; // rsi
  unsigned int v9; // r13d
  int v10; // r14d
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // r9
  __int64 v17; // rcx
  void *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r9
  char v27; // [rsp+38h] [rbp-D0h]
  unsigned __int16 v28; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v29; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE v32; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE v33[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  _WORD *v35; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v36[2]; // [rsp+80h] [rbp-88h] BYREF
  wchar_t *String2; // [rsp+88h] [rbp-80h]
  char v38; // [rsp+98h] [rbp-70h] BYREF

  Handle = 0LL;
  Heap = 0LL;
  v28 = 0;
  v36[1] = 0;
  *(_OWORD *)v33 = 0LL;
  LOWORD(v29) = 0;
  v27 = 0;
  v35 = 0LL;
  LODWORD(v34) = 0;
  v32 = 0LL;
  NtIsUILanguageComitted();
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)&v35);
  if ( ProcessRegistryInfo < 0 )
    goto LABEL_47;
  v4 = v35;
  ProcessRegistryInfo = RtlpGetSystemDefaultUILanguage(&v28, v35, v2);
  if ( ProcessRegistryInfo < 0 )
    goto LABEL_47;
  String2 = (wchar_t *)&v38;
  v36[0] = 11272192;
  if ( !(unsigned __int8)RtlLCIDToCultureName(v28, (__int64)v36) || !v4 )
  {
    ProcessRegistryInfo = -1073741823;
    goto LABEL_47;
  }
  v31 = 0LL;
  ProcessRegistryInfo = RtlStringLengthWorkerW(
                          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages",
                          0x7FFFLL,
                          &v31);
  if ( ProcessRegistryInfo < 0 )
  {
LABEL_47:
    if ( v32 )
      NtClose(v32);
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v3);
  }
  else
  {
    v33[1] = v5;
    LOWORD(v33[0]) = 2 * v31;
    WORD1(v33[0]) = 2 * v31 + 2;
    ProcessRegistryInfo = LdrpOpenKey((__int64)v33, 0LL, 0xF003Fu, &v32);
    if ( ProcessRegistryInfo >= 0 )
    {
      v6 = 0;
      v7 = 0;
      v8 = 0LL;
      v9 = 0;
      Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x200uLL);
      if ( !Heap )
      {
        ProcessRegistryInfo = -1073741801;
        goto LABEL_47;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v10 = NtEnumerateKey(v32, v6, 0LL, Heap, 512, &v34);
            if ( v10 < 0 )
            {
LABEL_21:
              if ( Handle )
                NtClose(Handle);
              ProcessRegistryInfo = 0;
              if ( v10 != -2147483622 )
                ProcessRegistryInfo = v10;
              if ( v8 )
              {
                if ( v7 )
                {
                  if ( ProcessRegistryInfo < 0 )
                  {
                    do
                    {
                      v18 = (void *)v8[--v7];
                      Handle = v18;
                      if ( v18 )
                        NtClose(v18);
                    }
                    while ( v7 );
                  }
                  else
                  {
                    do
                    {
                      v13 = (void *)v8[--v7];
                      Handle = v13;
                      if ( v13 )
                      {
                        v27 = 1;
                        NtDeleteKey(v13);
                        NtClose(Handle);
                      }
                    }
                    while ( v7 );
                  }
                }
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v8, v3);
              }
              if ( ProcessRegistryInfo >= 0 && v27 )
              {
                ZwGetMUIRegistryInfo(2LL, 0LL, 0LL);
                RtlCleanUpTEBLangLists();
                RtlpInitMuiCriticalSection(v20, v19, v21, v22);
                RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
                ProcessRegistryInfo = RtlpMuiRegFreeRegistryInfo(g_RegInfo, 0xFFFu, v23, v24);
                if ( ProcessRegistryInfo >= 0 )
                {
                  if ( g_RegInfo )
                    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, g_RegInfo, v25);
                  g_RegInfo = 0LL;
                }
                RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
              }
              goto LABEL_47;
            }
            v11 = *(unsigned int *)(Heap + 12);
            ++v6;
            if ( v11 + 24 <= 0x200 )
            {
              *(_WORD *)(Heap + 2 * (v11 >> 1) + 16) = 0;
              if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v35, (const wchar_t *)(Heap + 16), 0, &v29) < 0 )
              {
                if ( wcsicmp((const wchar_t *)(Heap + 16), String2) )
                  break;
              }
            }
          }
          *(_OWORD *)v33 = 0LL;
          if ( Heap != -16 )
            break;
LABEL_17:
          if ( (int)LdrpOpenKey((__int64)v33, (__int64)v32, 0xF003Fu, &Handle) >= 0 )
          {
            if ( v8 )
            {
              if ( v7 >= v9 )
              {
                v14 = (_QWORD *)MuiRegAllocArray_0(v12, v9 + 10);
                v15 = v14;
                if ( !v14 )
                {
LABEL_20:
                  v10 = -1073741801;
                  goto LABEL_21;
                }
                memmove(v14, v8, v9);
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v8, v16);
                v9 += 10;
                v8 = v15;
              }
            }
            else
            {
              v9 = 10;
              v8 = (_QWORD *)MuiRegAllocArray_0(v12, 10LL);
              if ( !v8 )
                goto LABEL_20;
            }
            v17 = v7++;
            v8[v17] = Handle;
            Handle = 0LL;
          }
        }
        v31 = 0LL;
        if ( (int)RtlStringLengthWorkerW((_WORD *)(Heap + 16), 0x7FFFLL, &v31) >= 0 )
        {
          v33[1] = (HANDLE)(Heap + 16);
          LOWORD(v33[0]) = 2 * v31;
          WORD1(v33[0]) = 2 * v31 + 2;
          goto LABEL_17;
        }
      }
    }
  }
  return (unsigned int)ProcessRegistryInfo;
}
