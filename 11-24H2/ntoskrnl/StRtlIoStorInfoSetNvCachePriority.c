/*
 * XREFs of StRtlIoStorInfoSetNvCachePriority @ 0x14069EF50
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14037286C (IoAsynchronousPageWrite.c)
 * Callees:
 *     IoGetGenericIrpExtension @ 0x140437E70 (IoGetGenericIrpExtension.c)
 *     IoSetGenericIrpExtension @ 0x1404660A0 (IoSetGenericIrpExtension.c)
 */

__int64 __fastcall StRtlIoStorInfoSetNvCachePriority(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  if ( a2 > 0xFu )
    return 3221225485LL;
  result = IoGetGenericIrpExtension(a1, &v5, 4u);
  if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741275 )
  {
    LOBYTE(v5) = a2 & 0xF | v5 & 0xF0 | 0x10;
    return IoSetGenericIrpExtension(a1, &v5, 4u, 1);
  }
  return result;
}
