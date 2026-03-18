/*
 * XREFs of ParseArg @ 0x14000DB50
 * Callers:
 *     ParseCall @ 0x140004010 (ParseCall.c)
 *     ParseTerm @ 0x14000D430 (ParseTerm.c)
 * Callees:
 *     ParseString @ 0x1400014BC (ParseString.c)
 *     HeapInsertFreeList @ 0x1400029D0 (HeapInsertFreeList.c)
 *     ParseIntObj @ 0x140006630 (ParseIntObj.c)
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     PushTerm @ 0x14000A040 (PushTerm.c)
 *     ParseName @ 0x14000E040 (ParseName.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ParseSuperName @ 0x140024820 (ParseSuperName.c)
 *     ParseInteger @ 0x14003E5E0 (ParseInteger.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ParseArg(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v6; // r13
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // rcx
  unsigned int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // r14
  int v14; // ebp
  unsigned int v15; // ebp
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbx
  unsigned int v21; // edi
  unsigned __int8 *v22; // r8
  _BYTE *v23; // rdx
  int v24; // ecx
  int v26; // eax
  __int64 v27; // r14
  void *v28; // rcx
  unsigned __int8 *v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // [rsp+30h] [rbp-168h] BYREF
  __int64 v37; // [rsp+38h] [rbp-160h]
  _BYTE Src[256]; // [rsp+40h] [rbp-158h] BYREF

  v4 = a2;
  v6 = a3;
  if ( a2 == 78 )
  {
    v8 = (__int64)*(&OpcodeTable + **(unsigned __int8 **)(a1 + 120));
    if ( !v8 || (*(_DWORD *)(v8 + 28) & 0x20) == 0 )
    {
      v9 = -1072431103;
      LogError(3222536193LL);
      AcpiDiagTraceAmlError(a1, 3222536193LL);
      v22 = *(unsigned __int8 **)(a1 + 120);
      v24 = 132;
      LODWORD(v23) = *v22;
      goto LABEL_21;
    }
    v9 = ParseName(a1, a1 + 120, Src);
    if ( v9 )
      return v9;
    *(_WORD *)(v6 + 2) = 2;
    v10 = -1LL;
    do
      ++v10;
    while ( Src[v10] );
    v11 = v10 + 1;
    *(_DWORD *)(v6 + 24) = v11;
    v12 = 0LL;
    v13 = 0LL;
    v37 = gpheapGlobal;
    if ( v11 + 16 >= v11 )
    {
      if ( v11 + 16 < 0x20 )
      {
        v14 = 39;
        goto LABEL_10;
      }
      v14 = v11 + 23;
      if ( v11 + 23 >= v11 + 16 )
      {
LABEL_10:
        v15 = v14 & 0xFFFFFFF8;
        byte_140088F48 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
        v16 = v37;
        v36 = v37;
        v17 = v37;
        v18 = v37;
        v19 = v37;
        while ( v17 )
        {
          v20 = *(_QWORD *)(v19 + 40);
          v13 = v18;
          while ( 1 )
          {
            v12 = v20 - 16;
            if ( v19 + 40 == v12 + 16 )
            {
              v12 = 0LL;
              goto LABEL_15;
            }
            if ( v15 <= *(_DWORD *)(v12 + 4) )
              break;
            v20 = *(_QWORD *)(v12 + 16);
          }
          if ( v12 )
          {
            v32 = *(_QWORD *)(v12 + 16);
            if ( *(_QWORD *)(v32 + 8) != v12 + 16 || (v33 = *(_QWORD **)(v12 + 24), *v33 != v12 + 16) )
              __fastfail(3u);
            *v33 = v32;
            *(_QWORD *)(v32 + 8) = v33;
            v27 = v15;
            if ( *(unsigned int *)(v12 + 4) >= (unsigned __int64)v15 + 32 )
            {
              v34 = v12 + v15;
              *(_DWORD *)v34 = 0;
              v35 = *(_DWORD *)(v12 + 4) - v15;
              *(_QWORD *)(v34 + 8) = v16;
              *(_DWORD *)(v34 + 4) = v35;
              *(_DWORD *)(v12 + 4) = v15;
              HeapInsertFreeList(v16, (unsigned int *)v34);
            }
            goto LABEL_29;
          }
LABEL_15:
          if ( v15 <= *(_DWORD *)(v16 + 8) - *(_DWORD *)(v16 + 32) )
            goto LABEL_28;
          v16 = *(_QWORD *)(v16 + 24);
          v17 = v16;
          v36 = v16;
          v18 = v16;
          v19 = v16;
        }
        if ( v37 == gpheapGlobal )
        {
          if ( v15 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
          {
            v19 = v15 % (unsigned int)gdwGlobalHeapBlkSize;
            if ( (unsigned int)gdwGlobalHeapBlkSize * (v15 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
            {
              if ( v15 > 0x800000 )
                goto LABEL_30;
              LODWORD(gdwGlobalHeapBlkSize) = v15;
            }
            else
            {
              LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v15 / (unsigned int)gdwGlobalHeapBlkSize + 1);
            }
          }
          v26 = NewGlobalHeap(&v36, v19);
        }
        else
        {
          v26 = NewLocalHeap(&v36);
        }
        if ( !v26 )
        {
          v16 = v36;
          *(_QWORD *)(v36 + 16) = v37;
          *(_QWORD *)(v13 + 24) = v16;
LABEL_28:
          v12 = *(_QWORD *)(v16 + 32);
          v27 = v15;
          *(_QWORD *)(v16 + 32) = v12 + v15;
          *(_DWORD *)(v12 + 4) = v15;
LABEL_29:
          *(_DWORD *)v12 = 1381258056;
          *(_QWORD *)(v12 + 8) = v16;
          memset((void *)(v12 + 16), 0, v27 - 16);
        }
LABEL_30:
        KeReleaseSpinLock(&gmutHeap, byte_140088F48);
        v28 = (void *)(v12 + 16);
        if ( !v12 )
          v28 = 0LL;
        *(_QWORD *)(v6 + 32) = v28;
        if ( v28 )
        {
          memmove(v28, Src, *(unsigned int *)(v6 + 24));
          return v9;
        }
        goto LABEL_20;
      }
    }
    *(_QWORD *)(v6 + 32) = 0LL;
LABEL_20:
    v9 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    LODWORD(v22) = 0;
    v23 = Src;
    v24 = 131;
LABEL_21:
    PrintDebugMessage(v24, (_DWORD)v23, (_DWORD)v22, 0, 0LL);
    return v9;
  }
  if ( a2 == 67 )
  {
    return (unsigned int)ParseOpcode(a1, a4, a3);
  }
  else
  {
    switch ( a2 )
    {
      case 'B':
        *(_WORD *)(a3 + 2) = 1;
        v21 = 0;
        *(_QWORD *)(a3 + 16) = 0LL;
        *(_BYTE *)(a3 + 16) = *(_BYTE *)(*(_QWORD *)(a1 + 120))++;
        goto LABEL_40;
      case 'D':
        v21 = ParseInteger(a1 + 120, a3, 4LL);
        break;
      case 'O':
        v21 = ParseIntObj(a1, (_DWORD **)(a1 + 120), a3, 1);
        if ( v21 == -1072431103 )
        {
          v21 = ParseString(a1, (const void **)(a1 + 120), v6, 1);
          if ( v21 == -1072431103 )
          {
            v29 = *(unsigned __int8 **)(a1 + 120);
            v30 = *v29;
            if ( (unsigned __int8)(v30 - 17) <= 2u )
            {
              v31 = PushTerm((_QWORD *)a1, (__int64)v29, a4, (__int64)*(&OpcodeTable + v30), v6);
              ++*(_QWORD *)(a1 + 120);
              v21 = v31;
            }
          }
        }
        break;
      case 'S':
        v21 = ParseSuperName(a1, a3, 0LL);
        break;
      case 'W':
        *(_WORD *)(a3 + 2) = 1;
        v21 = 0;
        *(_QWORD *)(a3 + 16) = 0LL;
        *(_WORD *)(a3 + 16) = **(_WORD **)(a1 + 120);
        *(_QWORD *)(a1 + 120) += 2LL;
LABEL_40:
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("0x%I64x", *(_QWORD *)(a3 + 16));
        break;
      case 's':
        LOBYTE(a3) = 1;
        v21 = ParseSuperName(a1, v6, a3);
        break;
      default:
        LogError(3222536195LL);
        AcpiDiagTraceAmlError(a1, 3222536195LL);
        PrintDebugMessage(121, v4, 0, 0, 0LL);
        v21 = -1072431101;
        break;
    }
  }
  return v21;
}
