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

__int64 __fastcall RtlpMuiRegAddNeutralLanguage(__int64 a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int8 v3; // r12
  wchar_t *v7; // rax
  wchar_t *v8; // r13
  NTSTATUS v9; // eax
  int v10; // ebx
  unsigned __int8 v11; // r14
  wchar_t *Buffer; // rbx
  __int16 v13; // di
  size_t v14; // rax
  __int64 v15; // r8
  int v16; // r15d
  _UNICODE_STRING ParentLocaleName; // [rsp+20h] [rbp-20h] BYREF
  _UNICODE_STRING String; // [rsp+30h] [rbp-10h] BYREF
  __int16 v20; // [rsp+80h] [rbp+40h] BYREF
  DWORD Lcid; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0;
  *(_DWORD *)(&ParentLocaleName.MaximumLength + 1) = 0;
  if ( !a1 || !a2 )
  {
    v10 = -1073741811;
    goto LABEL_19;
  }
  v7 = (wchar_t *)MuiRegAllocArray(a1, 85LL);
  v8 = v7;
  if ( !v7 )
  {
    v10 = -1073741801;
    goto LABEL_19;
  }
  ParentLocaleName.Buffer = v7;
  *(_DWORD *)&ParentLocaleName.Length = 11141120;
  v9 = RtlGetParentLocaleName(a3, &ParentLocaleName, 6u, 0);
  v10 = v9;
  v11 = 0;
  if ( v9 < 0 )
  {
    v16 = v9;
    goto LABEL_15;
  }
  Buffer = ParentLocaleName.Buffer;
  v13 = 0;
  Lcid = 0;
  v20 = 0;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = ParentLocaleName.Buffer;
  if ( ParentLocaleName.Buffer )
  {
    v14 = 2 * wcslen(ParentLocaleName.Buffer);
    if ( v14 >= 0xFFFE )
      LOWORD(v14) = -4;
    String.Length = v14;
    String.MaximumLength = v14 + 2;
  }
  if ( RtlCultureNameToLCID(&String, &Lcid) )
  {
    v13 = Lcid;
    if ( ((Lcid - 4096) & 0xFFFFFBFF) != 0 )
    {
      v11 = 1;
LABEL_12:
      v10 = 0;
      goto LABEL_13;
    }
    LOBYTE(v15) = 1;
    v10 = RtlpMuiRegGetOrAddString(a1, Buffer, v15, &v20);
    if ( v10 >= 0 )
    {
      v13 = v20;
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
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
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
