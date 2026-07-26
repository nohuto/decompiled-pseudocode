/*
 * XREFs of ?ndisNsiEnumerateAllInvertedIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x14009A9A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x14004BEA0 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 */

__int64 __fastcall ndisNsiEnumerateAllInvertedIfStackEntries(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // si
  int *v4; // rdx
  struct _NDIS_IF_BLOCK *Interface; // rax
  _DWORD *v6; // rdx
  unsigned int v7; // r9d
  int v8; // r11d
  struct _NDIS_IF_BLOCK *v9; // r10
  PVOID *v10; // rcx
  PVOID *v11; // rax
  int v12; // r8d

  v2 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      20,
      (struct _GUID *)&WPP_18d3cc1af93e36e581740cabd8754bec_Traceguids,
      (char)a1);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  KeAcquireSpinLockAtDpcLevel(&qword_140126A68);
  v4 = (int *)*((_QWORD *)a1 + 2);
  if ( v4 && *((_DWORD *)a1 + 6) != 8
    || *((_QWORD *)a1 + 7)
    || *((_DWORD *)a1 + 16)
    || *((_QWORD *)a1 + 9)
    || *((_DWORD *)a1 + 20)
    || *((_QWORD *)a1 + 5)
    || *((_DWORD *)a1 + 12) )
  {
    v2 = -1073741306;
  }
  else if ( v4 )
  {
    Interface = ndisIfFindInterface(*v4);
    v9 = Interface;
    if ( Interface )
    {
      *((_DWORD *)a1 + 22) = Interface->HigherLayerIfCount;
      if ( v7 )
      {
        v10 = (PVOID *)P;
        if ( P != &P )
        {
          do
          {
            if ( v2 >= v7 )
              break;
            v11 = v10;
            v10 = (PVOID *)*v10;
            v12 = *((_DWORD *)v11 + 5);
            if ( v12 == v8 )
            {
              *v6 = v12;
              v6[1] = *((_DWORD *)v11 + 4);
              v6 += 2;
              ++v2;
            }
          }
          while ( v10 != &P );
        }
        v2 = v2 < v9->HigherLayerIfCount ? 0x105 : 0;
      }
      else
      {
        v2 = Interface->HigherLayerIfCount != 0 ? 0x105 : 0;
      }
    }
    else
    {
      v2 = -1073741772;
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140126A68);
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x15u,
      (struct _GUID *)&WPP_18d3cc1af93e36e581740cabd8754bec_Traceguids,
      (char)a1,
      v2);
  return v2;
}
