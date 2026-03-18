/*
 * XREFs of ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x14012A098
 * Callers:
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x14012A080 (PDEVOBJ_bDisableHalftoneWrap.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1401277C8 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     HT_DestroyDeviceHalftoneInfo @ 0x14012A1C0 (HT_DestroyDeviceHalftoneInfo.c)
 */

__int64 __fastcall PDEVOBJ::bDisableHalftone(PDEVOBJ *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r14
  unsigned int v5; // edi
  char v6; // bp
  _QWORD *v7; // rcx
  int v8; // ebx
  int v9; // eax
  __int64 i; // rbx
  struct _GRETHREAD *CurrentThread; // r15
  int v13; // ebx
  int v14; // eax

  v2 = PDEVOBJ::pDevHTInfo(this);
  v3 = *(_QWORD *)this;
  v4 = v2;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x100) != 0 )
  {
    for ( i = 1456LL; i < 1504; i += 8LL )
      bDeleteSurface(*(_QWORD *)(i + *(_QWORD *)this));
  }
  v5 = 1;
  v6 = 1;
  v7 = *(_QWORD **)(*(_QWORD *)this + 1512LL);
  if ( v7 )
  {
    v8 = bDeletePalette(*v7);
    v9 = HT_DestroyDeviceHalftoneInfo(*(_QWORD *)(*(_QWORD *)this + 1512LL));
    if ( !v8 || !v9 )
      v6 = 0;
  }
  LOBYTE(v7) = 1;
  if ( v4 != *(_QWORD **)(*(_QWORD *)this + 1512LL) )
  {
    CurrentThread = GreGetCurrentThread((__int64)v7, v3);
    v13 = bDeletePalette(*v4);
    v14 = HT_DestroyDeviceHalftoneInfo(v4);
    LOBYTE(v7) = v13 && v14;
    *((_QWORD *)CurrentThread + 35) = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 1512LL) = 0LL;
  if ( !v6 || !(_BYTE)v7 )
    return 0;
  return v5;
}
