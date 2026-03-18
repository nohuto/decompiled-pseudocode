/*
 * XREFs of ?vTighten@RGNOBJ@@QEAAXXZ @ 0x140065F10
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140066420 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x140066D70 (GreExtCreateRegion.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140066AF0 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?RegionCore_tighten@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140066BC4 (-RegionCore_tighten@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 */

void __fastcall RGNOBJ::vTighten(RGNOBJ *this, struct REGION_CORE *a2)
{
  __int64 v3; // rcx
  int v4; // edi
  int v5; // ebx
  signed int v6; // esi
  char *v7; // rax
  struct REGION_CORE *v8; // rdx
  struct SCAN *pScan; // rdx
  int v10; // r8d
  int v11; // ecx
  __int128 v12; // [rsp+20h] [rbp-18h]

  v3 = *(_QWORD *)this;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    Win32kRS::RegionCore_tighten((Win32kRS *)((v3 + 24) & -(__int64)(v3 != 0)), a2);
  }
  else
  {
    v4 = *(_DWORD *)(v3 + 48);
    if ( v4 == 1 )
    {
      *(_OWORD *)(v3 + 52) = 0LL;
    }
    else
    {
      v5 = 0x7FFFFFFF;
      v6 = 0x80000000;
      LODWORD(v12) = 0x7FFFFFFF;
      v7 = (char *)REGION_CORE::get_pscnTail((REGION_CORE *)(v3 + 24)) - 4;
      v8 = (struct REGION_CORE *)(unsigned int)(4 * *(_DWORD *)v7 + 16);
      HIDWORD(v12) = *(_DWORD *)(v7 - (char *)v8 + 8);
      pScan = REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)this + 24LL), v8);
      DWORD1(v12) = *((_DWORD *)pScan + 2);
      if ( !v4 )
        goto LABEL_13;
      do
      {
        v10 = *(_DWORD *)pScan;
        --v4;
        v11 = v5;
        if ( *(_DWORD *)pScan )
        {
          v5 = *((_DWORD *)pScan + 3);
          if ( v11 <= v5 )
            v5 = v11;
          LODWORD(v12) = v5;
          if ( v6 < *((_DWORD *)pScan + (unsigned int)(v10 - 1) + 3) )
          {
            v6 = *((_DWORD *)pScan + (unsigned int)(v10 - 1) + 3);
            LODWORD(v12) = v5;
          }
        }
        pScan = (struct SCAN *)((char *)pScan + (unsigned int)(4 * v10 + 16));
      }
      while ( v4 );
      DWORD2(v12) = v6;
      if ( v5 >= v6 )
      {
LABEL_13:
        LODWORD(v12) = 0;
        DWORD2(v12) = 0;
      }
      *(_OWORD *)(*(_QWORD *)this + 52LL) = v12;
    }
  }
}
