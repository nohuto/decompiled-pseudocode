/*
 * XREFs of ?IsDisplayingOnVidPnSource@DXGDEVICE@@QEAA_NI@Z @ 0x1401B8CA0
 * Callers:
 *     DXGDEVICE_IsDisplayingOnVidPnSource @ 0x14006C2C0 (DXGDEVICE_IsDisplayingOnVidPnSource.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004FDB4 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1402D8760 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 */

bool __fastcall DXGDEVICE::IsDisplayingOnVidPnSource(DXGDEVICE *this, unsigned int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rcx
  ADAPTER_DISPLAY *v5; // rcx

  if ( DXGDEVICE::IsVidPnSourcePrimaryValid(this, a2) )
    return 1;
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL);
  return v4 && (v5 = *(ADAPTER_DISPLAY **)(v4 + 3120)) != 0LL && ADAPTER_DISPLAY::IsVidPnSourceVisible(v5, v2) != 0;
}
