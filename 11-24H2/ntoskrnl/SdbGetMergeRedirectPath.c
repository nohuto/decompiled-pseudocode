/*
 * XREFs of SdbGetMergeRedirectPath @ 0x14080154C
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1408016C4 (SdbOpenDatabaseEx.c)
 * Callees:
 *     SdbpGetMergeRedirectPathInternal @ 0x140801F44 (SdbpGetMergeRedirectPathInternal.c)
 *     AslPathGetFileNamePart @ 0x14080A524 (AslPathGetFileNamePart.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetMergeRedirectPath(_QWORD *a1, int *a2, int a3, __int64 a4)
{
  int v8; // edi
  int MergeRedirectPathInternal; // eax
  unsigned int v11; // ebx
  int v12; // r15d
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  _QWORD v17[2]; // [rsp+30h] [rbp-10h] BYREF
  int v18; // [rsp+70h] [rbp+30h] BYREF

  v18 = 0;
  v17[0] = 0LL;
  v8 = 0;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  if ( a2 )
    *a2 = 0;
  MergeRedirectPathInternal = SdbpGetMergeRedirectPathInternal(v17, &v18, 1LL);
  v11 = MergeRedirectPathInternal;
  v12 = MergeRedirectPathInternal;
  if ( MergeRedirectPathInternal >= 0 )
  {
    if ( v18 )
      v8 = 1;
  }
  else if ( MergeRedirectPathInternal != -1073741772 )
  {
    v13 = 2085;
    goto LABEL_8;
  }
  if ( !a3 || !v8 )
  {
    if ( v17[0] )
      ((void (*)(void))AslFree)();
    v16 = SdbpGetMergeRedirectPathInternal(v17, 0LL, 0LL);
    v11 = v16;
    if ( v16 < 0 )
    {
      if ( v16 == -1073741772 )
        goto LABEL_9;
      v13 = 2100;
LABEL_8:
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbGetMergeRedirectPath",
        v13,
        (unsigned int)"SdbpGetMergeRedirectPathInternal failed[%x]");
LABEL_9:
      v15 = v17[0];
      goto LABEL_27;
    }
    v15 = v17[0];
LABEL_24:
    *a1 = v15;
    v15 = 0LL;
    if ( a2 )
      *a2 = v8;
    v11 = 0;
    goto LABEL_27;
  }
  AslPathGetFileNamePart(a4);
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbGetMergeRedirectPath",
    2109,
    (unsigned int)"Handled Error: MergeSdb staged deletion feature was used, probably to prevent sdb mismatch error. SdbName: [%ls].");
  v15 = v17[0];
  if ( v17[0] )
  {
    v11 = v12;
    if ( v12 < 0 )
    {
LABEL_27:
      if ( v15 )
        AslFree(v14);
      return v11;
    }
    goto LABEL_24;
  }
  return (unsigned int)-1073741772;
}
