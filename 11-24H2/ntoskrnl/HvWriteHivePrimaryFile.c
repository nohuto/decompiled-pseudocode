/*
 * XREFs of HvWriteHivePrimaryFile @ 0x14096B444
 * Callers:
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x140AAB57C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HvpFindNextDirtyBlock @ 0x140967074 (HvpFindNextDirtyBlock.c)
 *     CmpFileFlushAndPurge @ 0x140969824 (CmpFileFlushAndPurge.c)
 *     HvpFinishPrimaryWrite @ 0x14096B650 (HvpFinishPrimaryWrite.c)
 *     CmpTraceHiveFlushWrotePrimaryFile @ 0x14096BFC8 (CmpTraceHiveFlushWrotePrimaryFile.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x140BBB7A0 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvWriteHivePrimaryFile(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  char v7; // r13
  _DWORD *v8; // r9
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  bool v12; // zf
  _QWORD *Pool2; // rsi
  ULONG v15; // eax
  unsigned int v16; // ebx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-48h]
  int i; // [rsp+B0h] [rbp+48h] BYREF
  int v22; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+60h] BYREF

  v24 = 0LL;
  v22 = 0;
  v23 = 0;
  v5 = a3 & 1;
  v7 = 0;
  if ( !a2 )
  {
    if ( *(_DWORD *)(a1 + 128) )
    {
      v8 = *(_DWORD **)(a1 + 64);
      v8[10] = *(_DWORD *)(a1 + 280);
      v8[11] = 1;
      goto LABEL_4;
    }
LABEL_24:
    v11 = 0;
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(a1 + 1760) )
    goto LABEL_24;
  v8 = *(_DWORD **)(a1 + 1776);
LABEL_4:
  v9 = *(_DWORD *)(a1 + 184);
  v8[2] = v9;
  v8[1] = v9 + 1;
  v10 = HvpHeaderCheckSum(v8);
  v12 = CmpFailPrimarySave == 1;
  *(_DWORD *)(a4 + 508) = v10;
  if ( v12 )
    goto LABEL_5;
  v7 = 1;
  v20 = v5;
  v11 = guard_dispatch_icall_no_overrides(a1, 0LL);
  if ( v11 < 0 )
    goto LABEL_6;
  if ( CmpFailPrimarySave == 2 )
  {
LABEL_5:
    v11 = -1073741823;
    goto LABEL_6;
  }
  if ( a2 )
  {
    Pool2 = *(_QWORD **)(a1 + 1760);
  }
  else
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 24LL * *(unsigned int *)(a1 + 128), 0x62534D43u);
    if ( !Pool2 )
    {
      v11 = -1073741801;
      goto LABEL_6;
    }
    v16 = 0;
    for ( i = 0; v16 < *(_DWORD *)(a1 + 128); v22 = v18 + v17 )
    {
      if ( !HvpFindNextDirtyBlock(a1, a1 + 112, &i, &v24, &v23, &v22, 0) )
        break;
      v17 = v22;
      v18 = v16++;
      v19 = 3 * v18;
      Pool2[v19 + 1] = v24;
      LODWORD(v18) = v23;
      LODWORD(Pool2[v19]) = v17;
      LODWORD(Pool2[v19 + 2]) = v18;
    }
  }
  if ( CmpFailPrimarySave == 3 )
    goto LABEL_13;
  v20 = v5;
  v11 = guard_dispatch_icall_no_overrides(a1, 0LL);
  if ( v11 >= 0 )
  {
    if ( CmpFailPrimarySave == 4 )
      goto LABEL_13;
    v11 = CmpFileFlushAndPurge(a1, 0);
    if ( v11 < 0 )
      goto LABEL_14;
    if ( CmpFailPrimarySave == 5 )
    {
LABEL_13:
      v11 = -1073741823;
      goto LABEL_14;
    }
    if ( a2 )
      v15 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 1736));
    else
      v15 = *(_DWORD *)(a1 + 128);
    CmpTraceHiveFlushWrotePrimaryFile(v15, v15 << 9);
    v7 = 0;
    v11 = 0;
  }
LABEL_14:
  if ( Pool2 )
  {
    v12 = a2 == 0;
    if ( a2 )
      goto LABEL_7;
    ExFreePoolWithTag(Pool2, 0);
  }
LABEL_6:
  v12 = a2 == 0;
LABEL_7:
  LOBYTE(a4) = v12;
  LOBYTE(a3) = v7;
  HvpFinishPrimaryWrite(a1, v11 >= 0, a3, a4, v20);
  return (unsigned int)v11;
}
