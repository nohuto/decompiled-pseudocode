/*
 * XREFs of HmgFreeDcAttrFastOpt @ 0x1401C4EA0
 * Callers:
 *     HmgFreeDcAttr @ 0x1400BF91C (HmgFreeDcAttr.c)
 *     ?FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x1401C577C (-FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C1930 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall HmgFreeDcAttrFastOpt(_QWORD *a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v5; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v7; // rdi
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  HSEMAPHORE v12; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = GreGetCurrentThread((__int64)a1);
  if ( a2 && CurrentThread )
  {
    if ( !*((_QWORD *)CurrentThread + 4) )
    {
      *((_QWORD *)CurrentThread + 4) = a2;
      return;
    }
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v5);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      if ( *CurrentProcessWin32Process )
      {
        SEMOBJ<20>::SEMOBJ<20>(&v12, a1);
        v8 = v7 + 24;
        v9 = v7[24];
        if ( (_QWORD *)v9 == v7 + 24 || *(_DWORD *)(v9 + 16) == 11 )
        {
          v9 = PALLOCNOZ(112LL, 0x66636447u);
          if ( !v9 )
          {
LABEL_14:
            SEMOBJ<20>::vUnlock(&v12);
            return;
          }
          v10 = *v8;
          if ( *(__int64 **)(*v8 + 8) != v8 )
            __fastfail(3u);
          *(_QWORD *)v9 = v10;
          *(_QWORD *)(v9 + 8) = v8;
          *(_QWORD *)(v10 + 8) = v9;
          *v8 = v9;
          *(_DWORD *)(v9 + 16) = 0;
        }
        v11 = *(unsigned int *)(v9 + 16);
        *(_DWORD *)(v9 + 16) = v11 + 1;
        *(_QWORD *)(v9 + 8 * v11 + 24) = a2;
        v7[5] = a2;
        goto LABEL_14;
      }
    }
  }
}
