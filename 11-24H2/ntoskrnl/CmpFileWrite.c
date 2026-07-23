/*
 * XREFs of CmpFileWrite @ 0x140A46660
 * Callers:
 *     CmpSaveKeyByFileCopy @ 0x1407CF4D0 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileWrite @ 0x140A466A0 (CmpDoFileWrite.c)
 */

__int64 __fastcall CmpFileWrite(__int64 a1, unsigned int a2, int a3, int a4, char a5)
{
  __int64 v6; // rcx

  if ( BYTE1(NlsMbOemCodePageTag) )
    return 3221225473LL;
  v6 = *(_QWORD *)(a1 + 8LL * a2 + 1544);
  if ( v6 )
    return CmpDoFileWrite(v6, a2, a3, a4, a5);
  else
    return 0LL;
}
