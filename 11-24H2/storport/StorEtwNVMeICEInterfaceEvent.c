/*
 * XREFs of StorEtwNVMeICEInterfaceEvent @ 0x1400A8EE0
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     RaidAcquireNvmeIceKeyResources @ 0x1400697EC (RaidAcquireNvmeIceKeyResources.c)
 *     RaidInitializeNvmeIce @ 0x14006A850 (RaidInitializeNvmeIce.c)
 *     RaidNvmeIceIoStart @ 0x140072D4C (RaidNvmeIceIoStart.c)
 *     RaidAdapterGetNvmeIceCapabilities @ 0x140183B0C (RaidAdapterGetNvmeIceCapabilities.c)
 * Callees:
 *     McTemplateK0qjzzzxz_EtwWriteTransfer @ 0x1400A72DC (McTemplateK0qjzzzxz_EtwWriteTransfer.c)
 */

void __fastcall StorEtwNVMeICEInterfaceEvent(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, int a5)
{
  __int64 v6; // rax
  const wchar_t *v7; // rdx
  const wchar_t *v8; // rdx
  const wchar_t *v9; // rdx

  if ( a4 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a4[v6] );
    if ( (unsigned int)(v6 - 1) <= 0x3F )
    {
      if ( a5 == 2 )
      {
        if ( (byte_140171468 & 1) != 0 )
        {
          v9 = (const wchar_t *)&unk_140151214;
          if ( *(_QWORD *)(a1 + 5080) )
            v9 = *(const wchar_t **)(a1 + 5080);
          McTemplateK0qjzzzxz_EtwWriteTransfer(
            a1 + 5064,
            &EventNVMeICEInterfaceError,
            a3,
            *(_DWORD *)(a1 + 56),
            a1 + 5064,
            *(const wchar_t **)(a1 + 4720),
            v9,
            *(const wchar_t **)(a2 + 32),
            a3,
            a4);
        }
      }
      else if ( a5 == 3 )
      {
        if ( byte_140171467 < 0 )
        {
          v8 = (const wchar_t *)&unk_140151214;
          if ( *(_QWORD *)(a1 + 5080) )
            v8 = *(const wchar_t **)(a1 + 5080);
          McTemplateK0qjzzzxz_EtwWriteTransfer(
            a1 + 5064,
            &EventNVMeICEInterfaceWarning,
            a3,
            *(_DWORD *)(a1 + 56),
            a1 + 5064,
            *(const wchar_t **)(a1 + 4720),
            v8,
            *(const wchar_t **)(a2 + 32),
            a3,
            a4);
        }
      }
      else if ( (byte_140171467 & 0x40) != 0 )
      {
        v7 = (const wchar_t *)&unk_140151214;
        if ( *(_QWORD *)(a1 + 5080) )
          v7 = *(const wchar_t **)(a1 + 5080);
        McTemplateK0qjzzzxz_EtwWriteTransfer(
          a1 + 5064,
          &EventNVMeICEInterfaceInformational,
          a3,
          *(_DWORD *)(a1 + 56),
          a1 + 5064,
          *(const wchar_t **)(a1 + 4720),
          v7,
          *(const wchar_t **)(a2 + 32),
          a3,
          a4);
      }
    }
  }
}
