/*
 * XREFs of ?ndisNsiEnumerateAllIfStackEntriesFull@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x14004B2D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisNsiEnumerateAllIfStackEntriesFull(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // si
  _QWORD *v4; // rdx
  unsigned int v5; // r8d
  PVOID *v6; // rax
  PVOID *v7; // rcx
  unsigned int v8; // ebx

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      18,
      (struct _GUID *)&WPP_18d3cc1af93e36e581740cabd8754bec_Traceguids,
      (char)a1);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  KeAcquireSpinLockAtDpcLevel(&qword_14011CA28);
  v4 = (_QWORD *)*((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 22);
  if ( v4 && *((_DWORD *)a1 + 6) != 8
    || *((_QWORD *)a1 + 7)
    || *((_DWORD *)a1 + 16)
    || *((_QWORD *)a1 + 9)
    || *((_DWORD *)a1 + 20)
    || *((_QWORD *)a1 + 5)
    || *((_DWORD *)a1 + 12) )
  {
    v8 = -1073741306;
  }
  else if ( v4 || !v5 )
  {
    v6 = (PVOID *)P;
    if ( P != &P )
    {
      do
      {
        v7 = v6;
        v6 = (PVOID *)*v6;
        if ( v2 < v5 )
          *v4++ = v7[2];
        ++v2;
      }
      while ( v6 != &P );
    }
    *((_DWORD *)a1 + 22) = v2;
    v8 = v5 < v2 ? 0x105 : 0;
  }
  else
  {
    v8 = -1073741811;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_14011CA28);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_18d3cc1af93e36e581740cabd8754bec_Traceguids,
      (char)a1,
      v8);
  return v8;
}
