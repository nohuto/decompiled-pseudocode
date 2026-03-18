/*
 * XREFs of ?UpdateHandleInstance@DXGPROCESS@@QEAAIII@Z @ 0x14003DAA0
 * Callers:
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1401DCBEC (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPROCESS::UpdateHandleInstance(DXGPROCESS *this, unsigned int a2, __int16 a3)
{
  char *v3; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // r9d
  __int64 v9; // r8
  int v10; // ecx
  unsigned int v11; // edx

  v3 = (char *)this + 248;
  DXGPUSHLOCK::AcquireExclusive((DXGPROCESS *)((char *)this + 248));
  v7 = 0;
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( v8 < *((_DWORD *)this + 74) )
  {
    v9 = *((_QWORD *)this + 35);
    v10 = *(_DWORD *)(v9 + 16LL * v8 + 8);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60) && (v10 & 0x2000) == 0 && (v10 & 0x1F) != 0 )
    {
      *(_DWORD *)(v9 + 16LL * v8 + 8) = v10 ^ ((unsigned __int16)v10 ^ (unsigned __int16)(a3 << 7)) & 0x1F80;
      v11 = *(_DWORD *)(*((_QWORD *)this + 35) + 16LL * v8 + 8);
      v7 = (v11 >> 7) & 0x3F | ((v8 | ((v11 & 0xFFFFFFE0) << 19)) << 6);
    }
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
