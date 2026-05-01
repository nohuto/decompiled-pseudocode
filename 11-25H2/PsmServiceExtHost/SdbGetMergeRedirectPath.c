/*
 * XREFs of SdbGetMergeRedirectPath @ 0x180092114
 * Callers:
 *     SdbGetMergeStubPath @ 0x1800922C4 (SdbGetMergeStubPath.c)
 *     SdbOpenDatabaseEx @ 0x180092550 (SdbOpenDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpGetMergeRedirectPathInternal @ 0x1800931E0 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpGetMergeSdbsSupported @ 0x180093A98 (SdbpGetMergeSdbsSupported.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     AslPathGetFileNamePart @ 0x1800A4024 (AslPathGetFileNamePart.c)
 */

__int64 __fastcall SdbGetMergeRedirectPath(_QWORD *a1, int *a2, int a3, __int64 a4)
{
  int v7; // esi
  int MergeRedirectPathInternal; // ebx
  __int64 v10; // rax
  int v11; // eax
  _QWORD v12[2]; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+70h] [rbp+30h] BYREF
  int v14; // [rsp+80h] [rbp+40h]

  v14 = a3;
  v13 = 0;
  v12[0] = 0LL;
  v7 = 0;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  if ( a2 )
    *a2 = 0;
  if ( !(unsigned int)SdbpGetMergeSdbsSupported() )
  {
    MergeRedirectPathInternal = -1073741772;
    goto LABEL_20;
  }
  MergeRedirectPathInternal = SdbpGetMergeRedirectPathInternal(v12, &v13, 1LL, a4);
  if ( MergeRedirectPathInternal >= 0 )
  {
    if ( v13 )
      v7 = 1;
  }
  else if ( MergeRedirectPathInternal != -1073741772 )
  {
LABEL_9:
    AslLogCallPrintf(1LL);
    goto LABEL_20;
  }
  if ( !v14 || !v7 )
  {
    if ( v12[0] )
      AslFree(NtCurrentPeb()->ProcessHeap, v12[0]);
    v11 = SdbpGetMergeRedirectPathInternal(v12, 0LL, 0LL, a4);
    MergeRedirectPathInternal = v11;
    if ( v11 >= 0 )
      goto LABEL_17;
    if ( v11 != -1073741772 )
      goto LABEL_9;
    goto LABEL_20;
  }
  AslPathGetFileNamePart(a4);
  AslLogCallPrintf(1LL);
  if ( v12[0] )
  {
    if ( MergeRedirectPathInternal >= 0 )
    {
LABEL_17:
      v10 = v12[0];
      v12[0] = 0LL;
      *a1 = v10;
      if ( a2 )
        *a2 = v7;
      MergeRedirectPathInternal = 0;
    }
LABEL_20:
    if ( v12[0] )
      AslFree(NtCurrentPeb()->ProcessHeap, v12[0]);
    return (unsigned int)MergeRedirectPathInternal;
  }
  return (unsigned int)-1073741772;
}
