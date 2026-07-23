/*
 * XREFs of ExpSaveAbHandle @ 0x140322D70
 * Callers:
 *     ExAcquireFastResourceShared @ 0x1403206D0 (ExAcquireFastResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSaveAbHandle(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( a3 )
      *(_BYTE *)(a2 + 10) = 1;
    result = *(unsigned __int8 *)(a2 + 8);
    LOBYTE(result) = (2 * (result & 0x3F)) | 1;
    *(_BYTE *)(a1 + 36) = result;
  }
  return result;
}
