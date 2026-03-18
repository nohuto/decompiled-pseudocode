/*
 * XREFs of Interrupter_InterruptEnable @ 0x14001B7A8
 * Callers:
 *     Interrupter_WdfEvtInterruptEnable @ 0x14001B6E0 (Interrupter_WdfEvtInterruptEnable.c)
 *     Controller_InternalReset @ 0x1400406EC (Controller_InternalReset.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     XilRegister_WriteUlong @ 0x14001BA28 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Interrupter_InterruptEnable(__int64 a1)
{
  _DWORD *v2; // rdx
  __int64 v3; // rdi
  unsigned int *v4; // rdx
  unsigned int Ulong; // eax
  _DWORD *v6; // rdx
  __int64 result; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4,
      9,
      40,
      (__int64)&WPP_7655ebd4b6a53902724aa02c679740e3_Traceguids,
      *(_DWORD *)(a1 + 32));
  v2 = (_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a1 + 112) & 0xFFFFFFF9 | 4;
  if ( *(_BYTE *)(v3 + 137) )
  {
    *v2 = 200;
    _InterlockedOr(v8, 0);
  }
  else
  {
    XilRegister_WriteUlong(v3, v2, 200LL);
  }
  v4 = *(unsigned int **)(a1 + 24);
  if ( *(_BYTE *)(v3 + 137) )
    Ulong = *v4;
  else
    Ulong = XilRegister_ReadUlong(v3, v4);
  v6 = *(_DWORD **)(a1 + 24);
  result = Ulong | 2;
  if ( !*(_BYTE *)(v3 + 137) )
    return XilRegister_WriteUlong(v3, v6, (unsigned int)result);
  *v6 = result;
  _InterlockedOr(v8, 0);
  return result;
}
