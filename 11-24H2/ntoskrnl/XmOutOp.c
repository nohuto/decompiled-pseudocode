/*
 * XREFs of XmOutOp @ 0x140461300
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosWriteIoSpace @ 0x140461350 (x86BiosWriteIoSpace.c)
 *     XmSetSourceValue @ 0x140461CF8 (XmSetSourceValue.c)
 *     longjmp @ 0x1404F91E0 (longjmp.c)
 */

__int64 __fastcall XmOutOp(__int64 a1)
{
  unsigned __int16 v1; // r9
  __int64 v2; // rcx

  if ( (unsigned int)(*(_DWORD *)(a1 + 120) + *(_DWORD *)(a1 + 108)) > 0xFFFF )
    longjmp((_JBTYPE *)(a1 + 160), 9);
  XmSetSourceValue(a1, a1 + 24);
  return x86BiosWriteIoSpace(*(unsigned int *)(v2 + 120), v1, *(unsigned int *)(v2 + 108));
}
