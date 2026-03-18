/*
 * XREFs of ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z @ 0x1400F34FC
 * Callers:
 *     ?vSrcOpaqCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F2DC0 (-vSrcOpaqCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z @ 0x1400F30D4 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z.c)
 *     ?vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F31A0 (-vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall vGetBlendInfo(int a1, struct SURFACE *a2, int a3, struct BLENDINFO *a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rbx
  int *v10; // rdx
  int v11; // edi
  int v12; // r12d
  int v13; // r14d
  int v14; // r15d
  int v15; // ebp
  int v16; // esi
  int v17; // r13d
  unsigned int v18; // eax
  unsigned __int8 *v19; // r9
  void *v20; // r10
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // [rsp+20h] [rbp-88h]
  _DWORD v25[30]; // [rsp+30h] [rbp-78h] BYREF
  int v26; // [rsp+B8h] [rbp+10h]

  memset_0(v25, 0, 0x40uLL);
  v8 = *((_QWORD *)a2 + 16);
  v9 = *((_QWORD *)a2 + 6);
  if ( !v8 )
    v8 = *(_QWORD *)(v9 + 1792);
  v10 = (int *)*(unsigned int *)(v8 + 24);
  if ( ((unsigned __int8)v10 & 2) != 0 )
  {
    v10 = *(int **)(v8 + 112);
    v16 = v10[9] + v10[6] - 8;
    v15 = v10[10] + v10[7] - 8;
    v13 = v10[11] + v10[8] - 8;
    v11 = *v10;
    v14 = v10[1];
    v12 = v10[2];
  }
  else
  {
    v6 = 5LL;
    v11 = 31;
    if ( a1 != 2 )
    {
      v11 = 255;
      v6 = 8LL;
    }
    if ( ((unsigned __int8)v10 & 4) != 0 )
    {
      v14 = v11 << v6;
      v16 = v6 - 8;
      v15 = 2 * v6 - 8;
      v12 = v11 << v6 << v6;
      v13 = v6 + 2 * (v6 - 4);
    }
    else if ( ((unsigned __int8)v10 & 8) != 0 )
    {
      v12 = v11;
      v13 = v6 - 8;
      v14 = v11 << v6;
      v15 = 2 * v6 - 8;
      v11 = v11 << v6 << v6;
      v16 = v6 + 2 * (v6 - 4);
    }
    else
    {
      v12 = v25[8];
      v14 = v25[7];
      v11 = v25[6];
      v13 = v25[5];
      v15 = v25[3];
      v16 = v25[1];
    }
  }
  v17 = 0;
  if ( v16 < 0 )
  {
    v17 = -v16;
    v16 = 0;
  }
  v26 = 0;
  if ( v15 < 0 )
  {
    v26 = -v15;
    v15 = 0;
  }
  v24 = 0;
  if ( v13 < 0 )
  {
    v24 = -v13;
    v13 = 0;
  }
  v18 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v6, v10, v7) + 96) + 13456LL);
  if ( v18 == 1200 )
  {
    v18 = *(_DWORD *)(v9 + 2432);
    if ( !v18 )
      goto LABEL_17;
  }
  if ( v18 < 0x44C )
  {
    v19 = (unsigned __int8 *)&unk_14034FA80;
    v20 = &unk_14034FA80;
    goto LABEL_18;
  }
  if ( v18 < 0x4B0 )
  {
    v19 = (unsigned __int8 *)&unk_1403564E0;
    v20 = &unk_1403563E0;
    goto LABEL_18;
  }
  if ( v18 < 0x514 )
  {
LABEL_17:
    v19 = (unsigned __int8 *)&unk_14034F980;
    v20 = &unk_14034F880;
  }
  else if ( v18 < 0x578 )
  {
    v19 = (unsigned __int8 *)&unk_140350880;
    v20 = &unk_140350780;
  }
  else if ( v18 < 0x5DC )
  {
    v19 = (unsigned __int8 *)&unk_14034FE80;
    v20 = &unk_14034FD80;
  }
  else if ( v18 < 0x640 )
  {
    v19 = (unsigned __int8 *)&unk_140351080;
    v20 = &unk_140350F80;
  }
  else if ( v18 < 0x6A4 )
  {
    v19 = (unsigned __int8 *)&unk_140350080;
    v20 = &unk_14034FF80;
  }
  else if ( v18 < 0x708 )
  {
    v19 = (unsigned __int8 *)&unk_140350A80;
    v20 = &unk_140350980;
  }
  else if ( v18 < 0x76C )
  {
    v19 = (unsigned __int8 *)&unk_140350280;
    v20 = &unk_140350180;
  }
  else if ( v18 < 0x7D0 )
  {
    v19 = (unsigned __int8 *)&unk_140350E80;
    v20 = &unk_140350D80;
  }
  else if ( v18 >= 0x834 )
  {
    if ( v18 < 0x898 )
    {
      v19 = (unsigned __int8 *)&unk_140350C80;
      v20 = &unk_140350B80;
    }
    else
    {
      v19 = (unsigned __int8 *)&unk_140350680;
      v20 = &unk_140350580;
    }
  }
  else
  {
    v19 = (unsigned __int8 *)&unk_14034FC80;
    v20 = &unk_14034FB80;
  }
LABEL_18:
  v21 = v19[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v11) << v17) >> v16)];
  v22 = v19[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v14) << v26) >> v15)];
  v23 = v19[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v12) << v24) >> v13)];
  *((_DWORD *)a4 + 4) = v24;
  *(_DWORD *)a4 = v17;
  *((_DWORD *)a4 + 1) = v16;
  *((_DWORD *)a4 + 2) = v26;
  *((_DWORD *)a4 + 3) = v15;
  *((_DWORD *)a4 + 5) = v13;
  *((_DWORD *)a4 + 6) = v11;
  *((_DWORD *)a4 + 7) = v14;
  *((_DWORD *)a4 + 8) = v12;
  *((_DWORD *)a4 + 9) = v21;
  *((_DWORD *)a4 + 10) = v22;
  *((_DWORD *)a4 + 11) = v23;
  *((_QWORD *)a4 + 6) = v19;
  *((_QWORD *)a4 + 7) = v20;
}
