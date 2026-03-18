/*
 * XREFs of ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x14001BF50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(DXGADAPTER_REFERENCE *this)
{
  DXGADAPTER *v2; // rcx

  v2 = *(DXGADAPTER **)this;
  if ( v2 )
    DXGADAPTER::ReleaseReference(v2, *((_QWORD *)this + 1));
  *(_QWORD *)this = 0LL;
}
