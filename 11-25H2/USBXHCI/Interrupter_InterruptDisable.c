/*
 * XREFs of Interrupter_InterruptDisable @ 0x14000B788
 * Callers:
 *     Interrupter_WdfEvtInterruptDisable @ 0x14000B6C0 (Interrupter_WdfEvtInterruptDisable.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Interrupter_InterruptDisable(__int64 a1)
{
  unsigned int *v2; // rdx
  __int64 v3; // rbx
  unsigned int Ulong; // eax
  _DWORD *v5; // rdx
  __int64 result; // rax
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4,
      9,
      41,
      (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
      *(_DWORD *)(a1 + 32));
  v2 = *(unsigned int **)(a1 + 24);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_DWORD *)(a1 + 112) &= ~4u;
  if ( *(_BYTE *)(v3 + 137) )
    Ulong = *v2;
  else
    Ulong = XilRegister_ReadUlong(v3, v2);
  v5 = *(_DWORD **)(a1 + 24);
  result = Ulong & 0xFFFFFFFD;
  if ( !*(_BYTE *)(v3 + 137) )
    return XilRegister_WriteUlong(v3, v5, (unsigned int)result);
  *v5 = result;
  _InterlockedOr(v7, 0);
  return result;
}
