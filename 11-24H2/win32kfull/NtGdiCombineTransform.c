/*
 * XREFs of NtGdiCombineTransform @ 0x1401B84A0
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineTransform @ 0x1401B8590 (GreCombineTransform.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiCombineTransform(void *a1, struct _XFORML *a2, struct _XFORML *a3)
{
  unsigned int v5; // ebx
  struct _XFORML v7; // [rsp+20h] [rbp-58h] BYREF
  struct _XFORML v8; // [rsp+38h] [rbp-40h] BYREF
  __int128 Src; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]

  memset(&v8, 0, sizeof(v8));
  memset(&v7, 0, sizeof(v7));
  Src = 0LL;
  v10 = 0LL;
  v5 = ProbeAndConvertXFORM(a2, &v8) && ProbeAndConvertXFORM(a3, &v7);
  if ( v5 )
  {
    v5 = GreCombineTransform(&Src, &v8, &v7);
    if ( v5 )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(a1, &Src, 0x18uLL);
    }
  }
  return v5;
}
