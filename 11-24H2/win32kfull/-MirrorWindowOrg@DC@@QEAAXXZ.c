/*
 * XREFs of ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1401C59C8
 * Callers:
 *     GreSetWindowOrg @ 0x1401C555C (GreSetWindowOrg.c)
 *     ?GrepScaleWindowExtEx@@YAHAEAVXDCOBJ@@HHHHPEAUtagSIZE@@@Z @ 0x1401C56D4 (-GrepScaleWindowExtEx@@YAHAEAVXDCOBJ@@HHHHPEAUtagSIZE@@@Z.c)
 *     NtGdiScaleViewportExtEx @ 0x1401C57F0 (NtGdiScaleViewportExtEx.c)
 *     NtGdiMirrorWindowOrg @ 0x1401C5980 (NtGdiMirrorWindowOrg.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::MirrorWindowOrg(DC *this)
{
  _DWORD *v1; // r8
  int v2; // r9d
  int v3; // eax
  int v4; // eax

  v1 = (_DWORD *)*((_QWORD *)this + 122);
  if ( (v1[27] & 1) == 0 )
  {
    v4 = v1[76];
    goto LABEL_5;
  }
  v2 = v1[83];
  if ( v2 )
  {
    v3 = v1[79] * (*((_DWORD *)this + 258) - *((_DWORD *)this + 260) + 1);
    if ( v3 != 0x80000000 || v2 != -1 )
    {
      v4 = v1[76] + v3 / v2;
LABEL_5:
      v1[77] = v4;
    }
  }
}
