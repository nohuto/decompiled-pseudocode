/*
 * XREFs of ViPtProcessApt @ 0x140B8EAC8
 * Callers:
 *     ViPtLogPoolTraceWrapper @ 0x140B84104 (ViPtLogPoolTraceWrapper.c)
 * Callees:
 *     VfPtAddStackInfoIfNotExist @ 0x140B8DD84 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtProcessAllocPoolInfo @ 0x140B8E55C (VfPtProcessAllocPoolInfo.c)
 *     VfPtProcessFreePoolInfo @ 0x140B8E614 (VfPtProcessFreePoolInfo.c)
 */

void __fastcall ViPtProcessApt(__int64 a1)
{
  _QWORD *v2; // rax

  if ( (VfOptionFlags & 0x1000) != 0 )
  {
    if ( *(_BYTE *)(a1 + 436) )
    {
      VfPtProcessFreePoolInfo((__int64 *)a1);
    }
    else
    {
      v2 = VfPtAddStackInfoIfNotExist(
             (_OWORD *)(a1 + 24),
             *(_DWORD *)(a1 + 424),
             *(_QWORD *)a1,
             *(_DWORD *)(a1 + 432),
             *(_QWORD *)(a1 + 8));
      if ( v2 )
        VfPtProcessAllocPoolInfo((_QWORD *)a1, (__int64)v2);
    }
  }
}
