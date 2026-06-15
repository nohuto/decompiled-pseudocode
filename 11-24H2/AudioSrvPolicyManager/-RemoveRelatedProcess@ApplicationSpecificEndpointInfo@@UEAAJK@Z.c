/*
 * XREFs of ?RemoveRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x18001D6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::RemoveRelatedProcess(ApplicationSpecificEndpointInfo *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // r8
  _DWORD *i; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = (_DWORD *)*((_QWORD *)this + 7);
  v6 = (_DWORD *)*((_QWORD *)this + 8);
  while ( v5 != v6 && a2 != *v5 )
    ++v5;
  if ( v5 != v6 )
  {
    for ( i = v5 + 1; i != v6; ++i )
    {
      if ( a2 != *i )
        *v5++ = *i;
    }
  }
  if ( v5 != *((_DWORD **)this + 8) )
    *((_QWORD *)this + 8) = v5;
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
