/*
 * XREFs of ?DpiDoesMdmChildMeetRequirements@@YA_NPEAU_FDO_CONTEXT@@PEAEW4CHECK_CHILD_REQUIREMENTS_TYPE@@@Z @ 0x140083D18
 * Callers:
 *     DpiMdmProcessStartAdapter @ 0x140088D14 (DpiMdmProcessStartAdapter.c)
 * Callees:
 *     DpiAcpiGetAcpiChildUidFromName @ 0x14024AABC (DpiAcpiGetAcpiChildUidFromName.c)
 */

bool __fastcall DpiDoesMdmChildMeetRequirements(__int64 a1, _BYTE *a2, int a3)
{
  __int64 v3; // rsi
  char v4; // bp
  int AcpiChildUidFromName; // eax
  bool result; // al
  __int64 v9; // r14
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = a3;
  v4 = 0;
  v12 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 3440), 1u);
  AcpiChildUidFromName = DpiAcpiGetAcpiChildUidFromName(a1, *(_QWORD *)(a1 + 6384), &v12);
  if ( AcpiChildUidFromName >= 0 )
  {
    v9 = v12;
    v10 = *(_QWORD **)(a1 + 3600);
    while ( v10 != (_QWORD *)(a1 + 3600) )
    {
      v11 = v10 - 4;
      v10 = (_QWORD *)*v10;
      if ( *((_DWORD *)v11 + 5) == (_DWORD)v9 )
      {
        if ( (_DWORD)v3 )
        {
          v4 = 1;
          if ( (_DWORD)v3 == 1 )
          {
            if ( *(_WORD *)(a1 + 5898) > 1u )
            {
              if ( *a2 )
              {
                if ( !*((_WORD *)v11 + 46) )
                {
                  WdLogSingleEntry0(2LL);
                  WdLogGlobalForLineNumber = 3780;
                  *(_DWORD *)(a1 + 6116) = 9;
                }
              }
              else if ( !*(_BYTE *)(a1 + 2716) && *((_WORD *)v11 + 46) )
              {
                WdLogSingleEntry1(2LL, *((unsigned __int16 *)v11 + 46));
                WdLogGlobalForLineNumber = 3792;
                *(_DWORD *)(a1 + 6116) = 10;
              }
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, v3);
            WdLogGlobalForLineNumber = 3801;
            *(_DWORD *)(a1 + 6116) = 6;
          }
          break;
        }
        *(_DWORD *)(a1 + 6376) = *((_DWORD *)v11 + 6);
        if ( !*(_DWORD *)(a1 + 6116) )
        {
          v4 = 1;
          if ( *(_DWORD *)v11 == 1 && *((_DWORD *)v11 + 1) == 0x80000000 )
          {
            if ( *((_DWORD *)v11 + 4) == 4 )
            {
              *(_DWORD *)(a1 + 6116) = 1;
            }
            else
            {
              WdLogSingleEntry1(2LL, *((int *)v11 + 4));
              WdLogGlobalForLineNumber = 3760;
              *(_DWORD *)(a1 + 6116) = 8;
            }
          }
          else
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 3754;
            *(_DWORD *)(a1 + 6116) = 7;
          }
          break;
        }
      }
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 3440));
    KeLeaveCriticalRegion();
    if ( !v4 )
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 3814;
      *(_DWORD *)(a1 + 6116) = 2;
    }
    return *(_DWORD *)(a1 + 6116) == 1;
  }
  else
  {
    WdLogSingleEntry1(2LL, AcpiChildUidFromName);
    result = 0;
    WdLogGlobalForLineNumber = 3722;
    *(_DWORD *)(a1 + 6116) = 2;
  }
  return result;
}
