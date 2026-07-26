/*
 * XREFs of WPP_RECORDER_SF_SqZ @ 0x1400692B0
 * Callers:
 *     ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x140054C90 (-ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SqZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const wchar_t *a6,
        char a7,
        unsigned __int16 *a8)
{
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rbx
  __int64 v10; // rsi
  __int64 v12; // r14
  __int64 v13; // rcx
  const wchar_t *v14; // r10
  const wchar_t *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r9
  const wchar_t *v18; // r8
  bool v19; // zf
  int v21; // [rsp+20h] [rbp-68h]

  v8 = a6;
  v9 = a8;
  v10 = 10LL;
  v12 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_18;
  if ( !a8 )
  {
    v13 = 8LL;
    goto LABEL_7;
  }
  v13 = *a8;
  if ( !*a8 )
  {
LABEL_7:
    v14 = L"NULL";
    goto LABEL_8;
  }
  v14 = (const wchar_t *)*((_QWORD *)a8 + 1);
LABEL_8:
  v15 = a8;
  if ( !a8 )
    v15 = L"\b";
  if ( a6 )
  {
    v16 = -1LL;
    do
      v19 = a6[++v16] == 0;
    while ( !v19 );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10LL;
  }
  v18 = a6;
  if ( !a6 )
    v18 = L"NULL";
  ndisWppFastTraceMessage(
    &WPP_588cecccef1c306149c05f90e63600c9_Traceguids,
    0x7Fu,
    v18,
    v17,
    &a7,
    8LL,
    v15,
    2LL,
    v14,
    v13,
    0LL);
LABEL_18:
  if ( !v9 )
    v9 = L"\b";
  v19 = a6 == 0LL;
  if ( a6 )
  {
    do
      v19 = a6[++v12] == 0;
    while ( !v19 );
    v10 = 2 * v12 + 2;
    v19 = a6 == 0LL;
  }
  if ( v19 )
    v8 = L"NULL";
  LOWORD(v21) = 127;
  return WppAutoLogTrace(a1, 4LL, 14LL, &WPP_588cecccef1c306149c05f90e63600c9_Traceguids, v21, v8, v10, &a7, 8LL, v9);
}
