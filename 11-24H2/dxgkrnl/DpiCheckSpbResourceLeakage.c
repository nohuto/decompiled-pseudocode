/*
 * XREFs of DpiCheckSpbResourceLeakage @ 0x14008BE74
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x140241460 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiDeleteSpbResourceRecord @ 0x1402533A8 (DpiDeleteSpbResourceRecord.c)
 */

__int64 __fastcall DpiCheckSpbResourceLeakage(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = a1 + 2728;
  v2 = *(_QWORD *)(a1 + 2728);
  if ( v2 != a1 + 2728 )
  {
    result = WdLogSingleEntry2(2LL, v2, -1073741823LL);
    WdLogGlobalForLineNumber = 410;
  }
  while ( *(_QWORD *)v1 != v1 )
  {
    *(_DWORD *)(*(_QWORD *)v1 + 48LL) = 0;
    result = DpiDeleteSpbResourceRecord();
  }
  return result;
}
