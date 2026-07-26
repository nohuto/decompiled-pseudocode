/*
 * XREFs of WPP_RECORDER_SF_qSd @ 0x14009C4BC
 * Callers:
 *     ndisWdfOpenConfigurationKey @ 0x140167EE0 (ndisWdfOpenConfigurationKey.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qSd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  bool v11; // zf
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const wchar_t *v16; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, const wchar_t *);
  v5 = v16;
  v6 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
  {
    if ( v16 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v16[v8] );
      v9 = 2 * v8 + 2;
    }
    else
    {
      v9 = 10LL;
    }
    v10 = v16;
    if ( !v16 )
      v10 = L"NULL";
    ndisWppFastTraceMessage(&WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids, 0x10u, va, 8LL, v10, v9, va1, 4LL, 0LL);
  }
  v11 = v5 == 0LL;
  if ( v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
    v11 = v5 == 0LL;
  }
  if ( v11 )
    v5 = L"NULL";
  LOWORD(v13) = 16;
  return WppAutoLogTrace(a1, 2LL, 8LL, &WPP_78fc2fada0c137ca2e9d99d042b3d7f2_Traceguids, v13, (__int64 *)va, 8LL, v5);
}
