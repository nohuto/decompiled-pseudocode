/*
 * XREFs of HmgFreeObjectAttr @ 0x140039540
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x14000D300 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x14002E270 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiCreateRectRgn @ 0x140039620 (NtGdiCreateRectRgn.c)
 *     GreSetBrushOwner @ 0x1400857A0 (GreSetBrushOwner.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall HmgFreeObjectAttr(__int64 a1)
{
  struct _GRETHREAD *CurrentThread; // rax
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  HSEMAPHORE v9; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = GreGetCurrentThread();
  if ( a1 && CurrentThread )
  {
    if ( !*((_QWORD *)CurrentThread + 5) )
    {
      *((_QWORD *)CurrentThread + 5) = a1;
      return;
    }
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process();
    v4 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      if ( *CurrentProcessWin32Process )
      {
        SEMOBJ<20>::SEMOBJ<20>(&v9);
        v5 = v4 + 26;
        v6 = v4[26];
        if ( (_QWORD *)v6 == v4 + 26 || *(_DWORD *)(v6 + 16) == 170 )
        {
          v6 = PALLOCNOZ(1384LL, 0x66616247u);
          if ( !v6 )
            goto LABEL_9;
          v8 = *v5;
          if ( *(__int64 **)(*v5 + 8) != v5 )
            __fastfail(3u);
          *(_QWORD *)v6 = v8;
          *(_QWORD *)(v6 + 8) = v5;
          *(_QWORD *)(v8 + 8) = v6;
          *v5 = v6;
          *(_DWORD *)(v6 + 16) = 0;
        }
        v7 = *(unsigned int *)(v6 + 16);
        *(_DWORD *)(v6 + 16) = v7 + 1;
        *(_QWORD *)(v6 + 8 * v7 + 24) = a1;
        v4[6] = a1;
LABEL_9:
        SEMOBJ<20>::vUnlock(&v9);
      }
    }
  }
}
