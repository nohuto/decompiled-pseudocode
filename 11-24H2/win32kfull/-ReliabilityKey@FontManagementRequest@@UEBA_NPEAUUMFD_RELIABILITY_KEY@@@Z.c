/*
 * XREFs of ?ReliabilityKey@FontManagementRequest@@UEBA_NPEAUUMFD_RELIABILITY_KEY@@@Z @ 0x14033ED10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall FontManagementRequest::ReliabilityKey(FontManagementRequest *this, struct UMFD_RELIABILITY_KEY *a2)
{
  __int64 v2; // rax
  int v3; // ecx

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(v2 + 24) + 16LL);
    LOBYTE(v2) = 1;
    *(_DWORD *)a2 = v3;
  }
  return v2;
}
