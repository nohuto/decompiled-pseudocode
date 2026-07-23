/*
 * XREFs of WmipIncludeStaticNames @ 0x1409B1C2C
 * Callers:
 *     WmipProcessEvent @ 0x1409B1F20 (WmipProcessEvent.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x140443D48 (RtlStringCbCatW.c)
 *     WmipAlign @ 0x1404608EC (WmipAlign.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     WmipFindGEByGuid @ 0x1409B2884 (WmipFindGEByGuid.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 *     WmipInsertStaticNames @ 0x1409B3544 (WmipInsertStaticNames.c)
 *     WmipStaticInstanceNameSize @ 0x1409B376C (WmipStaticInstanceNameSize.c)
 *     WmipReferenceEntry @ 0x1409B4038 (WmipReferenceEntry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

unsigned int *__fastcall WmipIncludeStaticNames(unsigned int *Src, unsigned int a2)
{
  unsigned int *v3; // rbx
  ULONG_PTR v4; // rbp
  __int64 GEByGuid; // rdi
  unsigned int v6; // esi
  ULONG_PTR i; // rcx
  int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // r12
  const wchar_t *v12; // r12
  __int64 v13; // rdi
  __int64 v14; // r14
  unsigned int v15; // r14d
  __int64 v16; // r15
  unsigned int *v17; // rax
  unsigned int *v18; // rsi
  _WORD *v19; // r15
  int v20; // eax
  unsigned int v21; // r14d
  __int64 v23; // r14
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // edi
  unsigned int *Pool2; // rax
  unsigned int v28; // [rsp+30h] [rbp-58h] BYREF
  wchar_t pszDest[8]; // [rsp+38h] [rbp-50h] BYREF

  v3 = Src;
  v4 = 0LL;
  if ( (Src[11] & 7) != 0 )
  {
    GEByGuid = WmipFindGEByGuid(Src + 6, 0LL);
    if ( GEByGuid )
    {
      v6 = v3[1];
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      for ( i = *(_QWORD *)(GEByGuid + 56); i != GEByGuid + 56; i = *(_QWORD *)i )
      {
        if ( *(_DWORD *)(i + 80) == v6 )
        {
          v4 = i;
          WmipReferenceEntry(i);
          break;
        }
      }
      KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
      WmipUnreferenceEntry(&WmipGEChunkInfo, GEByGuid);
      if ( v4 )
      {
        v8 = *(_DWORD *)(v4 + 16);
        if ( (v8 & 3) != 0 )
        {
          v9 = *(_DWORD *)(v4 + 72);
          if ( (v3[11] & 1) != 0 )
          {
            v28 = a2;
            if ( WmipAlign(4, (int *)&v28) )
            {
              v25 = WmipStaticInstanceNameSize(v4);
              if ( v25 <= -1 - v28 )
              {
                v26 = v25 + v28;
                Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL, v25 + v28, 0x70696D57u);
                v18 = Pool2;
                if ( Pool2 )
                {
                  memmove(Pool2, v3, *v3);
                  WmipInsertStaticNames(v18, v26, v4);
LABEL_24:
                  v3 = v18;
LABEL_25:
                  WmipUnreferenceEntry(&WmipISChunkInfo, v4);
                  return v3;
                }
              }
            }
          }
          else
          {
            v10 = v3[13];
            v28 = v10;
            if ( (unsigned int)v10 < v9 )
            {
              v11 = *(_QWORD *)(v4 + 88);
              if ( (v8 & 2) != 0 )
              {
                v12 = *(const wchar_t **)(v11 + 8 * v10);
                v13 = -1LL;
                v23 = -1LL;
                do
                  ++v23;
                while ( v12[v23] );
                v15 = 2 * v23 + 4;
              }
              else
              {
                v12 = (const wchar_t *)(v11 + 4);
                v13 = -1LL;
                v14 = -1LL;
                do
                  ++v14;
                while ( v12[v14] );
                v15 = 2 * v14 + 16;
              }
              if ( a2 + 1 >= a2 )
              {
                v16 = (a2 + 1) & 0xFFFFFFFE;
                if ( v15 <= ~(_DWORD)v16 )
                {
                  v17 = (unsigned int *)ExAllocatePool2(0x100uLL, (unsigned int)v16 + v15, 0x70696D57u);
                  v18 = v17;
                  if ( v17 )
                  {
                    memmove(v17, v3, *v3);
                    v18[12] = v16;
                    *v18 = v16 + v15;
                    v19 = (_WORD *)((char *)v18 + v16);
                    v20 = *(_DWORD *)(v4 + 16);
                    v21 = v15 - 2;
                    if ( (v20 & 2) != 0 )
                    {
                      *v19 = v21;
                      RtlStringCbCopyW(v19 + 1, v21, v12);
                    }
                    else
                    {
                      if ( (v20 & 0x20000) != 0 )
                        v18[11] |= 0x10000u;
                      RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", **(_DWORD **)(v4 + 88) + v28);
                      RtlStringCbCopyW(v19 + 1, v21, v12);
                      RtlStringCbCatW(v19 + 1, v21, pszDest);
                      do
                        ++v13;
                      while ( v19[v13 + 1] );
                      *v19 = 2 * (v13 + 1);
                    }
                    goto LABEL_24;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v24 = v3[11];
  if ( (v24 & 1) != 0 && a2 >= 0x3C )
  {
    v3[14] = 0;
  }
  else if ( (v24 & 6) != 0 && a2 >= 0x34 )
  {
    v3[12] = 0;
  }
  if ( v4 )
    goto LABEL_25;
  return v3;
}
