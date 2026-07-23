/*
 * XREFs of BgpTxtCreateRegion @ 0x140BB4908
 * Callers:
 *     BgpDisplayCharacterGetContext @ 0x140BB2860 (BgpDisplayCharacterGetContext.c)
 *     ResFwConfigureDisplayStringResources @ 0x140BB38C4 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x140BB3CFC (AnFwConfigureProgressResources.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     BgpGxFillRectangle @ 0x14046F3E0 (BgpGxFillRectangle.c)
 *     BgpGetResolution @ 0x1404D206C (BgpGetResolution.c)
 *     BgpFoGetTextMetrics @ 0x1404D344C (BgpFoGetTextMetrics.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     BgpGxRectangleCreate @ 0x140BB5E78 (BgpGxRectangleCreate.c)
 *     BgpGxRectangleDestroy @ 0x140BB5F04 (BgpGxRectangleDestroy.c)
 *     BgpFoGetFontHandle @ 0x140BB72B0 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall BgpTxtCreateRegion(_DWORD *a1, _DWORD *a2, __int64 a3, _QWORD *a4, __int64 *a5, char a6)
{
  __int64 v6; // r15
  __int64 v7; // r14
  int FontHandle; // edi
  _DWORD *v11; // rdx
  void *Memory; // rax
  __int64 v13; // rbx
  unsigned int *v14; // r12
  __int64 v15; // rcx
  _QWORD *v16; // r13
  unsigned int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+28h] [rbp-38h] BYREF
  __int64 v24; // [rsp+30h] [rbp-30h]
  __int64 v25; // [rsp+38h] [rbp-28h]
  _DWORD v26[6]; // [rsp+48h] [rbp-18h] BYREF

  v6 = 0LL;
  v24 = 0LL;
  v7 = 0LL;
  FontHandle = 0;
  v22 = 0LL;
  v23 = 0LL;
  *a5 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v25 = *(_QWORD *)BgpGetResolution(v26);
      if ( *v11 <= (unsigned int)v25 && v11[1] <= HIDWORD(v25) )
      {
        Memory = (void *)BgpFwAllocateMemory(0x50uLL);
        v13 = (__int64)Memory;
        if ( !Memory )
        {
          FontHandle = -1073741801;
LABEL_37:
          *a5 = v13;
          return (unsigned int)FontHandle;
        }
        memset_0(Memory, 0, 0x50uLL);
        if ( a3 )
        {
          v14 = (unsigned int *)(v13 + 40);
          *(_OWORD *)(v13 + 40) = *(_OWORD *)a3;
          *(_QWORD *)(v13 + 56) = *(_QWORD *)(a3 + 16);
        }
        else
        {
          FontHandle = BgpFoGetFontHandle(0LL);
          if ( FontHandle < 0 )
            goto LABEL_36;
          *(_DWORD *)(v13 + 44) = -1;
          v14 = (unsigned int *)(v13 + 40);
          *(_DWORD *)(v13 + 40) = 0;
          v15 = v24;
          *(_DWORD *)(v13 + 60) = 0;
          *(_QWORD *)(v13 + 48) = v15;
          *(_DWORD *)(v13 + 56) = 18;
        }
        v16 = (_QWORD *)(v13 + 64);
        if ( a4 )
        {
          *v16 = *a4;
          goto LABEL_14;
        }
        FontHandle = BgpFoGetTextMetrics((__int64)v14, v13 + 64);
        if ( FontHandle >= 0 )
        {
LABEL_14:
          if ( (a6 & 1) == 0 )
          {
            v17 = *(_DWORD *)(v13 + 68);
            if ( a2[1] < v17 )
              a2[1] = v17;
            if ( *a2 < *(_DWORD *)v16 )
              *a2 = *(_DWORD *)v16;
          }
          if ( *a1 + *a2 > (unsigned int)v25 || (unsigned int)(a1[1] + a2[1]) > HIDWORD(v25) )
          {
            FontHandle = -1073741811;
            goto LABEL_32;
          }
          if ( (a6 & 2) == 0 )
          {
            v18 = BgpGxRectangleCreate(a2, 32LL, &v22);
            v6 = v22;
            FontHandle = v18;
            if ( v18 < 0 )
              goto LABEL_32;
            BgpGxFillRectangle(v22, *v14);
          }
          if ( (a6 & 9) == 0 )
            goto LABEL_27;
          v19 = BgpGxRectangleCreate(a2, 32LL, &v23);
          v7 = v23;
          FontHandle = v19;
          if ( v19 >= 0 )
          {
            *(_QWORD *)(v13 + 32) = v23;
LABEL_27:
            *(_QWORD *)v13 = *(_QWORD *)a1;
            *(_QWORD *)(v13 + 8) = *(_QWORD *)a2;
            v20 = a2[2];
            *(_DWORD *)(v13 + 76) = 0;
            *(_DWORD *)(v13 + 16) = v20;
            *(_QWORD *)(v13 + 24) = v6;
            *(_DWORD *)(v13 + 72) = 1;
            if ( (a6 & 4) != 0 )
              *(_DWORD *)(v13 + 72) = 5;
            if ( FontHandle >= 0 )
              goto LABEL_37;
          }
LABEL_32:
          if ( v6 )
            BgpGxRectangleDestroy(v6);
          if ( v7 )
            BgpGxRectangleDestroy(v7);
        }
LABEL_36:
        BgpFwFreeMemory(v13);
        goto LABEL_37;
      }
    }
  }
  return 3221225485LL;
}
