/*
 * XREFs of ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1403FEB24
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x140342580 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1403B75AC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall MODE_UNION_LIST::GetUniqueModes(
        const void **this,
        unsigned __int64 a2,
        struct _D3DKMT_DISPLAYMODE *a3,
        unsigned int *a4)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v9; // rdi
  ULONG v10; // eax
  ULONG v11; // ebx
  ULONG v12; // eax
  unsigned int v13; // edx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  __int64 result; // rax
  ULONG UserTime; // [rsp+80h] [rbp+8h] BYREF
  ULONG v18; // [rsp+88h] [rbp+10h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  UserTime = 0;
  v9 = Global;
  v10 = KeQueryRuntimeThread(KeGetCurrentThread(), &UserTime);
  v18 = 0;
  v11 = v10;
  v12 = KeQueryRuntimeThread(KeGetCurrentThread(), &v18);
  v13 = v12 - v11;
  if ( v11 > v12 )
    v13 = v12 - v11 - 1;
  _InterlockedAdd64((volatile signed __int64 *)v9 + 18, v13);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 21);
  v14 = *((unsigned int *)this + 4);
  if ( a2 < v14 )
    LODWORD(v14) = a2;
  v15 = (unsigned int)v14;
  memmove(a3, this[1], 44LL * (unsigned int)v14);
  if ( a2 >= *((unsigned int *)this + 4) )
  {
    *a4 = v15;
    _InterlockedAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal() + 9, v15);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2356;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"DDI-VIOLATION: Miniport reported more functional VidPN modalities than in the previous mode enumeration performed "
       "under the same shared adapter access!",
      2356LL,
      0LL,
      0LL,
      0LL,
      0LL);
    WdLogSingleEntry1(3LL, a2);
    result = 3221225507LL;
    WdLogGlobalForLineNumber = 2359;
  }
  return result;
}
