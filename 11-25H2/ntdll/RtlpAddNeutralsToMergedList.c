/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x1800A80C0
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     LdrpLangFallbackListAppendNode @ 0x18005A8F0 (LdrpLangFallbackListAppendNode.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlGetNeutralFallback @ 0x18005C940 (RtlGetNeutralFallback.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800A7CAC (RtlpLoadInstallLanguageFallback.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtIsUILanguageComitted @ 0x180165390 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180165D90 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int16 v4; // r15
  int appended; // ebx
  __int64 Heap; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  wchar_t *v13; // r14
  unsigned __int16 v14; // ax
  int v15; // esi
  unsigned int i; // r15d
  unsigned __int16 *v17; // rdx
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  wchar_t *String; // rsi
  size_t v26; // rax
  int v27; // ecx
  unsigned int v28; // ecx
  int v30; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  wchar_t *v32[2]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v33[2]; // [rsp+58h] [rbp-20h] BYREF
  wchar_t *String2; // [rsp+60h] [rbp-18h]
  unsigned __int16 v36; // [rsp+C0h] [rbp+48h] BYREF

  v4 = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v33[1] = 0;
  LOWORD(v30) = 0;
  appended = 0;
  *(_OWORD *)v32 = 0LL;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x1FEuLL);
  v13 = (wchar_t *)Heap;
  if ( !Heap )
    return 3221225495LL;
  v36 = 0;
  String2 = (wchar_t *)(Heap + 170);
  v14 = *(_WORD *)(a2 + 4);
  v15 = 0;
  v33[0] = 11141120;
  if ( v14 )
  {
    v4 = v14;
  }
  else
  {
    v15 = NtQueryInstallUILanguage(&v36, v10, v11);
    if ( v15 >= 0 )
    {
      if ( (int)NtIsUILanguageComitted() >= 0 )
      {
        RtlpLoadInstallLanguageFallback(a2, (_WORD *)(a2 + 6), (_WORD *)(a2 + 8), v12);
        *(_WORD *)(a2 + 4) = v36;
      }
      v4 = v36;
    }
  }
  if ( v15 >= 0 && (unsigned __int8)RtlLCIDToCultureName(v4, (__int64)v33) )
  {
    v12 = 0LL;
    for ( i = 0; ; ++i )
    {
      if ( i >= *(unsigned __int16 *)(a3 + 4) )
        goto LABEL_37;
      appended = 0;
      DestinationString.Buffer = v13;
      *(_DWORD *)&DestinationString.Length = 11141120;
      v17 = (unsigned __int16 *)(*(_QWORD *)(a3 + 24) + 6LL * i);
      if ( !v17 )
      {
        appended = -1073741811;
        goto LABEL_37;
      }
      v18 = *v17;
      if ( v18 != 2 )
        break;
      v19 = 28LL * (__int16)v17[2];
      v20 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
      v21 = *(__int16 *)(v19 + v20 + 6);
      if ( (__int16)v21 <= 0 )
      {
        if ( !*(_WORD *)(v19 + v20 + 4) )
        {
LABEL_49:
          appended = -1073741595;
          goto LABEL_37;
        }
        v28 = *(unsigned __int16 *)(v19 + v20 + 4);
LABEL_24:
        if ( !(unsigned __int8)RtlLCIDToCultureName(v28, (__int64)&DestinationString) )
          appended = -1073741595;
        if ( appended < 0 )
          goto LABEL_37;
        goto LABEL_27;
      }
      v22 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)&DestinationString.Length = 0LL;
      v23 = *(__int16 *)(*(_QWORD *)(v22 + 16) + 2 * v21);
      v24 = *(_QWORD *)(v22 + 24);
      String = (wchar_t *)(v24 + 2 * v23);
      if ( String )
      {
        v26 = 2 * wcslen((const wchar_t *)(v24 + 2 * v23));
        if ( v26 >= 0xFFFE )
          LOWORD(v26) = -4;
        DestinationString.Length = v26;
        DestinationString.MaximumLength = v26 + 2;
      }
LABEL_28:
      appended = LdrpLangFallbackListAppendNode(a4, a2, 0, (__int16 *)&v30, String);
      if ( appended < 0 )
        goto LABEL_37;
      if ( a1 || !wcsicmp(String, String2) )
      {
        LOBYTE(v36) = 0;
        v32[1] = v13 + 170;
        LODWORD(v32[0]) = 11141120;
        while ( 1 )
        {
          appended = RtlGetNeutralFallback(a2, String, (__int64)v32, &v36);
          if ( appended < 0 )
            goto LABEL_37;
          if ( !LOWORD(v32[0]) || (_BYTE)v36 )
            break;
          String = v32[1];
          appended = LdrpLangFallbackListAppendNode(a4, a2, 0, (__int16 *)&v30, v32[1]);
          if ( appended < 0 )
            goto LABEL_37;
        }
      }
      v12 = 0LL;
    }
    v27 = v18 - 1;
    if ( !v27 )
    {
      v28 = (__int16)v17[2];
      goto LABEL_24;
    }
    if ( v27 != 2 )
      goto LABEL_49;
    RtlInitUnicodeString(
      &DestinationString,
      (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL)
             + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL) + 2LL * (__int16)v17[2])));
LABEL_27:
    String = DestinationString.Buffer;
    goto LABEL_28;
  }
  appended = -1073741823;
LABEL_37:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v13, v12);
  return (unsigned int)appended;
}
