/*
 * XREFs of ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1402E759C
 * Callers:
 *     ?PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1402E6808 (-PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z.c)
 *     ?NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1402E6B1C (-NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402E6EA4 (-AddProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@.c)
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1402E72A8 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1402E73EC (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 * Callees:
 *     ?RtlStringCbCatA@@YAJPEAD_KPEBD@Z @ 0x14006F90C (-RtlStringCbCatA@@YAJPEAD_KPEBD@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(
        DripsBlockerTrackingHelper *this,
        const char *a2,
        struct _EPROCESS *a3,
        char *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  const char *ProcessImageFileName; // rax
  const CHAR *v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  char *v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  char *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi

  if ( a3 )
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(a3);
  else
    ProcessImageFileName = "ExternalActivation";
  if ( !a4 && a5 || a5 > 0x7FFFFFFFuLL )
  {
    v10 = -1073741811;
    if ( a5 )
    {
      *a4 = 0;
      return (unsigned int)v10;
    }
  }
  else
  {
    v9 = File;
    if ( ProcessImageFileName )
      v9 = ProcessImageFileName;
    v10 = 0;
    if ( a5 )
    {
      v11 = a5;
      v12 = a4;
      v13 = v9 - a4;
      do
      {
        if ( !(2147483646LL - a5 + v11) )
          break;
        v14 = v12[v13];
        if ( !v14 )
          break;
        *v12++ = v14;
        --v11;
      }
      while ( v11 );
      v15 = v12 - 1;
      if ( v11 )
        v15 = v12;
      *v15 = 0;
      v10 = v11 == 0 ? 0x80000005 : 0;
    }
    else
    {
      if ( !*v9 )
        goto LABEL_32;
      v10 = a4 != 0LL ? -2147483643 : -1073741811;
    }
    if ( v10 >= 0 )
      goto LABEL_16;
    if ( a5 )
      *a4 = 0;
  }
LABEL_32:
  if ( v10 < 0 )
    return (unsigned int)v10;
LABEL_16:
  if ( !a2 || (v10 = RtlStringCbCatA(a4, a5, "-"), v10 >= 0) && (v10 = RtlStringCbCatA(a4, a5, a2), v10 >= 0) )
  {
    if ( a6 )
    {
      if ( a4 && a5 <= 0x7FFFFFFFuLL )
      {
        v16 = a5;
        if ( a5 )
        {
          do
          {
            if ( !*a4 )
              break;
            ++a4;
            --v16;
          }
          while ( v16 );
        }
        v10 = v16 == 0 ? 0xC000000D : 0;
        if ( v16 )
          v17 = a5 - v16;
        else
          v17 = 0LL;
        if ( v16 )
          goto LABEL_29;
      }
      else
      {
        v10 = -1073741811;
      }
      v17 = 0LL;
LABEL_29:
      *a6 = v17;
      if ( v10 < 0 )
      {
        WdLogSingleEntry1(3LL, v10);
        WdLogGlobalForLineNumber = 856;
      }
    }
  }
  return (unsigned int)v10;
}
