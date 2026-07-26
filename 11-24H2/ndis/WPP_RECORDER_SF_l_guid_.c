/*
 * XREFs of WPP_RECORDER_SF_l_guid_ @ 0x1400CB918
 * Callers:
 *     ndisIfCreateCompartment @ 0x1400CA194 (ndisIfCreateCompartment.c)
 *     ndisIfCreateCompartmentBlock @ 0x1400CA640 (ndisIfCreateCompartmentBlock.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_l_guid_(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  __int64 v8; // rsi
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-38h]

  v8 = a7;
  v10 = a2;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= a2 )
    ndisWppFastTraceMessage(&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids, a4, &a6, 4LL, a7, 16LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v10, 22LL, &WPP_7b6e8809435e3846b6104774dae7899f_Traceguids, v12, &a6, 4LL, v8, 16LL, 0LL);
}
