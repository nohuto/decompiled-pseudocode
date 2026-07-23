/*
 * XREFs of PnpIsRangeWithin @ 0x140A8BD60
 * Callers:
 *     PnpNeedToReleaseBootResources @ 0x140A8BC08 (PnpNeedToReleaseBootResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x14048FE80 (RtlCmDecodeMemIoResource.c)
 */

__int64 __fastcall PnpIsRangeWithin(
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a1,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a2)
{
  unsigned int v2; // ebx
  ULONGLONG v5; // rax
  ULONGLONG v6; // r14
  ULONGLONG Vector; // rbp
  ULONGLONG v8; // rax
  ULONGLONG v9; // rdx
  ULONGLONG LowPart; // rax
  ULONGLONG Start; // [rsp+40h] [rbp+8h] BYREF
  ULONGLONG v13; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  Start = 0LL;
  v13 = 0LL;
  switch ( a1->Type )
  {
    case 1u:
      goto LABEL_7;
    case 2u:
      Vector = a1->u.Interrupt.Vector;
      LowPart = a2->u.Interrupt.Vector;
      goto LABEL_18;
    case 3u:
      goto LABEL_7;
    case 4u:
      Vector = a1->u.Generic.Start.LowPart;
      LowPart = a2->u.Generic.Start.LowPart;
LABEL_18:
      v6 = Vector;
      v9 = LowPart;
      goto LABEL_8;
    case 6u:
      v6 = a1->u.Generic.Start.LowPart;
      Vector = (unsigned int)(v6 + a1->u.Generic.Start.HighPart - 1);
      v9 = a2->u.Generic.Start.LowPart;
      LowPart = (unsigned int)(v9 + a2->u.Generic.Start.HighPart - 1);
      goto LABEL_8;
    case 7u:
LABEL_7:
      v5 = RtlCmDecodeMemIoResource(a1, &Start);
      v6 = Start;
      Vector = v5 + Start - 1;
      v8 = RtlCmDecodeMemIoResource(a2, &v13);
      v9 = v13;
      LowPart = v13 + v8 - 1;
LABEL_8:
      if ( v6 < v9 || Vector > LowPart )
        return v2;
      break;
  }
  if ( a1->ShareDisposition == a2->ShareDisposition && a1->Flags == a2->Flags )
    return 1;
  return v2;
}
