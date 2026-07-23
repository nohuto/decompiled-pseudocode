/*
 * XREFs of IoGetFileObjectFilterContext @ 0x1403B45C0
 * Callers:
 *     FsRtlInsertPerFileObjectContext @ 0x1403B40C0 (FsRtlInsertPerFileObjectContext.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x1403B4640 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IoGetFileObjectFilterContext(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 208) )
    goto LABEL_2;
  if ( a3 )
  {
    result = IopAllocateFileObjectExtension(a1, &v8, 0LL);
    if ( (int)result < 0 )
    {
      v6 = 0LL;
LABEL_5:
      *a2 = v6;
      return result;
    }
LABEL_2:
    v5 = *(_QWORD *)(a1 + 208);
    if ( v5 )
      v6 = *(_QWORD *)(v5 + 32);
    else
      v6 = 0LL;
    result = 0LL;
    goto LABEL_5;
  }
  *a2 = 0LL;
  return 0LL;
}
