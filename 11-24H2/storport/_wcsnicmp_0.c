/*
 * XREFs of _wcsnicmp_0 @ 0x1400564AA
 * Callers:
 *     PortGetKeepAliveTimeoutValue @ 0x1401B360C (PortGetKeepAliveTimeoutValue.c)
 *     PortpReadDriverParameterEntry @ 0x1401B3864 (PortpReadDriverParameterEntry.c)
 *     PortpReadLinkTimeoutValue @ 0x1401B3A2C (PortpReadLinkTimeoutValue.c)
 *     PortGetBusyRetryCountValue @ 0x1401B97BC (PortGetBusyRetryCountValue.c)
 *     PortGetIoTimeoutValue @ 0x1401BD230 (PortGetIoTimeoutValue.c)
 *     PortGetBusyPauseTimeValue @ 0x1401BD34C (PortGetBusyPauseTimeValue.c)
 *     PortGetIoLatencyCapValue @ 0x1401BD464 (PortGetIoLatencyCapValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
