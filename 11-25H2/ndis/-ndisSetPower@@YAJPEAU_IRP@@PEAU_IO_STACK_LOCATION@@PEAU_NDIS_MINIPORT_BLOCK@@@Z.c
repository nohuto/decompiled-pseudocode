/*
 * XREFs of ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055C40
 * Callers:
 *     ?ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1400558D0 (-ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisPowerIrpWorker@@YAXPEAX@Z @ 0x1400B0B60 (-ndisPowerIrpWorker@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140055D80 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056330 (-ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIP.c)
 */

__int64 __fastcall ndisSetPower(struct _IRP *a1, struct _IO_STACK_LOCATION *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  unsigned int v3; // edi
  unsigned int Options; // ecx
  char v9[8]; // [rsp+30h] [rbp-28h]

  v3 = 0;
  if ( (a3->Flags & 0x80u) != 0 )
    NT_ASSERT("(!((((Miniport)->Flags & (0x00000080)) != 0)))");
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x6Au,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a3,
      a1);
  Options = a2->Parameters.Create.Options;
  if ( Options )
  {
    if ( Options == 1 )
      v3 = ndisSetDevicePower(a1, a2, a2->Parameters.Power.State.DeviceState, a3);
  }
  else
  {
    v3 = ndisSetSystemPower(a1, a2, a3);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = v3;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x6Bu,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a3,
      *(_QWORD *)v9);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v3;
}
