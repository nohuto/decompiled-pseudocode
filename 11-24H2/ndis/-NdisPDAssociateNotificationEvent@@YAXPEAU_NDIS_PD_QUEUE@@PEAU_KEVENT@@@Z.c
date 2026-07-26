/*
 * XREFs of ?NdisPDAssociateNotificationEvent@@YAXPEAU_NDIS_PD_QUEUE@@PEAU_KEVENT@@@Z @ 0x14013A080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall NdisPDAssociateNotificationEvent(struct _NDIS_PD_QUEUE *a1, struct _KEVENT *a2)
{
  _QWORD *v2; // rbx
  struct _KEVENT *v3; // rdi
  char v4; // [rsp+30h] [rbp-18h]

  v2 = a1->PDPlatformReserved[1];
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      29,
      63,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      (char)a1,
      v4);
  }
  if ( !*((_BYTE *)v2 + 60) || *((_BYTE *)v2 + 61) || v2[8] )
    ndisBugCheckEx(0x23uLL, 2uLL, (ULONG_PTR)v2, *(_QWORD *)(*(_QWORD *)(v2[4] + 56LL) + 80LL));
  v2[8] = v3;
}
