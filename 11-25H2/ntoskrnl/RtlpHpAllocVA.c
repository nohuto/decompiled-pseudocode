/*
 * XREFs of RtlpHpAllocVA @ 0x1402FA5FC
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x1402F9CA8 (RtlpHpSegMgrCommit.c)
 *     RtlpHpLargeAlloc @ 0x1403CAA94 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapExtendContext @ 0x1404A769C (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x1405F8788 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1402C26C0 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1403CBC48 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpVaMgrCtxCommit @ 0x1405F9734 (RtlpHpVaMgrCtxCommit.c)
 *     RtlHeapZero @ 0x1406A9C60 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocVA(
        unsigned __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        ULONG_PTR a5,
        _QWORD *a6)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  _QWORD *v13; // rbx
  __int64 result; // rax
  __int64 v15; // rcx
  ULONG_PTR v16; // [rsp+20h] [rbp-60h]
  int v17; // [rsp+28h] [rbp-58h]
  unsigned __int64 v18; // [rsp+38h] [rbp-48h]
  __int128 v19; // [rsp+50h] [rbp-30h]
  _DWORD v20[3]; // [rsp+60h] [rbp-20h] BYREF
  int v21; // [rsp+6Ch] [rbp-14h]
  __int64 v22; // [rsp+70h] [rbp-10h]

  v21 = 0;
  v9 = *a6;
  v10 = *a6 >> 24;
  v19 = *(_OWORD *)a6;
  if ( (_BYTE)v10 )
    v20[0] = (unsigned __int8)v10 - 1;
  else
    v20[0] = -1;
  v20[2] = BYTE2(v9);
  v20[1] = BYTE1(v9);
  if ( (v9 & 8) != 0 )
    v21 = 1;
  v11 = *a2;
  v22 = *((_QWORD *)&v19 + 1);
  v12 = v11 - 1;
  if ( a4 == 0x2000 )
  {
    a6 = (_QWORD *)(v11 - (*(_QWORD *)&v12 & 0xFFFFFLL) + 0xFFFFF);
    v15 = RtlpHpVaMgrCtxAlloc(&unk_140E68098, &a6, a3, v20);
    if ( !v15 )
      return 3221225626LL;
    *a2 = (__int64)a6;
    *a1 = v15;
    return 0LL;
  }
  v13 = (_QWORD *)(v11 - (v12 & 0xFFF) + 4095);
  a6 = v13;
  if ( (unsigned __int8)(BYTE1(v19) - 2) > 2u )
  {
    LODWORD(v16) = a5;
    result = RtlpHpEnvAllocVA(a1, (__int64 *)&a6, a3, a4, v16, v17, BYTE1(v9), v18, BYTE2(v9));
    if ( (int)result < 0 )
      return result;
    v13 = a6;
    goto LABEL_9;
  }
  result = RtlpHpVaMgrCtxCommit(&unk_140E68098, *a1, v13, (unsigned int)a5);
  if ( (int)result >= 0 )
  {
    if ( (a4 & 0x40000000) != 0 )
      RtlHeapZero(*a1, v13);
LABEL_9:
    *a2 = (__int64)v13;
    return 0LL;
  }
  return result;
}
