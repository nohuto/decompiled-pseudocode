/*
 * XREFs of ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BEA9C
 * Callers:
 *     ?lGetDefaultWorldHeight@@YAJAEAVUDCOBJ@@@Z @ 0x1400BCCFC (-lGetDefaultWorldHeight@@YAJAEAVUDCOBJ@@@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVUDCOBJ@@@Z @ 0x1400BE3D0 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVUDCOBJ@@@Z.c)
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1400BEDA0 (-GrepGetOutlineTextMetrics@@YAKAEAVUDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@W4EntryPoint@R.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z @ 0x1400BFB58 (-dwGetFontLanguageInfo@@YAKAEAVUDCOBJ@@@Z.c)
 *     FinishStockFontInit @ 0x140151750 (FinishStockFontInit.c)
 *     GreMarkDeletableFont @ 0x1401CDE34 (GreMarkDeletableFont.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1401F6558 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVUDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 *     NtGdiQueryFontAssocInfo @ 0x14025B490 (NtGdiQueryFontAssocInfo.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025B70C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x14025BE74 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

LFONTOBJ *__fastcall LFONTOBJ::LFONTOBJ(LFONTOBJ *this, struct HLFONT__ *a2, _QWORD *HDEV)
{
  struct HLFONT__ *v4; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  struct LFONT *v8; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  int v12; // ebx
  int v13; // ebx
  __int64 v14; // rcx

  v4 = a2;
  LOBYTE(a2) = 10;
  v6 = HmgShareLock(v4, a2);
  v7 = (v6 + 24) & -(__int64)(v6 != 0);
  *(_QWORD *)this = v7;
  v8 = (struct LFONT *)((v7 - 24) & -(__int64)(v7 != 0));
  *((_QWORD *)this + 1) = v8;
  if ( v7 )
  {
    if ( (*(_BYTE *)(((v6 + 24) & -(__int64)(v6 != 0)) + 4) & 1) != 0 )
    {
      v10 = *(_DWORD *)(((v7 - 24) & -(__int64)(v7 != 0)) + 0x18);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v8);
      *((_QWORD *)this + 1) = 0LL;
      if ( HDEV || (HDEV = (_QWORD *)UserGetHDEV()) != 0LL )
      {
        v12 = v10 - 4;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 != 1 )
            {
LABEL_11:
              *(_QWORD *)this = (*((_QWORD *)this + 1) + 24LL) & -(__int64)(*((_QWORD *)this + 1) != 0LL);
              return this;
            }
            v14 = HDEV[181];
          }
          else
          {
            v14 = HDEV[180];
          }
        }
        else
        {
          v14 = HDEV[179];
        }
        if ( v14 )
        {
          LOBYTE(v11) = 10;
          *((_QWORD *)this + 1) = HmgShareLock(v14, v11);
        }
        goto LABEL_11;
      }
    }
  }
  return this;
}
