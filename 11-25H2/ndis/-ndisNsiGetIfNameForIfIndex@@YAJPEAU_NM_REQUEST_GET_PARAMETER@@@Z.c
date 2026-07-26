/*
 * XREFs of ?ndisNsiGetIfNameForIfIndex@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x140060B00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisNsiGetIfNameForIfIndex(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v2; // esi
  int v3; // ebx
  KIRQL v4; // r8
  _DEVICE_OBJECT *i; // rax
  char v7[4]; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      36,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      (char)a1);
  if ( *((_DWORD *)a1 + 6) == 4
    && *((_DWORD *)a1 + 8) == 2
    && *((_QWORD *)a1 + 5)
    && *((_DWORD *)a1 + 12) == 8
    && !*((_DWORD *)a1 + 13)
    && !*((_DWORD *)a1 + 14) )
  {
    v3 = **((_DWORD **)a1 + 2);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
    for ( i = (_DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
          i != (_DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink;
          i = *(_DEVICE_OBJECT **)&i->Type )
    {
      if ( HIDWORD(i[-4].Queue.Wcb.DeviceContext) == v3 )
      {
        if ( i != (_DEVICE_OBJECT *)1232 )
        {
          **((_QWORD **)a1 + 5) = i->Queue.ListEntry.Flink;
          goto LABEL_15;
        }
        break;
      }
    }
    v2 = -1073741772;
LABEL_15:
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v4);
  }
  else
  {
    v2 = -1073741811;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x25u,
      (struct _GUID *)&WPP_f142ecdf0a6f33a49e2e175c00018497_Traceguids,
      (char)a1,
      *(_DWORD *)v7);
  }
  return v2;
}
