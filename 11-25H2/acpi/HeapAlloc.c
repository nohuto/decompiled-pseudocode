/*
 * XREFs of HeapAlloc @ 0x140008CA0
 * Callers:
 *     ParseString @ 0x1400014BC (ParseString.c)
 *     RawFieldAccess @ 0x140001978 (RawFieldAccess.c)
 *     AccFieldUnit @ 0x140003430 (AccFieldUnit.c)
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     Index @ 0x140008710 (Index.c)
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     ReadField @ 0x140011880 (ReadField.c)
 *     ToDecStr @ 0x14002DC70 (ToDecStr.c)
 *     ConvertToBuffer @ 0x14002E0E0 (ConvertToBuffer.c)
 *     MidString @ 0x14002EA20 (MidString.c)
 *     ToHexStr @ 0x14002EEC0 (ToHexStr.c)
 *     Concat @ 0x14002F1F0 (Concat.c)
 *     ConvertToString @ 0x14002FAA4 (ConvertToString.c)
 *     OpRegion @ 0x140030DC0 (OpRegion.c)
 *     IndexField @ 0x140035220 (IndexField.c)
 *     BankField @ 0x140035420 (BankField.c)
 *     Field @ 0x140035640 (Field.c)
 *     ParseField @ 0x140035A2C (ParseField.c)
 *     NewObjData @ 0x14003620C (NewObjData.c)
 *     CreateXField @ 0x14003B324 (CreateXField.c)
 *     Buffer @ 0x14003E650 (Buffer.c)
 *     Package @ 0x1400400A0 (Package.c)
 *     Method @ 0x140041060 (Method.c)
 *     FindNSObj @ 0x140042958 (FindNSObj.c)
 *     InitMutex @ 0x14004E58C (InitMutex.c)
 *     ConcatenateResTemplate @ 0x140052C10 (ConcatenateResTemplate.c)
 *     ParseFieldConnection @ 0x140054520 (ParseFieldConnection.c)
 *     Simulator_Copy_Arguments @ 0x14006B0E4 (Simulator_Copy_Arguments.c)
 *     LoadFieldUnitDDB @ 0x14006B76C (LoadFieldUnitDDB.c)
 *     InitEvent @ 0x14006EB00 (InitEvent.c)
 *     PowerRes @ 0x14006EC70 (PowerRes.c)
 *     Processor @ 0x14006EDE0 (Processor.c)
 *     AMLIInitialize @ 0x1400C4F80 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1400C82BC (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall HeapAlloc(__int64 a1, int a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbp
  int v7; // edi
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 i; // r8
  __int64 v13; // rbx
  __int64 **v14; // r8
  int v15; // eax
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // r9
  _QWORD *v19; // rcx
  __int64 **v20; // r10
  unsigned int v21; // eax
  __int64 *j; // rax
  __int64 **v23; // rcx
  __int64 *v24; // r11
  _QWORD *v25; // rdi
  __int64 v26; // rcx
  __int64 **v27; // rax
  __int64 **v28; // rdi
  _QWORD *v29; // r10
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int64 *v36; // rcx
  __int64 **v37; // rax
  __int64 v38; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  if ( a3 + 16 < a3 )
    goto LABEL_18;
  if ( a3 + 16 < 0x20 )
  {
    v7 = 39;
  }
  else
  {
    v7 = a3 + 23;
    if ( a3 + 23 < a3 + 16 )
      goto LABEL_18;
  }
  v8 = v7 & 0xFFFFFFF8;
  byte_140088F48 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v9 = a1;
  v10 = a1;
  v11 = a1;
  for ( i = a1; ; i = v9 )
  {
    v38 = v9;
    if ( !v10 )
      break;
    v13 = *(_QWORD *)(i + 40);
    v14 = (__int64 **)(i + 40);
    v6 = v11;
    while ( 1 )
    {
      v5 = v13 - 16;
      if ( v14 == (__int64 **)(v5 + 16) )
      {
        v5 = 0LL;
        goto LABEL_9;
      }
      if ( v8 <= *(_DWORD *)(v5 + 4) )
        break;
      v13 = *(_QWORD *)(v5 + 16);
    }
    if ( v5 )
    {
      v18 = *(_QWORD *)(v5 + 16);
      if ( *(_QWORD *)(v18 + 8) != v5 + 16 )
        goto LABEL_36;
      v19 = *(_QWORD **)(v5 + 24);
      if ( *v19 != v5 + 16 )
        goto LABEL_36;
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      v16 = v8;
      if ( *(unsigned int *)(v5 + 4) >= (unsigned __int64)v8 + 32 )
      {
        v20 = (__int64 **)(v8 + v5);
        *(_DWORD *)v20 = 0;
        v21 = *(_DWORD *)(v5 + 4) - v8;
        v20[1] = (__int64 *)v9;
        *((_DWORD *)v20 + 1) = v21;
        *(_DWORD *)(v5 + 4) = v8;
        for ( j = *v14; j != (__int64 *)v14; j = (__int64 *)*j )
        {
          if ( v20 + 2 < (__int64 **)j )
            break;
        }
        v23 = (__int64 **)j[1];
        v24 = (__int64 *)(v20 + 2);
        if ( *v23 != j )
          goto LABEL_36;
        v20[3] = (__int64 *)v23;
        *v24 = (__int64)j;
        *v23 = v24;
        j[1] = (__int64)v24;
        v25 = (_QWORD *)*v24;
        v26 = *v24 - 16;
        if ( (__int64 **)*v24 != v14 )
        {
          v32 = *((unsigned int *)v20 + 1);
          if ( (__int64 **)v26 == (__int64 **)((char *)v20 + v32) )
          {
            *((_DWORD *)v20 + 1) = v32 + *(_DWORD *)(v26 + 4);
            v33 = *v25;
            if ( *(_QWORD **)(*v25 + 8LL) == v25 )
            {
              v34 = (_QWORD *)v25[1];
              if ( (_QWORD *)*v34 == v25 )
              {
                *v34 = v33;
                *(_QWORD *)(v33 + 8) = v34;
                goto LABEL_31;
              }
            }
LABEL_36:
            __fastfail(3u);
          }
        }
LABEL_31:
        v27 = (__int64 **)v20[3];
        v28 = v27 - 2;
        if ( v27 != v14 )
        {
          v35 = *((unsigned int *)v28 + 1);
          if ( v20 == (__int64 **)((char *)v28 + v35) )
          {
            *((_DWORD *)v28 + 1) = *((_DWORD *)v20 + 1) + v35;
            v36 = (__int64 *)*v24;
            if ( *(__int64 **)(*v24 + 8) != v24 )
              goto LABEL_36;
            v37 = (__int64 **)v20[3];
            if ( *v37 != v24 )
              goto LABEL_36;
            *v37 = v36;
            v20 = v28;
            v36[1] = (__int64)v37;
          }
        }
        if ( *(_QWORD *)(v9 + 32) <= (unsigned __int64)v20 + *((unsigned int *)v20 + 1) )
        {
          *(_QWORD *)(v9 + 32) = v20;
          v29 = v20 + 2;
          v30 = *v29;
          if ( *(_QWORD **)(*v29 + 8LL) != v29 )
            goto LABEL_36;
          v31 = (_QWORD *)v29[1];
          if ( (_QWORD *)*v31 != v29 )
            goto LABEL_36;
          *v31 = v30;
          *(_QWORD *)(v30 + 8) = v31;
        }
      }
      goto LABEL_16;
    }
LABEL_9:
    if ( v8 <= *(_DWORD *)(v9 + 8) - *(_DWORD *)(v9 + 32) )
      goto LABEL_15;
    v9 = *(_QWORD *)(v9 + 24);
    v10 = v9;
    v11 = v9;
  }
  if ( a1 != gpheapGlobal )
  {
    v15 = NewLocalHeap(&v38, v9);
    goto LABEL_13;
  }
  if ( v8 + 56 <= (unsigned int)gdwGlobalHeapBlkSize )
  {
LABEL_53:
    v15 = NewGlobalHeap(&v38, v9);
LABEL_13:
    if ( !v15 )
    {
      v9 = v38;
      *(_QWORD *)(v38 + 16) = a1;
      *(_QWORD *)(v6 + 24) = v9;
LABEL_15:
      v5 = *(_QWORD *)(v9 + 32);
      v16 = v8;
      *(_QWORD *)(v9 + 32) = v5 + v8;
      *(_DWORD *)(v5 + 4) = v8;
LABEL_16:
      *(_QWORD *)(v5 + 8) = v9;
      *(_DWORD *)v5 = a2;
      memset((void *)(v5 + 16), 0, v16 - 16);
    }
    goto LABEL_17;
  }
  v9 = v8 % (unsigned int)gdwGlobalHeapBlkSize;
  if ( (unsigned int)gdwGlobalHeapBlkSize * (v8 / (unsigned int)gdwGlobalHeapBlkSize + 1) <= 0x800000 )
  {
    LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v8 / (unsigned int)gdwGlobalHeapBlkSize + 1);
    goto LABEL_53;
  }
  if ( v8 <= 0x800000 )
  {
    LODWORD(gdwGlobalHeapBlkSize) = v8;
    goto LABEL_53;
  }
LABEL_17:
  KeReleaseSpinLock(&gmutHeap, byte_140088F48);
LABEL_18:
  result = v5 + 16;
  if ( !v5 )
    return 0LL;
  return result;
}
