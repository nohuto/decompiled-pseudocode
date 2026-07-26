/*
 * XREFs of ?ndisQueryPowerCompleteSystemState@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14005FBF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisQueryPowerCompleteSystemState(struct _DEVICE_OBJECT *a1, struct _IRP *a2, char *a3)
{
  _IO_STATUS_BLOCK *p_IoStatus; // rbx
  NTSTATUS v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // ebp
  PVOID Context; // [rsp+20h] [rbp-38h]
  PVOID Contexta; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-28h]
  char v14[4]; // [rsp+30h] [rbp-28h]

  p_IoStatus = &a2->IoStatus;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = p_IoStatus->Status;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x22u,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      (char)a3,
      *(_DWORD *)v14);
  }
  if ( p_IoStatus->Status < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = p_IoStatus->Status;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x23u,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a3,
        v13);
    }
    if ( (byte_14011B101 & 8) != 0 )
    {
      LODWORD(v13) = p_IoStatus->Status;
      LODWORD(Context) = *((_DWORD *)a3 + 1014);
      McTemplateK0jqxd_EtwWriteTransfer(
        (__int64)a1,
        (__int64)&QueryPowerCompleteSystemState,
        (__int64)(a3 + 4008),
        (__int64)(a3 + 4008),
        (__int64)Context,
        *((_QWORD *)a3 + 503),
        v13);
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4120), a2, 0x20u);
    return (unsigned int)p_IoStatus->Status;
  }
  else
  {
    v6 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)a3 + 479),
           3u,
           *(POWER_STATE *)(a3 + 3144),
           ndisQueryPowerComplete,
           a3,
           0LL);
    v9 = v6;
    if ( v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = v6;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x24u,
          (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
          (char)a3,
          v13);
        p_IoStatus = &a2->IoStatus;
      }
      if ( (byte_14011B101 & 8) != 0 )
      {
        LODWORD(v13) = v9;
        LODWORD(Contexta) = *((_DWORD *)a3 + 1014);
        McTemplateK0jqxd_EtwWriteTransfer(
          v8,
          (__int64)&QueryPowerCompleteSystemStatePoRequest,
          (__int64)(a3 + 4008),
          (__int64)(a3 + 4008),
          (__int64)Contexta,
          *((_QWORD *)a3 + 503),
          v13);
      }
      p_IoStatus->Status = v9;
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4120), a2, 0x20u);
    }
    else
    {
      *((_QWORD *)a3 + 97) = a2;
      v9 = -1073741802;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        14,
        37,
        (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
        (char)a3);
    }
    return v9;
  }
}
