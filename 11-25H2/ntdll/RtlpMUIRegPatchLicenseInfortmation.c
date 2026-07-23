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
  wchar_t *Heap; // r13
  int v5; // edx
  int v6; // ebx
  char v7; // di
  __int64 v8; // r14
  unsigned __int16 *v9; // rdx
  int v10; // eax
  _QWORD *v11; // r8
  wchar_t *Buffer; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  size_t v18; // rax
  LCID v20; // ecx
  _UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF
  __int16 v22; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v22 = 0;
  String = 0LL;
  if ( !a1 )
    return 3221225473LL;
  v3 = *(_WORD *)(a1 + 4) <= 0x40u;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( !v3 )
    return 3221225473LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
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
    String.Buffer = Heap;
    *(_DWORD *)&String.Length = 11141120;
    if ( !g_RegInfo || !v9 )
      goto LABEL_22;
    switch ( v10 )
    {
      case 2:
        v13 = 28LL * (__int16)v9[2];
        v14 = *(_QWORD *)(*((_QWORD *)g_RegInfo + 3) + 16LL);
        v15 = *(__int16 *)(v13 + v14 + 6);
        if ( (__int16)v15 > 0 )
        {
          v11 = (_QWORD *)*((_QWORD *)g_RegInfo + 4);
          *(_QWORD *)&String.Length = 0LL;
          v16 = *(__int16 *)(v11[2] + 2 * v15);
          v17 = v11[3];
          Buffer = (wchar_t *)(v17 + 2 * v16);
          if ( Buffer )
          {
            v18 = 2 * wcslen((const wchar_t *)(v17 + 2 * v16));
            if ( v18 >= 0xFFFE )
              LOWORD(v18) = -4;
            String.Length = v18;
            String.MaximumLength = v18 + 2;
          }
LABEL_15:
          if ( v1 >= 0 )
          {
            if ( *((_DWORD *)g_RegInfo + 30) >= 0x3E8u )
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
          &String,
          (PCWSTR)(*(_QWORD *)(*((_QWORD *)g_RegInfo + 4) + 24LL)
                 + 2LL * *(__int16 *)(*(_QWORD *)(*((_QWORD *)g_RegInfo + 4) + 16LL) + 2LL * (__int16)v9[2])));
        goto LABEL_34;
      default:
        goto LABEL_29;
    }
    if ( !RtlLCIDToCultureName(v20, &String) )
    {
      Buffer = String.Buffer;
      goto LABEL_29;
    }
LABEL_34:
    Buffer = String.Buffer;
    goto LABEL_15;
  }
LABEL_24:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
