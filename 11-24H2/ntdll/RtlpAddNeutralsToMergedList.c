/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x180033B90
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     LdrpLangFallbackListAppendNode @ 0x180031E20 (LdrpLangFallbackListAppendNode.c)
 *     RtlGetNeutralFallback @ 0x180033500 (RtlGetNeutralFallback.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800D1784 (RtlpLoadInstallLanguageFallback.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x180122C70 (_wcsicmp.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtIsUILanguageComitted @ 0x180163E00 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180164800 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned __int16 v4; // r15
  int appended; // ebx
  __int64 Heap; // rax
  wchar_t *v10; // r14
  unsigned __int16 v11; // ax
  int v12; // esi
  unsigned int i; // r15d
  unsigned __int16 *v14; // rdx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  wchar_t *String; // rsi
  size_t v23; // rax
  int v24; // ecx
  __int64 v25; // rcx
  int v27; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  wchar_t *v29[2]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v30[2]; // [rsp+58h] [rbp-20h] BYREF
  wchar_t *String2; // [rsp+60h] [rbp-18h]
  unsigned __int16 v33; // [rsp+C0h] [rbp+48h] BYREF

  v4 = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v30[1] = 0;
  LOWORD(v27) = 0;
  appended = 0;
  *(_OWORD *)v29 = 0LL;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x1FEuLL);
  v10 = (wchar_t *)Heap;
  if ( !Heap )
    return 3221225495LL;
  v33 = 0;
  String2 = (wchar_t *)(Heap + 170);
  v11 = *(_WORD *)(a2 + 4);
  v12 = 0;
  v30[0] = 11141120;
  if ( v11 )
  {
    v4 = v11;
  }
  else
  {
    v12 = NtQueryInstallUILanguage(&v33);
    if ( v12 >= 0 )
    {
      if ( (int)NtIsUILanguageComitted() >= 0 )
      {
        RtlpLoadInstallLanguageFallback(a2, a2 + 6, a2 + 8);
        *(_WORD *)(a2 + 4) = v33;
      }
      v4 = v33;
    }
  }
  if ( v12 >= 0 && (unsigned __int8)RtlLCIDToCultureName(v4, v30) )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= *(unsigned __int16 *)(a3 + 4) )
        goto LABEL_37;
      appended = 0;
      DestinationString.Buffer = v10;
      *(_DWORD *)&DestinationString.Length = 11141120;
      v14 = (unsigned __int16 *)(*(_QWORD *)(a3 + 24) + 6LL * i);
      if ( !v14 )
      {
        appended = -1073741811;
        goto LABEL_37;
      }
      v15 = *v14;
      if ( v15 != 2 )
        break;
      v16 = 28LL * (__int16)v14[2];
      v17 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
      v18 = *(__int16 *)(v16 + v17 + 6);
      if ( (__int16)v18 <= 0 )
      {
        if ( !*(_WORD *)(v16 + v17 + 4) )
        {
LABEL_49:
          appended = -1073741595;
          goto LABEL_37;
        }
        v25 = *(unsigned __int16 *)(v16 + v17 + 4);
LABEL_24:
        if ( !(unsigned __int8)RtlLCIDToCultureName(v25, &DestinationString) )
          appended = -1073741595;
        if ( appended < 0 )
          goto LABEL_37;
        goto LABEL_27;
      }
      v19 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)&DestinationString.Length = 0LL;
      v20 = *(__int16 *)(*(_QWORD *)(v19 + 16) + 2 * v18);
      v21 = *(_QWORD *)(v19 + 24);
      String = (wchar_t *)(v21 + 2 * v20);
      if ( String )
      {
        v23 = 2 * wcslen((const wchar_t *)(v21 + 2 * v20));
        if ( v23 >= 0xFFFE )
          LOWORD(v23) = -4;
        DestinationString.Length = v23;
        DestinationString.MaximumLength = v23 + 2;
      }
LABEL_28:
      appended = LdrpLangFallbackListAppendNode(a4, a2, 0, (__int16 *)&v27, String);
      if ( appended < 0 )
        goto LABEL_37;
      if ( a1 || !wcsicmp(String, String2) )
      {
        LOBYTE(v33) = 0;
        v29[1] = v10 + 170;
        LODWORD(v29[0]) = 11141120;
        while ( 1 )
        {
          appended = RtlGetNeutralFallback(a2, String, (__int64)v29, &v33);
          if ( appended < 0 )
            goto LABEL_37;
          if ( !LOWORD(v29[0]) || (_BYTE)v33 )
            break;
          String = v29[1];
          appended = LdrpLangFallbackListAppendNode(a4, a2, 0, (__int16 *)&v27, v29[1]);
          if ( appended < 0 )
            goto LABEL_37;
        }
      }
    }
    v24 = v15 - 1;
    if ( !v24 )
    {
      v25 = (unsigned int)(__int16)v14[2];
      goto LABEL_24;
    }
    if ( v24 != 2 )
      goto LABEL_49;
    RtlInitUnicodeString(
      &DestinationString,
      (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL)
             + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL) + 2LL * (__int16)v14[2])));
LABEL_27:
    String = DestinationString.Buffer;
    goto LABEL_28;
  }
  appended = -1073741823;
LABEL_37:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
  return (unsigned int)appended;
}
