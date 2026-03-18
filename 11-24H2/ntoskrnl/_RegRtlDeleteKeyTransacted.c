/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x140A6AF3C
 * Callers:
 *     _PnpCtxRegDeleteKey @ 0x1406F8D28 (_PnpCtxRegDeleteKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140991230 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x140A6AD38 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwDeleteKey @ 0x1406A7F90 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C7B60 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall RegRtlDeleteKeyTransacted(HANDLE a1, const WCHAR *a2, __int64 a3)
{
  int v3; // ebx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( a2 )
  {
    v3 = RegRtlOpenKeyTransacted((__int64)a1, a2, 0, 0x10000u, &Handle, a3);
    if ( v3 < 0 )
      goto LABEL_3;
    a1 = Handle;
  }
  v3 = ZwDeleteKey(a1);
LABEL_3:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v3;
}
