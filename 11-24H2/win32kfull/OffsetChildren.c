/*
 * XREFs of OffsetChildren @ 0x140030CE0
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14008D624 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x140258878 (xxxScrollWindowEx.c)
 * Callees:
 *     OffsetWindow @ 0x140030E80 (OffsetWindow.c)
 *     IntersectRect @ 0x140035778 (IntersectRect.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     ScaleDpiOffsetWithSubpixel @ 0x1401A83A0 (ScaleDpiOffsetWithSubpixel.c)
 */

__int64 __fastcall OffsetChildren(struct tagWND *a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rbx
  int v10; // ebp
  int v11; // r13d
  __int64 v12; // r8
  __int64 v13; // rcx
  float *v14; // rdx
  int v15; // [rsp+20h] [rbp-48h] BYREF
  int v16; // [rsp+24h] [rbp-44h]
  __int128 v17; // [rsp+28h] [rbp-40h] BYREF
  int v18; // [rsp+70h] [rbp+8h]

  v17 = 0LL;
  result = IsWindowDesktopComposed(a1);
  if ( (_DWORD)result )
    result = DirtyVisRgnTrackers(a1);
  v9 = *((_QWORD *)a1 + 14);
  if ( v9 )
  {
    v10 = 0;
    v18 = a3;
    v11 = a2;
    while ( 1 )
    {
      if ( a4 && !(unsigned int)IntersectRect(&v17, a4, *(_QWORD *)(v9 + 40) + 88LL) )
        goto LABEL_18;
      v12 = *((_QWORD *)a1 + 5);
      v13 = *(_QWORD *)(v9 + 40);
      if ( *(_QWORD *)(v13 + 256) == *(_QWORD *)(v12 + 256) )
      {
        v14 = (float *)(v9 + 224);
        if ( (((unsigned __int16)(*(_DWORD *)(v12 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v13 + 288) >> 8)) & 0x1FF) == 0 )
          goto LABEL_9;
      }
      else
      {
        if ( (*(_DWORD *)(v13 + 288) & 0xF) == 2 && (*(_DWORD *)(v12 + 288) & 0xF) == 2 )
        {
          v14 = (float *)(v9 + 224);
LABEL_9:
          *v14 = *((float *)a1 + 56);
          *(_DWORD *)(v9 + 228) = *((_DWORD *)a1 + 57);
          goto LABEL_10;
        }
        v14 = (float *)(v9 + 224);
      }
      v15 = a2;
      v16 = a3;
      ScaleDpiOffsetWithSubpixel(&v15, v14, (struct tagWND *)v9, a1);
      a2 = v15;
      v10 = 1;
      a3 = v16;
LABEL_10:
      OffsetWindow((tagWND *)v9);
      if ( v10 )
      {
        a3 = v18;
        a2 = v11;
      }
      result = *(_QWORD *)(v9 + 112);
      v10 = 0;
      if ( !result )
      {
LABEL_18:
        while ( 1 )
        {
          result = *(_QWORD *)(v9 + 88);
          if ( result )
            break;
          v9 = *(_QWORD *)(v9 + 104);
          if ( (struct tagWND *)v9 == a1 )
            return result;
        }
      }
      v9 = result;
    }
  }
  return result;
}
