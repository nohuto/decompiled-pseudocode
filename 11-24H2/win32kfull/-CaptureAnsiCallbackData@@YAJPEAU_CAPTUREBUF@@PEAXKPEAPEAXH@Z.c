/*
 * XREFs of ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1402B8154
 * Callers:
 *     SfnINSTRING @ 0x14008A860 (SfnINSTRING.c)
 *     SfnINSTRINGNULL @ 0x14016FBA0 (SfnINSTRINGNULL.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1401A0964 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x1402510A0 (SfnINLPCREATESTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402B91E0 (SfnINLPMDICREATESTRUCT.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x140186CCC (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 */

__int64 __fastcall CaptureAnsiCallbackData(struct _CAPTUREBUF *a1, PCWCH UnicodeString, PCWCH a3, void **a4, int a5)
{
  ULONG v6; // edi
  ULONG BytesInUnicodeString; // esi
  __int64 UserSessionState; // rax
  ULONG v12; // edx
  ULONG v13; // ecx
  unsigned int v14; // r8d
  int v15; // eax
  unsigned __int8 *v16; // rdi
  ULONG v17; // ecx
  ULONG v18[10]; // [rsp+30h] [rbp-28h] BYREF
  ULONG BytesInMultiByteString; // [rsp+68h] [rbp+10h] BYREF

  v6 = (unsigned int)a3;
  BytesInMultiByteString = 0;
  v18[0] = 0;
  if ( !UnicodeString )
  {
    *a4 = 0LL;
    return 0LL;
  }
  BytesInUnicodeString = 2 * (_DWORD)a3;
  if ( a5 )
  {
    if ( RtlUnicodeToMultiByteSize(&BytesInMultiByteString, UnicodeString, BytesInUnicodeString - 2) < 0 )
      return 3221225473LL;
    v12 = BytesInMultiByteString + 2;
    if ( BytesInMultiByteString + 2 < BytesInMultiByteString )
    {
      v15 = -2147024362;
      v12 = -1;
    }
    else
    {
      v15 = 0;
    }
    v13 = v12;
    BytesInMultiByteString = v12;
    v14 = v12;
    if ( v15 < 0 )
      return 2147483653LL;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(a1, UnicodeString);
    v12 = BytesInUnicodeString;
    if ( (**(_DWORD **)(UserSessionState + 19928) & 2) == 0 )
      v12 = v6;
    BytesInMultiByteString = v12;
    v13 = v12;
    v14 = v12;
  }
  if ( v13 > *((_DWORD *)a1 + 1) || v14 >= 0x7FFFFFFF )
    return 2147483653LL;
  v16 = (unsigned __int8 *)*((_QWORD *)a1 + 2);
  if ( RtlUnicodeToMultiByteN((PCHAR)v16, v12, v18, UnicodeString, BytesInUnicodeString) >= 0 )
  {
    v17 = v18[0];
    *((_QWORD *)a1 + 2) = &v16[(v18[0] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    *((_DWORD *)a1 + 1) -= v17;
    FixupCaptureDataOffsets(a1, a4, v16);
    return 0LL;
  }
  return 3221225473LL;
}
