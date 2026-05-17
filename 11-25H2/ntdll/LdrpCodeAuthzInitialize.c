/*
 * XREFs of LdrpCodeAuthzInitialize @ 0x1800142A0
 * Callers:
 *     LdrpInitializeKernel32Functions @ 0x1800CB874 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrLoadDll @ 0x180014E40 (LdrLoadDll.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     LdrUnloadDll @ 0x1800475F0 (LdrUnloadDll.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18005F470 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     ZwQueryKey @ 0x1801634E0 (ZwQueryKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 LdrpCodeAuthzInitialize()
{
  unsigned int v0; // ebx
  int v1; // esi
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // edi
  unsigned int v6; // r14d
  void *v7; // r15
  size_t v8; // rax
  unsigned int v9; // r14d
  void *v10; // r15
  int v11; // edi
  int v13; // edi
  int v14; // edi
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v17; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v18; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-A8h]
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v22; // [rsp+78h] [rbp-88h] BYREF
  __int128 v23; // [rsp+88h] [rbp-78h]
  __int128 v24; // [rsp+98h] [rbp-68h]
  __int128 v25; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v26; // [rsp+B8h] [rbp-48h]
  __int128 v27; // [rsp+C8h] [rbp-38h]
  _BYTE v28[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v29; // [rsp+E4h] [rbp-1Ch]
  int v30; // [rsp+E8h] [rbp-18h]
  unsigned int v31; // [rsp+ECh] [rbp-14h]
  unsigned __int64 retaddr; // [rsp+168h] [rbp+68h]

  v0 = 0;
  v1 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  if ( !LdrpIsSecureProcess )
  {
    RtlImageNtHeaderEx(3LL, NtCurrentPeb()->ImageBaseAddress, 0LL, &v18);
    if ( (unsigned __int16)(*((_WORD *)v18 + 46) - 2) <= 1u )
    {
      Handle = 0LL;
      v15 = 0;
      if ( (int)NtOpenKey(&Handle, 3LL, &unk_180175000) >= 0 )
      {
        v14 = NtQueryValueKey(Handle, &unk_1801750A0, 2LL, v28, 80, &v15);
        NtClose(Handle);
        if ( v14 >= 0 && v31 && v29 == 4 && v30 == 4 )
          return v0;
      }
      v18 = 0LL;
      v15 = 0;
      Handle = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      if ( (int)NtOpenKey(&v18, 131097LL, &unk_1801CE7C8) >= 0 )
      {
        v13 = ZwQueryKey(v18, 2LL, &v25, 48LL, &v15);
        NtClose(v18);
        if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147483643 )
        {
          if ( DWORD1(v26) )
            v1 = 2;
        }
      }
      if ( (int)NtOpenKey(&Handle, 1LL, &unk_180175030) >= 0 )
      {
        if ( (int)NtQueryValueKey(Handle, L"$&", 2LL, v28, 80, &v15) >= 0 && v29 == 4 && v30 == 4 && v31 > 1 )
          v1 = 1;
        NtClose(Handle);
      }
      if ( v1 == 1
        || (*(_OWORD *)Src = 0LL,
            *(_QWORD *)&v24 = 0LL,
            v17 = 0LL,
            DWORD2(v24) = 0,
            v22 = 0LL,
            v23 = 0LL,
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
            v2 = v19;
            if ( (int)LdrGetProcedureAddressForCaller(v19, &qword_180175080, 0, &v20, 0, retaddr) >= 0 && v20 )
            {
              LdrpAdvapi32DllHandle = v2;
              LdrpSaferIsDllAllowedRoutine = __ROR8__(v20 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
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
      v5 = LOWORD(Src[0]);
      if ( (unsigned int)LOWORD(Src[0]) + 120 > 0xFFFE
        || (WORD1(v17) = LOWORD(Src[0]) + 120,
            *((_QWORD *)&v17 + 1) = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap),
            (v4 = *((_QWORD *)&v17 + 1)) == 0) )
      {
LABEL_31:
        if ( Src[1] )
          RtlpSysVolFree(Src[1], v3, v4);
        goto LABEL_7;
      }
      v6 = LOWORD(Src[0]);
      if ( LOWORD(Src[0]) )
      {
        if ( v5 + (unsigned int)(unsigned __int16)v17 > WORD1(v17) )
        {
LABEL_30:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *((_QWORD *)&v17 + 1));
          goto LABEL_31;
        }
        v7 = (void *)(*((_QWORD *)&v17 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v17 >> 1));
        memmove(v7, Src[1], LOWORD(Src[0]));
        LOWORD(v17) = v6 + v17;
        if ( (unsigned int)(unsigned __int16)v17 + 1 < WORD1(v17) )
          *((_WORD *)v7 + ((unsigned __int64)v6 >> 1)) = 0;
      }
      v8 = wcslen(L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers");
      if ( v8 <= 0x7FFE )
      {
        v9 = (unsigned __int16)(2 * v8);
        if ( v9 + (unsigned __int16)v17 <= WORD1(v17) )
        {
          v10 = (void *)(*((_QWORD *)&v17 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v17 >> 1));
          memmove(v10, L"\\Software\\Policies\\Microsoft\\Windows\\Safer\\CodeIdentifiers", (unsigned __int16)(2 * v8));
          LOWORD(v17) = v9 + v17;
          if ( (unsigned int)(unsigned __int16)v17 + 1 < WORD1(v17) )
            *((_WORD *)v10 + ((unsigned __int64)v9 >> 1)) = 0;
          LODWORD(v22) = 48;
          *(_QWORD *)&v23 = &v17;
          *((_QWORD *)&v22 + 1) = 0LL;
          DWORD2(v23) = 64;
          v24 = 0LL;
          if ( (int)NtOpenKey(&Handle, 1LL, &v22) >= 0 )
          {
            v11 = NtQueryValueKey(Handle, L"$&", 2LL, v28, 80, &v15);
            NtClose(Handle);
            if ( v11 >= 0 && v29 == 4 && v30 == 4 && v31 > 1 )
              v1 = 1;
          }
        }
      }
      goto LABEL_30;
    }
  }
  return 0LL;
}
