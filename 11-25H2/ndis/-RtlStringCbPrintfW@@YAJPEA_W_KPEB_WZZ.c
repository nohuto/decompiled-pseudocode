/*
 * XREFs of ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1400830E0
 * Callers:
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x140082F40 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ?ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEA_WI@Z @ 0x1400AC90C (-ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEA_WI@Z.c)
 *     ?ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z @ 0x140148AFC (-ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z @ 0x140148BAC (-ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z.c)
 *     ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x140148C84 (-ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x140148D70 (-ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x140167EE0 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     <none>
 */

__int64 RtlStringCbPrintfW(wchar_t *a1, unsigned __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  __int64 result; // rax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = _vsnwprintf(a1, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      a1[v5] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v7 == v5 )
    {
      a1[v5] = 0;
    }
    return v6;
  }
  return result;
}
