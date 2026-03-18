/*
 * XREFs of ?DwmHolographicSuspendRequest_@CompositorTracing@@QEAAX_N@Z @ 0x18021DB40
 * Callers:
 *     ?ToggleSuspension@CHolographicManager@@UEAAX_N@Z @ 0x18021DAB0 (-ToggleSuspension@CHolographicManager@@UEAAX_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18017E6B4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021DBDC (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CompositorTracing::DwmHolographicSuspendRequest_(CompositorTracing *this, char a2)
{
  __int64 v3; // rcx
  char v4; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-40h] BYREF
  char *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  v3 = *((_QWORD *)CompositorTracing::Instance() + 1);
  if ( *(_DWORD *)v3 > 4u
    && (*(_QWORD *)(v3 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v3 + 24) & 0x400000000000LL) == *(_QWORD *)(v3 + 24) )
  {
    v8 = 0;
    v6 = &v4;
    v4 = a2;
    v7 = 1;
    tlgWriteTransfer_EventWriteTransfer(v3, byte_1803DAE77, 0LL, 0LL, 3u, &v5);
  }
}
