/*
 * XREFs of WPP_RECORDER_SF_qs @ 0x1400A918C
 * Callers:
 *     ?ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1400493B0 (-ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisPowerIrpWorker@@YAXPEAX@Z @ 0x1400A89F0 (-ndisPowerIrpWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7)
{
  const char *v7; // rdi
  __int64 v8; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  const char *v13; // rax
  __int64 v14; // rbx
  int v16; // [rsp+20h] [rbp-38h]

  v7 = a7;
  v8 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = a7;
    if ( !a7 )
      v13 = "NULL";
    ndisWppFastTraceMessage(&WPP_4a94757187d03d50151c0070042f9279_Traceguids, a4, &a6, 8LL, v13, v12, 0LL);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( v7[v8] );
    v14 = v8 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !v7 )
    v7 = "NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 4LL, 14LL, &WPP_4a94757187d03d50151c0070042f9279_Traceguids, v16, &a6, 8LL, v7, v14, 0LL);
}
