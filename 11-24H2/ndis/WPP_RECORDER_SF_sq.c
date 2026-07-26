/*
 * XREFs of WPP_RECORDER_SF_sq @ 0x14003A480
 * Callers:
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140038460 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_sq(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, const char *a6, ...)
{
  const char *v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // rbx
  __int64 v11; // r9
  __int64 v12; // r9
  const char *v13; // r8
  int v14; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x4000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a6 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a6[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = a6;
    if ( !a6 )
      v13 = "NULL";
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids,
      0x21u,
      v13,
      v12,
      va,
      8LL,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v9 = v7 + 1;
  }
  else
  {
    v9 = 5LL;
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v14) = 33;
  return WppAutoLogTrace(a1, 4LL, 15LL, &WPP_d69e2148828f3cdf9c5ee0d0c96342c3_Traceguids, v14, v6, v9, va, 8LL, 0LL);
}
