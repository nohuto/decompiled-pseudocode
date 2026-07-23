/*
 * XREFs of RtlpHpLfhOwnerFreeListProcess @ 0x180063E90
 * Callers:
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x180060FB8 (RtlpHpLfhContextSlotStandbyProcess.c)
 * Callees:
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180062D40 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhOwnerMoveSubsegment @ 0x180064030 (RtlpHpLfhOwnerMoveSubsegment.c)
 */

void __fastcall RtlpHpLfhOwnerFreeListProcess(__int64 *a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // rbx
  int v6; // edi
  int v8; // esi
  unsigned __int64 v9; // r14
  _WORD *v10; // r12
  int v11; // r8d
  unsigned __int64 v12; // r8
  unsigned __int64 *v13; // rax

  v4 = _InterlockedExchange64((volatile __int64 *)(a2 + 8), 0LL);
  v6 = a2;
  if ( v4 )
  {
    v8 = a4 & 1;
    do
    {
      v9 = v4;
      v4 = *(_QWORD *)(v4 + 24) & 0xFFFFFFFFFFFFF000uLL;
      if ( v8 && *(_WORD *)(v9 + 18) )
      {
        v10 = (_WORD *)(v9 + 34);
      }
      else
      {
        v10 = (_WORD *)(v9 + 34);
        if ( *(unsigned __int16 *)(v9 + 18) + *(unsigned __int16 *)(v9 + 32) != *(unsigned __int16 *)(v9 + 34) )
          goto LABEL_5;
      }
      RtlpHpLfhSubsegmentDelayFreeProcess(a1, v9, 1);
LABEL_5:
      if ( *(_WORD *)(v9 + 32) == *v10 )
      {
        RtlpHpLfhOwnerMoveSubsegment((_DWORD)a1, v6, v9, 3, 0);
        v12 = *a3;
        if ( *(unsigned __int64 **)(*a3 + 8) != a3 )
          goto LABEL_13;
        *(_QWORD *)v9 = v12;
        *(_QWORD *)(v9 + 8) = a3;
        *(_QWORD *)(v12 + 8) = v9;
        *a3 = v9;
      }
      else if ( !(unsigned int)RtlpHpLfhOwnerMoveSubsegment((_DWORD)a1, v6, v9, 0, 0) )
      {
        RtlpHpLfhOwnerMoveSubsegment((_DWORD)a1, v6, v11, 3, 0);
        v13 = (unsigned __int64 *)a3[1];
        if ( (unsigned __int64 *)*v13 != a3 )
LABEL_13:
          __fastfail(3u);
        *(_QWORD *)v9 = a3;
        *(_QWORD *)(v9 + 8) = v13;
        *v13 = v9;
        a3[1] = v9;
      }
    }
    while ( v4 );
  }
}
