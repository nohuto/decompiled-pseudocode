/*
 * XREFs of ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1401B2B94
 * Callers:
 *     SetGestureConfigSettings @ 0x1401B2654 (SetGestureConfigSettings.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1401B2DAC (-IsBitSet@@YAHPEAEI@Z.c)
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1401B2DDC (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1401B2E24 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1401B2E88 (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z @ 0x1402B7FA8 (-GCRemoveHashElement@@YAXPEAPEAUtagGESTURECONFIGLIST@@I@Z.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall _StoreGestureConfig(struct tagWND *a1, unsigned int a2, struct tagGESTURECONFIG *a3)
{
  struct tagGESTURECONFIGLIST **WindowGCList; // rdi
  struct tagWND *v7; // rcx
  struct tagVWPLGESTUREDATA *GCData; // r15
  struct tagGESTURECONFIGLIST **v9; // rax
  int v10; // ecx
  __int64 i; // rbp
  int v13; // r10d
  int v14; // edx
  __int64 v15; // r9
  int v16; // ecx
  int v17; // r9d
  int v18; // r10d
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // ebx
  struct tagVWPLGESTUREDATA *v22; // rax
  int v23; // r8d
  struct tagGESTURECONFIGLIST *v24; // rdx
  struct tagGESTURECONFIGLIST *v25; // rcx
  unsigned int v26; // r9d

  WindowGCList = (struct tagGESTURECONFIGLIST **)GetWindowGCList(a1);
  GCData = GetGCData(v7);
  if ( !WindowGCList )
  {
    v9 = (struct tagGESTURECONFIGLIST **)Win32AllocPoolWithQuotaZInit(64LL, 1667724117LL);
    WindowGCList = v9;
    if ( !v9 )
    {
LABEL_3:
      v10 = 14;
LABEL_4:
      UserSetLastError(v10);
      return 0LL;
    }
    memset_0(v9, 0, 0x40uLL);
    *((_QWORD *)GetGCData(a1) + 2) = WindowGCList;
  }
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
  {
    v13 = *((_DWORD *)a3 + 3 * i + 2);
    v14 = *((_DWORD *)a3 + 3 * i + 1);
    if ( (v13 & v14) != 0
      || (v15 = *((unsigned int *)a3 + 3 * i), (unsigned int)(v15 - 1) > 6)
      || (v16 = ~dword_140354908[v15], (v16 & v14) != 0)
      || (v13 & v16) != 0 )
    {
      v10 = 87;
      goto LABEL_4;
    }
    if ( v14 || v13 || *((_DWORD *)GCData + 2) || *((_DWORD *)GCData + 3) )
    {
      if ( (unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v15) )
      {
        v23 = 0;
        v24 = 0LL;
        v25 = WindowGCList[v17 & 7];
        if ( v25 )
        {
          do
          {
            if ( *((_DWORD *)v25 + 2) == v17 )
            {
              v24 = v25;
              v23 = 1;
            }
            v25 = *(struct tagGESTURECONFIGLIST **)v25;
          }
          while ( v25 );
          if ( v23 )
          {
            *((_DWORD *)v24 + 4) = v18;
            *((_DWORD *)v24 + 3) = *((_DWORD *)a3 + 3 * i + 1);
          }
        }
      }
      else
      {
        v19 = Win32AllocPoolWithQuotaZInit(24LL, 1667724117LL);
        if ( !v19 )
          goto LABEL_3;
        *(_DWORD *)(v19 + 8) = *((_DWORD *)a3 + 3 * i);
        *(_DWORD *)(v19 + 16) = *((_DWORD *)a3 + 3 * i + 2);
        *(_DWORD *)(v19 + 12) = *((_DWORD *)a3 + 3 * i + 1);
        v20 = *(_BYTE *)(v19 + 8) & 7;
        *(_QWORD *)v19 = WindowGCList[v20];
        WindowGCList[v20] = (struct tagGESTURECONFIGLIST *)v19;
        v21 = *(_DWORD *)(v19 + 8);
        v22 = GetGCData(a1);
        *(_BYTE *)(((unsigned __int64)v21 >> 3) + *(_QWORD *)v22) |= 1 << (v21 & 7);
      }
    }
    else if ( (unsigned int)IsBitSet(*(unsigned __int8 **)GCData, v15) )
    {
      GCRemoveHashElement(WindowGCList, v26);
      SetBitMask(a1, *((_DWORD *)a3 + 3 * i), 0);
    }
  }
  return 1LL;
}
