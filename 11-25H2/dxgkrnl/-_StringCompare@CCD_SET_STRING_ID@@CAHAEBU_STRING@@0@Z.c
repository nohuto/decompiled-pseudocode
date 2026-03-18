/*
 * XREFs of ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1403D8F00
 * Callers:
 *     ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x140261BF4 (-FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z.c)
 * Callees:
 *     memcmp @ 0x1400A01E0 (memcmp.c)
 */

int __fastcall CCD_SET_STRING_ID::_StringCompare(const struct _STRING *a1, const struct _STRING *a2)
{
  if ( a1->Length > a2->Length )
    return 1;
  if ( a1->Length < a2->Length )
    return -1;
  return memcmp(a1->Buffer, a2->Buffer, a2->Length);
}
