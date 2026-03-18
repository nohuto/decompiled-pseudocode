/*
 * XREFs of ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x14010F2DC
 * Callers:
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x14010EFB4 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x14011F570 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x140311920 (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XLATE::vCheckForTrivial(XLATE *this)
{
  int v1; // r10d
  unsigned int v3; // r9d
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // edx
  int v8; // ebx
  int v9; // r9d
  int v10; // esi
  int v11; // edi
  int v12; // r11d
  int v13; // ecx
  int v14; // eax
  int *v15; // rdx
  int *v16; // rcx
  __int64 v17; // rax

  v1 = *((_DWORD *)this + 1);
  if ( (v1 & 9) == 0 )
  {
    v3 = *((_DWORD *)this + 3);
    v4 = 0;
    v5 = *((_QWORD *)this + 5);
    if ( v3 )
    {
      if ( !v5 || (v17 = *((_QWORD *)this + 6)) == 0 || *(_DWORD *)(v5 + 28) == *(_DWORD *)(v17 + 28) )
      {
        while ( v4 < v3 )
        {
          if ( *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v4) != v4 )
            return;
          ++v4;
        }
        goto LABEL_15;
      }
    }
    else
    {
      v6 = *((_QWORD *)this + 6);
      if ( v5 && v6 && !*(_DWORD *)(v6 + 28) )
      {
        v7 = *(_DWORD *)(v5 + 24);
        v8 = 65280;
        v9 = 16711680;
        if ( (v7 & 2) != 0 )
        {
          v15 = *(int **)(v5 + 112);
          v11 = *v15;
          v10 = v15[1];
          v12 = v15[2];
        }
        else
        {
          v10 = 65280;
          if ( (v7 & 4) != 0 )
          {
            v11 = 255;
            v12 = 16711680;
          }
          else
          {
            v11 = 16711680;
            v12 = 255;
          }
        }
        v13 = *(_DWORD *)(v6 + 24);
        if ( (v13 & 2) != 0 )
        {
          v16 = *(int **)(v6 + 112);
          v14 = *v16;
          v8 = v16[1];
          v9 = v16[2];
        }
        else if ( (v13 & 4) != 0 )
        {
          v14 = 255;
        }
        else
        {
          v14 = 16711680;
          v9 = 255;
        }
        if ( v11 == v14 && v10 == v8 && v12 == v9 )
LABEL_15:
          *((_DWORD *)this + 1) = v1 | 1;
      }
    }
  }
}
