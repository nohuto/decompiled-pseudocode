/*
 * XREFs of RtlpLoadInstallLanguageFallback @ 0x1800D1784
 * Callers:
 *     RtlpAddNeutralsToMergedList @ 0x180033B90 (RtlpAddNeutralsToMergedList.c)
 *     LdrpMergeLangFallbackLists @ 0x1800356C0 (LdrpMergeLangFallbackLists.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x1800D16D0 (RtlpGetSystemDefaultUILanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x18011F248 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014A770 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     _MuiRegAllocArray @ 0x1800D2690 (_MuiRegAllocArray.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpLoadInstallLanguageFallback(__int64 a1, _WORD *a2, _WORD *a3)
{
  void *v5; // rsi
  void *v6; // rax
  int v7; // r12d
  size_t v8; // rax
  int v9; // ebx
  HANDLE v10; // rbx
  size_t v11; // rax
  _DWORD *Heap; // rdi
  int v13; // eax
  const wchar_t *i; // rdi
  wchar_t *v15; // rcx
  wchar_t j; // ax
  size_t v18; // rax
  size_t v19; // rax
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v22[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v23; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+C0h] [rbp+40h] BYREF
  int v25; // [rsp+D8h] [rbp+58h] BYREF

  Handle = 0LL;
  v24 = 0;
  v5 = 0LL;
  v21 = 0LL;
  if ( !a1 || !a2 || !a3 )
  {
    v9 = -1073741811;
    goto LABEL_26;
  }
  v6 = (void *)MuiRegAllocArray(a1, 172LL);
  v5 = v6;
  if ( !v6 )
  {
    v9 = -1073741801;
    goto LABEL_26;
  }
  memset_thunk_772440563353939046(v6, 0, 0x158uLL);
  *a2 = 0;
  *((_QWORD *)&v21 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language";
  v7 = 0;
  *a3 = 0;
  DWORD1(v21) = 0;
  v8 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
  v22[0] = 48LL;
  v22[3] = 64LL;
  v22[1] = 0LL;
  if ( v8 >= 0xFFFE )
    LOWORD(v8) = -4;
  LOWORD(v21) = v8;
  WORD1(v21) = v8 + 2;
  v22[2] = &v21;
  v23 = 0LL;
  v9 = NtOpenKey(&Handle, 131097LL, v22);
  if ( v9 >= 0 )
  {
    *(_QWORD *)&v21 = 0LL;
    *((_QWORD *)&v21 + 1) = L"InstallLanguageFallback";
    v10 = Handle;
    v11 = 2 * wcslen(L"InstallLanguageFallback");
    v25 = 0;
    if ( v11 >= 0xFFFE )
      LOWORD(v11) = -4;
    LOWORD(v21) = v11;
    WORD1(v21) = v11 + 2;
    Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x164uLL);
    if ( !Heap )
    {
      v9 = -1073741670;
      goto LABEL_26;
    }
    v13 = NtQueryValueKey(v10, &v21, 2LL, Heap, 356, &v25);
    v9 = v13;
    if ( v13 >= 0 )
    {
      if ( Heap[2] > 0x158u )
        v9 = -2147483643;
      else
        memmove(v5, Heap + 3, (unsigned int)Heap[2]);
    }
    else if ( v13 != -2147483643 )
    {
LABEL_17:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
      if ( v9 >= 0 )
      {
        if ( v7 != 1 )
          goto LABEL_44;
        for ( i = (const wchar_t *)v5; *i; ++i )
        {
          v15 = (wchar_t *)(i + 1);
          if ( *i == 44 )
          {
            *i++ = 0;
            for ( j = *v15; j == 32; j = *i )
              ++i;
            break;
          }
        }
        *(_QWORD *)&v21 = 0LL;
        *((_QWORD *)&v21 + 1) = v5;
        v18 = 2 * wcslen((const wchar_t *)v5);
        if ( v18 >= 0xFFFE )
          LOWORD(v18) = -4;
        LOWORD(v21) = v18;
        WORD1(v21) = v18 + 2;
        if ( RtlCultureNameToLCID((unsigned __int16 *)&v21, &v24) )
        {
          *a2 = v24;
          if ( *i )
          {
            *(_QWORD *)&v21 = 0LL;
            *((_QWORD *)&v21 + 1) = i;
            v19 = 2 * wcslen(i);
            if ( v19 >= 0xFFFE )
              LOWORD(v19) = -4;
            LOWORD(v21) = v19;
            WORD1(v21) = v19 + 2;
            if ( RtlCultureNameToLCID((unsigned __int16 *)&v21, &v24) )
            {
              *a3 = v24;
            }
            else
            {
              v9 = -1073741823;
              *a2 = 0;
            }
          }
        }
        else
        {
LABEL_44:
          v9 = -1073741823;
        }
      }
      goto LABEL_26;
    }
    v7 = Heap[1];
    goto LABEL_17;
  }
LABEL_26:
  if ( Handle )
    NtClose(Handle);
  if ( v5 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v5);
  return (unsigned int)v9;
}
