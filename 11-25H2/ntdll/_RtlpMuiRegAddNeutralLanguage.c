/*
 * XREFs of _RtlpMuiRegAddNeutralLanguage @ 0x1800A7164
 * Callers:
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x1800A6E70 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014B788 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014C210 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     _MuiRegAllocArray @ 0x1800A7340 (_MuiRegAllocArray.c)
 *     RtlGetParentLocaleName @ 0x1800A7380 (RtlGetParentLocaleName.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800A7910 (RtlpMuiRegGetOrAddString.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralLanguage(__int64 a1, __int64 a2, wchar_t *a3)
{
  unsigned __int8 v3; // r12
  __int64 v7; // rax
  __int64 v8; // r13
  int ParentLocaleName; // eax
  __int64 v10; // r9
  int v11; // ebx
  unsigned __int8 v12; // r14
  __int16 v13; // di
  size_t v14; // rax
  __int64 v15; // r8
  int v16; // r15d
  wchar_t *String; // [rsp+28h] [rbp-18h]
  _QWORD v19[2]; // [rsp+30h] [rbp-10h] BYREF
  __int16 v20; // [rsp+80h] [rbp+40h] BYREF
  int v21; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0;
  if ( !a1 || !a2 )
  {
    v11 = -1073741811;
    goto LABEL_19;
  }
  v7 = MuiRegAllocArray(a1, 85LL);
  v8 = v7;
  if ( !v7 )
  {
    v11 = -1073741801;
    goto LABEL_19;
  }
  String = (wchar_t *)v7;
  ParentLocaleName = RtlGetParentLocaleName(a3);
  v11 = ParentLocaleName;
  v12 = 0;
  if ( ParentLocaleName < 0 )
  {
    v16 = ParentLocaleName;
    goto LABEL_15;
  }
  v13 = 0;
  v21 = 0;
  v20 = 0;
  v19[0] = 0LL;
  v19[1] = String;
  v14 = 2 * wcslen(String);
  if ( v14 >= 0xFFFE )
    LOWORD(v14) = -4;
  LOWORD(v19[0]) = v14;
  WORD1(v19[0]) = v14 + 2;
  if ( RtlCultureNameToLCID((unsigned __int16 *)v19, &v21) )
  {
    v13 = v21;
    if ( ((v21 - 4096) & 0xFFFFFBFF) != 0 )
    {
      v12 = 1;
LABEL_12:
      v11 = 0;
      goto LABEL_13;
    }
    LOBYTE(v15) = 1;
    v11 = RtlpMuiRegGetOrAddString(a1, String, v15, &v20);
    if ( v11 >= 0 )
    {
      v13 = v20;
      v12 = 3;
      goto LABEL_12;
    }
    v13 = 0;
  }
  else
  {
    v11 = -1073741811;
  }
LABEL_13:
  v16 = v11;
  if ( v11 < 0 )
  {
    v12 = 0;
LABEL_15:
    v13 = 0;
    goto LABEL_16;
  }
  v3 = v12;
LABEL_16:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8, v10);
  if ( v16 >= 0 )
  {
    if ( v3 )
    {
      *(_WORD *)(a2 + 8) = *(_WORD *)(a2 + 8) & 0x3FFF | (v12 << 14);
      goto LABEL_20;
    }
    v11 = -1073741823;
  }
LABEL_19:
  v13 = 0;
  *(_WORD *)(a2 + 8) &= 0x3FFFu;
LABEL_20:
  *(_WORD *)(a2 + 10) = v13;
  return (unsigned int)v11;
}
