/*
 * XREFs of _RtlpMuiRegAddNeutralLanguage @ 0x1800D24B4
 * Callers:
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x1800D237C (_RtlpMuiRegAddNeutralToInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x18014A1D8 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014AC60 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlGetParentLocaleName @ 0x180033970 (RtlGetParentLocaleName.c)
 *     _MuiRegAllocArray @ 0x1800D2690 (_MuiRegAllocArray.c)
 *     RtlpMuiRegGetOrAddString @ 0x1800D2A40 (RtlpMuiRegGetOrAddString.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralLanguage(__int64 a1, __int64 a2, wchar_t *a3)
{
  unsigned __int8 v3; // r12
  wchar_t *v7; // rax
  unsigned __int64 v8; // r13
  int ParentLocaleName; // eax
  int v10; // ebx
  unsigned __int8 v11; // r14
  wchar_t *v12; // rbx
  __int16 v13; // di
  size_t v14; // rax
  __int64 v15; // r8
  int v16; // r15d
  _DWORD v18[2]; // [rsp+20h] [rbp-20h] BYREF
  wchar_t *String; // [rsp+28h] [rbp-18h]
  _QWORD v20[2]; // [rsp+30h] [rbp-10h] BYREF
  __int16 v21; // [rsp+80h] [rbp+40h] BYREF
  int v22; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0;
  v18[1] = 0;
  if ( !a1 || !a2 )
  {
    v10 = -1073741811;
    goto LABEL_19;
  }
  v7 = (wchar_t *)MuiRegAllocArray(a1, 85LL);
  v8 = (unsigned __int64)v7;
  if ( !v7 )
  {
    v10 = -1073741801;
    goto LABEL_19;
  }
  String = v7;
  v18[0] = 11141120;
  ParentLocaleName = RtlGetParentLocaleName(a3, (__int64)v18, 6, 0);
  v10 = ParentLocaleName;
  v11 = 0;
  if ( ParentLocaleName < 0 )
  {
    v16 = ParentLocaleName;
    goto LABEL_15;
  }
  v12 = String;
  v13 = 0;
  v22 = 0;
  v21 = 0;
  v20[0] = 0LL;
  v20[1] = String;
  if ( String )
  {
    v14 = 2 * wcslen(String);
    if ( v14 >= 0xFFFE )
      LOWORD(v14) = -4;
    LOWORD(v20[0]) = v14;
    WORD1(v20[0]) = v14 + 2;
  }
  if ( RtlCultureNameToLCID((unsigned __int16 *)v20, &v22) )
  {
    v13 = v22;
    if ( ((v22 - 4096) & 0xFFFFFBFF) != 0 )
    {
      v11 = 1;
LABEL_12:
      v10 = 0;
      goto LABEL_13;
    }
    LOBYTE(v15) = 1;
    v10 = RtlpMuiRegGetOrAddString(a1, v12, v15, &v21);
    if ( v10 >= 0 )
    {
      v13 = v21;
      v11 = 3;
      goto LABEL_12;
    }
    v13 = 0;
  }
  else
  {
    v10 = -1073741811;
  }
LABEL_13:
  v16 = v10;
  if ( v10 < 0 )
  {
    v11 = 0;
LABEL_15:
    v13 = 0;
    goto LABEL_16;
  }
  v3 = v11;
LABEL_16:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
  if ( v16 >= 0 )
  {
    if ( v3 )
    {
      *(_WORD *)(a2 + 8) = *(_WORD *)(a2 + 8) & 0x3FFF | (v11 << 14);
      goto LABEL_20;
    }
    v10 = -1073741823;
  }
LABEL_19:
  v13 = 0;
  *(_WORD *)(a2 + 8) &= 0x3FFFu;
LABEL_20:
  *(_WORD *)(a2 + 10) = v13;
  return (unsigned int)v10;
}
