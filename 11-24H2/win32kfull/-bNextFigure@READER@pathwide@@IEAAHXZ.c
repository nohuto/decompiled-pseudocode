/*
 * XREFs of ?bNextFigure@READER@pathwide@@IEAAHXZ @ 0x1400EBD9C
 * Callers:
 *     ??0LINER@pathwide@@QEAA@AEAVEPATHOBJ@@@Z @ 0x1400EB9A4 (--0LINER@pathwide@@QEAA@AEAVEPATHOBJ@@@Z.c)
 *     ?vNextPoint@LINER@pathwide@@AEAAXXZ @ 0x1400EBA1C (-vNextPoint@LINER@pathwide@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall pathwide::READER::bNextFigure(pathwide::READER *this)
{
  unsigned int v2; // ebx
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = *((_DWORD *)this + 10) & 1;
  if ( v2 )
  {
    v3 = EPATHOBJ::bEnum(*(EPATHOBJ **)this, (struct _PATHDATA *)((char *)this + 8));
    v4 = *((_DWORD *)this + 10);
    v5 = v4 | 1;
    v6 = v4 & 0xFFFFFFFE;
    if ( !v3 )
      v5 = v6;
    *((_DWORD *)this + 10) = v5;
    v7 = *((unsigned int *)this + 3);
    v8 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 3) = v8;
    *((_QWORD *)this + 4) = v8 + 8 * v7;
    v2 &= -((_DWORD)v7 != 0);
  }
  return v2;
}
