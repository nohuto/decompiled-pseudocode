/*
 * XREFs of VidSchiUpdateDdiHwContextPriority @ 0x140102D04
 * Callers:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x140031674 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchSetInProcessPriorityHwContext @ 0x140102B80 (VidSchSetInProcessPriorityHwContext.c)
 *     VidSchSetPriorityHwContext @ 0x140102C40 (VidSchSetPriorityHwContext.c)
 *     VidSchSetAbsolutePriorityHwContext @ 0x140117220 (VidSchSetAbsolutePriorityHwContext.c)
 * Callees:
 *     ?DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES@@@Z @ 0x140042CF0 (-DdiSetContextSchedulingProperties@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETCONTEXTSCHEDULINGPROPERT.c)
 *     McTemplateK0pqqqttt_EtwWriteTransfer @ 0x1400524EC (McTemplateK0pqqqttt_EtwWriteTransfer.c)
 */

void __fastcall VidSchiUpdateDdiHwContextPriority(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int8 *v8; // r8
  __int64 v9; // r9
  int v10; // eax
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rax

  if ( (*(_DWORD *)(a1 + 56) & 0x1000) != 0 )
    return;
  v2 = *(_BYTE *)(a1 + 140) == 0;
  v3 = a1 + 88;
  v4 = *(_QWORD *)(a1 + 8);
  *(_OWORD *)(a1 + 88) = 0LL;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_OWORD *)(a1 + 120) = 0LL;
  v5 = *(_QWORD *)(v4 + 40);
  v6 = *(_QWORD *)(v4 + 32);
  if ( v2 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8LL * *(unsigned int *)(v6 + 4));
    if ( *(_BYTE *)(v9 + 5) )
    {
      v7 = 3LL;
      *(_DWORD *)(v3 + 8) = 3;
      v10 = *(_DWORD *)(v6 + 208);
LABEL_23:
      *(_DWORD *)(v3 + 12) = v10;
      goto LABEL_25;
    }
    if ( *(_BYTE *)(v9 + 4) )
    {
      v7 = 3LL;
      *(_DWORD *)(v3 + 8) = 3;
      v10 = *(_DWORD *)(v6 + 212);
      goto LABEL_23;
    }
    v11 = *(_DWORD *)(v5 + 24);
    if ( v11 )
    {
      if ( v11 == 5 )
      {
        if ( !*(_BYTE *)(v5 + 2632) )
        {
          v7 = 3LL;
          *(_DWORD *)(v3 + 8) = 3;
          v10 = *(_DWORD *)(a1 + 68);
          goto LABEL_23;
        }
        goto LABEL_18;
      }
      if ( (*(_DWORD *)(a1 + 76) & 1) != 0 )
      {
LABEL_18:
        v7 = 2LL;
        *(_DWORD *)(v3 + 8) = 2;
LABEL_25:
        v8 = (unsigned __int8 *)(v6 + 7064);
        if ( *(_BYTE *)(v6 + 7064) && *(_DWORD *)(a1 + 68) == -7 )
        {
          *(_DWORD *)(v3 + 8) = 0;
          *(_DWORD *)(v3 + 12) = 0;
          v7 = 0LL;
        }
        goto LABEL_28;
      }
      if ( *(_DWORD *)(a1 + 68) != -7 )
      {
        *(_DWORD *)(a1 + 96) = 1;
        v7 = 1LL;
        goto LABEL_25;
      }
    }
    *(_DWORD *)(a1 + 96) = 0;
    v7 = 0LL;
    goto LABEL_25;
  }
  v7 = (unsigned int)gulPublicPriorityToSchedulingPriority[*(unsigned int *)(a1 + 136)];
  if ( (unsigned int)v7 <= 0x10 )
  {
    if ( (_DWORD)v7 == 16 )
    {
      v7 = 2LL;
      *(_DWORD *)(v3 + 8) = 2;
    }
    else if ( (_DWORD)v7 )
    {
      *(_DWORD *)(v3 + 8) = 1;
      v7 = 1LL;
    }
    else
    {
      *(_DWORD *)(v3 + 8) = 0;
    }
  }
  else
  {
    v7 = 3LL;
    *(_DWORD *)(v3 + 8) = 3;
    *(_DWORD *)(v3 + 12) = *(_DWORD *)(a1 + 136);
  }
  v8 = (unsigned __int8 *)(v6 + 7064);
LABEL_28:
  if ( (byte_140081241 & 1) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 24);
    if ( !v12 || (*(_DWORD *)(a1 + 56) & 0x40) != 0 )
      v12 = a1;
    McTemplateK0pqqqttt_EtwWriteTransfer(
      v7,
      *(unsigned __int8 *)(v6 + 7062),
      *(unsigned __int8 *)(v6 + 7061),
      v12,
      *(_DWORD *)(a1 + 136),
      v7,
      *(_DWORD *)(v3 + 12),
      *(unsigned __int8 *)(v6 + 7061),
      *v8,
      *(unsigned __int8 *)(v6 + 7062));
  }
  *(_DWORD *)(v3 + 16) = *(_DWORD *)(a1 + 72);
  v13 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)v3 = v13;
  *(_QWORD *)(v3 + 24) = 20000LL;
  *(_QWORD *)(v3 + 32) = 10000LL;
  ADAPTER_RENDER::DdiSetContextSchedulingProperties(
    *(ADAPTER_RENDER **)(*(_QWORD *)(v6 + 16) + 3128LL),
    (const struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES *)v3);
}
