/*
 * XREFs of DpiOpenPnpRegistryKey @ 0x1403844B0
 * Callers:
 *     DpiGetAdapterInfo @ 0x14022F500 (DpiGetAdapterInfo.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 *     DpiReadPnpRegistryValue @ 0x140384310 (DpiReadPnpRegistryValue.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1403845FC (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     DpiGetPnpRegistryKeyName @ 0x140384590 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DpiOpenPnpRegistryKey(__int64 a1, unsigned int a2, ACCESS_MASK a3, void **a4)
{
  __int64 v5; // rdi
  NTSTATUS v7; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF
  struct _UNICODE_STRING *v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0LL;
  v5 = (int)a2;
  if ( (int)DpiGetPnpRegistryKeyName(a1, a2, &v11) < 0 )
  {
    WdLogSingleEntry1(2LL, v5);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 3687;
  }
  else
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = v11;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v7 = ZwOpenKey(a4, a3, &ObjectAttributes);
    v8 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry2(2LL, v5, v7);
      WdLogGlobalForLineNumber = 3706;
    }
    return v8;
  }
  return result;
}
