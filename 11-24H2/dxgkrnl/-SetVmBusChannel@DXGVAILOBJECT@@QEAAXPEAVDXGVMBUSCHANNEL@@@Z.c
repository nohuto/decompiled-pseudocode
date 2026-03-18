/*
 * XREFs of ?SetVmBusChannel@DXGVAILOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x14007A3B4
 * Callers:
 *     ??1DXGVAILOBJECT@@UEAA@XZ @ 0x14020574C (--1DXGVAILOBJECT@@UEAA@XZ.c)
 *     ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1402071C4 (-InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x140206C18 (-DestroyVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

void __fastcall DXGVAILOBJECT::SetVmBusChannel(DXGVAILOBJECT *this, struct DXGVMBUSCHANNEL *a2)
{
  struct DXGVMBUSCHANNEL *v4; // rcx

  v4 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 14);
  if ( v4 )
    DestroyVmBusChannel(v4);
  *((_QWORD *)this + 14) = a2;
}
