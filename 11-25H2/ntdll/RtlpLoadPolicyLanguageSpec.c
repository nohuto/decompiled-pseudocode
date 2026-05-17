/*
 * XREFs of RtlpLoadPolicyLanguageSpec @ 0x18008CC10
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180088B20 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180109580 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x18005B490 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800A7910 (RtlpMuiRegGetOrAddString.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpLoadPolicyLanguageSpec(__int64 a1, __int64 a2, _BYTE *a3, __int16 *a4)
{
  int v5; // r13d
  unsigned int v6; // r14d
  size_t v7; // rax
  __int64 Heap; // rbx
  int v9; // edi
  __int64 v10; // r9
  __int64 v11; // r9
  void *v12; // r15
  unsigned int v13; // esi
  _DWORD *v14; // rdi
  int v15; // eax
  __int64 v16; // r9
  int InstalledLanguageIndex; // ebx
  int v18; // ebx
  size_t v19; // rax
  __int64 v20; // r8
  _WORD v22[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v23; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v24; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v25[3]; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 v26; // [rsp+48h] [rbp-18h] BYREF
  const wchar_t *v27; // [rsp+50h] [rbp-10h]

  v24 = 0;
  v22[0] = 0;
  v23 = -1;
  if ( a2 && a1 )
  {
    HIDWORD(v26) = 0;
    v27 = L"PreferredUILanguages";
    v5 = 1;
    v6 = 0;
    v7 = 2 * wcslen(L"PreferredUILanguages");
    v25[0] = 0;
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    LOWORD(v26) = v7;
    WORD1(v26) = v7 + 2;
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0xCuLL);
    if ( !Heap )
      return (unsigned int)-1073741823;
    v9 = NtQueryValueKey(a1, &v26, 2LL, Heap, 12, v25);
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    {
      v6 = *(_DWORD *)(Heap + 8);
      v5 = *(_DWORD *)(Heap + 4);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v10);
    if ( !v6 || v9 == -1073741772 )
      return (unsigned int)-1073741823;
    v12 = (void *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v6);
    if ( !v12 )
      return (unsigned int)-1073741801;
    v25[0] = 0;
    v13 = v6 + 12;
    if ( v6 == -12 || (v14 = (_DWORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v13)) == 0LL )
    {
      InstalledLanguageIndex = -1073741670;
      goto LABEL_34;
    }
    v15 = NtQueryValueKey(a1, &v26, 2LL, v14, v6 + 12, v25);
    InstalledLanguageIndex = v15;
    if ( v15 >= 0 )
    {
      if ( v14[2] > v6 )
      {
        InstalledLanguageIndex = -2147483643;
      }
      else if ( v14[2] <= v13 )
      {
        memmove(v12, v14 + 3, (unsigned int)v14[2]);
      }
    }
    else if ( v15 != -2147483643 )
    {
LABEL_21:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v14, v16);
      if ( InstalledLanguageIndex >= 0 )
      {
        v18 = 1;
        if ( v5 != 1 )
          goto LABEL_41;
        v26 = 0LL;
        v27 = (const wchar_t *)v12;
        v19 = 2 * wcslen((const wchar_t *)v12);
        if ( v19 >= 0xFFFE )
          LOWORD(v19) = -4;
        LOWORD(v26) = v19;
        WORD1(v26) = v19 + 2;
        if ( RtlCultureNameToLCID((unsigned __int16 *)&v26, (int *)&v24) )
        {
          v20 = v24;
          if ( ((v24 - 4096) & 0xFFFFFBFF) != 0 )
            goto LABEL_29;
          InstalledLanguageIndex = RtlpMuiRegGetOrAddString(a2, v27, 0LL, v22);
          if ( InstalledLanguageIndex >= 0 )
          {
            v20 = v22[0];
            v18 = 3;
LABEL_29:
            InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(a2, v18, v20, &v23);
            if ( InstalledLanguageIndex >= 0 )
            {
              if ( a3 )
                *a3 = 2;
              if ( a4 )
                *a4 = v23;
            }
          }
        }
        else
        {
LABEL_41:
          InstalledLanguageIndex = -1073741823;
        }
      }
LABEL_34:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v12, v11);
      return (unsigned int)InstalledLanguageIndex;
    }
    v5 = v14[1];
    goto LABEL_21;
  }
  return (unsigned int)-1073741811;
}
