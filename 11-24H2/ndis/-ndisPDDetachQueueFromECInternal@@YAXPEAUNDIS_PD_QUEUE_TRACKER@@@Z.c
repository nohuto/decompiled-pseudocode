/*
 * XREFs of ?ndisPDDetachQueueFromECInternal@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x14013D60C
 * Callers:
 *     ?NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z @ 0x14013A120 (-NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z.c)
 *     ?NdisPDDetachQueueFromEC@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x14013A7D0 (-NdisPDDetachQueueFromEC@@YAXPEAU_NDIS_PD_QUEUE@@@Z.c)
 *     ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x14013C5E0 (-ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPDDetachQueueFromECInternal(struct NDIS_PD_QUEUE_TRACKER *a1)
{
  __int64 v1; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v1 = *((_QWORD *)a1 + 33);
  if ( v1 )
  {
    if ( *((_DWORD *)a1 + 38) == 1 )
      --*(_DWORD *)(v1 + 72);
    else
      --*(_DWORD *)(v1 + 68);
    *((_QWORD *)a1 + 33) = 0LL;
    *((_DWORD *)a1 + 74) = 0;
    RtlFreeUnicodeString((PUNICODE_STRING)((char *)a1 + 280));
    v3 = (_QWORD *)((char *)a1 + 248);
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *v3 = 0LL;
  }
}
