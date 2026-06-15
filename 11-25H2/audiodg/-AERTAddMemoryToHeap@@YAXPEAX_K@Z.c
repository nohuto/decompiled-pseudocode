/*
 * XREFs of ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140076A78
 * Callers:
 *     ??2CAPONode@@SAPEAX_K@Z @ 0x14000B4B8 (--2CAPONode@@SAPEAX_K@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D010 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AllocateBuffer@CCpuMemoryBufferFactory@@UEAAJ_KPEAPEAUIDeviceGraphBuffer@@@Z @ 0x140019AC0 (-AllocateBuffer@CCpuMemoryBufferFactory@@UEAAJ_KPEAPEAUIDeviceGraphBuffer@@@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140042740 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 * Callees:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14000EDAC (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14004AE00 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 */

void __fastcall AERTAddMemoryToHeap(void *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // si
  __int64 v9; // [rsp+40h] [rbp-28h]

  v4 = ((__int64 (*)(void))RtlExtendMemoryBlockLookaside)();
  v8 = v4;
  if ( v4 == -1073741663 && (int)IncreaseProcessWorkingSet(a2) >= 0 )
    v8 = RtlExtendMemoryBlockLookaside(a1, a2);
  if ( (byte_1400C45C1 & 4) != 0 )
    McTemplateU0pqpqqqqqq_EventWriteTransfer(v6, v5, v7, 5, (char)a1, a2, 0, 0, v9, 0, v8);
}
