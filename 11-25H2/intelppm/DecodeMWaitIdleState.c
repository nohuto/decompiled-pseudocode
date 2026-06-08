/*
 * XREFs of DecodeMWaitIdleState @ 0x140044C40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     IsValidAcpiGenericAddress @ 0x14002DACC (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall DecodeMWaitIdleState(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        _BYTE *a6,
        _BYTE *a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int8 v13; // r8
  int v14; // r8d
  __int64 v15; // r10
  __int64 (__fastcall *v16)(__int64); // rax
  bool v18; // zf
  __int128 v19; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+40h] [rbp-18h]

  v8 = 0;
  HIDWORD(v20) = 0;
  *a5 = 0LL;
  if ( *(_WORD *)a2 == 383 && *(_BYTE *)(a2 + 2) == 2 )
  {
    v11 = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        3,
        10,
        (__int64)&WPP_e37dee7aa66037f48ecd4935437a0ca3_Traceguids);
      v11 = *a5;
    }
    v12 = *(_QWORD *)(a2 + 4);
    v13 = *(_BYTE *)(a2 + 3);
    *(_QWORD *)&v19 = v12;
    LODWORD(v20) = v13;
    *((_QWORD *)&v19 + 1) = *(_QWORD *)(a1 + 200);
    if ( (*(_DWORD *)(a1 + 288) & 0x80000) != 0 )
      DWORD1(v19) = HIDWORD(v12) | 1;
    *a5 = v11 & 0xFF0FFFFFFFFFFFFFuLL | 0x30000000000000LL;
    *(_DWORD *)a5 = v12;
    v14 = v13 & 2;
    if ( v14 )
      *a5 |= 0x100000000000000uLL;
    v15 = a8;
    if ( a8 )
    {
      *(_BYTE *)(a8 + 80) = 1;
      if ( !v14 || (v18 = IsValidAcpiGenericAddress((__int64)&dword_140019AF4) == 0, v16 = MWaitIdleCheck, v18) )
        v16 = 0LL;
      *(_QWORD *)(v15 + 16) = v16;
      *(_QWORD *)(v15 + 24) = MWaitIdle;
      *(_OWORD *)(v15 + 32) = v19;
      *(_QWORD *)(v15 + 64) = DecodeMWaitContext;
      *(_QWORD *)(v15 + 48) = v20;
    }
    if ( a6 )
      *a6 = 0;
    if ( a7 )
      *a7 = 1;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}
