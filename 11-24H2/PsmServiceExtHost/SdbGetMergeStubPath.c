/*
 * XREFs of SdbGetMergeStubPath @ 0x180092724
 * Callers:
 *     SdbInitDatabaseEx @ 0x1800949E4 (SdbInitDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbGetMergeRedirectPath @ 0x180092574 (SdbGetMergeRedirectPath.c)
 *     SdbpGetManifestedMergeStubAlloc @ 0x18009321C (SdbpGetManifestedMergeStubAlloc.c)
 *     SdbpGetMergeSdbsSupported @ 0x180093EF8 (SdbpGetMergeSdbsSupported.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 *     AslPathGetFileNamePart @ 0x1800A4314 (AslPathGetFileNamePart.c)
 */

__int64 __fastcall SdbGetMergeStubPath(__int64 *a1, __int64 a2)
{
  unsigned int v5; // ebx
  __int64 FileNamePart; // rax
  int ManifestedMergeStubAlloc; // eax
  __int64 v8; // rdi
  int MergeRedirectPath; // eax
  __int64 v10; // rax
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  v5 = -1073741772;
  if ( (unsigned int)SdbpGetMergeSdbsSupported() )
  {
    FileNamePart = AslPathGetFileNamePart(a2);
    if ( FileNamePart != a2 )
    {
      ManifestedMergeStubAlloc = SdbpGetManifestedMergeStubAlloc(&v11, FileNamePart);
      v5 = ManifestedMergeStubAlloc;
      if ( ManifestedMergeStubAlloc != -1073741772 )
      {
        if ( ManifestedMergeStubAlloc >= 0 )
        {
          v8 = v11;
          MergeRedirectPath = SdbGetMergeRedirectPath(&v12, 0LL, 0, v11);
          v5 = MergeRedirectPath;
          if ( MergeRedirectPath == -1073741772 )
          {
            *a1 = v8;
            v8 = 0LL;
            v11 = 0LL;
          }
          else
          {
            if ( MergeRedirectPath < 0 )
            {
              AslLogCallPrintf(1LL);
              goto LABEL_9;
            }
            v10 = v12;
            v12 = 0LL;
            *a1 = v10;
          }
          v5 = 0;
          goto LABEL_9;
        }
        AslLogCallPrintf(1LL);
      }
      v8 = v11;
LABEL_9:
      if ( v8 )
        AslFree(NtCurrentPeb()->ProcessHeap, v11);
      if ( v12 )
        AslFree(NtCurrentPeb()->ProcessHeap, v12);
    }
  }
  return v5;
}
