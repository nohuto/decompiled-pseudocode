/*
 * XREFs of AcpiPccInitType34Subspace @ 0x1400A0780
 * Callers:
 *     ACPIPccInitialize @ 0x14009F858 (ACPIPccInitialize.c)
 * Callees:
 *     AcpiPccInitCommonFields @ 0x14009FE80 (AcpiPccInitCommonFields.c)
 *     AcpiPccInitDoorbell @ 0x1400A0018 (AcpiPccInitDoorbell.c)
 *     AcpiPccInitMapRegister @ 0x1400A010C (AcpiPccInitMapRegister.c)
 *     AcpiPccInitMapSharedMemoryRegion @ 0x1400A0204 (AcpiPccInitMapSharedMemoryRegion.c)
 *     AcpiPccInitPlatformInterruptAck @ 0x1400A02BC (AcpiPccInitPlatformInterruptAck.c)
 */

char __fastcall AcpiPccInitType34Subspace(_DWORD *DeferredContext, char *a2, unsigned __int8 a3)
{
  int v3; // ebp
  char v6; // si
  char v7; // cl
  char v8; // zf
  __int64 v9; // xmm0_8
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  int v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+40h] [rbp-28h] BYREF
  int v19; // [rsp+48h] [rbp-20h]

  v3 = a3;
  v6 = 1;
  if ( a2 && DeferredContext && (unsigned __int8)(*a2 - 3) <= 1u )
  {
    DeferredContext[2] = DeferredContext[2] & 0xFFFFFFE1 | 2;
    if ( (unsigned __int8)a2[1] >= 8u )
    {
      v7 = *a2;
      v8 = *a2 == 3;
      *(_BYTE *)DeferredContext = *a2;
      DeferredContext[4] = !v8 + 1;
      if ( v7 != 4 || a3 )
      {
        if ( (int)AcpiPccInitMapSharedMemoryRegion((__int64)DeferredContext, *((_QWORD *)a2 + 1), *((_DWORD *)a2 + 4)) >= 0 )
        {
          *((_QWORD *)DeferredContext + 5) = *((_QWORD *)DeferredContext + 7) + 16LL;
          v8 = *(_BYTE *)DeferredContext == 4;
          DeferredContext[12] = DeferredContext[32] - 16;
          v9 = *(_QWORD *)(a2 + 20);
          v10 = *((_QWORD *)a2 + 5);
          v11 = *((_QWORD *)a2 + 4);
          v17 = *((_DWORD *)a2 + 7);
          v16 = v9;
          if ( (int)AcpiPccInitDoorbell((char *)DeferredContext, (__int64)&v16, v11, v10, v8) >= 0 )
          {
            DeferredContext[2] ^= (DeferredContext[2] ^ v3) & 1;
            if ( (v3 & 1) == 0 )
              goto LABEL_29;
            DeferredContext[50] = *(_DWORD *)(a2 + 2);
            *((_BYTE *)DeferredContext + 132) = a2[6];
            DeferredContext[3] = 2;
            v12 = *((_DWORD *)a2 + 17);
            v13 = *((_QWORD *)a2 + 10);
            v14 = *((_QWORD *)a2 + 9);
            v18 = *(_QWORD *)(a2 + 60);
            v19 = v12;
            if ( (int)AcpiPccInitPlatformInterruptAck((__int64)DeferredContext, (__int64)&v18, v14, v13) < 0 )
            {
              DeferredContext[204] = 6;
            }
            else
            {
LABEL_29:
              if ( !*(_QWORD *)(a2 + 108)
                || (unsigned __int8)RtlIsZeroMemory(a2 + 96, 12LL)
                || (*((_QWORD *)a2 + 16) & *((_QWORD *)a2 + 17)) != 0LL
                || (unsigned __int8)RtlIsZeroMemory(a2 + 116, 12LL)
                || (*((_QWORD *)DeferredContext + 33) = *((_QWORD *)a2 + 12),
                    DeferredContext[68] = *((_DWORD *)a2 + 26),
                    *((_QWORD *)DeferredContext + 35) = *(_QWORD *)(a2 + 108),
                    (int)AcpiPccInitMapRegister((__int64)(DeferredContext + 66), (_QWORD *)DeferredContext + 32) < 0)
                || (*((_QWORD *)DeferredContext + 37) = *(_QWORD *)(a2 + 116),
                    DeferredContext[76] = *((_DWORD *)a2 + 31),
                    *((_QWORD *)DeferredContext + 39) = *((_QWORD *)a2 + 16),
                    *((_QWORD *)DeferredContext + 40) = *((_QWORD *)a2 + 17),
                    (int)AcpiPccInitMapRegister((__int64)(DeferredContext + 74), (_QWORD *)DeferredContext + 36) < 0) )
              {
                DeferredContext[204] = 7;
              }
              else if ( (unsigned __int8)RtlIsZeroMemory(a2 + 144, 12LL)
                     || *(_QWORD *)(a2 + 156)
                     && (*((_QWORD *)DeferredContext + 42) = *((_QWORD *)a2 + 18),
                         DeferredContext[86] = *((_DWORD *)a2 + 38),
                         *((_QWORD *)DeferredContext + 44) = *(_QWORD *)(a2 + 156),
                         (int)AcpiPccInitMapRegister((__int64)(DeferredContext + 84), (_QWORD *)DeferredContext + 41) >= 0) )
              {
                AcpiPccInitCommonFields(
                  DeferredContext,
                  *((_DWORD *)a2 + 12),
                  *((_DWORD *)a2 + 13),
                  *((_DWORD *)a2 + 14));
                DeferredContext[2] = DeferredContext[2] & 0xFFFFFFE1 | 4;
                return 0;
              }
              else
              {
                DeferredContext[204] = 8;
              }
            }
          }
        }
      }
      else
      {
        DeferredContext[204] = 5;
      }
    }
    else
    {
      DeferredContext[204] = 1;
    }
  }
  return v6;
}
