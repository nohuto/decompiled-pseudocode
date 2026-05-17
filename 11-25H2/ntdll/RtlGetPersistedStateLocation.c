/*
 * XREFs of RtlGetPersistedStateLocation @ 0x180080A00
 * Callers:
 *     _GetOverlayPackageKeyForLanguage @ 0x18006C1FC (_GetOverlayPackageKeyForLanguage.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x180085124 (RtlpGetTimeZoneInfoHandle.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpGetPersistedRegistryLocation @ 0x18011C240 (RtlpGetPersistedRegistryLocation.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x180133490 (LdrpAppxGetRemediationRegistryKey.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlExpandEnvironmentStrings @ 0x1800AD3A0 (RtlExpandEnvironmentStrings.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlGetPersistedStateLocation(
        wchar_t *String,
        const wchar_t *a2,
        _WORD *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 Heap; // rsi
  signed int v11; // edi
  __int64 v12; // r8
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v16; // ecx
  size_t v17; // r8
  _WORD *v18; // rdx
  int v19; // eax
  size_t v20; // rax
  int v21; // eax
  size_t v22; // rax
  unsigned __int64 v23; // rbx
  unsigned int v24; // edi
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // r8
  HANDLE Handle; // [rsp+38h] [rbp-41h] BYREF
  HANDLE v29; // [rsp+40h] [rbp-39h] BYREF
  __int64 v30; // [rsp+48h] [rbp-31h] BYREF
  __int128 v31; // [rsp+50h] [rbp-29h] BYREF
  __int128 v32; // [rsp+60h] [rbp-19h] BYREF
  __int128 v33; // [rsp+70h] [rbp-9h]
  __int128 v34; // [rsp+80h] [rbp+7h]
  unsigned int v35; // [rsp+E0h] [rbp+67h] BYREF

  *(_QWORD *)&v34 = 0LL;
  DWORD2(v34) = 0;
  Handle = 0LL;
  v29 = 0LL;
  v35 = 0;
  Heap = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  if ( a4 > 1 )
    return 3221225713LL;
  if ( byte_1801D05D1 )
  {
    v11 = -1073741772;
    goto LABEL_4;
  }
  LODWORD(v32) = 48;
  *(_QWORD *)&v33 = (char *)&unk_180175430 + 16 * (int)a4;
  *((_QWORD *)&v32 + 1) = 0LL;
  DWORD2(v33) = 64;
  v34 = 0LL;
  v19 = NtOpenKey(&Handle, 131097LL, &v32);
  v11 = v19;
  if ( v19 == -1073741772 )
  {
    byte_1801D05D1 = 1;
  }
  else
  {
    if ( v19 < 0 )
      goto LABEL_9;
    *((_QWORD *)&v31 + 1) = String;
    if ( String )
    {
      v20 = 2 * wcslen(String);
      if ( v20 >= 0xFFFE )
        LOWORD(v20) = -4;
      LOWORD(v31) = v20;
      WORD1(v31) = v20 + 2;
    }
    *((_QWORD *)&v32 + 1) = Handle;
    LODWORD(v32) = 48;
    *(_QWORD *)&v33 = &v31;
    DWORD2(v33) = 64;
    v34 = 0LL;
    v21 = NtOpenKey(&v29, 131097LL, &v32);
    v11 = v21;
    if ( v21 != -1073741772 )
    {
      if ( v21 < 0 )
        goto LABEL_9;
      *(_QWORD *)&v31 = 0LL;
      if ( !a2 )
        a2 = L"TargetPath";
      *((_QWORD *)&v31 + 1) = a2;
      if ( a2 )
      {
        v22 = 2 * wcslen(a2);
        if ( v22 >= 0xFFFE )
          LOWORD(v22) = -4;
        LOWORD(v31) = v22;
        WORD1(v31) = v22 + 2;
      }
      v23 = a6;
      v24 = a6 + 16;
      if ( a6 + 16 < a6 )
      {
        v11 = -1073741675;
        goto LABEL_9;
      }
      Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, v24);
      if ( !Heap )
      {
        v11 = -1073741801;
        goto LABEL_9;
      }
      v25 = NtQueryValueKey(v29, &v31, 2LL, Heap, v24, &v35);
      v11 = v25;
      if ( v25 < 0 )
      {
        if ( v25 != -2147483643 )
          goto LABEL_9;
        v26 = *(_DWORD *)(Heap + 8);
        v18 = (_WORD *)(Heap + 12);
        v35 = v26;
        goto LABEL_40;
      }
      if ( (unsigned int)(*(_DWORD *)(Heap + 4) - 1) > 1 )
      {
        v11 = -1073741788;
        goto LABEL_9;
      }
      v18 = (_WORD *)(Heap + 12);
      v35 = *(_DWORD *)(Heap + 8);
      v26 = v35;
      if ( *(_WORD *)(Heap + 12 + 2 * ((unsigned __int64)v35 >> 1) - 2) )
      {
        v26 = v35 + 2;
        v35 = v26;
        if ( (unsigned int)v23 < v26 )
        {
          v11 = -2147483643;
LABEL_40:
          if ( a7 )
            *a7 = v26;
          if ( v11 < 0 )
            goto LABEL_9;
          v17 = v26;
          goto LABEL_20;
        }
        v18[((unsigned __int64)v26 >> 1) - 1] = 0;
        v26 = v35;
      }
      if ( *(_DWORD *)(Heap + 4) == 2 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( v18[v27] );
        v11 = RtlExpandEnvironmentStrings(0, (_DWORD)v18, v27, (_DWORD)a5, v23 >> 1, (__int64)&v30);
        if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
        {
          if ( a7 )
            *a7 = 2 * v30;
          if ( v11 == -1073741789 )
            v11 = -2147483643;
        }
        goto LABEL_9;
      }
      goto LABEL_40;
    }
  }
LABEL_4:
  if ( a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    v13 = v12 + 1;
    v14 = 2 * v13;
    v35 = 2 * v13;
    if ( 2 * v13 < v13 )
    {
      v11 = -1073741675;
      goto LABEL_9;
    }
    v16 = a6;
    v11 = a6 < v14 ? 0x80000005 : 0;
    if ( a7 )
      *a7 = v14;
    if ( v14 > v16 )
      goto LABEL_9;
    v17 = v14;
    v18 = a3;
LABEL_20:
    memmove(a5, v18, v17);
  }
LABEL_9:
  if ( Handle )
    NtClose(Handle);
  if ( v29 )
    NtClose(v29);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  return (unsigned int)v11;
}
