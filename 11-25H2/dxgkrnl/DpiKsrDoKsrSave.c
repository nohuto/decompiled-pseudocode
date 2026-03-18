/*
 * XREFs of DpiKsrDoKsrSave @ 0x140249E04
 * Callers:
 *     DpiSriovDetach @ 0x140242750 (DpiSriovDetach.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x140248E8C (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     DpSaveMemoryForHotUpdateCB @ 0x140249990 (DpSaveMemoryForHotUpdateCB.c)
 */

NTSTATUS DpiKsrDoKsrSave()
{
  int v0; // r14d
  struct _MDL *v1; // rdi
  int v2; // r9d
  PMDL PagesForMdl; // rax
  _DWORD *MappedSystemVa; // rsi
  int updated; // eax
  __int128 v7; // [rsp+58h] [rbp-9h] BYREF
  PVOID BaseAddress[2]; // [rsp+68h] [rbp+7h]
  __int64 v9; // [rsp+78h] [rbp+17h]
  _OWORD v10[3]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v11; // [rsp+B0h] [rbp+4Fh]

  v7 = 0LL;
  v9 = 0LL;
  v0 = 0;
  *(_OWORD *)BaseAddress = 0LL;
  v1 = 0LL;
  DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, &v7);
  if ( (int)v9 >= 0 )
  {
    v2 = DWORD2(v7);
    if ( DWORD2(v7) )
    {
      DWORD2(v7) += 29;
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, (v2 + 4124) & 0xFFFFF000, MmCached, 0x24u);
      v1 = PagesForMdl;
      if ( PagesForMdl )
      {
        if ( (PagesForMdl->MdlFlags & 5) != 0 )
          MappedSystemVa = PagesForMdl->MappedSystemVa;
        else
          MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
        BaseAddress[0] = MappedSystemVa;
        if ( MappedSystemVa )
        {
          MappedSystemVa[1] = DWORD1(v7);
          *MappedSystemVa = DWORD2(v7);
          DWORD1(v7) = 0;
          BaseAddress[1] = (char *)MappedSystemVa + 29;
          BaseAddress[0] = (char *)MappedSystemVa + 29;
          DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, &v7);
          if ( __PAIR64__(DWORD1(v7), DWORD2(v7)) == *(_QWORD *)MappedSystemVa )
          {
            v10[1] = (unsigned __int64)v1;
            v10[0] = 0LL;
            v11 = 0LL;
            v10[2] = 0LL;
            updated = DpSaveMemoryForHotUpdateCB(0LL, (int *)v10);
            v0 = updated;
            if ( updated < 0 )
            {
              WdLogSingleEntry1(2LL, updated);
              WdLogGlobalForLineNumber = 1129;
            }
          }
        }
        else
        {
          v0 = -1073741670;
          WdLogSingleEntry1(2LL, -1073741670LL);
          WdLogGlobalForLineNumber = 1093;
        }
      }
      else
      {
        v0 = -1073741670;
        WdLogSingleEntry1(2LL, -1073741670LL);
        WdLogGlobalForLineNumber = 1083;
      }
    }
  }
  if ( BaseAddress[0] )
    MmUnmapLockedPages(BaseAddress[0], v1);
  if ( (int)v9 >= 0 )
  {
    if ( v0 >= 0 )
    {
      LOBYTE(word_14015E2F8) = 1;
      *((_BYTE *)DXGGLOBAL::GetGlobal() + 305541) = 1;
    }
    else
    {
      if ( v1 )
      {
        MmFreePagesFromMdl(v1);
        ExFreePoolWithTag(v1, 0);
      }
      dword_14015E30C = v0;
    }
  }
  else
  {
    dword_14015E30C = v9;
  }
  return DxgkLogInternalTriageEvent(
           0LL,
           65538,
           0xFFFFFFFFLL,
           L"KSR Save routine has completed with status %1",
           (int)v9,
           0LL,
           0LL,
           0LL,
           0LL);
}
