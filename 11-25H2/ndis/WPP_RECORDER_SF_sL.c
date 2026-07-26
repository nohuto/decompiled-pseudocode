/*
 * XREFs of WPP_RECORDER_SF_sL @ 0x1400BEFEC
 * Callers:
 *     ?ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140086710 (-ndisOidPMRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400270E0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_sL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const char *a6, ...)
{
  const char *v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // r9
  __int64 v10; // r9
  const char *v11; // r8
  __int64 v12; // rbx
  int v14; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
  {
    if ( a6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a6[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = a6;
    if ( !a6 )
      v11 = "NULL";
    ndisWppFastTraceMessage(&WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids, 0x4Bu, v11, v10, va, 4LL, 0LL);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v12 = v7 + 1;
  }
  else
  {
    v12 = 5LL;
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v14) = 75;
  return WppAutoLogTrace(a1, 2LL, 14LL, &WPP_0008b8bbc9b83858b743970a7dc9f078_Traceguids, v14, v6, v12, va);
}
