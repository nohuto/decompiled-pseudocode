/*
 * XREFs of ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1400C1408
 * Callers:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400BFAE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1400C14F4 (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 */

__int64 __fastcall cjGetLogicalColorSpace(HCOLORSPACE a1, unsigned int a2, char *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r8
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v3 = 0;
  if ( a2 >= 0x24C && a3 )
  {
    COLORSPACEREF::COLORSPACEREF((COLORSPACEREF *)v8, a1);
    v6 = v9;
    if ( v9 )
    {
      *(_DWORD *)a3 = *(_DWORD *)(v9 + 24);
      *((_DWORD *)a3 + 1) = *(_DWORD *)(v6 + 28);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v6 + 32);
      *((_DWORD *)a3 + 3) = *(_DWORD *)(v6 + 36);
      *((_DWORD *)a3 + 4) = *(_DWORD *)(v6 + 40);
      *(_OWORD *)(a3 + 20) = *(_OWORD *)(v6 + 44);
      *(_OWORD *)(a3 + 36) = *(_OWORD *)(v6 + 60);
      *((_DWORD *)a3 + 13) = *(_DWORD *)(v6 + 76);
      *((_DWORD *)a3 + 14) = *(_DWORD *)(v6 + 80);
      *((_DWORD *)a3 + 15) = *(_DWORD *)(v6 + 84);
      *((_DWORD *)a3 + 16) = *(_DWORD *)(v6 + 88);
      StringCchCopyW(a3 + 68, 260LL, (char *)(v6 + 92));
      v3 = 592;
      if ( a2 >= 0x250 )
        *((_DWORD *)a3 + 147) = *(_DWORD *)(v9 + 612);
      else
        v3 = 588;
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v8);
  }
  return v3;
}
