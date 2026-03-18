/*
 * XREFs of ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1401B8838
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

void __fastcall AsyncWindowPos(struct tagSMWP *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  int v3; // r14d
  struct tagTHREADINFO *v4; // r13
  struct tagQ **v5; // rdi
  int v6; // ebx
  int v7; // r8d
  _QWORD *v8; // r15
  _QWORD *i; // rdx
  LARGE_INTEGER v10; // rax
  void *QuadPart; // rbp
  _QWORD *v12; // rdx
  _OWORD *v13; // r8
  _OWORD *v14; // rcx

  v2 = (_QWORD *)*((_QWORD *)a1 + 5);
  v3 = *((_DWORD *)a1 + 7);
  v4 = PtiCurrent((__int64)a1, a2);
  while ( v3 )
  {
    if ( *v2 && (v5 = (struct tagQ **)v2[13], v5[59] != *((struct tagQ **)v4 + 59)) )
    {
      v6 = 0;
      v7 = v3 - 1;
      v8 = v5 + 59;
      for ( i = v2; v7 >= 0; --v7 )
      {
        if ( *i && *(_QWORD *)(i[13] + 472LL) == *v8 )
          ++v6;
        i += 21;
      }
      v10.QuadPart = Win32AllocPoolZInit(168LL * v6 + 48, 2004054869LL);
      QuadPart = (void *)v10.QuadPart;
      v12 = v2;
      if ( v10.QuadPart )
      {
        *(_DWORD *)(v10.QuadPart + 28) = v6;
        v13 = (_OWORD *)(v10.QuadPart + 48);
        for ( *(_QWORD *)(v10.QuadPart + 40) = v10.QuadPart + 48; v6; v12 += 21 )
        {
          if ( *v12 && *(struct tagQ **)(v12[13] + 472LL) == v5[59] )
          {
            --v6;
            *v13 = *(_OWORD *)v12;
            v14 = v13 + 8;
            v13[1] = *((_OWORD *)v12 + 1);
            v13[2] = *((_OWORD *)v12 + 2);
            v13[3] = *((_OWORD *)v12 + 3);
            v13[4] = *((_OWORD *)v12 + 4);
            v13[5] = *((_OWORD *)v12 + 5);
            v13[6] = *((_OWORD *)v12 + 6);
            v13 = (_OWORD *)((char *)v13 + 168);
            *(v14 - 1) = *((_OWORD *)v12 + 7);
            *v14 = *((_OWORD *)v12 + 8);
            v14[1] = *((_OWORD *)v12 + 9);
            *((_QWORD *)v14 + 4) = v12[20];
            *v12 = 0LL;
          }
        }
        if ( !(unsigned int)PostEventMessageEx((struct tagTHREADINFO *)v5, v5[59], 3u, 0LL, 0, v10, (__int64)v5, 0LL) )
          Win32FreePool(QuadPart);
      }
      else
      {
        while ( v6 )
        {
          if ( *(_QWORD *)(v12[13] + 472LL) == *v8 )
          {
            *v12 = 0LL;
            --v6;
          }
          v12 += 21;
        }
      }
    }
    else
    {
      v2 += 21;
      --v3;
    }
  }
}
