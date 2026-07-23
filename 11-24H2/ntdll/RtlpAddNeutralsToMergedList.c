/*
 * XREFs of RtlpAddNeutralsToMergedList @ 0x180012510
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlGetNeutralFallback @ 0x180012B40 (RtlGetNeutralFallback.c)
 *     LdrpLangFallbackListAppendNode @ 0x180012EE0 (LdrpLangFallbackListAppendNode.c)
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18009976C (RtlpLoadInstallLanguageFallback.c)
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x180120EA0 (_wcsicmp.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     NtIsUILanguageComitted @ 0x1801621C0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180162BC0 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpAddNeutralsToMergedList(char a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  LANGID v4; // r15
  int v5; // r12d
  int appended; // ebx
  wchar_t *Heap; // rax
  wchar_t *v10; // r14
  LANGID v11; // ax
  NTSTATUS v12; // esi
  unsigned int i; // r15d
  unsigned __int16 *v14; // rdx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  wchar_t *Buffer; // rsi
  size_t v23; // rax
  int v24; // ecx
  LCID v25; // ecx
  int v27; // [rsp+30h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  wchar_t *v29[2]; // [rsp+48h] [rbp-30h] BYREF
  _UNICODE_STRING String; // [rsp+58h] [rbp-20h] BYREF
  LANGID InstallUILanguageId; // [rsp+C0h] [rbp+48h] BYREF

  v4 = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v5 = (int)a4;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  LOWORD(v27) = 0;
  appended = 0;
  *(_OWORD *)v29 = 0LL;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x1FEuLL);
  v10 = Heap;
  if ( !Heap )
    return 3221225495LL;
  InstallUILanguageId = 0;
  String.Buffer = Heap + 85;
  v11 = *(_WORD *)(a2 + 4);
  v12 = 0;
  *(_DWORD *)&String.Length = 11141120;
  if ( v11 )
  {
    v4 = v11;
  }
  else
  {
    v12 = NtQueryInstallUILanguage(&InstallUILanguageId);
    if ( v12 >= 0 )
    {
      if ( NtIsUILanguageComitted() >= 0 )
      {
        RtlpLoadInstallLanguageFallback(a2, a2 + 6, a2 + 8);
        *(_WORD *)(a2 + 4) = InstallUILanguageId;
      }
      v4 = InstallUILanguageId;
    }
  }
  if ( v12 >= 0 && RtlLCIDToCultureName(v4, &String) )
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
        if ( !RtlLCIDToCultureName(v25, &DestinationString) )
          appended = -1073741595;
        if ( appended < 0 )
          goto LABEL_37;
        goto LABEL_27;
      }
      v19 = *(_QWORD *)(a2 + 32);
      *(_QWORD *)&DestinationString.Length = 0LL;
      v20 = *(__int16 *)(*(_QWORD *)(v19 + 16) + 2 * v18);
      v21 = *(_QWORD *)(v19 + 24);
      Buffer = (wchar_t *)(v21 + 2 * v20);
      if ( Buffer )
      {
        v23 = 2 * wcslen((const wchar_t *)(v21 + 2 * v20));
        if ( v23 >= 0xFFFE )
          LOWORD(v23) = -4;
        DestinationString.Length = v23;
        DestinationString.MaximumLength = v23 + 2;
      }
LABEL_28:
      appended = LdrpLangFallbackListAppendNode(v5, a2, 0, (int)&v27, Buffer);
      if ( appended < 0 )
        goto LABEL_37;
      if ( a1 || !wcsicmp(Buffer, String.Buffer) )
      {
        LOBYTE(InstallUILanguageId) = 0;
        v29[1] = v10 + 170;
        LODWORD(v29[0]) = 11141120;
        while ( 1 )
        {
          appended = RtlGetNeutralFallback(a2, Buffer, v29, &InstallUILanguageId);
          if ( appended < 0 )
            goto LABEL_37;
          if ( !LOWORD(v29[0]) || (_BYTE)InstallUILanguageId )
            break;
          Buffer = v29[1];
          appended = LdrpLangFallbackListAppendNode(v5, a2, 0, (int)&v27, v29[1]);
          if ( appended < 0 )
            goto LABEL_37;
        }
      }
    }
    v24 = v15 - 1;
    if ( !v24 )
    {
      v25 = (__int16)v14[2];
      goto LABEL_24;
    }
    if ( v24 != 2 )
      goto LABEL_49;
    RtlInitUnicodeString(
      &DestinationString,
      (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL)
             + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL) + 2LL * (__int16)v14[2])));
LABEL_27:
    Buffer = DestinationString.Buffer;
    goto LABEL_28;
  }
  appended = -1073741823;
LABEL_37:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
  return (unsigned int)appended;
}
