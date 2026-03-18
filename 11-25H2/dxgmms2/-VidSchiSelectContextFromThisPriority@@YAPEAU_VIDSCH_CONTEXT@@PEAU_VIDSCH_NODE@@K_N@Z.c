/*
 * XREFs of ?VidSchiSelectContextFromThisPriority@@YAPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_NODE@@K_N@Z @ 0x1400226F0
 * Callers:
 *     VidSchiSelectContext @ 0x140020E50 (VidSchiSelectContext.c)
 *     VidSchiScheduleCommandToRun @ 0x140023BF0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiSetTransferContextRunningTime @ 0x140023890 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiIsQuantumLeft @ 0x140037C38 (VidSchiIsQuantumLeft.c)
 *     McTemplateK0qpiixi_EtwWriteTransfer @ 0x14004FAE0 (McTemplateK0qpiixi_EtwWriteTransfer.c)
 */

struct _VIDSCH_CONTEXT *__fastcall VidSchiSelectContextFromThisPriority(
        struct _VIDSCH_NODE *a1,
        unsigned int a2,
        char a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  char v5; // r13
  int v7; // r9d
  bool v8; // bp
  _QWORD *v9; // r8
  _QWORD *v10; // r15
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  unsigned int v15; // ecx
  __int64 *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rcx
  __int64 **v21; // rax
  unsigned int v23; // esi
  _QWORD **v24; // r14
  _QWORD *i; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+50h] [rbp-58h] BYREF
  __int64 v31; // [rsp+58h] [rbp-50h]
  _QWORD *v32; // [rsp+60h] [rbp-48h]
  char v33; // [rsp+B0h] [rbp+8h] BYREF
  char v34; // [rsp+B8h] [rbp+10h] BYREF
  char v35; // [rsp+C8h] [rbp+20h] BYREF

  v3 = *((_QWORD *)a1 + 3);
  v4 = 0LL;
  v5 = 0;
  v30 = 0LL;
  v7 = *(_DWORD *)(v3 + 2792) & 8;
  v8 = v7 && a3;
  v9 = (_QWORD *)((char *)a1 + 16 * a2 + 2184);
  v32 = v9;
  v10 = (_QWORD *)*v9;
  v11 = *((_QWORD *)a1 + 2 * a2 + 274) - 8LL;
  v12 = *v9 - 8LL;
  if ( v12 == v11 )
  {
    if ( v8 )
    {
      if ( (unsigned int)VidSchiIsQuantumLeft(*v9 - 8LL, &v30) )
      {
        return (struct _VIDSCH_CONTEXT *)v30;
      }
      else if ( (byte_140081241 & 1) != 0 )
      {
        v28 = *(_QWORD *)(v12 + 56);
        if ( !v28 || (*(_DWORD *)(v12 + 112) & 0x40) != 0 )
          LODWORD(v28) = v12;
        McTemplateK0qpiixi_EtwWriteTransfer(
          v28,
          *(_QWORD *)(v12 + 448),
          *(_QWORD *)(v12 + 464),
          *((unsigned __int16 *)a1 + 2),
          v28,
          *(_QWORD *)(v12 + 472),
          *(_QWORD *)(v12 + 440),
          *(_QWORD *)(v12 + 464),
          *(_QWORD *)(v12 + 448));
      }
    }
    else
    {
      v4 = *v9 - 8LL;
      if ( !v7 || gulPriorityToYieldPriorityBand[*(unsigned int *)(v12 + 404)] )
      {
        *(_BYTE *)(v12 + 640) = 1;
      }
      else
      {
        v27 = *(_QWORD *)(v12 + 96);
        v34 = 0;
        DpSynchronizeExecution(
          *(_QWORD *)(*(_QWORD *)(v27 + 24) + 24LL),
          VidSchiResetContextQuantumAtISR,
          v12,
          *(unsigned int *)(*(_QWORD *)(v27 + 24) + 32LL),
          &v34);
      }
    }
    return (struct _VIDSCH_CONTEXT *)v4;
  }
  while ( 1 )
  {
    v13 = v10[11];
    v14 = (volatile signed __int32 *)(v10 - 1);
    v15 = *((_DWORD *)v10 + 44);
    v16 = v10;
    v10 = (_QWORD *)*v10;
    v31 = v13;
    LODWORD(v13) = _InterlockedCompareExchange(v14 + 109, (v15 >> 1) & 1, 3);
    v17 = *((_QWORD *)v14 + 12);
    if ( (_DWORD)v13 != 2 )
      break;
    v33 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v17 + 24) + 24LL),
      VidSchiResetContextQuantumAtISR,
      v14,
      *(unsigned int *)(*(_QWORD *)(v17 + 24) + 32LL),
      &v33);
    v18 = *v16;
    if ( *(__int64 **)(*v16 + 8) != v16
      || (v19 = (__int64 **)v16[1], *v19 != v16)
      || (*v19 = (__int64 *)v18,
          *(_QWORD *)(v18 + 8) = v19,
          v20 = 16LL * *((unsigned int *)v14 + 101) + v31 + 2184,
          v21 = *(__int64 ***)(v20 + 8),
          *v21 != (__int64 *)v20) )
    {
      __fastfail(3u);
    }
    *v16 = v20;
    v16[1] = (__int64)v21;
    *v21 = v16;
    *(_QWORD *)(v20 + 8) = v16;
    if ( v8 )
    {
      v5 = 0;
      if ( (byte_140081241 & 1) != 0 )
      {
        v29 = *((_QWORD *)v14 + 7);
        if ( !v29 || (v14[28] & 0x40) != 0 )
          LODWORD(v29) = (_DWORD)v14;
        McTemplateK0qpiixi_EtwWriteTransfer(
          v29,
          *((_QWORD *)v14 + 56),
          *((_QWORD *)v14 + 58),
          *((unsigned __int16 *)a1 + 2),
          v29,
          *((_QWORD *)v14 + 59),
          *((_QWORD *)v14 + 55),
          *((_QWORD *)v14 + 58),
          *((_QWORD *)v14 + 56));
      }
    }
    else
    {
      v5 = 1;
    }
    if ( v14 == (volatile signed __int32 *)v11 )
    {
      v4 = v30;
      goto LABEL_13;
    }
  }
  v23 = 0;
  v24 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 13) + 40LL) + 32LL)
                              + 8LL * *(unsigned int *)(*(_QWORD *)(v17 + 24) + 4LL))
                  + 216LL);
LABEL_18:
  if ( v23 >= 2 )
  {
    v4 = (__int64)v14;
    goto LABEL_13;
  }
  for ( i = *v24; ; i = (_QWORD *)*i )
  {
    if ( i == v24 )
    {
      ++v23;
      goto LABEL_18;
    }
    v4 = (__int64)(i - 52);
    if ( *(i - 40) == *((_QWORD *)v14 + 12) )
      break;
LABEL_27:
    ;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 436), (*(_DWORD *)(v4 + 184) >> 1) & 1, 3) == 2 )
  {
    v26 = *(_QWORD *)(v4 + 96);
    v35 = 0;
    DpSynchronizeExecution(
      *(_QWORD *)(*(_QWORD *)(v26 + 24) + 24LL),
      VidSchiResetContextQuantumAtISR,
      i - 52,
      *(unsigned int *)(*(_QWORD *)(v26 + 24) + 32LL),
      &v35);
    goto LABEL_27;
  }
  if ( (volatile signed __int32 *)v4 != v14 )
  {
    LOBYTE(v9) = 1;
    VidSchiSetTransferContextRunningTime(i - 52, v14, v9);
  }
LABEL_13:
  if ( v5 && !v4 )
    return (struct _VIDSCH_CONTEXT *)(*v32 - 8LL);
  return (struct _VIDSCH_CONTEXT *)v4;
}
