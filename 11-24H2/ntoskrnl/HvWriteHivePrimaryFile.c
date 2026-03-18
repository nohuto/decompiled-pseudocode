/*
 * XREFs of HvWriteHivePrimaryFile @ 0x140982C34
 * Callers:
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x140AB060C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14042B480 (RtlNumberOfSetBits.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HvpFindNextDirtyBlock @ 0x14097E864 (HvpFindNextDirtyBlock.c)
 *     CmpFileFlushAndPurge @ 0x140981014 (CmpFileFlushAndPurge.c)
 *     HvpFinishPrimaryWrite @ 0x140982E40 (HvpFinishPrimaryWrite.c)
 *     CmpTraceHiveFlushWrotePrimaryFile @ 0x1409837B8 (CmpTraceHiveFlushWrotePrimaryFile.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x140BB97A0 (HvpHeaderCheckSum.c)
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
  unsigned int v15; // ebx
  ULONG v16; // eax
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-48h]
  __int128 v21; // [rsp+40h] [rbp-28h] BYREF
  int v22; // [rsp+50h] [rbp-18h]
  int i; // [rsp+B0h] [rbp+48h] BYREF
  int v24; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v25; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+60h] BYREF

  v26 = 0LL;
  v24 = 0;
  v22 = 0;
  v25 = 0;
  v5 = a3 & 1;
  v7 = 0;
  v21 = 0LL;
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
  *((_QWORD *)&v21 + 1) = a4;
  LODWORD(v21) = 0;
  v22 = 4096;
  v7 = 1;
  v20 = v5;
  v11 = guard_dispatch_icall_no_overrides(a1, 0LL, &v21, 1LL);
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
    v15 = *(_DWORD *)(a1 + 1768);
  }
  else
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
    {
      v11 = -1073741801;
      goto LABEL_6;
    }
    v15 = 0;
    for ( i = 0; v15 < *(_DWORD *)(a1 + 128); v24 = v18 + v17 )
    {
      if ( !HvpFindNextDirtyBlock(a1, a1 + 112, &i, &v26, &v25, &v24, 0) )
        break;
      v17 = v24;
      v18 = v15++;
      v19 = 3 * v18;
      Pool2[v19 + 1] = v26;
      LODWORD(v18) = v25;
      LODWORD(Pool2[v19]) = v17;
      LODWORD(Pool2[v19 + 2]) = v18;
    }
  }
  if ( CmpFailPrimarySave == 3 )
    goto LABEL_13;
  v20 = v5;
  v11 = guard_dispatch_icall_no_overrides(a1, 0LL, Pool2, v15);
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
      v16 = RtlNumberOfSetBits((PRTL_BITMAP)(a1 + 1736));
    else
      v16 = *(_DWORD *)(a1 + 128);
    CmpTraceHiveFlushWrotePrimaryFile(v16, v16 << 9);
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
