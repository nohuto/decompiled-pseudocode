/*
 * XREFs of RtlLookupFunctionEntry @ 0x14025C9D0
 * Callers:
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x14025CE90 (RtlDispatchException.c)
 *     RtlpSameFunction @ 0x140483548 (RtlpSameFunction.c)
 *     RtlRaiseException @ 0x1405DC840 (RtlRaiseException.c)
 *     MmWriteSystemImageTracepoint @ 0x1406723E0 (MmWriteSystemImageTracepoint.c)
 *     KiTpBuildExcludedKernelTracepointBitmap @ 0x140731CB0 (KiTpBuildExcludedKernelTracepointBitmap.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 *     KiInitDynamicTraceSupport @ 0x140C191A4 (KiInitDynamicTraceSupport.c)
 *     RtlpInitMachineFrameEntries @ 0x140C25AF0 (RtlpInitMachineFrameEntries.c)
 *     RtlInitializeHistoryTable @ 0x140C25B40 (RtlInitializeHistoryTable.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x14025BE40 (RtlpxLookupFunctionTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

unsigned int *__fastcall RtlLookupFunctionEntry(unsigned __int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  unsigned int *v6; // r14
  unsigned int *v7; // r9
  __int64 v8; // r8
  unsigned __int128 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r10
  unsigned int *v13; // r11
  int v14; // r8d
  int i; // esi
  int v16; // edx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int *result; // rax
  unsigned int k; // ecx
  unsigned int *v22; // r10
  unsigned __int64 v23; // r9
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned int j; // edx
  unsigned __int64 v28; // r11
  unsigned int *v29; // r9
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int128 v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+30h] [rbp-18h]

  if ( !a3 )
  {
LABEL_2:
    v33 = 0LL;
    v32 = 0LL;
    if ( a1 < *((_QWORD *)&xmmword_141200030 + 1)
      || a1 >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
    {
      v6 = (unsigned int *)RtlpxLookupFunctionTable(a1, (__int64)&v32);
    }
    else
    {
      v6 = (unsigned int *)xmmword_141200030;
      v32 = xmmword_141200030;
      v33 = qword_141200040;
    }
    v7 = 0LL;
    if ( !v6 )
      return 0LL;
    v8 = *((_QWORD *)&v32 + 1);
    v9 = HIDWORD(v33) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
    *a2 = *((_QWORD *)&v32 + 1);
    v10 = *((_QWORD *)&v9 + 1) >> 3;
    if ( (_DWORD)v10 )
    {
      v11 = a1 - v8;
      v12 = v6[3 * (unsigned int)(v10 - 1)];
      v13 = &v6[3 * (unsigned int)(v10 - 1)];
      if ( v11 < v12 )
      {
        v14 = v10 - 2;
        for ( i = 0; v14 >= i; LODWORD(v12) = *v13 )
        {
          v16 = (i + v14) >> 1;
          v13 = &v6[3 * v16];
          if ( v11 >= *v13 )
          {
            LODWORD(v12) = *v13;
            if ( v11 < v13[3] )
              break;
            i = v16 + 1;
          }
          else
          {
            v14 = v16 - 1;
          }
        }
      }
      if ( v11 >= (unsigned int)v12 && v11 < v13[1] )
        v7 = v13;
    }
    if ( v7 )
    {
      if ( a3 )
      {
        if ( !*((_BYTE *)a3 + 6) )
        {
          v24 = *a3;
          if ( (unsigned int)v24 < 0xC )
          {
            *a3 = v24 + 1;
            *(_QWORD *)&a3[4 * v24 + 6] = *a2;
            *(_QWORD *)&a3[4 * (unsigned int)v24 + 8] = v7;
            v25 = *a2 + *v7;
            v26 = *a2 + v7[1];
            if ( v25 < *((_QWORD *)a3 + 1) )
              *((_QWORD *)a3 + 1) = v25;
            if ( v26 > *((_QWORD *)a3 + 2) )
            {
              *((_QWORD *)a3 + 2) = v26;
              v18 = (unsigned __int64)v7;
              v17 = *a2;
              goto LABEL_17;
            }
          }
        }
      }
    }
    v17 = *a2;
    v18 = (unsigned __int64)v7;
    if ( v7 )
    {
LABEL_17:
      v19 = v7[2];
      if ( (v19 & 1) != 0 )
      {
        v18 = v17 + v19 - 1;
        if ( v17 <= 0x7FFFFFFEFFFFLL && (v18 & 3) != 0 )
          goto LABEL_54;
      }
    }
    return (unsigned int *)v18;
  }
  if ( *((_BYTE *)a3 + 7)
    && (*((_BYTE *)a3 + 7) = 0,
        v31 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_141201945 + 6],
        (result = *(unsigned int **)&RtlpUnwindHistoryTable[4 * (unsigned __int8)byte_141201945 + 8]) != 0LL)
    && a1 >= v31 + *result
    && a1 < v31 + result[1] )
  {
    *a2 = v31;
  }
  else
  {
    if ( !*((_BYTE *)a3 + 6) )
      goto LABEL_2;
    if ( a1 >= qword_141201950 || a1 < qword_141201948 )
    {
LABEL_36:
      if ( a1 < *((_QWORD *)a3 + 1) || a1 >= *((_QWORD *)a3 + 2) )
        goto LABEL_2;
      for ( j = *((unsigned __int8 *)a3 + 4); ; ++j )
      {
        if ( j >= *a3 )
          goto LABEL_2;
        v28 = *(_QWORD *)&a3[4 * j + 6];
        v29 = *(unsigned int **)&a3[4 * j + 8];
        if ( a1 >= v28 + *v29 && a1 < v28 + v29[1] )
          break;
      }
      ++*((_BYTE *)a3 + 4);
      *a2 = v28;
      v30 = v29[2];
      if ( (v30 & 1) != 0 )
      {
        v29 = (unsigned int *)(v28 + v30 - 1);
        if ( v28 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v29 & 3) != 0 )
LABEL_54:
          ExRaiseDatatypeMisalignment();
      }
      return v29;
    }
    else
    {
      for ( k = *((unsigned __int8 *)a3 + 5); ; ++k )
      {
        if ( k >= RtlpUnwindHistoryTable[0] )
          goto LABEL_36;
        v22 = *(unsigned int **)&RtlpUnwindHistoryTable[4 * k + 8];
        v23 = *(_QWORD *)&RtlpUnwindHistoryTable[4 * k + 6];
        if ( a1 >= v23 + *v22 && a1 < v23 + v22[1] )
          break;
      }
      result = *(unsigned int **)&RtlpUnwindHistoryTable[4 * k + 8];
      ++*((_BYTE *)a3 + 5);
      *a2 = v23;
    }
  }
  return result;
}
