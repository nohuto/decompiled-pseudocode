/*
 * XREFs of XmPopStack @ 0x140468128
 * Callers:
 *     XmPopOp @ 0x140468100 (XmPopOp.c)
 *     XmIretOp @ 0x1405768A0 (XmIretOp.c)
 *     XmLeaveOp @ 0x140576910 (XmLeaveOp.c)
 *     XmRetOp @ 0x140576960 (XmRetOp.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140469260 (x86BiosTranslateAddress.c)
 *     XmSetSourceValue @ 0x140469348 (XmSetSourceValue.c)
 *     longjmp @ 0x1404FB920 (longjmp.c)
 */

__int64 __fastcall XmPopStack(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax

  v1 = *(unsigned int *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 120);
  if ( (unsigned int)v1 > (unsigned int)*(unsigned __int16 *)(a1 + 72) - v3 )
    longjmp((_JBTYPE *)(a1 + 160), 16);
  v4 = v3 + v1 + 1;
  v5 = *(unsigned __int16 *)(a1 + 60);
  *(_DWORD *)(a1 + 40) = v4;
  v6 = x86BiosTranslateAddress(v5, v1);
  XmSetSourceValue(a1, v6);
  return *(unsigned int *)(a1 + 108);
}
