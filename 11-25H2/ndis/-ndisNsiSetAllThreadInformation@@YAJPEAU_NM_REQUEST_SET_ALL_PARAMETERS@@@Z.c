/*
 * XREFs of ?ndisNsiSetAllThreadInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400CF2C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCmSetThreadState @ 0x14004D090 (ndisCmSetThreadState.c)
 */

__int64 __fastcall ndisNsiSetAllThreadInformation(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  int *v2; // rdx
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v3 = 0;
  if ( *((_DWORD *)a1 + 13) )
    return 3221225474LL;
  if ( *((_DWORD *)a1 + 12) )
    return 3221225485LL;
  v2 = (int *)*((_QWORD *)a1 + 4);
  if ( v2 )
  {
    v4 = *v2;
    v3 = v2[1];
  }
  return ndisCmSetThreadState(KeGetCurrentThread(), &v4, &v3);
}
