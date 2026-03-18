/*
 * XREFs of ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x140190A70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140047EB8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CPTPEngine::ProcessEnvironment(CPTPEngine *this)
{
  int v2; // ecx
  __int64 v3; // r8
  int v4; // ecx
  int v5; // r9d
  unsigned int v6; // r9d
  unsigned __int64 v7; // rcx
  double v8; // xmm0_8
  unsigned __int64 v9; // rcx
  double v10; // xmm0_8
  unsigned __int64 v11; // rcx
  int v12; // r9d
  int v13; // edx
  int v14; // edx
  __int128 v16; // [rsp+20h] [rbp-18h]

  if ( !*((_BYTE *)this + 808) )
  {
    (*(void (__fastcall **)(CPTPEngine *))(*(_QWORD *)this + 56LL))(this);
    *((_BYTE *)this + 808) = 1;
  }
  v2 = *((_DWORD *)this + 7);
  v16 = *((_OWORD *)this + 5);
  *((_OWORD *)this + 188) = v16;
  if ( v2 )
  {
    *((_DWORD *)this + 752) = 0;
    *((_DWORD *)this + 754) = DWORD2(v16) - v16;
  }
  v3 = *((_QWORD *)this + 12);
  v4 = v2 << 16;
  v5 = *((_DWORD *)this + 768) ^ v4;
  *((_OWORD *)this + 189) = *((_OWORD *)this + 4);
  v6 = (v4 ^ v5 & 0xFFFEFFFF) & 0xE7FFFFFF;
  v7 = v3 * *((unsigned int *)this + 770);
  v8 = (double)*((int *)this + 807);
  *((_DWORD *)this + 768) = v6;
  *((_QWORD *)this + 363) = v7 / 0x3E8;
  v9 = v3 * *((unsigned int *)this + 781);
  *((double *)this + 367) = v8 / 1000.0;
  v10 = (double)*((int *)this + 806) / 1000.0;
  *((_QWORD *)this + 364) = v9 / 0x3E8;
  v11 = v3 * *((unsigned int *)this + 793);
  *((double *)this + 368) = v10;
  *((_QWORD *)this + 365) = v11 / 0x3E8;
  *((_QWORD *)this + 366) = v3 * (unsigned __int64)*((unsigned int *)this + 817) / 0x3E8;
  if ( !IsRectEmptyInl((const struct tagRECT *)((char *)this + 108)) )
  {
    v12 |= 0x8000000u;
    *((_DWORD *)this + 768) = v12;
  }
  v13 = v12;
  if ( *((_DWORD *)this + 42) && !IsRectEmptyInl((const struct tagRECT *)((char *)this + 124)) )
    v13 |= 0x10000000u;
  v14 = v13 | 0x20000000;
  *((_DWORD *)this + 768) = v14;
  if ( *(_QWORD *)((char *)this + 140) != *((_QWORD *)this + 4)
    || *(_QWORD *)((char *)this + 148) != *((_QWORD *)this + 5) )
  {
    *((_DWORD *)this + 768) = v14 & 0xDFFFFFFF;
  }
  return 0LL;
}
