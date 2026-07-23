/*
 * XREFs of HalpCreateMachineCheckErrorRecord @ 0x14053C7F0
 * Callers:
 *     HalpCreateErrorRecord @ 0x14053C7A0 (HalpCreateErrorRecord.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140319730 (KeRevertToUserGroupAffinityThread.c)
 *     HalpCreateMcaMemoryErrorRecord @ 0x14053C958 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpCreateMcaProcessorErrorRecord @ 0x14053CD18 (HalpCreateMcaProcessorErrorRecord.c)
 *     HalpMcaAMDIsMemoryError @ 0x1405410B8 (HalpMcaAMDIsMemoryError.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HalpCreateMachineCheckErrorRecord(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int16 v4; // bx
  char v9; // r14
  unsigned int v10; // ecx
  int v11; // eax
  int McaMemoryErrorRecord; // eax
  unsigned int v13; // ebx
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-68h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-58h] BYREF

  v4 = *(_WORD *)(a2 + 120);
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  v9 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    v10 = *((_DWORD *)KiGlobalState + *(unsigned int *)(a2 + 96));
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v10 >> 6);
    Affinity.Mask = 1LL << (v10 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v9 = 1;
  }
  v11 = *(_DWORD *)(a2 + 84);
  if ( v11 != 1 )
  {
    if ( v11 != 2 || !(unsigned __int8)HalpMcaAMDIsMemoryError(a2 + 80, v4) )
      goto LABEL_9;
LABEL_19:
    McaMemoryErrorRecord = HalpCreateMcaMemoryErrorRecord(a1, a2, a3, a4);
    goto LABEL_10;
  }
  if ( v4 == 336 || v4 == 308 || (unsigned __int16)(v4 - 192) <= 0xFu || v4 == 378 || (v4 & 0xEF80) == 0x80 )
    goto LABEL_19;
LABEL_9:
  McaMemoryErrorRecord = HalpCreateMcaProcessorErrorRecord(a1, a2, a3, a4);
LABEL_10:
  v13 = McaMemoryErrorRecord;
  if ( McaMemoryErrorRecord >= 0 && _bittest64((const signed __int64 *)(a2 + 120), 0x3Du) && *(_DWORD *)(a3 + 12) == 2 )
    *(_DWORD *)(a3 + 104) |= 1u;
  if ( v9 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v13;
}
