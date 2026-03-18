/*
 * XREFs of ?GrepScaleWindowExtEx@@YAHAEAVXDCOBJ@@HHHHPEAUtagSIZE@@@Z @ 0x1401C56D4
 * Callers:
 *     NtGdiScaleWindowExtEx @ 0x1401C5490 (NtGdiScaleWindowExtEx.c)
 * Callees:
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1401C59C8 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GrepScaleWindowExtEx(DC **a1, int a2, int a3, int a4, int a5, struct tagSIZE *a6)
{
  unsigned int v7; // r9d
  _DWORD *v9; // r8
  int v10; // esi
  int v11; // edi
  int v12; // ebx
  __int64 v13; // r11

  v7 = 0;
  if ( a6 )
  {
    *a6 = *(struct tagSIZE *)(*((_QWORD *)*a1 + 122) + 316LL);
    if ( (*(_DWORD *)(*((_QWORD *)*a1 + 122) + 108LL) & 1) != 0 )
      a6->cx = -a6->cx;
  }
  v9 = (_DWORD *)*((_QWORD *)*a1 + 122);
  if ( v9[26] <= 6u )
    return 1;
  if ( a3 )
  {
    if ( a5 )
    {
      v10 = v9[79] * a2;
      if ( v10 != 0x80000000 || a3 != -1 )
      {
        v11 = v9[80] * a4;
        if ( v11 != 0x80000000 || a5 != -1 )
        {
          v12 = v10 / a3;
          if ( v12 )
          {
            if ( v11 / a5 )
            {
              v9[79] = v12;
              *(_DWORD *)(*((_QWORD *)*a1 + 122) + 320LL) = v11 / a5;
              DC::MirrorWindowOrg(*a1);
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 976LL) + 340LL) |= 0x4090u;
              return 1;
            }
          }
        }
      }
    }
  }
  return v7;
}
