/*
 * XREFs of ?DisableReferenceDmaBuffer@DXGCONTEXT@@QEAAEXZ @ 0x140041C80
 * Callers:
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1403337AC (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     <none>
 */

char __fastcall DXGCONTEXT::DisableReferenceDmaBuffer(DXGCONTEXT *this)
{
  char v1; // dl

  v1 = 1;
  if ( (*((_DWORD *)this + 56) & 1) == 0
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3032LL) & 2) == 0 )
  {
    return 0;
  }
  return v1;
}
