/*
 * XREFs of ?DestroyLiveMigrationState@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ @ 0x14018A80C
 * Callers:
 *     ?DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x140218B10 (-DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ.c)
 *     ?EndLiveMigration@DXGK_VIRTUAL_GPU_GPUP@@UEAAJI@Z @ 0x1403D60A0 (-EndLiveMigration@DXGK_VIRTUAL_GPU_GPUP@@UEAAJI@Z.c)
 * Callees:
 *     ?Destroy@DXGK_TRANSPORT_BUFFER@@QEAAXXZ @ 0x1401890AC (-Destroy@DXGK_TRANSPORT_BUFFER@@QEAAXXZ.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::DestroyLiveMigrationState(DXGK_VIRTUAL_GPU_GPUP *this)
{
  _BYTE *v2; // rsi
  __int64 v3; // rdi

  v2 = (char *)this + 272;
  v3 = 0LL;
  do
  {
    if ( *v2 )
      DXGK_TRANSPORT_BUFFER::Destroy((DXGK_VIRTUAL_GPU_GPUP *)((char *)this + 48 * v3 + 232));
    v3 = (unsigned int)(v3 + 1);
    v2 += 48;
  }
  while ( (unsigned int)v3 < 2 );
  *((_DWORD *)this + 82) = 0;
  *((_WORD *)this + 166) = 0;
  *((_BYTE *)this + 334) = 0;
  *((_BYTE *)this + 352) = 0;
}
