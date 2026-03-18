/*
 * XREFs of ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1401FB214
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1400B7F2C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 * Callees:
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x140114148 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

PFFMEMOBJ *__fastcall PFFMEMOBJ::PFFMEMOBJ(PFFMEMOBJ *this, struct PFF *Src, int a3, int a4, struct PFT *a5)
{
  char v7; // si
  void *v9; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  _QWORD *v16; // rax
  __int64 v17; // rax

  *((_DWORD *)this + 5) = a4;
  *((_WORD *)this + 8) = 0;
  *((_DWORD *)this + 2) = 0;
  v7 = a4;
  v9 = (void *)PALLOCMEM(*(_DWORD *)Src, 1717989447LL);
  *(_QWORD *)this = v9;
  if ( v9 )
  {
    memmove(v9, Src, *(_QWORD *)Src);
    PushThreadGuardedObject(*(_QWORD *)this + 168LL, *(_QWORD *)this, CleanUpPFF);
    v11 = *((_QWORD *)Src + 3);
    if ( v11 )
      *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this + v11 - (_QWORD)Src;
    v12 = *((_QWORD *)Src + 5);
    if ( v12 )
      *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + v12 - (_QWORD)Src;
    memset_0((void *)(*(_QWORD *)this + 224LL), 0, 8LL * *((unsigned int *)Src + 54));
    v13 = *((_DWORD *)Src + 13);
    v14 = a3 | 0x200;
    if ( (v13 & 0x200) == 0 )
      v14 = a3;
    *(_QWORD *)(*(_QWORD *)this + 200LL) = *((_QWORD *)Src + 25);
    *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 8LL) = 0LL;
    *(_DWORD *)(*(_QWORD *)this + 216LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 68LL) = 0;
    v15 = v14 | 0x1000;
    if ( (v13 & 0x1000) == 0 )
      v15 = v14;
    *(_DWORD *)(*(_QWORD *)this + 52LL) = v15;
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
    v16 = (_QWORD *)(*(_QWORD *)this + 72LL);
    v16[1] = v16;
    *v16 = v16;
    *(_QWORD *)(*(_QWORD *)this + 136LL) = a5;
    *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
    v17 = *(_QWORD *)this;
    if ( (v7 & 0x1C) != 0 )
    {
      *(_DWORD *)(v17 + 56) = 0;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
      PFFOBJ::bAddPvtData(this, v7);
    }
    else if ( (v7 & 0x20) != 0 )
    {
      *(_DWORD *)(v17 + 56) = 0;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
    }
    else
    {
      *(_DWORD *)(v17 + 56) = 1;
      *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
    }
    *((_QWORD *)Src + 20) = *(_QWORD *)this;
    *(_QWORD *)(*(_QWORD *)this + 160LL) = Src;
  }
  return this;
}
