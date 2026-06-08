/*
 * XREFs of sub_140038B70 @ 0x140038B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 sub_140038B70()
{
  int v0; // ebx
  int v2; // [rsp+28h] [rbp-10h]

  v0 = ((__int64 (*)(void))qword_140019470)();
  if ( v0 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v2 = v0;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0x1Du, (__int64)&unk_140014AD0, v2);
  }
  return (unsigned int)v0;
}
