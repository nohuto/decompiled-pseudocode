/*
 * XREFs of RtlpLoadPolicyLanguageSpec @ 0x180035280
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x1800347C0 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x18007FDF0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180106C70 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800D2A40 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x1800E1AA0 (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpLoadPolicyLanguageSpec(__int64 a1, __int64 a2, _BYTE *a3, __int16 *a4)
{
  int v5; // r13d
  unsigned int v6; // r14d
  size_t v7; // rax
  unsigned __int64 Heap; // rbx
  int v9; // edi
  void *v10; // r15
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  int v13; // eax
  int InstalledLanguageIndex; // ebx
  unsigned int v15; // ebx
  size_t v16; // rax
  __int64 v17; // r8
  _WORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v20; // [rsp+34h] [rbp-2Ch] BYREF
  unsigned int v21; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v22[3]; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  const wchar_t *v24; // [rsp+50h] [rbp-10h]

  v21 = 0;
  v19[0] = 0;
  v20 = -1;
  if ( a2 && a1 )
  {
    HIDWORD(v23) = 0;
    v24 = L"PreferredUILanguages";
    v5 = 1;
    v6 = 0;
    v7 = 2 * wcslen(L"PreferredUILanguages");
    v22[0] = 0;
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    LOWORD(v23) = v7;
    WORD1(v23) = v7 + 2;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xCuLL);
    if ( !Heap )
      return (unsigned int)-1073741823;
    v9 = NtQueryValueKey(a1, &v23, 2LL, Heap, 12, v22);
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    {
      v6 = *(_DWORD *)(Heap + 8);
      v5 = *(_DWORD *)(Heap + 4);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( !v6 || v9 == -1073741772 )
      return (unsigned int)-1073741823;
    v10 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v6);
    if ( !v10 )
      return (unsigned int)-1073741801;
    v22[0] = 0;
    v11 = v6 + 12;
    if ( v6 == -12 || (v12 = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v11)) == 0LL )
    {
      InstalledLanguageIndex = -1073741670;
      goto LABEL_34;
    }
    v13 = NtQueryValueKey(a1, &v23, 2LL, v12, v6 + 12, v22);
    InstalledLanguageIndex = v13;
    if ( v13 >= 0 )
    {
      if ( v12[2] > v6 )
      {
        InstalledLanguageIndex = -2147483643;
      }
      else if ( v12[2] <= v11 )
      {
        memmove(v10, v12 + 3, (unsigned int)v12[2]);
      }
    }
    else if ( v13 != -2147483643 )
    {
LABEL_21:
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v12);
      if ( InstalledLanguageIndex >= 0 )
      {
        v15 = 1;
        if ( v5 != 1 )
          goto LABEL_41;
        v23 = 0LL;
        v24 = (const wchar_t *)v10;
        v16 = 2 * wcslen((const wchar_t *)v10);
        if ( v16 >= 0xFFFE )
          LOWORD(v16) = -4;
        LOWORD(v23) = v16;
        WORD1(v23) = v16 + 2;
        if ( RtlCultureNameToLCID((unsigned __int16 *)&v23, (int *)&v21) )
        {
          v17 = v21;
          if ( ((v21 - 4096) & 0xFFFFFBFF) != 0 )
            goto LABEL_29;
          InstalledLanguageIndex = RtlpMuiRegGetOrAddString(a2, v24, 0LL, v19);
          if ( InstalledLanguageIndex >= 0 )
          {
            v17 = v19[0];
            v15 = 3;
LABEL_29:
            InstalledLanguageIndex = RtlpMuiRegGetInstalledLanguageIndex(a2, v15, v17, &v20);
            if ( InstalledLanguageIndex >= 0 )
            {
              if ( a3 )
                *a3 = 2;
              if ( a4 )
                *a4 = v20;
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
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
      return (unsigned int)InstalledLanguageIndex;
    }
    v5 = v12[1];
    goto LABEL_21;
  }
  return (unsigned int)-1073741811;
}
