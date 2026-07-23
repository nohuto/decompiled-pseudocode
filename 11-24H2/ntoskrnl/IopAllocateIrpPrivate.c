/*
 * XREFs of IopAllocateIrpPrivate @ 0x140284420
 * Callers:
 *     IoAllocateIrp @ 0x14025AD60 (IoAllocateIrp.c)
 *     IopAllocateIrpWithExtension @ 0x14025E1EC (IopAllocateIrpWithExtension.c)
 *     IoAllocateIrpEx @ 0x1402841C0 (IoAllocateIrpEx.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     IovAllocateIrp @ 0x140BAB550 (IovAllocateIrp.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     IopInitActivityIdIrp @ 0x140449990 (IopInitActivityIdIrp.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateIrpPrivate(__int64 a1, char a2, char a3)
{
  char v3; // r13
  char v5; // si
  struct _KPRCB *CurrentPrcb; // r14
  int v7; // edx
  __int64 v8; // r15
  PSLIST_ENTRY v9; // rbx
  unsigned __int16 v10; // bp
  __int16 v11; // bp
  __int64 v12; // rax
  _GENERAL_LOOKASIDE *v13; // rdx
  char v14; // di
  char v15; // di
  _SLIST_ENTRY **v16; // rcx
  __int64 result; // rax
  PSLIST_ENTRY v18; // rax
  __int64 v19; // [rsp+70h] [rbp+8h]
  char v20; // [rsp+78h] [rbp+10h]
  _GENERAL_LOOKASIDE *v21; // [rsp+88h] [rbp+20h]
  _GENERAL_LOOKASIDE *L; // [rsp+88h] [rbp+20h]

  v3 = 0;
  v5 = a2;
  if ( a1 && (a1 == -1 || (*(_DWORD *)(a1 + 48) & 0x8000000) != 0) )
  {
    v5 = a2 + 2;
    v3 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (IopIrpStackProfilerFlags & 3) != 0 && (IopIrpStackProfilerFlags & 4) != 0 && v5 < 20 )
  {
    ++CurrentPrcb->IoIrpStackProfilerCurrent.Profile[v5];
    v7 = CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps + 1;
    CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps = v7;
    if ( CurrentPrcb->IoIrpStackProfilerCurrent.Profile[v5] - CurrentPrcb->IoIrpStackProfilerPrevious.Profile[v5] > IopIrpStackProfilerMinSizeThreshold
      && v7 - CurrentPrcb->IoIrpStackProfilerPrevious.TotalIrps > IopIrpStackProfilerSampleSize )
    {
      _m_prefetchw(&IopIrpStackProfilerFlags);
      if ( (_InterlockedAnd(&IopIrpStackProfilerFlags, 0xFFFFFFFB) & 4) != 0 )
        KeInsertQueueDpc(&IopIrpStackProfilerDpc, 0LL, 0LL);
    }
  }
  v8 = 0LL;
  v9 = 0LL;
  v20 = 0;
  v10 = 72 * v5 + 208;
  if ( v5 <= (char)IopLargeIrpStackLocations && (!a3 || CurrentPrcb->LookasideIrpFloat > 0) )
  {
    v20 = 4;
    if ( v5 == 1 )
    {
      v19 = 0LL;
      v12 = 2048LL;
    }
    else
    {
      if ( v5 <= (char)IopMediumIrpStackLocations )
      {
        v19 = 1LL;
        v11 = 9 * (char)IopMediumIrpStackLocations;
        v12 = 2064LL;
      }
      else
      {
        v19 = 2LL;
        v11 = 9 * (char)IopLargeIrpStackLocations;
        v12 = 2080LL;
      }
      v10 = 8 * v11 + 208;
    }
    v21 = *(_GENERAL_LOOKASIDE **)((char *)&CurrentPrcb->MxCsr + v12);
    ++v21->TotalAllocates;
    v9 = RtlpInterlockedPopEntrySList(&v21->ListHead);
    if ( v9 )
    {
      v13 = v21;
    }
    else
    {
      ++v21->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[v19].L;
      ++L->TotalAllocates;
      v18 = RtlpInterlockedPopEntrySList(&L->ListHead);
      v13 = L;
      v9 = v18;
      if ( !v18 )
        ++L->AllocateMisses;
    }
    if ( (IopIrpStackProfilerFlags & 3) != 0 && v9 )
    {
      if ( *((_QWORD *)&v9[3].Next + 1) >= (unsigned __int64)(unsigned __int16)(72 * v5 + 208) )
      {
        v10 = *((_QWORD *)&v9[3].Next + 1);
        v14 = 0;
        goto LABEL_20;
      }
      ++v13->TotalFrees;
      ExFreePoolWithTag(v9, 0);
      v14 = 0;
LABEL_27:
      LOBYTE(v8) = a3 != 0;
      result = ExAllocatePool2(v8 + 66, v10, 0x20707249u);
      v9 = (PSLIST_ENTRY)result;
      if ( !result )
        return result;
      goto LABEL_22;
    }
  }
  v14 = 0;
  if ( !v9 )
    goto LABEL_27;
LABEL_20:
  if ( a3 && IopIrpCreditsEnabled > 1 )
  {
    _InterlockedDecrement(&CurrentPrcb->LookasideIrpFloat);
    v14 = 8;
  }
  a3 = 0;
LABEL_22:
  memset_0(v9, 0, v10);
  v15 = v20 | v14;
  BYTE2(v9[4].Next) = v5;
  BYTE3(v9[4].Next) = v5 + 1;
  LOWORD(v9->Next) = 6;
  WORD1(v9->Next) = v10;
  BYTE6(v9[4].Next) = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v9[2].Next + 1) = v9 + 2;
  v9[2].Next = v9 + 2;
  v16 = &v9[4 * v5 + 13].Next + v5;
  *((_QWORD *)&v9[11].Next + 1) = v16;
  WORD2(v9->Next) = CurrentPrcb->Number;
  HIBYTE(v9[4].Next) = v15;
  if ( a3 )
    HIBYTE(v9[4].Next) = v15 | 1;
  if ( v3 )
  {
    BYTE3(v9[4].Next) -= 2;
    BYTE2(v9[4].Next) -= 2;
    *((_QWORD *)&v9[11].Next + 1) = v16 - 18;
    *((_QWORD *)&v9[12].Next + 1) = v16 - 18;
    if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 )
      IopInitActivityIdIrp(v9);
  }
  return (__int64)v9;
}
