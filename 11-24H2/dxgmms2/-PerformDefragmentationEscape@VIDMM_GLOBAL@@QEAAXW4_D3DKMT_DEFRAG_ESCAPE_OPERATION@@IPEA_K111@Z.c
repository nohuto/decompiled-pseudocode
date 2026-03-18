/*
 * XREFs of ?PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z @ 0x140095EB0
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x140093560 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z.c)
 * Callees:
 *     memset @ 0x140056340 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400BCAA4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PerformDefragmentationEscape(
        VIDMM_GLOBAL *this,
        enum _D3DKMT_DEFRAG_ESCAPE_OPERATION a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned int j; // esi
  __int64 v7; // rdx
  __int64 i; // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r13
  int v12; // r12d
  VIDMM_GLOBAL *v13; // rcx
  _QWORD v14[12]; // [rsp+20h] [rbp-60h] BYREF

  if ( a2 == D3DKMT_DEFRAG_ESCAPE_DEFRAG_UPWARD || a2 == D3DKMT_DEFRAG_ESCAPE_DEFRAG_DOWNWARD )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1736); i = (unsigned int)(i + 1) )
    {
      if ( (*(_DWORD *)(344LL * (unsigned int)i + *(_QWORD *)(*((_QWORD *)this + 3) + 2992LL) + 16) & 4) != 0 )
      {
        v9 = 0LL;
        v10 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8 * i);
        while ( 1 )
        {
          if ( (unsigned int)v9 >= *(_DWORD *)(v10 + 64) )
            goto LABEL_23;
          v11 = *(_QWORD *)(*(_QWORD *)(v10 + 1648) + 8 * v9);
          v12 = *(_DWORD *)(v11 + 104);
          if ( (v12 & 0x1001) == 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
        }
        if ( (_DWORD)v9 == -1 )
          continue;
        memset(v14, 0, 0x58uLL);
        LODWORD(v14[5]) = 0;
        LODWORD(v14[0]) = 126;
        HIDWORD(v14[0]) = i;
        HIDWORD(v14[5]) = v9;
        v13 = this;
        v14[8] = 0LL;
        LODWORD(v14[10]) = a2 != D3DKMT_DEFRAG_ESCAPE_DEFRAG_UPWARD;
        if ( (v12 & 0x10000) == 0 )
        {
          v14[9] = *(_QWORD *)(v11 + 72);
LABEL_22:
          VIDMM_GLOBAL::QueueSystemCommandAndWait(v13, (struct _VIDMM_SYSTEM_COMMAND *)v14, 1);
          continue;
        }
        v14[9] = 0LL;
        LODWORD(v14[7]) = 1;
        if ( (int)VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v14, 1) >= 0 )
        {
          LODWORD(v14[7]) = 2;
          if ( (int)VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v14, 1) >= 0 )
          {
            LODWORD(v14[7]) = 3;
            v13 = this;
            goto LABEL_22;
          }
        }
      }
LABEL_23:
      ;
    }
  }
  else if ( (unsigned int)(a2 - 3) <= 1 )
  {
    for ( j = 0; j < *((_DWORD *)this + 1736); ++j )
    {
      v7 = *((_QWORD *)this + 3);
      if ( (*(_DWORD *)(344LL * j + *(_QWORD *)(v7 + 2992) + 16) & 4) != 0 && (*(_DWORD *)(v7 + 2460) & 8) != 0 )
      {
        memset(v14, 0, 0x58uLL);
        LODWORD(v14[0]) = 126;
        HIDWORD(v14[0]) = j;
        LODWORD(v14[5]) = (a2 != D3DKMT_DEFRAG_ESCAPE_DEFRAG_PASS) + 3;
        VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v14, 1);
      }
    }
  }
}
