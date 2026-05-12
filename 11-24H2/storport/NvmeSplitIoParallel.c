/*
 * XREFs of NvmeSplitIoParallel @ 0x1401256A0
 * Callers:
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011CB50 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeProcessIoIrp @ 0x14011DC30 (NvmeProcessIoIrp.c)
 *     NvmeProcessPendingIo @ 0x14011E5A0 (NvmeProcessPendingIo.c)
 *     NvmeProcessPendingIoInCompletionDpc @ 0x140120370 (NvmeProcessPendingIoInCompletionDpc.c)
 *     NvmeProcessPendingIoInSpecifiedGroup @ 0x140122190 (NvmeProcessPendingIoInSpecifiedGroup.c)
 *     NvmeProcessPendingLowPriorityIo @ 0x140123160 (NvmeProcessPendingLowPriorityIo.c)
 * Callees:
 *     AllocateNewNVMeIoSplitContext @ 0x140119530 (AllocateNewNVMeIoSplitContext.c)
 *     FreeAllSglAndContextInChainedSplitIoContext @ 0x14011A100 (FreeAllSglAndContextInChainedSplitIoContext.c)
 *     FreeNVMeChainedIoSplitContext @ 0x14011A240 (FreeNVMeChainedIoSplitContext.c)
 *     GetNVMeSGLBufferContext @ 0x14011A3F0 (GetNVMeSGLBufferContext.c)
 *     NvmeNamespaceQueueIo @ 0x14011D6B0 (NvmeNamespaceQueueIo.c)
 *     NvmeSendSplitIo @ 0x140124340 (NvmeSendSplitIo.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeSplitIoParallel(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6,
        ULONG a7,
        union _SLIST_HEADER *a8,
        unsigned __int16 *a9,
        _BYTE *a10)
{
  __int64 v10; // r14
  signed __int32 v11; // esi
  unsigned int v12; // r12d
  unsigned int v13; // edi
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // ebp
  __int64 v18; // rdx
  char v19; // al
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r8
  __int64 v22; // rbx
  int v23; // r13d
  __int64 NewNVMeIoSplitContext; // rax
  unsigned int v25; // r14d
  __int64 v26; // r8
  int v27; // r9d
  __int64 v28; // r13
  unsigned int v29; // r10d
  unsigned int v30; // r15d
  int v31; // ebx
  __int64 v32; // r12
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int16 v35; // r11
  unsigned int v36; // ecx
  int v37; // eax
  __int64 v38; // rcx
  char v39; // cl
  __int64 v40; // rdi
  unsigned int v41; // ebp
  unsigned int v42; // esi
  __int64 NVMeSGLBufferContext; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  char v46; // al
  __int64 v47; // rbp
  union _SLIST_HEADER *v48; // r15
  unsigned __int16 *v49; // r14
  __int64 v50; // rax
  unsigned int v51; // ecx
  int v52; // edi
  __int64 v53; // rsi
  __int64 v54; // rax
  KIRQL v55; // r13
  __int64 v56; // rdi
  signed __int32 v57; // eax
  unsigned int v58; // ecx
  __int64 v60; // rdi
  int v61; // [rsp+38h] [rbp-E0h]
  int v62; // [rsp+48h] [rbp-D0h]
  char v63; // [rsp+60h] [rbp-B8h] BYREF
  char v64; // [rsp+61h] [rbp-B7h]
  unsigned int v65; // [rsp+64h] [rbp-B4h]
  __int16 v66; // [rsp+68h] [rbp-B0h] BYREF
  unsigned __int64 v67; // [rsp+70h] [rbp-A8h]
  __int64 v68; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v69; // [rsp+80h] [rbp-98h]
  __int64 v70; // [rsp+88h] [rbp-90h]
  __int64 v71; // [rsp+90h] [rbp-88h]
  int v72; // [rsp+9Ch] [rbp-7Ch]
  unsigned int v73; // [rsp+A0h] [rbp-78h]
  int v74; // [rsp+A4h] [rbp-74h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-70h]
  __int64 v76; // [rsp+B0h] [rbp-68h]
  __int64 v77; // [rsp+B8h] [rbp-60h]
  __int64 v78[11]; // [rsp+C0h] [rbp-58h] BYREF
  int v83; // [rsp+140h] [rbp+28h]

  v10 = *(_QWORD *)(a1 + 16);
  v11 = -1073741823;
  v12 = 0;
  v13 = 0;
  v14 = *(_DWORD *)(a1 + 428);
  v75 = *(_QWORD *)(a2 + 184);
  v63 = 0;
  v74 = 0;
  v78[0] = 0LL;
  v66 = 0;
  v15 = HIDWORD(*(_QWORD *)(v10 + 136));
  LOBYTE(v15) = v15 & 1;
  v71 = v15;
  v16 = *(_QWORD *)(a2 + 8);
  v68 = a6;
  v64 = 0;
  v72 = v14;
  v17 = *(_DWORD *)(v16 + 44);
  v73 = 0;
  v18 = *(_QWORD *)(v16 + 32) + v17;
  v69 = a5;
  v65 = a4;
  v77 = v18;
  if ( a10 )
  {
    *a10 = 0;
    v10 = *(_QWORD *)(a1 + 16);
  }
  if ( v14 )
  {
    v19 = *(_BYTE *)(a1 + 427);
    v20 = *(unsigned int *)(a1 + 428);
    v68 = v20;
    if ( !v19 )
    {
      LODWORD(v67) = a4 / v20 + (a4 % v20 + v20 + (unsigned int)(a5 % v20) - 1LL) / v20;
      goto LABEL_10;
    }
    v21 = ((unsigned __int64)a4 >> v19)
        + (unsigned int)(((a4 & ((_DWORD)v20 - 1)) - 1LL + v20 + ((unsigned int)a5 & ((_DWORD)v20 - 1))) >> v19);
  }
  else
  {
    v67 = a4 / a6;
    if ( !(a4 % a6) )
      goto LABEL_10;
    v21 = a4 / a6 + 1;
  }
  v67 = v21;
LABEL_10:
  v22 = 0LL;
  v23 = 0;
  v76 = 0LL;
  v70 = 0LL;
  do
  {
    NewNVMeIoSplitContext = (__int64)ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v10 + 888) + 8LL * a7));
    if ( !NewNVMeIoSplitContext )
    {
      NewNVMeIoSplitContext = AllocateNewNVMeIoSplitContext(v10, a7);
      if ( !NewNVMeIoSplitContext )
      {
        if ( v22 )
        {
          do
          {
            v60 = *(_QWORD *)(v22 + 96);
            *(_QWORD *)(v22 + 88) = 0LL;
            *(_DWORD *)(v22 + 108) = 0;
            *(_DWORD *)(v22 + 104) = 0;
            ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v10 + 888) + 8LL * a7), (PSLIST_ENTRY)v22);
            v22 = v60;
          }
          while ( v60 );
        }
        NvmeNamespaceQueueIo(a1, a2, a7);
        return 2147483665LL;
      }
    }
    if ( v22 )
    {
      *(_QWORD *)(v76 + 96) = NewNVMeIoSplitContext;
    }
    else
    {
      v22 = NewNVMeIoSplitContext;
      v70 = NewNVMeIoSplitContext;
    }
    ++v23;
    v76 = NewNVMeIoSplitContext;
  }
  while ( v23 != (_DWORD)v67 );
  *(_QWORD *)(NewNVMeIoSplitContext + 96) = 0LL;
  v25 = v67;
  v26 = v22;
  v27 = 0;
  v28 = a1;
  *(_DWORD *)(v22 + 116) = 0;
  *(_DWORD *)(v22 + 108) = 0;
  *(_DWORD *)(v22 + 112) = 0;
  *(_DWORD *)(v22 + 48) = a4;
  *(_WORD *)(v22 + 120) = 0;
  if ( v25 )
  {
    v29 = v65;
    v30 = v68;
    v31 = 0;
    v32 = v77;
    while ( 1 )
    {
      v29 -= v13;
      v33 = v69;
      *(_DWORD *)(v26 + 104) = 1;
      *(_QWORD *)(v26 + 24) = a2;
      *(_DWORD *)(v26 + 112) = 0;
      *(_WORD *)(v26 + 32) = v25;
      *(_WORD *)(v26 + 34) = v27;
      *(_QWORD *)(v26 + 16) = a1;
      *(_DWORD *)(v26 + 48) = a4;
      *(_DWORD *)(v26 + 36) = v29;
      v69 = v13 + v33;
      *(_QWORD *)(v26 + 40) = v69;
      *(_DWORD *)(v26 + 56) = v17;
      *(_DWORD *)(v26 + 60) = v31;
      *(_QWORD *)(v26 + 80) = v32;
      if ( v27 )
        goto LABEL_26;
      if ( v72 && (v13 = v30, (v34 = a5 % v30) != 0) )
      {
        if ( v30 >= v30 - v34 )
          v13 = v30 - v34;
      }
      else
      {
LABEL_26:
        v13 = v29;
        if ( v30 < v29 )
          v13 = v30;
      }
      *(_DWORD *)(v26 + 52) = v13;
      if ( ++v27 >= v25 )
        break;
      v35 = v17;
      v32 += v13;
      if ( (v17 & 0xFFF) != 0 )
      {
        v36 = v13 + v17;
        if ( v13 > 4096 - v17 )
          v36 &= 0xFFFu;
        v17 = v36;
      }
      else
      {
        v17 = v13 & 0xFFF;
      }
      v26 = *(_QWORD *)(v26 + 96);
      v37 = v31 + ((v13 + (unsigned __int64)(v35 & 0xFFF) + 4095) >> 12);
      v31 = v37 - 1;
      if ( (v17 & 0xFFF) == 0 )
        v31 = v37;
    }
    v22 = v70;
    v11 = -1073741823;
    v12 = v73;
  }
  v38 = v75;
  *(_QWORD *)(v22 + 72) = *(_QWORD *)(v75 + 24);
  _InterlockedExchange64((volatile __int64 *)(v38 + 24), v22);
  *(_QWORD *)(v22 + 64) = *(_QWORD *)(v38 + 8);
  _InterlockedExchange64((volatile __int64 *)(v38 + 8), 0x8765432100000003uLL);
  v39 = v71;
  if ( !(_BYTE)v71 )
  {
    v40 = v22;
    v41 = 0;
    if ( v25 )
    {
      v42 = a7;
      while ( 1 )
      {
        NVMeSGLBufferContext = GetNVMeSGLBufferContext(*(_QWORD *)(a1 + 16), a7);
        v44 = NVMeSGLBufferContext;
        if ( !NVMeSGLBufferContext )
          break;
        v45 = a2;
        *(_QWORD *)(NVMeSGLBufferContext + 40) = a2;
        v46 = *(_BYTE *)(NVMeSGLBufferContext + 126) & 0xFE;
        *(_QWORD *)(v44 + 32) = a1;
        ++v41;
        *(_BYTE *)(v44 + 126) = v46 | (a3 != 0) | 2;
        *(_QWORD *)(v44 + 96) = *(_QWORD *)(v40 + 40);
        *(_QWORD *)(v44 + 104) = 0LL;
        *(_DWORD *)(v44 + 112) = 0;
        *(_DWORD *)(v44 + 116) = *(_DWORD *)(v40 + 52);
        *(_QWORD *)(v44 + 64) = 0LL;
        *(_QWORD *)(v44 + 72) = 0LL;
        *(_QWORD *)(v44 + 80) = *(_QWORD *)(v40 + 80);
        *(_QWORD *)(v44 + 88) = v40;
        *(_QWORD *)(v40 + 88) = v44;
        v40 = *(_QWORD *)(v40 + 96);
        if ( v41 >= v25 )
        {
          v39 = v71;
          v47 = v22;
          v83 = 0;
          goto LABEL_53;
        }
      }
      v11 = -1073741670;
LABEL_45:
      v48 = a8;
      v49 = a9;
      goto LABEL_46;
    }
  }
  v83 = 0;
  v47 = v22;
  if ( !v25 )
    goto LABEL_45;
  v42 = a7;
  v45 = a2;
LABEL_53:
  v49 = a9;
  v48 = a8;
  while ( !v39 )
  {
    v50 = *(_QWORD *)(v47 + 88);
    v68 = *(_QWORD *)(v45 + 8);
    v75 = v50;
    v51 = *(_DWORD *)(v50 + 116);
    v52 = *(unsigned __int16 *)(v50 + 124);
    v53 = *(_QWORD *)(v50 + 16);
    v69 = *(_QWORD *)(v50 + 80);
    v54 = *(_QWORD *)(v28 + 16);
    v65 = v51;
    v70 = v54;
    v55 = KfRaiseIrql(2u);
    v62 = v52;
    v56 = v75;
    LOBYTE(v61) = a3 == 0;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int64, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int, __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v70 + 128) + 1144LL) + 8LL) + 112LL))(
            *(_QWORD *)(*(_QWORD *)(v70 + 128) + 1144LL),
            *(_QWORD *)(*(_QWORD *)(v70 + 128) + 8LL),
            v68,
            v69,
            v65,
            NvmeContinueScatterGatherProcessIO,
            v75,
            v61,
            v53,
            v62);
    if ( v11 == -1073741789 )
    {
      LOBYTE(v61) = a3 == 0;
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int64, unsigned int, void (__fastcall *)(__int64, __int64, __int64, __int64), __int64, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v70 + 128) + 1144LL) + 8LL) + 88LL))(
              *(_QWORD *)(*(_QWORD *)(v70 + 128) + 1144LL),
              *(_QWORD *)(*(_QWORD *)(v70 + 128) + 8LL),
              v68,
              v69,
              v65,
              NvmeContinueScatterGatherProcessIO,
              v56,
              v61);
    }
    if ( v55 < 2u )
      KeLowerIrql(v55);
    if ( v11 < 0 )
    {
      *(_DWORD *)(v47 + 112) = v11;
      _InterlockedExchange((volatile __int32 *)(v47 + 104), 5);
      _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 112), v11, 0);
      if ( _InterlockedIncrement((volatile signed __int32 *)(v22 + 116)) >= *(unsigned __int16 *)(v22 + 32) )
        goto LABEL_76;
      v63 = 0;
      if ( !v12 )
        goto LABEL_46;
      v28 = a1;
    }
    else
    {
      v28 = a1;
      v11 = 259;
      ++v12;
    }
LABEL_68:
    v47 = *(_QWORD *)(v47 + 96);
    if ( ++v83 >= (unsigned int)v67 )
      goto LABEL_46;
    v42 = a7;
    v45 = a2;
    v39 = v71;
  }
  v57 = NvmeSendSplitIo(v47, v42, (__int64)v48, v49, (bool *)&v63, v78, &v74, &v66, v64);
  v11 = v57;
  if ( v57 == 259 )
  {
    v49 = 0LL;
    v48 = 0LL;
    ++v12;
    if ( a10 )
      *a10 = 1;
    v64 = v12 % *(unsigned __int8 *)(*(_QWORD *)(v28 + 16) + 1730LL) == 0;
    goto LABEL_68;
  }
  if ( v57 == -2147483631 )
  {
    ++v12;
    goto LABEL_46;
  }
  if ( v63 || !v12 )
    goto LABEL_77;
  if ( *(unsigned __int16 *)(v22 + 32) - *(unsigned __int16 *)(v47 + 34) == 1 )
    goto LABEL_48;
  v58 = *(unsigned __int16 *)(v22 + 32) - *(unsigned __int16 *)(v47 + 34) - 1;
  if ( (int)(_InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 116), v58) + v58) >= *(unsigned __int16 *)(v22 + 32) )
  {
LABEL_76:
    v63 = 1;
    goto LABEL_77;
  }
LABEL_46:
  if ( v63 || !v12 )
  {
LABEL_77:
    FreeAllSglAndContextInChainedSplitIoContext(*(_QWORD **)(a1 + 16), v22);
    FreeNVMeChainedIoSplitContext(*(_QWORD *)(a1 + 16), a7, v22, a2);
  }
  else
  {
LABEL_48:
    if ( (int)(v11 + 0x80000000) >= 0 && v11 != -2147483631 )
      v11 = 259;
  }
  if ( !(_BYTE)v71 && v11 == 259 && v49 )
    ExpInterlockedPushEntrySList(v48 + 4, (PSLIST_ENTRY)(v48[2].Alignment + ((unsigned __int64)*v49 << 7)));
  return (unsigned int)v11;
}
