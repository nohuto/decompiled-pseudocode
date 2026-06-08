/*
 * XREFs of sub_14002C480 @ 0x14002C480
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140027F04 @ 0x140027F04 (sub_140027F04.c)
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 */

__int64 __fastcall sub_14002C480(__int64 a1)
{
  CMSPAddress *v2; // rdi
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+28h] [rbp-10h]

  v2 = (CMSPAddress *)(*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_140019120 + 1616))(
                        qword_140019128,
                        a1,
                        off_140018040);
  *(_QWORD *)v2 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 248))(qword_140019128, a1);
  *((_QWORD *)v2 + 1) = (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 264))(qword_140019128, a1);
  *((_QWORD *)v2 + 2) = (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 336))(qword_140019128, a1);
  v3 = sub_140041578(v2);
  if ( v3 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v8 = v3;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0x17u, (__int64)&unk_1400130B0, v8);
  }
  v4 = sub_140027F04(v2);
  v5 = v4;
  if ( v4 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    LODWORD(v7) = v4;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0x18u, (__int64)&unk_1400130B0, v7);
  }
  return v5;
}
