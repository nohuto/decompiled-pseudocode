/*
 * XREFs of RtlpMUIRegPatchLicenseInfortmation @ 0x18007D170
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlpIsALicensedRegularLanguage @ 0x18007D410 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpIsALicensedLIPLanguage @ 0x18007D508 (RtlpIsALicensedLIPLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18007D580 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 */

__int64 __fastcall RtlpMUIRegPatchLicenseInfortmation(__int64 a1)
{
  int v1; // r15d
  bool v3; // cc
  wchar_t *Heap; // r13
  int v5; // edx
  int v6; // ebx
  char v7; // di
  __int64 v8; // r14
  unsigned __int16 *v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  wchar_t *Buffer; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  size_t v18; // rax
  unsigned int v20; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  __int16 v22; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v22 = 0;
  DestinationString = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v3 = *(_WORD *)(a1 + 4) <= 0x40u;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( !v3 )
    return 3221225473LL;
  Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  if ( !Heap )
    return 3221225495LL;
  v5 = *(unsigned __int16 *)(a1 + 4);
  v6 = v5 - 1;
  if ( v5 - 1 >= 0 )
  {
    v7 = v5 - 1;
    v8 = 6LL * *(unsigned __int16 *)(a1 + 4) - 6;
    while ( 1 )
    {
      v9 = (unsigned __int16 *)(v8 + *(_QWORD *)(a1 + 24));
      v10 = *v9;
      if ( (_WORD)v10 )
        break;
LABEL_23:
      --v7;
      v8 -= 6LL;
      if ( --v6 < 0 )
        goto LABEL_24;
    }
    v11 = g_RegInfo;
    Buffer = Heap;
    DestinationString.Buffer = Heap;
    *(_DWORD *)&DestinationString.Length = 11141120;
    if ( !g_RegInfo || !v9 )
      goto LABEL_22;
    switch ( v10 )
    {
      case 2:
        v13 = 28LL * (__int16)v9[2];
        v14 = *(_QWORD *)(*(_QWORD *)(g_RegInfo + 24) + 16LL);
        v15 = *(__int16 *)(v13 + v14 + 6);
        if ( (__int16)v15 > 0 )
        {
          v11 = *(_QWORD *)(g_RegInfo + 32);
          *(_QWORD *)&DestinationString.Length = 0LL;
          v16 = *(__int16 *)(*(_QWORD *)(v11 + 16) + 2 * v15);
          v17 = *(_QWORD *)(v11 + 24);
          Buffer = (wchar_t *)(v17 + 2 * v16);
          if ( Buffer )
          {
            v18 = 2 * wcslen((const wchar_t *)(v17 + 2 * v16));
            if ( v18 >= 0xFFFE )
              LOWORD(v18) = -4;
            DestinationString.Length = v18;
            DestinationString.MaximumLength = v18 + 2;
          }
LABEL_15:
          if ( v1 >= 0 )
          {
            if ( *(_DWORD *)(g_RegInfo + 120) >= 0x3E8u )
            {
              if ( (int)RtlpIsALicensedRegularLanguage(g_RegInfo, Buffer) < 0
                && (int)RtlpIsALicensedLIPLanguage(g_RegInfo, Buffer) < 0 )
              {
                goto LABEL_22;
              }
              goto LABEL_21;
            }
            LOBYTE(v11) = 1;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(g_RegInfo, Buffer, v11, &v22) >= 0 )
LABEL_21:
              *(_QWORD *)(a1 + 32) |= 1LL << v7;
          }
LABEL_22:
          v1 = 0;
          goto LABEL_23;
        }
        if ( !*(_WORD *)(v13 + v14 + 4) )
        {
LABEL_29:
          v1 = -1073741595;
          goto LABEL_15;
        }
        v20 = *(unsigned __int16 *)(v13 + v14 + 4);
        break;
      case 1:
        v20 = (__int16)v9[2];
        break;
      case 3:
        RtlInitUnicodeString(
          &DestinationString,
          (PCWSTR)(*(_QWORD *)(*(_QWORD *)(g_RegInfo + 32) + 24LL)
                 + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(g_RegInfo + 32) + 16LL) + 2LL * (__int16)v9[2])));
        goto LABEL_34;
      default:
        goto LABEL_29;
    }
    if ( !(unsigned __int8)RtlLCIDToCultureName(v20, (__int64)&DestinationString) )
    {
      Buffer = DestinationString.Buffer;
      goto LABEL_29;
    }
LABEL_34:
    Buffer = DestinationString.Buffer;
    goto LABEL_15;
  }
LABEL_24:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  return 0LL;
}
