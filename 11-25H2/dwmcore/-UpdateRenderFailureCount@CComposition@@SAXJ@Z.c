/*
 * XREFs of ?UpdateRenderFailureCount@CComposition@@SAXJ@Z @ 0x1801E90B4
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800E6E20 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x1801B3214 (-DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?RecentDisplayChange@CDisplayManager@@IEAA_NXZ @ 0x1802C134C (-RecentDisplayChange@CDisplayManager@@IEAA_NXZ.c)
 */

void __fastcall CComposition::UpdateRenderFailureCount(CDisplayManager *a1)
{
  DWORD v1; // ebx
  unsigned int v2; // eax
  CDisplayManager *v3; // rcx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  v1 = (unsigned int)a1;
  if ( (int)a1 >= 0 )
  {
    if ( !CComposition::s_cRenderFailures )
      return;
    v2 = CComposition::s_cRenderFailures - 1;
LABEL_19:
    CComposition::s_cRenderFailures = v2;
    return;
  }
  if ( (_DWORD)a1 != -2003304306 && (_DWORD)a1 != -2003304309 )
  {
    if ( CComposition::s_cRenderFailures > 0x3C )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionInformation[0] = CComposition::s_hrExpectedError;
      pExceptionRecord.NumberParameters = 1;
      pExceptionRecord.ExceptionCode = v1;
      RaiseFailFastException(&pExceptionRecord, 0LL, 1u);
    }
    if ( v1 != -2003304442 && v1 != -2003304307 )
      goto LABEL_17;
    if ( !CDisplayManager::DriverUpdateInProgress(a1)
      && (v1 != -2003304442 || !CDisplayManager::RecentDisplayChange(v3)) )
    {
      if ( v1 == -2003304307 )
      {
        v2 = CComposition::s_cRenderFailures + 12;
LABEL_18:
        CComposition::s_hrExpectedError = v1;
        goto LABEL_19;
      }
LABEL_17:
      v2 = CComposition::s_cRenderFailures + 2;
      goto LABEL_18;
    }
  }
}
