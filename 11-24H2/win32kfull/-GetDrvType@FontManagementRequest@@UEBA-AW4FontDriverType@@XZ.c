/*
 * XREFs of ?GetDrvType@FontManagementRequest@@UEBA?AW4FontDriverType@@XZ @ 0x1402197D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FontManagementRequest::GetDrvType(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
    return *(unsigned int *)(*(_QWORD *)(v1 + 24) + 20LL);
  else
    return 3LL;
}
