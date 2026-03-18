/*
 * XREFs of DxgkIddGetAdapterSessionDiagnostics @ 0x1401BE4F0
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140428678 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x140072248 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403A23C0 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 */

__int64 __fastcall DxgkIddGetAdapterSessionDiagnostics(
        unsigned int a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  struct _LUID *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rbx
  bool IsAdapterSessionized; // al
  int v11; // ebx
  const wchar_t *v12; // r9
  DXGDIAGNOSTICS *v13; // rcx
  int v14; // eax
  unsigned int v16; // [rsp+50h] [rbp-20h] BYREF
  DXGADAPTER *v17[3]; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+28h] BYREF

  v18 = a2;
  v17[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle(v17, a1);
  if ( !v17[0] )
  {
    v8 = a1;
    LODWORD(v9) = -1073741811;
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 2042;
    goto LABEL_14;
  }
  v16 = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(v17[0], v7, &v16, 0LL);
  v11 = v16;
  if ( !IsAdapterSessionized )
    v11 = -1;
  v16 = v11;
  if ( !DXGGLOBAL::GetGlobal() )
  {
    v9 = -1073741811LL;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v12 = L"Unable to obtain DXGGLOBAL, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 2061;
LABEL_9:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v12, v9, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_14;
  }
  v13 = (DXGDIAGNOSTICS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 120);
  if ( !v13 )
  {
    v9 = -1073741436LL;
    WdLogSingleEntry1(2LL, -1073741436LL);
    v12 = L"Unable to obtain DXGGLOBAL Diagnosibility buffer, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 2068;
    goto LABEL_9;
  }
  v14 = DXGDIAGNOSTICS::ReadDiagnostics(v13, a3, &v18, v11);
  if ( (int)(v14 + 0x80000000) < 0 || v14 == -2147483643 )
    *a4 = v18;
  LODWORD(v9) = v14;
LABEL_14:
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v17, 0LL);
  return (unsigned int)v9;
}
