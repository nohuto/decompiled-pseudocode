/*
 * XREFs of IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground @ 0x1C01EF2D0
 * Callers:
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1C01EF55C (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 * Callees:
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C01E95AC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EE778 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FD078 (--1CIVSerializer@@UEAA@XZ.c)
 */

void __fastcall IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground(
        int a1,
        const struct CONTAINER_ID *a2)
{
  __int64 v4; // r8
  const struct CONTAINER_ID *v5; // r8
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  int v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = 0;
  CIVGenericSerializer::CIVGenericSerializer(v6);
  v4 = v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 12) = 0xFFFF8300FFFF8300uLL;
    *(_QWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = a1;
    v5 = (const struct CONTAINER_ID *)&v8;
    if ( a2 )
      v5 = a2;
    ivrIVBroadcast((const struct CIVSerializer *)v6, 3u, v5);
  }
  v6[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v6);
}
