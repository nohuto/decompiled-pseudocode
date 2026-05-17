/*
 * XREFs of RtlpMUIRegPatchLicenseInfortmation @ 0x180089B50
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180089DF0 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpIsALicensedLIPLanguage @ 0x180089EE8 (RtlpIsALicensedLIPLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180089F60 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 */

__int64 __fastcall RtlpMUIRegPatchLicenseInfortmation(__int64 a1)
{
  int v1; // r15d
  bool v3; // cc
  __int64 v4; // r9
  wchar_t *Heap; // r13
  int v6; // edx
  int v7; // ebx
  char v8; // di
  __int64 v9; // r14
  unsigned __int16 *v10; // rdx
  int v11; // eax
  __int64 v12; // r8
  wchar_t *Buffer; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  size_t v19; // rax
  unsigned int v21; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  __int16 v23; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v23 = 0;
  DestinationString = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v3 = *(_WORD *)(a1 + 4) <= 0x40u;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( !v3 )
    return 3221225473LL;
  Heap = (wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
  if ( !Heap )
    return 3221225495LL;
  v6 = *(unsigned __int16 *)(a1 + 4);
  v7 = v6 - 1;
  if ( v6 - 1 >= 0 )
  {
    v8 = v6 - 1;
    v9 = 6LL * *(unsigned __int16 *)(a1 + 4) - 6;
    while ( 1 )
    {
      v10 = (unsigned __int16 *)(v9 + *(_QWORD *)(a1 + 24));
      v11 = *v10;
      if ( (_WORD)v11 )
        break;
LABEL_23:
      --v8;
      v9 -= 6LL;
      if ( --v7 < 0 )
        goto LABEL_24;
    }
    v12 = g_RegInfo;
    Buffer = Heap;
    DestinationString.Buffer = Heap;
    *(_DWORD *)&DestinationString.Length = 11141120;
    if ( !g_RegInfo || !v10 )
      goto LABEL_22;
    switch ( v11 )
    {
      case 2:
        v14 = 28LL * (__int16)v10[2];
        v15 = *(_QWORD *)(*(_QWORD *)(g_RegInfo + 24) + 16LL);
        v16 = *(__int16 *)(v14 + v15 + 6);
        v4 = *(unsigned __int16 *)(v14 + v15 + 4);
        if ( (__int16)v16 > 0 )
        {
          v12 = *(_QWORD *)(g_RegInfo + 32);
          *(_QWORD *)&DestinationString.Length = 0LL;
          v17 = *(__int16 *)(*(_QWORD *)(v12 + 16) + 2 * v16);
          v18 = *(_QWORD *)(v12 + 24);
          Buffer = (wchar_t *)(v18 + 2 * v17);
          if ( Buffer )
          {
            v19 = 2 * wcslen((const wchar_t *)(v18 + 2 * v17));
            if ( v19 >= 0xFFFE )
              LOWORD(v19) = -4;
            DestinationString.Length = v19;
            DestinationString.MaximumLength = v19 + 2;
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
            LOBYTE(v12) = 1;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(g_RegInfo, Buffer, v12, &v23) >= 0 )
LABEL_21:
              *(_QWORD *)(a1 + 32) |= 1LL << v8;
          }
LABEL_22:
          v1 = 0;
          goto LABEL_23;
        }
        if ( !(_WORD)v4 )
        {
LABEL_29:
          v1 = -1073741595;
          goto LABEL_15;
        }
        v21 = *(unsigned __int16 *)(v14 + v15 + 4);
        break;
      case 1:
        v21 = (__int16)v10[2];
        break;
      case 3:
        RtlInitUnicodeString(
          &DestinationString,
          (PCWSTR)(*(_QWORD *)(*(_QWORD *)(g_RegInfo + 32) + 24LL)
                 + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(g_RegInfo + 32) + 16LL) + 2LL * (__int16)v10[2])));
        goto LABEL_34;
      default:
        goto LABEL_29;
    }
    if ( !(unsigned __int8)RtlLCIDToCultureName(v21, (__int64)&DestinationString) )
    {
      Buffer = DestinationString.Buffer;
      goto LABEL_29;
    }
LABEL_34:
    Buffer = DestinationString.Buffer;
    goto LABEL_15;
  }
LABEL_24:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v4);
  return 0LL;
}
