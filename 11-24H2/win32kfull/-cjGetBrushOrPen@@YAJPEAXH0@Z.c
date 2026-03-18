/*
 * XREFs of ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1400E358C
 * Callers:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 * Callees:
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400E3FF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400E4080 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1400E4420 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 */

__int64 __fastcall cjGetBrushOrPen(HBRUSH a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v5; // edi
  struct BRUSH *v6; // rsi
  int v7; // eax
  struct BRUSH *v8; // rcx
  int v9; // eax
  struct BRUSH *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // ebp
  int v15; // r15d
  _DWORD *v16; // rdi
  _DWORD *v17; // r14
  struct BRUSH *v18[6]; // [rsp+20h] [rbp-48h] BYREF

  v5 = 0;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v18, a1);
  v6 = v18[0];
  if ( !v18[0] )
  {
    EngSetLastError(0x57u);
    goto LABEL_10;
  }
  v7 = *((_DWORD *)v18[0] + 10);
  if ( (v7 & 0x800) != 0 )
  {
    bSyncBrushObj(v18[0]);
    if ( a3 )
    {
      if ( a2 < 0x10 )
        goto LABEL_10;
      v11 = v18[0];
      if ( a2 == 32 && *((_DWORD *)v18[0] + 44) == 5 )
      {
        a3[1] = 0LL;
        a3[2] = 0LL;
        *((_DWORD *)a3 + 6) = 0;
        v5 = 32;
        *a3 = 5LL;
        goto LABEL_10;
      }
      *(_DWORD *)a3 = *((_DWORD *)v18[0] + 44);
      *((_DWORD *)a3 + 1) = *((_DWORD *)v11 + 42);
      *((_DWORD *)a3 + 2) = 0;
      *((_DWORD *)a3 + 3) = *((_DWORD *)v11 + 19);
    }
    goto LABEL_9;
  }
  if ( (v7 & 0x400) != 0 )
  {
    v13 = *((unsigned int *)v18[0] + 44);
    if ( (*((_BYTE *)v18[0] + 176) & 0xF) == 7 )
      v14 = *((_DWORD *)v18[0] + 45);
    else
      v14 = 0;
    v15 = 4 * v14 + 28;
    if ( a3 )
    {
      if ( (int)a2 < v15 )
        goto LABEL_10;
      *(_DWORD *)a3 = v13;
      *((_DWORD *)a3 + 1) = *((_DWORD *)v6 + 42);
      *((_DWORD *)a3 + 6) = v14;
      if ( v14 )
      {
        v16 = (_DWORD *)*((_QWORD *)v6 + 19);
        v17 = (_DWORD *)a3 + 7;
        do
        {
          if ( (*((_DWORD *)v6 + 44) & 0xF0000) != 0 )
            bFToL(v13, v17, 6LL);
          else
            *v17 = *v16;
          ++v17;
          ++v16;
          --v14;
        }
        while ( v14 );
      }
      *((_DWORD *)a3 + 2) = *((_DWORD *)v6 + 47);
      *((_DWORD *)a3 + 3) = *((_DWORD *)v6 + 19);
      a3[2] = *((_QWORD *)v6 + 20);
    }
    v5 = v15;
  }
  else
  {
    if ( !a3 )
    {
LABEL_9:
      v5 = 16;
      goto LABEL_10;
    }
    if ( a2 >= 0x10 )
    {
      bSyncBrushObj(v18[0]);
      v8 = v18[0];
      v9 = *((_DWORD *)v18[0] + 10);
      if ( (v9 & 0x10) != 0 )
      {
        *(_DWORD *)a3 = 0;
        *((_DWORD *)a3 + 1) = *((_DWORD *)v8 + 19);
LABEL_8:
        a3[1] = 0LL;
        goto LABEL_9;
      }
      if ( (v9 & 0x40) != 0 )
      {
        *a3 = 3LL;
      }
      else
      {
        if ( (v9 & 0x20) != 0 )
        {
          *(_DWORD *)a3 = 2;
          *((_DWORD *)a3 + 1) = *((_DWORD *)v8 + 19);
          v12 = *((unsigned int *)v8 + 20);
LABEL_19:
          a3[1] = v12;
          goto LABEL_9;
        }
        if ( (v9 & 0x100) != 0 )
        {
          *a3 = 1LL;
          goto LABEL_8;
        }
        if ( (v9 & 0x80u) == 0 )
          goto LABEL_9;
        *(_DWORD *)a3 = 5;
        *((_DWORD *)a3 + 1) = *((_DWORD *)v8 + 19);
      }
      v12 = *((_QWORD *)v8 + 4);
      goto LABEL_19;
    }
  }
LABEL_10:
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v18);
  return v5;
}
