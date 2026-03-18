/*
 * XREFs of McGenEventWrite_EtwWriteTransfer @ 0x14000C8C0
 * Callers:
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x140008F9C (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 *     McTemplateK0pppnnn_EtwWriteTransfer @ 0x14000AD1C (McTemplateK0pppnnn_EtwWriteTransfer.c)
 *     McTemplateK0ppb16_EtwWriteTransfer @ 0x14000C470 (McTemplateK0ppb16_EtwWriteTransfer.c)
 *     McTemplateK0uqq_EtwWriteTransfer @ 0x14000C730 (McTemplateK0uqq_EtwWriteTransfer.c)
 *     McTemplateK0uqqq_EtwWriteTransfer @ 0x14000C7C0 (McTemplateK0uqqq_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000C860 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0ppb16qu_EtwWriteTransfer @ 0x14000D4F8 (McTemplateK0ppb16qu_EtwWriteTransfer.c)
 *     McTemplateK0qqx_EtwWriteTransfer @ 0x14001B0D8 (McTemplateK0qqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14001B158 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14002DC64 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0pqqh_EtwWriteTransfer @ 0x14002DD48 (McTemplateK0pqqh_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x14002E44C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14002F834 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400303B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pppxsb16b16_EtwWriteTransfer @ 0x140030FF4 (McTemplateK0pppxsb16b16_EtwWriteTransfer.c)
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x1400312F0 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     McTemplateK0ppb16u_EtwWriteTransfer @ 0x140032B0C (McTemplateK0ppb16u_EtwWriteTransfer.c)
 *     McTemplateK0pjqq_EtwWriteTransfer @ 0x140033050 (McTemplateK0pjqq_EtwWriteTransfer.c)
 *     McTemplateK0pquuqqqqqqsssxqqqttqqqqtxxqqqqqqqqqqnn_EtwWriteTransfer @ 0x14003BEA0 (McTemplateK0pquuqqqqqqsssxqqqttqqqqtxxqqqqqqqqqqnn_EtwWriteTransfer.c)
 *     McTemplateK0pptqqqq_EtwWriteTransfer @ 0x1400440B0 (McTemplateK0pptqqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqhq_EtwWriteTransfer @ 0x140044174 (McTemplateK0pqqhq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140044218 (McTemplateK0pt_EtwWriteTransfer.c)
 *     McTemplateK0ptqqp_EtwWriteTransfer @ 0x140044294 (McTemplateK0ptqqp_EtwWriteTransfer.c)
 *     McTemplateK0pqqt_EtwWriteTransfer @ 0x140048CDC (McTemplateK0pqqt_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer @ 0x14004F420 (McTemplateK0pqqqqqqqsssxqqqt_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer @ 0x14004F630 (McTemplateK0pqqqqqqqsssxqqqtn_EtwWriteTransfer.c)
 *     McTemplateK0pqzr1q_EtwWriteTransfer @ 0x14004F854 (McTemplateK0pqzr1q_EtwWriteTransfer.c)
 *     McTemplateK0pzquuqqqqqqsssxqqqxx_EtwWriteTransfer @ 0x14004F8F4 (McTemplateK0pzquuqqqqqqsssxqqqxx_EtwWriteTransfer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventWrite_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v7; // eax
  unsigned int v8; // r9d

  v5 = (unsigned __int16 *)qword_14006AEC8;
  if ( qword_14006AEC8 )
  {
    UserData->Ptr = qword_14006AEC8;
    v7 = 2;
    v8 = *v5;
  }
  else
  {
    v7 = 0;
    UserData->Ptr = 0LL;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v7;
  return EtwWriteTransfer(MS_USBXHCI_ETW_PROVIDER_Context, a2, a3, 0LL, a4, UserData);
}
