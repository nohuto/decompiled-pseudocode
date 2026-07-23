/*
 * XREFs of WmipProbeWnodeMethodItem @ 0x1409B0990
 * Callers:
 *     WmipIoControl @ 0x1409B1150 (WmipIoControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WmipProbeWnodeMethodItem(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // edi
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned int v8; // r11d
  int v11; // eax

  if ( a2 >= 0x44 )
  {
    v5 = a1[16];
    v6 = (unsigned int)a1[15];
    v7 = (unsigned int)a1[12];
    if ( (_DWORD)v7 )
    {
      if ( (unsigned int)v7 < 0x44 )
        return (unsigned int)-1073741823;
      if ( ((v7 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != v7 )
        return (unsigned int)-1073741823;
      if ( v7 > (unsigned __int64)a2 - 2 )
        return (unsigned int)-1073741823;
      v8 = v7 + *(unsigned __int16 *)((char *)a1 + v7) + 2;
      if ( v8 < (unsigned int)v7 || v8 > a3 || v8 > a2 )
        return (unsigned int)-1073741823;
      if ( (_DWORD)v6 )
      {
        if ( (unsigned int)v6 < v8 )
          return (unsigned int)-1073741823;
LABEL_15:
        if ( (unsigned int)v6 < 0x44 )
          return (unsigned int)-1073741823;
      }
    }
    else if ( (_DWORD)v6 )
    {
      goto LABEL_15;
    }
    if ( ((v6 + 7) & 0xFFFFFFFFFFFFFFF8uLL) == v6
      && (!(_DWORD)v6 || v5 <= a2 && (unsigned int)v6 <= a2 - v5)
      && a3 >= 0x44
      && (unsigned int)v6 <= a3 )
    {
      if ( (_DWORD)v6 )
      {
        v11 = a1[11];
        if ( (v11 & 0x8000) != 0 && a2 == *a1 && (v11 & 0xFFFF7F7F) == 0 )
          return 0;
      }
    }
    return (unsigned int)-1073741823;
  }
  return 3221225473LL;
}
