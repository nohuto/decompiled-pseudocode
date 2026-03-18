/*
 * XREFs of VidSchTerminateHwContext @ 0x140021B40
 * Callers:
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x140021FC4 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchTerminateAdapter @ 0x1400FAED0 (VidSchTerminateAdapter.c)
 * Callees:
 *     ?VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z @ 0x140021028 (-VidSchiDecrementHwContextReference@@YAXPEAUVIDSCH_HW_CONTEXT@@H@Z.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1400427FC (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x14004B578 (-DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall VidSchTerminateHwContext(PVOID P)
{
  __int64 v2; // rbp
  void *v3; // rdx
  int v4; // r8d
  bool v5; // zf
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r9

  v2 = *(_QWORD *)(*((_QWORD *)P + 2) + 24LL);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v2 + 3112), 1u);
  _InterlockedCompareExchange((volatile signed __int32 *)P + 78, 1, 0);
  ExReleaseResourceLite((PERESOURCE)(v2 + 3112));
  *(_QWORD *)(*((_QWORD *)P + 4) + 8LL) = 0LL;
  if ( (*((_DWORD *)P + 14) & 1) != 0 )
  {
    v3 = (void *)*((_QWORD *)P + 6);
    if ( v3 )
    {
      ADAPTER_RENDER::DdiDestroyContext(*(ADAPTER_RENDER **)(v2 + 8), v3);
      v5 = bTracingEnabled == 0;
      *((_QWORD *)P + 6) = 0LL;
      if ( !v5 )
      {
        v7 = *((_QWORD *)P + 1);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 8);
          if ( !v8 )
            v8 = *((_QWORD *)P + 1);
        }
        else
        {
          LODWORD(v8) = 0;
        }
        if ( (byte_140081241 & 8) != 0 )
        {
          v6 = *(unsigned __int16 *)(*((_QWORD *)P + 2) + 4LL);
          McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
            v6,
            (unsigned int)&EventDestroyContext,
            v4,
            v8,
            v6,
            1 << *((_DWORD *)P + 16),
            0,
            0,
            0,
            0,
            0,
            3,
            (char)P);
        }
      }
    }
  }
  VidSchiDecrementHwContextReference((unsigned int *)P, 0);
}
