/*
 * XREFs of RtlpLoadInstallLanguageFallback @ 0x1800A7CAC
 * Callers:
 *     LdrpMergeLangFallbackLists @ 0x18008D050 (LdrpMergeLangFallbackLists.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x1800A8000 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpAddNeutralsToMergedList @ 0x1800A80C0 (RtlpAddNeutralsToMergedList.c)
 *     _RtlpMuiRegLoadInstalled @ 0x180120B18 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014BD20 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     _MuiRegAllocArray @ 0x1800A7340 (_MuiRegAllocArray.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLoadInstallLanguageFallback(__int64 a1, _WORD *a2, _WORD *a3, __int64 a4)
{
  void *v6; // rsi
  void *v7; // rax
  int v8; // r12d
  size_t v9; // rax
  int v10; // ebx
  HANDLE v11; // rbx
  size_t v12; // rax
  _DWORD *Heap; // rdi
  int v14; // eax
  __int64 v15; // r9
  const wchar_t *i; // rdi
  wchar_t *v17; // rcx
  wchar_t j; // ax
  size_t v20; // rax
  size_t v21; // rax
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v25; // [rsp+70h] [rbp-10h]
  int v26; // [rsp+C0h] [rbp+40h] BYREF
  int v27; // [rsp+D8h] [rbp+58h] BYREF

  Handle = 0LL;
  v26 = 0;
  v6 = 0LL;
  v23 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    v10 = -1073741811;
    goto LABEL_26;
  }
  v7 = (void *)MuiRegAllocArray(a1, 0xACu);
  v6 = v7;
  if ( !v7 )
  {
    v10 = -1073741801;
    goto LABEL_26;
  }
  memset_thunk_772440563353939046(v7, 0, 0x158uLL);
  *a2 = 0;
  *((_QWORD *)&v23 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language";
  v8 = 0;
  *a3 = 0;
  DWORD1(v23) = 0;
  v9 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
  v24[0] = 48LL;
  v24[3] = 64LL;
  v24[1] = 0LL;
  if ( v9 >= 0xFFFE )
    LOWORD(v9) = -4;
  LOWORD(v23) = v9;
  WORD1(v23) = v9 + 2;
  v24[2] = &v23;
  v25 = 0LL;
  v10 = NtOpenKey(&Handle, 131097LL, v24);
  if ( v10 >= 0 )
  {
    *(_QWORD *)&v23 = 0LL;
    *((_QWORD *)&v23 + 1) = L"InstallLanguageFallback";
    v11 = Handle;
    v12 = 2 * wcslen(L"InstallLanguageFallback");
    v27 = 0;
    if ( v12 >= 0xFFFE )
      LOWORD(v12) = -4;
    LOWORD(v23) = v12;
    WORD1(v23) = v12 + 2;
    Heap = (_DWORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x164uLL);
    if ( !Heap )
    {
      v10 = -1073741670;
      goto LABEL_26;
    }
    v14 = NtQueryValueKey(v11, &v23, 2LL, Heap, 356, &v27);
    v10 = v14;
    if ( v14 >= 0 )
    {
      if ( Heap[2] > 0x158u )
        v10 = -2147483643;
      else
        memmove(v6, Heap + 3, (unsigned int)Heap[2]);
    }
    else if ( v14 != -2147483643 )
    {
LABEL_17:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v15);
      if ( v10 >= 0 )
      {
        if ( v8 != 1 )
          goto LABEL_44;
        for ( i = (const wchar_t *)v6; *i; ++i )
        {
          v17 = (wchar_t *)(i + 1);
          if ( *i == 44 )
          {
            *i++ = 0;
            for ( j = *v17; j == 32; j = *i )
              ++i;
            break;
          }
        }
        *(_QWORD *)&v23 = 0LL;
        *((_QWORD *)&v23 + 1) = v6;
        v20 = 2 * wcslen((const wchar_t *)v6);
        if ( v20 >= 0xFFFE )
          LOWORD(v20) = -4;
        LOWORD(v23) = v20;
        WORD1(v23) = v20 + 2;
        if ( RtlCultureNameToLCID((unsigned __int16 *)&v23, &v26) )
        {
          *a2 = v26;
          if ( *i )
          {
            *(_QWORD *)&v23 = 0LL;
            *((_QWORD *)&v23 + 1) = i;
            v21 = 2 * wcslen(i);
            if ( v21 >= 0xFFFE )
              LOWORD(v21) = -4;
            LOWORD(v23) = v21;
            WORD1(v23) = v21 + 2;
            if ( RtlCultureNameToLCID((unsigned __int16 *)&v23, &v26) )
            {
              *a3 = v26;
            }
            else
            {
              v10 = -1073741823;
              *a2 = 0;
            }
          }
        }
        else
        {
LABEL_44:
          v10 = -1073741823;
        }
      }
      goto LABEL_26;
    }
    v8 = Heap[1];
    goto LABEL_17;
  }
LABEL_26:
  if ( Handle )
    NtClose(Handle);
  if ( v6 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v6, a4);
  return (unsigned int)v10;
}
