/*
 * XREFs of ??$_Construct_in_place@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV?$function@$$A6AXXZ@0@0@Z @ 0x18002794C
 * Callers:
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180026528 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?RemoveClientReference@CAudioSession@@UEAAJ_N@Z @ 0x180026930 (-RemoveClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x180026DC8 (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800271A0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x1800274F0 (-QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV-$function@$$A6AXXZ@std@@AEAV-$unique_ptr@U_Recurr.c)
 *     ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x1800278A0 (--$make_shared@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YA-AV-$shared_ptr@V-$function@$$A6AXXZ@std.c)
 *     ?Initialize@_WaitTask@@QEAAJPEAXV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x180027BEC (-Initialize@_WaitTask@@QEAAJPEAXV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ?MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180038E8C (-MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV-$function@$$A6AJPEAVSystemEffectDescriptor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::_Construct_in_place<std::function<void (void)>,std::function<void (void)> &>(
        __int64 a1,
        __int64 a2)
{
  return std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(a1, a2);
}
