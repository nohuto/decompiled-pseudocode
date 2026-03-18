/*
 * XREFs of ?CheckOutput@DXGPRESENT@@QEAAXII@Z @ 0x1403A1870
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPRESENT::CheckOutput(DXGPRESENT *this, int a2, int a3)
{
  _DWORD *v3; // rax

  if ( (*((_DWORD *)this + 18) & 0x10000) != 0 )
  {
    v3 = (_DWORD *)((char *)this + 436);
    if ( *((_DWORD *)this + 108) != a2 || *v3 != a3 )
    {
      *((_DWORD *)this + 1) |= 0x100u;
      *((_DWORD *)this + 108) = a2;
      *v3 = a3;
    }
  }
}
