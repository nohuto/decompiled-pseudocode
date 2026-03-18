/*
 * XREFs of ?CheckForDeviceLost@CD3DDevice@@AEAAXXZ @ 0x1801E2C40
 * Callers:
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x180030658 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::CheckForDeviceLost(CD3DDevice *this)
{
  int v2; // eax

  if ( !*((_DWORD *)this + 278) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 69) + 312LL))(*((_QWORD *)this + 69));
    if ( v2 < 0 && !*((_DWORD *)this + 278) )
      *((_DWORD *)this + 278) = v2;
  }
}
