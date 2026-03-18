/*
 * XREFs of ACPIRangeValidatePciMemoryResource @ 0x14004D288
 * Callers:
 *     ACPIRangeValidatePciResources @ 0x14004CEF8 (ACPIRangeValidatePciResources.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x14003A7DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddi @ 0x140066C6C (WPP_RECORDER_SF_ddi.c)
 *     WPP_RECORDER_SF_ddiiii @ 0x140066D64 (WPP_RECORDER_SF_ddiiii.c)
 *     WPP_RECORDER_SF_diiidiiii @ 0x140066EBC (WPP_RECORDER_SF_diiidiiii.c)
 */

int __fastcall ACPIRangeValidatePciMemoryResource(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  ULONG_PTR v4; // rbx
  char v5; // r12
  _DWORD *v6; // r15
  ULONGLONG v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned int v11; // r14d
  int v12; // r9d
  __int64 v13; // rsi
  int v14; // ecx
  char v15; // di
  char v16; // r15
  int v17; // r9d
  int v19; // [rsp+28h] [rbp-49h]
  unsigned __int64 MaximumAddress; // [rsp+78h] [rbp+7h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+80h] [rbp+Fh] BYREF
  ULONGLONG v22; // [rsp+88h] [rbp+17h]
  PIO_RESOURCE_DESCRIPTOR Descriptor; // [rsp+90h] [rbp+1Fh]
  unsigned __int64 Alignment; // [rsp+E8h] [rbp+77h] BYREF
  _DWORD *v26; // [rsp+F0h] [rbp+7Fh]

  v26 = a4;
  v4 = E820Info;
  v5 = a2;
  v6 = a4;
  MinimumAddress = 0LL;
  LODWORD(v7) = a1;
  MaximumAddress = 0LL;
  Alignment = 0LL;
  if ( E820Info )
  {
    v8 = 32LL * a2;
    Descriptor = (PIO_RESOURCE_DESCRIPTOR)(v8 + a1 + 8);
    v7 = RtlIoDecodeMemIoResource(Descriptor, &Alignment, &MinimumAddress, &MaximumAddress);
    v11 = 0;
    v12 = v7;
    v22 = v7;
    if ( *(_QWORD *)(v4 + 8) )
    {
      v13 = 0LL;
      do
      {
        v14 = *(_DWORD *)(v4 + 24 * v13 + 32);
        if ( v14 != 2 )
        {
          LODWORD(v7) = v14 - 3;
          if ( (unsigned int)(v14 - 3) <= 1 && *(_DWORD *)(v4 + 24 * v13 + 28) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v7) = WPP_RECORDER_SF_ddi(
                              WPP_GLOBAL_Control->DeviceExtension,
                              v9,
                              v10,
                              v12,
                              v19,
                              v11,
                              v14,
                              *(_QWORD *)(v4 + 24 * v13 + 24));
              LOBYTE(v12) = v22;
            }
            *(_DWORD *)(v4 + 24 * v13 + 28) = 0;
          }
          v9 = *(_QWORD *)(v4 + 24 * v13 + 16);
          if ( MaximumAddress >= v9 )
          {
            v10 = v9 + *(_QWORD *)(v4 + 24 * v13 + 24);
            if ( MinimumAddress < v10 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_diiidiiii(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v9,
                  v10,
                  a1,
                  v19,
                  v11,
                  *(_DWORD *)(v4 + 24 * v13 + 32),
                  v9,
                  v10,
                  v5,
                  *(_QWORD *)(a1 + v8 + 24),
                  *(_QWORD *)(a1 + v8 + 32),
                  v12,
                  Alignment);
              LODWORD(v7) = AcpiOverrideAttributes;
              if ( (AcpiOverrideAttributes & 1) != 0 && (LODWORD(v7) = 3 * v13, *(_DWORD *)(v4 + 24 * v13 + 32) == 4) )
              {
                v7 = *(_QWORD *)(v4 + 24 * v13 + 16);
                if ( MaximumAddress >= v7 )
                {
                  v15 = MinimumAddress;
                  if ( MinimumAddress < v7 )
                  {
                    v16 = v7 - 1;
                    LODWORD(v7) = RtlIoEncodeMemIoResource(
                                    Descriptor,
                                    *(_BYTE *)(a1 + v8 + 9),
                                    v7 - MinimumAddress,
                                    Alignment,
                                    MinimumAddress,
                                    v7 - 1);
                    if ( (v7 & 0x80000000) != 0LL )
                      return v7;
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_24;
                    LODWORD(v7) = WPP_RECORDER_SF_ddiiii(
                                    WPP_GLOBAL_Control->DeviceExtension,
                                    v9,
                                    v10,
                                    v17,
                                    v19,
                                    v5,
                                    v5,
                                    v15,
                                    v16,
                                    v16 - v15 + 1,
                                    Alignment);
                  }
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  LODWORD(v7) = WPP_RECORDER_SF_d(
                                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                  4u,
                                  0x16u,
                                  0xDu,
                                  (__int64)&WPP_1fd0c010928a3334a25fba642ba00601_Traceguids);
              }
              else
              {
                ++*v6;
              }
            }
          }
        }
LABEL_24:
        v6 = v26;
        ++v11;
        v12 = v22;
        v13 = v11;
      }
      while ( (unsigned __int64)v11 < *(_QWORD *)(v4 + 8) );
    }
  }
  return v7;
}
