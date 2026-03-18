/*
 * XREFs of ?SendPTPInertiaEndToContainer@CPTPProcessor@@AEAAXPEBUPTPEngineOutput@@@Z @ 0x14020E204
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x140187B70 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z @ 0x14021A944 (-SendPTPInertiaInput@Pointer@IVRootDeliver@@YAJPEAX_KHAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall CPTPProcessor::SendPTPInertiaEndToContainer(CPTPProcessor *this, const struct PTPEngineOutput *a2)
{
  int v2; // r9d
  __int64 v3; // r8
  void *v4; // rdx
  __int64 v5; // rcx
  int v6; // r9d
  const struct CONTAINER_ID *v7; // [rsp+20h] [rbp-8h]

  v2 = (int)this;
  if ( *((_DWORD *)a2 + 1) == 3 )
  {
    v3 = *((_QWORD *)this + 67);
    v4 = 0LL;
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 256) + 16LL);
    if ( v5 )
    {
      v6 = v2 + 384;
      if ( v3 )
        v4 = *(void **)(v3 + 216);
      IVRootDeliver::Pointer::SendPTPInertiaInput(
        *(IVRootDeliver::Pointer **)(v5 + 16),
        v4,
        (unsigned int)-__CFSHR__(*(_DWORD *)(v5 + 168), 14),
        v6,
        v7);
    }
  }
}
