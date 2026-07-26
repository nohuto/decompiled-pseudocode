/*
 * XREFs of WPP_RECORDER_SF_Zd @ 0x1400C56A8
 * Callers:
 *     ndisAoAcTraceRundown @ 0x1400C4D4C (ndisAoAcTraceRundown.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x140146D54 (-ReferenceWdi@@YA_NXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Zd(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        unsigned __int16 *a6,
        ...)
{
  const wchar_t *v6; // rbx
  const wchar_t *v7; // rbp
  unsigned __int64 v10; // rsi
  unsigned int v11; // r14d
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rax
  const wchar_t *v16; // rcx
  const wchar_t *v17; // r8
  bool v18; // zf
  int v20; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = L"NULL";
  v10 = (unsigned __int64)a3 >> 16;
  v11 = a2;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  v14 = 8LL;
  if ( !_bittest(&v13, (a3 - 1) & 0x1F) || *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) < a2 )
    goto LABEL_11;
  if ( !a6 )
  {
    v15 = 8LL;
    goto LABEL_7;
  }
  v15 = *a6;
  if ( !*a6 )
  {
LABEL_7:
    v16 = L"NULL";
    goto LABEL_8;
  }
  v16 = (const wchar_t *)*((_QWORD *)a6 + 1);
LABEL_8:
  v17 = a6;
  if ( !a6 )
    v17 = L"\b";
  ndisWppFastTraceMessage(a5, a4, v17, 2LL, v16, v15, va, 4LL, 0LL);
LABEL_11:
  v18 = a6 == 0LL;
  if ( a6 )
  {
    v14 = *a6;
    if ( *a6 )
      v7 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v18 = a6 == 0LL;
  }
  if ( v18 )
    v6 = L"\b";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, v11, a3, a5, v20, v6, 2LL, v7, v14, va);
}
