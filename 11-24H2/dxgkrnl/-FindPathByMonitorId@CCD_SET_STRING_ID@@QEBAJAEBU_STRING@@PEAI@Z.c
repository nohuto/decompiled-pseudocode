/*
 * XREFs of ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x140268AF4
 * Callers:
 *     ?_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z @ 0x140268CC4 (-_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z.c)
 * Callees:
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1403403BC (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 *     ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1403D10F0 (-_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::FindPathByMonitorId(
        CCD_SET_STRING_ID *this,
        const struct _STRING *a2,
        unsigned int *a3)
{
  PCHAR Buffer; // r8
  unsigned int i; // ebx
  __int64 result; // rax
  struct _STRING v9; // [rsp+30h] [rbp-18h] BYREF

  Buffer = a2->Buffer;
  if ( Buffer && a2->Length && a3 )
  {
    for ( i = 0; i < *((unsigned __int16 *)this + 16); ++i )
    {
      v9 = 0LL;
      CCD_SET_STRING_ID::QueryMonitorId(this, i, &v9);
      if ( !(unsigned int)CCD_SET_STRING_ID::_StringCompare(a2, &v9) )
      {
        *a3 = i;
        return 0LL;
      }
    }
    return 3221226021LL;
  }
  else
  {
    WdLogSingleEntry4(1LL, this, Buffer, a2->Length, a3);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1702;
  }
  return result;
}
