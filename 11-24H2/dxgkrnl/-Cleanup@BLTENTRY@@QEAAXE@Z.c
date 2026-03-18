/*
 * XREFs of ?Cleanup@BLTENTRY@@QEAAXE@Z @ 0x1402F9998
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A7094 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ @ 0x1402F99DC (-AssignNull@DXGALLOCATIONREFERENCE@@QEAAXXZ.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1403DCD98 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ @ 0x1403E3F70 (-ReleaseRenderingDoneEvent@BLTENTRY@@QEAAXXZ.c)
 */

void __fastcall BLTENTRY::Cleanup(BLTENTRY *this, char a2)
{
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
      BLTENTRY::ReleaseRenderingDoneEvent(this);
    if ( *((_QWORD *)this + 6) )
      BLTENTRY::ReleasePresentDoneEvent(this, 0);
  }
  DXGALLOCATIONREFERENCE::AssignNull((BLTENTRY *)((char *)this + 32));
}
