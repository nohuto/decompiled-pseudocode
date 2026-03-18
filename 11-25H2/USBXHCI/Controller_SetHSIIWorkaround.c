/*
 * XREFs of Controller_SetHSIIWorkaround @ 0x14004253C
 * Callers:
 *     Endpoint_Enable @ 0x140011530 (Endpoint_Enable.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Controller_SetHSIIWorkaround(__int64 a1)
{
  __int64 v1; // rdi
  int Ulong; // eax

  v1 = *(_QWORD *)(a1 + 88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 4, 4, 268, (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids);
  Ulong = XilRegister_ReadUlong(v1, (unsigned int *)(*(_QWORD *)(v1 + 24) + 33092LL));
  return XilRegister_WriteUlong(*(_QWORD *)(a1 + 88), (_DWORD *)(*(_QWORD *)(v1 + 24) + 33092LL), Ulong | 0x100u);
}
