/*
 * XREFs of LdrpCodeAuthzInitialize @ 0x180058660
 * Callers:
 *     LdrpInitializeKernel32Functions @ 0x1800032B8 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     LdrUnloadDll @ 0x18001B6B0 (LdrUnloadDll.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1800389C0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     LdrLoadDll @ 0x180059200 (LdrLoadDll.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     ZwQueryKey @ 0x180161F50 (ZwQueryKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 LdrpCodeAuthzInitialize()
{
  unsigned int v0; // ebx
  int v1; // esi
  unsigned __int64 v2; // rdi
  int v3; // edi
  unsigned int v4; // r14d
  void *v5; // r15
  size_t v6; // rax
  unsigned int v7; // r14d
  void *v8; // r15
  int v9; // edi
  int v11; // edi
  int v12; // edi
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v16; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v20; // [rsp+78h] [rbp-88h] BYREF
  __int128 v21; // [rsp+88h] [rbp-78h]
  __int128 v22; // [rsp+98h] [rbp-68h]
  __int128 v23; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v24; // [rsp+B8h] [rbp-48h]
  __int128 v25; // [rsp+C8h] [rbp-38h]
  _BYTE v26[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v27; // [rsp+E4h] [rbp-1Ch]
  int v28; // [rsp+E8h] [rbp-18h]
  unsigned int v29; // [rsp+ECh] [rbp-14h]
  unsigned __int64 retaddr; // [rsp+168h] [rbp+68h]

  v0 = 0;
  v1 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v16 = 0LL;
  if ( !LdrpIsSecureProcess )
  {
    RtlImageNtHeaderEx(3LL, NtCurrentPeb()->ImageBaseAddress, 0LL, &v16);
    if ( (unsigned __int16)(*((_WORD *)v16 + 46) - 2) <= 1u )
    {
      Handle = 0LL;
      v13 = 0;
      if ( (int)NtOpenKey(&Handle, 3LL, &unk_180173550) >= 0 )
      {
        v12 = NtQueryValueKey(Handle, &unk_1801735F0, 2LL, v26, 80, &v13);
        NtClose(Handle);
        if ( v12 >= 0 && v29 && v27 == 4 && v28 == 4 )
          return v0;
      }
      v16 = 0LL;
      v13 = 0;
      Handle = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      if ( (int)NtOpenKey(&v16, 131097LL, &unk_1801CC7C8) >= 0 )
      {
        v11 = ZwQueryKey(v16, 2LL, &v23, 48LL, &v13);
        NtClose(v16);
        if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
        {
          if ( DWORD1(v24) )
            v1 = 2;
        }
      }
      if ( (int)NtOpenKey(&Handle, 1LL, &unk_180173580) >= 0 )
      {
        if ( (int)NtQueryValueKey(Handle, L"$&", 2LL, v26, 80, &v13) >= 0 && v27 == 4 && v28 == 4 && v29 > 1 )
          v1 = 1;
        NtClose(Handle);
      }
      if ( v1 == 1
        || (*(_OWORD *)Src = 0LL,
            *(_QWORD *)&v22 = 0LL,
            v15 = 0LL,
            DWORD2(v22) = 0,
            v20 = 0LL,
            v21 = 0LL,
            (int)RtlFormatCurrentUserKeyPath((PUNICODE_STRING)Src) < 0) )
      {
LABEL_7:
        if ( v1 )
        {
          if ( v1 == 2 )
          {
            LdrpSaferIsDllAllowedRoutine = __ROR8__(
                                             (unsigned __int64)LdrpCodeAuthzCheckDllAllowedSrpV2 ^ MEMORY[0x7FFE0330],
                                             MEMORY[0x7FFE0330] & 0x3F);
            LdrpAdvapi32DllHandle = 0x180000000uLL;
          }
          else if ( (int)LdrLoadDll(0) < 0 )
          {
            return (unsigned int)-1073741515;
          }
          else
          {
            v2 = v17;
            if ( (int)LdrGetProcedureAddressForCaller(v17, &qword_1801735D0, 0, &v18, 0, retaddr) >= 0 && v18 )
            {
              LdrpAdvapi32DllHandle = v2;
              LdrpSaferIsDllAllowedRoutine = __ROR8__(v18 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
            }
            else
            {
              LdrUnloadDll(v2);
              return (unsigned int)-1073741511;
            }
          }
        }
        return v0;
      }
      v3 = LOWORD(Src[0]);
      if ( (unsigned int)LOWORD(Src[0]) + 120 > 0xFFFE
        || (WORD1(v15) = LOWORD(Src[0]) + 120,
            (*((_QWORD *)&v15 + 1) = RtlAllocateHeap(
                                       (__int64)NtCurrentPeb()->ProcessHeap,
                                       NtdllBaseTag + 1572864,
                                       (unsigned __int16)(LOWORD(Src[0]) + 120))) == 0LL) )
      {
LABEL_31:
        if ( Src[1] )
          RtlpSysVolFree((__int64)Src[1]);
        goto LABEL_7;
      }
      v4 = LOWORD(Src[0]);
      if ( LOWORD(Src[0]) )
      {
        if ( v3 + (unsigned int)(unsigned __int16)v15 > WORD1(v15) )
        {
LABEL_30:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((unsigned __int64 *)&v15 + 1));
          goto LABEL_31;
        }
        v5 = (void *)(*((_QWORD *)&v15 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v15 >> 1));
        memmove(v5, Src[1], LOWORD(Src[0]));
        LOWORD(v15) = v4 + v15;
        if ( (unsigned int)(unsigned __int16)v15 + 1 < WORD1(v15) )
          *((_WORD *)v5 + ((unsigned __int64)v4 >> 1)) = 0;
      }
      v6 = wcslen(L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers");
      if ( v6 <= 0x7FFE )
      {
        v7 = (unsigned __int16)(2 * v6);
        if ( v7 + (unsigned __int16)v15 <= WORD1(v15) )
        {
          v8 = (void *)(*((_QWORD *)&v15 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v15 >> 1));
          memmove(v8, L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers", (unsigned __int16)(2 * v6));
          LOWORD(v15) = v7 + v15;
          if ( (unsigned int)(unsigned __int16)v15 + 1 < WORD1(v15) )
            *((_WORD *)v8 + ((unsigned __int64)v7 >> 1)) = 0;
          LODWORD(v20) = 48;
          *(_QWORD *)&v21 = &v15;
          *((_QWORD *)&v20 + 1) = 0LL;
          DWORD2(v21) = 64;
          v22 = 0LL;
          if ( (int)NtOpenKey(&Handle, 1LL, &v20) >= 0 )
          {
            v9 = NtQueryValueKey(Handle, L"$&", 2LL, v26, 80, &v13);
            NtClose(Handle);
            if ( v9 >= 0 && v27 == 4 && v28 == 4 && v29 > 1 )
              v1 = 1;
          }
        }
      }
      goto LABEL_30;
    }
  }
  return 0LL;
}
