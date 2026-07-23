/*
 * XREFs of HvGetHiveLogFileStatus @ 0x1409678E0
 * Callers:
 *     CmpGenerateFlushControlData @ 0x1409668D0 (CmpGenerateFlushControlData.c)
 * Callees:
 *     RtlAreBitsClear @ 0x140442240 (RtlAreBitsClear.c)
 *     CmpIsWriteQueueActive @ 0x14047CD10 (CmpIsWriteQueueActive.c)
 *     HvpCountSetRangesInVector @ 0x140967A9C (HvpCountSetRangesInVector.c)
 */

char __fastcall HvGetHiveLogFileStatus(__int64 a1, unsigned int a2, int *a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rbx
  bool v7; // zf
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  int v11; // edx
  unsigned __int64 v12; // rax
  int v13; // edx

  v4 = a2;
  v6 = (unsigned int)(*(_DWORD *)(a1 + 104) << 9)
     + 40LL
     + 8LL * (unsigned int)HvpCountSetRangesInVector((PRTL_BITMAP)(a1 + 88));
  v7 = RtlAreBitsClear((PRTL_BITMAP)(a1 + 88), 0, 8u) == 0;
  v8 = v6 + 4104;
  v9 = *(unsigned int *)(a1 + 180);
  if ( v7 )
    v8 = v6;
  *a3 = 0;
  v10 = v8 + v9;
  v11 = 0;
  if ( *(_BYTE *)(a1 + 195) )
  {
    v11 = 2;
    *a3 = 2;
  }
  if ( v10 > 0x2000000 )
  {
    v11 |= 4u;
    *a3 = v11;
  }
  if ( *(_DWORD *)(a1 + 172) == -1 )
  {
    v11 |= 8u;
    *a3 = v11;
  }
  if ( v11 )
  {
    LOBYTE(v12) = CmpIsWriteQueueActive((_QWORD *)(a1 + 4208));
    if ( (_BYTE)v12 )
    {
      v13 = v11 | 1;
      goto LABEL_14;
    }
  }
  if ( v8 + (unsigned __int64)*(unsigned int *)(a1 + 180) >= v4 )
  {
    v11 |= 0x10u;
    *a3 = v11;
  }
  v12 = v8 + *(unsigned int *)(a1 + 180);
  if ( v12 >= v4 )
  {
    v13 = v11 | 0x20;
LABEL_14:
    *a3 = v13;
  }
  return v12;
}
