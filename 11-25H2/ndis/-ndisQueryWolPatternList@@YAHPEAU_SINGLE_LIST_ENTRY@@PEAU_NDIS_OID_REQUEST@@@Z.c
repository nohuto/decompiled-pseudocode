/*
 * XREFs of ?ndisQueryWolPatternList@@YAHPEAU_SINGLE_LIST_ENTRY@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BC75C
 * Callers:
 *     ?ndisOidPrePMWOLPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BB440 (-ndisOidPrePMWOLPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreWakeUpPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BB800 (-ndisOidPreWakeUpPatternList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z @ 0x14005CD50 (-ndisGetWoLPatternSize@@YAIPEAU_NDIS_PM_WOL_PATTERN@@@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

__int64 __fastcall ndisQueryWolPatternList(struct _SINGLE_LIST_ENTRY *a1, struct _NDIS_OID_REQUEST *a2)
{
  unsigned int v2; // esi
  struct _SINGLE_LIST_ENTRY *v4; // r14
  UINT v5; // r9d
  UINT v6; // r15d
  struct _SINGLE_LIST_ENTRY *i; // r10
  int WoLPatternSize; // eax
  struct _SINGLE_LIST_ENTRY **v9; // r10
  int v10; // r9d
  _DWORD *InformationBuffer; // r13
  size_t v12; // rbx

  v2 = 0;
  v4 = a1;
  v5 = 0;
  v6 = 0;
  for ( i = a1; i; v5 = ((WoLPatternSize + 7) & 0xFFFFFFF8) + v10 )
  {
    WoLPatternSize = ndisGetWoLPatternSize((struct _NDIS_PM_WOL_PATTERN *)&i[6]);
    i = *v9;
  }
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength >= v5 )
  {
    InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
    while ( v4 )
    {
      v12 = (unsigned int)ndisGetWoLPatternSize((struct _NDIS_PM_WOL_PATTERN *)&v4[6]);
      memmove(InformationBuffer, &v4[6], v12);
      v6 += (v12 + 7) & 0xFFFFFFF8;
      InformationBuffer[38] = v4->Next != 0LL ? v6 : 0;
      v4 = v4->Next;
      InformationBuffer = (_DWORD *)((char *)InformationBuffer + ((v12 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    a2->DATA.QUERY_INFORMATION.BytesWritten = v6;
  }
  else
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = v5;
    return (unsigned int)-1073676268;
  }
  return v2;
}
