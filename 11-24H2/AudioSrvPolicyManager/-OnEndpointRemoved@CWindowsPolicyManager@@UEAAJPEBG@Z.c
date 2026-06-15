/*
 * XREFs of ?OnEndpointRemoved@CWindowsPolicyManager@@UEAAJPEBG@Z @ 0x180012770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::OnEndpointRemoved(CWindowsPolicyManager *this, const unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  CApplicationManager *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  _QWORD *v5; // rdi
  __int64 v6; // rbx
  _QWORD *i; // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = (_QWORD *)*((_QWORD *)v3 + 9);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 32));
    for ( i = *(_QWORD **)(v6 + 72); i; i = (_QWORD *)*i )
      ;
    if ( v6 != -32 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 32));
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
