/*
 * XREFs of RtlpPrintErrorInformation @ 0x18014AC48
 * Callers:
 *     RtlpReportHeapFailure @ 0x18011D71C (RtlpReportHeapFailure.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 */

ULONG RtlpPrintErrorInformation()
{
  const char *v0; // rbx

  v0 = (const char *)&Flags;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Heap error detected at %p (heap handle %p)\n", (const void *)qword_1801CC0F8, (const void *)qword_1801CC0F0);
  if ( dword_1801CC0E8 > 12 )
  {
    if ( dword_1801CC0E8 > 18 )
    {
      switch ( dword_1801CC0E8 )
      {
        case 19:
          v0 = "heap_failure_null_heap";
          break;
        case 20:
          v0 = "heap_failure_allocation_limit";
          break;
        case 21:
          v0 = "heap_failure_commit_limit";
          break;
        case 22:
          v0 = "heap_failure_invalid_va_mgr_query";
          break;
        case 23:
          v0 = "heap_failure_segment_lfh_delay_free_corruption";
          break;
      }
    }
    else
    {
      switch ( dword_1801CC0E8 )
      {
        case 18:
          v0 = "heap_failure_vs_subsegment_corruption";
          break;
        case 13:
          v0 = "heap_failure_freelists_corruption";
          break;
        case 14:
          v0 = "heap_failure_listentry_corruption";
          break;
        case 15:
          v0 = "heap_failure_lfh_bitmap_mismatch";
          break;
        case 16:
          v0 = "heap_failure_segment_lfh_bitmap_corruption";
          break;
        case 17:
          v0 = "heap_failure_segment_lfh_double_free";
          break;
      }
    }
  }
  else if ( dword_1801CC0E8 == 12 )
  {
    v0 = "heap_failure_cross_heap_operation";
  }
  else if ( dword_1801CC0E8 > 6 )
  {
    switch ( dword_1801CC0E8 )
    {
      case 7:
        v0 = "heap_failure_buffer_underrun";
        break;
      case 8:
        v0 = "heap_failure_block_not_busy";
        break;
      case 9:
        v0 = "heap_failure_invalid_argument";
        break;
      case 10:
        v0 = "heap_failure_invalid_allocation_type";
        break;
      case 11:
        v0 = "heap_failure_usage_after_free";
        break;
    }
  }
  else if ( dword_1801CC0E8 == 6 )
  {
    v0 = "heap_failure_buffer_overrun";
  }
  else if ( dword_1801CC0E8 )
  {
    switch ( dword_1801CC0E8 )
    {
      case 1:
        v0 = "heap_failure_unknown";
        break;
      case 2:
        v0 = "heap_failure_generic";
        break;
      case 3:
        v0 = "heap_failure_entry_corruption";
        break;
      case 4:
        v0 = "heap_failure_multiple_entries_corruption";
        break;
      case 5:
        v0 = "heap_failure_virtual_block_corruption";
        break;
    }
  }
  else
  {
    v0 = "heap_failure_internal";
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Error code: %d - %s\n", dword_1801CC0E8, v0);
  if ( qword_1801CC100 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Parameter1: %p\n", (const void *)qword_1801CC100);
  }
  if ( qword_1801CC108 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Parameter2: %p\n", (const void *)qword_1801CC108);
  }
  if ( qword_1801CC110 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Parameter3: %p\n", (const void *)qword_1801CC110);
  }
  if ( qword_1801CC118 || qword_1801CC120 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint(
      "Last known valid blocks: before - %p, after - %p\n",
      (const void *)qword_1801CC118,
      (const void *)qword_1801CC120);
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  return DbgPrint("Stack trace available at %p\n", &BackTrace);
}
