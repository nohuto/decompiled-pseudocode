/*
 * XREFs of AcpiPccInitType1Subspace @ 0x1400A04A0
 * Callers:
 *     ACPIPccInitialize @ 0x14009F858 (ACPIPccInitialize.c)
 * Callees:
 *     AcpiPccInitCommonFields @ 0x14009FE80 (AcpiPccInitCommonFields.c)
 *     AcpiPccInitDoorbell @ 0x1400A0018 (AcpiPccInitDoorbell.c)
 *     AcpiPccInitMapSharedMemoryRegion @ 0x1400A0204 (AcpiPccInitMapSharedMemoryRegion.c)
 */

char __fastcall AcpiPccInitType1Subspace(_DWORD *DeferredContext, char *a2, unsigned __int8 a3)
{
  int v3; // ebp
  char v6; // si
  char v7; // al
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+38h] [rbp-10h]

  v3 = a3;
  v6 = 1;
  if ( a2 && DeferredContext && *a2 == 1 )
  {
    DeferredContext[2] = DeferredContext[2] & 0xFFFFFFE1 | 2;
    if ( (unsigned __int8)a2[1] >= 0x3Eu )
    {
      v7 = *a2;
      DeferredContext[4] = 0;
      *(_BYTE *)DeferredContext = v7;
      if ( (int)AcpiPccInitMapSharedMemoryRegion((__int64)DeferredContext, *((_QWORD *)a2 + 1), *((_DWORD *)a2 + 4)) >= 0 )
      {
        *((_QWORD *)DeferredContext + 5) = *((_QWORD *)DeferredContext + 7) + 8LL;
        DeferredContext[12] = DeferredContext[32] - 8;
        v8 = *((_DWORD *)a2 + 8);
        v9 = *(_QWORD *)(a2 + 44);
        v10 = *(_QWORD *)(a2 + 36);
        v12 = *((_QWORD *)a2 + 3);
        v13 = v8;
        if ( (int)AcpiPccInitDoorbell((char *)DeferredContext, (__int64)&v12, v10, v9, 0) >= 0 )
        {
          DeferredContext[2] ^= (DeferredContext[2] ^ v3) & 1;
          if ( (v3 & 1) == 0
            || (DeferredContext[50] = *(_DWORD *)(a2 + 2),
                *((_BYTE *)DeferredContext + 132) = a2[6],
                DeferredContext[3] = 2,
                (a2[6] & 2) != 0) )
          {
            AcpiPccInitCommonFields(
              DeferredContext,
              *((_DWORD *)a2 + 13),
              *((_DWORD *)a2 + 14),
              *((unsigned __int16 *)a2 + 30));
            DeferredContext[2] = DeferredContext[2] & 0xFFFFFFE1 | 4;
            return 0;
          }
          else
          {
            DeferredContext[204] = 4;
          }
        }
      }
    }
    else
    {
      DeferredContext[204] = 1;
    }
  }
  return v6;
}
