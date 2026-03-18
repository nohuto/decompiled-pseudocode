/*
 * XREFs of ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x14010E158
 * Callers:
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x14010CA14 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x14010E064 (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x1400D2138 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14010E354 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x14010E464 (-inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z.c)
 *     ?MakeITableMono@@YAHPEAE@Z @ 0x14026CEB4 (-MakeITableMono@@YAHPEAE@Z.c)
 *     ?MakeITable256@@YAHPEAE@Z @ 0x14030B7EC (-MakeITable256@@YAHPEAE@Z.c)
 *     ?MakeITableVGA@@YAHPEAE@Z @ 0x14030B844 (-MakeITableVGA@@YAHPEAE@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall MakeITable(Gre::Base *a1, struct RGBX *a2, int a3)
{
  int v3; // r15d
  int v4; // edi
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // rsi
  struct Gre::Base::SESSION_GLOBALS *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // ebp
  __int64 v13; // r10
  int v14; // r8d
  struct RGBX *v15; // r9
  const void *v16; // rdx
  unsigned int *v17; // rax
  int v18; // r8d
  unsigned int *v19; // r12
  __int64 v21; // r14
  __int64 v22; // [rsp+70h] [rbp+8h]
  HSEMAPHORE v23; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  v4 = a3;
  v6 = (unsigned __int8 *)a1;
  v7 = (unsigned __int8 *)a1;
  if ( a2 )
  {
    v8 = Gre::Base::Globals(a1);
    SEMOBJ<13>::SEMOBJ<13>(&v23, v8);
    v12 = 1;
    v13 = *(_QWORD *)(W32GetSessionState(v10, v9, v11) + 96);
    v22 = v13;
    if ( v4 >= 20 )
    {
      v14 = 0;
      v15 = a2;
      do
      {
        if ( *(_DWORD *)v15 != *((_DWORD *)v8 + v14 % 20 + 920) )
          break;
        ++v14;
        v15 = (struct RGBX *)((char *)v15 + 4);
      }
      while ( v14 < v4 );
      if ( v14 == v4 )
      {
        v16 = *(const void **)(v13 + 20136);
        if ( v16 )
        {
          memmove(v6, v16, 0x8000uLL);
LABEL_13:
          SEMOBJ<13>::vUnlock(&v23);
          return v12;
        }
        v7 = (unsigned __int8 *)Win32AllocPool(0x8000LL, 1886221383LL);
        v4 = 20;
        if ( !v7 )
          v7 = v6;
      }
    }
    v17 = (unsigned int *)Win32AllocPool(0x20000LL, 1886221383LL);
    v19 = v17;
    if ( v17 )
    {
      inv_cmap(v4, a2, v18, v17, v7);
      Win32FreePool(v19);
      v3 = 1;
      if ( v7 != v6 )
      {
        memmove(v6, v7, 0x8000uLL);
        *(_QWORD *)(v22 + 20136) = v7;
      }
    }
    else if ( v7 != v6 )
    {
      Win32FreePool(v7);
    }
    v12 = v3;
    goto LABEL_13;
  }
  switch ( a3 )
  {
    case 2:
      return MakeITableMono((unsigned __int8 *)a1);
    case 16:
      return MakeITableVGA((unsigned __int8 *)a1);
    case 20:
      MakeITableVGA((unsigned __int8 *)a1);
      v12 = 1;
      v21 = 0x8000LL;
      do
      {
        if ( *v6 >= 8u )
          *v6 -= 16;
        ++v6;
        --v21;
      }
      while ( v21 );
      return v12;
    case 256:
      return MakeITable256((unsigned __int8 *)a1);
    default:
      return 0LL;
  }
}
