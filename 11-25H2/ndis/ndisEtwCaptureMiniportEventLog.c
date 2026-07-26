/*
 * XREFs of ndisEtwCaptureMiniportEventLog @ 0x1400A0E24
 * Callers:
 *     ndisEtwWriteMiniportRundown @ 0x1400A13F8 (ndisEtwWriteMiniportRundown.c)
 * Callees:
 *     ?reset@?$KArray@_W$00@Rtl@@AEAAXXZ @ 0x140001908 (-reset@-$KArray@_W$00@Rtl@@AEAAXXZ.c)
 *     ?resize@?$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z @ 0x140001998 (-resize@-$KArray@UEtwMiniportEvent@@$00@Rtl@@QEAA_N_K@Z.c)
 */

__int64 __fastcall ndisEtwCaptureMiniportEventLog(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // r13d
  unsigned int v9; // eax
  unsigned int v10; // r15d
  unsigned __int64 v12; // r14
  unsigned int v13; // r8d
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h]
  unsigned int v19; // [rsp+60h] [rbp+30h]

  Rtl::KArray<EtwMiniportEvent,1>::resize(a2, 0LL);
  *a3 = 0LL;
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 8);
  v19 = v7;
  if ( v8 != -1 )
    v6 = *(_DWORD *)(a1 + 12);
  v17 = 0LL;
  v18 = 0LL;
  v9 = v8 + 1;
  if ( v8 >= v7 )
    v9 = v6;
  v10 = v9;
  if ( Rtl::KArray<EtwMiniportEvent,1>::resize((__int64)&v17, v9) )
  {
    v12 = HIDWORD(v17);
    v13 = 0;
    v14 = v18;
    if ( v10 )
    {
      v15 = 0LL;
      do
      {
        v16 = *(unsigned __int16 *)(a1 + 26) * ((v8 + v19 + v13 - v10 + 1) % v19);
        if ( v15 >= v12 )
          __fastfail(5u);
        ++v13;
        *(_WORD *)(v14 + 4 * v15) = *(_WORD *)(v16 + a1 + 34);
        *(_WORD *)(v14 + 4 * v15++ + 2) = *(_WORD *)(v16 + a1 + 32);
      }
      while ( v13 < v10 );
    }
    Rtl::KArray<wchar_t,1>::reset(a2);
    *(_DWORD *)a2 = v17;
    *(_QWORD *)(a2 + 8) = v14;
    *(_DWORD *)(a2 + 4) = v12;
    v18 = 0LL;
    v17 = 0LL;
    *a3 = *(_QWORD *)a1;
    Rtl::KArray<wchar_t,1>::reset((__int64)&v17);
    return 0LL;
  }
  else
  {
    Rtl::KArray<wchar_t,1>::reset((__int64)&v17);
    return 8LL;
  }
}
