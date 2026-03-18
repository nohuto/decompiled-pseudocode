/*
 * XREFs of ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1401902B8
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x140190C3C (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::CrossedTPDragThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3,
        int a4)
{
  unsigned int v4; // ebx
  int v6; // r10d
  _DWORD *v7; // r9
  __int64 v8; // r11
  int v9; // eax
  bool v10; // r10
  int v11; // r9d
  int v12; // r10d
  int v13; // r9d
  int v14; // r11d
  unsigned int v15; // r10d
  __int64 v16; // r9
  unsigned int v17; // r11d
  __int64 v18; // rax

  v4 = 0;
  if ( (*((_DWORD *)this + 821) & 0x10) == 0 || *((_DWORD *)this + 699) )
  {
    v10 = 0;
  }
  else
  {
    v6 = 0;
    v7 = (_DWORD *)((char *)this + 816);
    v8 = 6LL;
    do
    {
      if ( (*v7 & 1) != 0 )
      {
        v9 = v7[1];
        if ( (v9 & 1) != 0 || (v9 & 2) != 0 )
          ++v6;
      }
      v7 += 82;
      --v8;
    }
    while ( v8 );
    v10 = v6 == 1;
  }
  if ( *((_DWORD *)this + 705) && *((_QWORD *)a2 + 8) > *((_QWORD *)this + 362) )
    goto LABEL_20;
  v11 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x800000) == 0
    || (*((_DWORD *)this + 768) & 1) != 0 && *((_QWORD *)a2 + 8) <= *((_QWORD *)this + 362)
    || !v10 )
  {
    goto LABEL_25;
  }
  if ( (v11 & 0x200000) != 0 )
  {
    if ( (int)HIDWORD(*((_QWORD *)a2 + 2)) >= *((_DWORD *)this + 753) )
    {
LABEL_19:
      v12 = *((_DWORD *)this + 794);
      v13 = *((_DWORD *)this + 795);
      v14 = *((_DWORD *)this + 796);
LABEL_21:
      v15 = v12 * v12;
      v16 = (unsigned int)(v13 * v13);
      v17 = v14 * v14;
      goto LABEL_27;
    }
LABEL_20:
    v12 = *((_DWORD *)this + 789);
    v13 = *((_DWORD *)this + 791);
    v14 = *((_DWORD *)this + 792);
    goto LABEL_21;
  }
  if ( (v11 & 0x400000) != 0 )
  {
    if ( (int)HIDWORD(*((_QWORD *)a2 + 2)) >= *((_DWORD *)this + 753) )
      goto LABEL_19;
    v15 = *((_DWORD *)this + 815) * *((_DWORD *)this + 815);
    v16 = (unsigned int)(*((_DWORD *)this + 816) * *((_DWORD *)this + 816));
  }
  else
  {
LABEL_25:
    v16 = *((unsigned int *)this + 780);
    v15 = *((_DWORD *)this + 779);
  }
  v17 = v16;
LABEL_27:
  if ( a4 )
    v18 = *((_QWORD *)a2 + 4);
  else
    v18 = *((_QWORD *)a2 + 2);
  if ( SHIDWORD(v18) < a3.y )
    v16 = v17;
  LOBYTE(v4) = v16 * ((int)v18 - a3.x) * ((int)v18 - a3.x)
             + (unsigned __int64)v15 * (HIDWORD(v18) - a3.y) * (HIDWORD(v18) - a3.y) >= v16 * (unsigned __int64)v15;
  return v4;
}
