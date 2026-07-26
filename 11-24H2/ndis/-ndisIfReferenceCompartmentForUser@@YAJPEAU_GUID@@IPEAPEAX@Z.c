/*
 * XREFs of ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x140029D10
 * Callers:
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x140029B30 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x140029B90 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14017F9C0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Lq @ 0x140036410 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1400483A0 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x140057D20 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfReferenceCompartmentForUser(struct _GUID *a1, int a2, struct _NDIS_IF_COMPARTMENT_BLOCK **a3)
{
  unsigned int v4; // esi
  int v6; // ebx
  KIRQL v7; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v8; // rcx
  KIRQL v9; // r10
  int v10; // eax
  int v11; // edx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v13; // rax
  char v14; // [rsp+28h] [rbp-30h]

  v4 = a2;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      49,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      v14);
  }
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v8 = *a3;
  v9 = v7;
  if ( !*a3 )
  {
    v13 = a1 ? ndisIfFindCompartmentBlockByGuid(a1) : ndisIfFindCompartmentBlock(v4);
    v8 = v13;
    if ( !v13 )
    {
      v6 = -1073741772;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v9);
LABEL_13:
      *a3 = 0LL;
      goto LABEL_8;
    }
  }
  if ( (*((_DWORD *)v8 + 10) & 1) != 0 || (v10 = *((_DWORD *)v8 + 12), v10 == 0x7FFFFFFF) )
  {
    v6 = -1073741811;
  }
  else
  {
    *((_DWORD *)v8 + 12) = v10 + 1;
    *a3 = v8;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v9);
  if ( v6 < 0 )
    goto LABEL_13;
LABEL_8:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      22,
      50,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      v6,
      (char)a3);
  }
  return (unsigned int)v6;
}
