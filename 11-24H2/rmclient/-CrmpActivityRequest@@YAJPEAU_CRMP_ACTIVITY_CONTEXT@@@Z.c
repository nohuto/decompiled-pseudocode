/*
 * XREFs of ?CrmpActivityRequest@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180011DC8
 * Callers:
 *     CrmActivityRequest @ 0x180012B40 (CrmActivityRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmpActivityRequest(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 0;
  if ( *((_QWORD *)a1 + 6) )
    __int2c();
  v2 = RtlSubscribeWnfStateChangeNotification(
         (char *)a1 + 48,
         *((_QWORD *)a1 + 5),
         0LL,
         CrmpActivityWNFCallback,
         a1,
         0LL,
         0,
         0);
  if ( v2 < 0 )
    return (unsigned int)v2;
  return v1;
}
