/*
 * XREFs of ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1400EC3F0
 * Callers:
 *     vMatchAPal @ 0x1401C27E0 (vMatchAPal.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1401C3970 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vUpdateTime(XEPALOBJ *this)
{
  signed __int32 v2; // ecx
  __int64 v3; // rdx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(this) + 88) + 3672LL));
  *(_DWORD *)(*(_QWORD *)this + 32LL) = v2;
  v3 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v3 != *(_QWORD *)this )
    *(_DWORD *)(v3 + 32) = v2;
}
