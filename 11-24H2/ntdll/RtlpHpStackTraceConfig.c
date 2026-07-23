/*
 * XREFs of RtlpHpStackTraceConfig @ 0x18011CB48
 * Callers:
 *     RtlSetHeapInformation @ 0x18002BE70 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlpHeapPerformCrossProcessQuery @ 0x1801109D0 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpHpStackTraceEnable @ 0x18011DE14 (RtlpHpStackTraceEnable.c)
 *     RtlpHpStackTraceDisable @ 0x18014A0F0 (RtlpHpStackTraceDisable.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpStackTraceConfig(__int64 a1)
{
  void *v1; // rbx
  __int64 v2; // rdi
  unsigned int v3; // ebx
  HANDLE Buffer[3]; // [rsp+20h] [rbp-68h] BYREF
  int v6; // [rsp+38h] [rbp-50h]
  __int64 v7; // [rsp+70h] [rbp-18h]

  v1 = *(void **)(a1 + 8);
  v2 = *(unsigned __int16 *)(a1 + 2);
  if ( v1 == (void *)-1LL )
  {
    v3 = 0;
    if ( (v2 & 1) != 0 )
    {
      if ( !(unsigned int)RtlpHpStackTraceEnable() )
        return (unsigned int)-1073741823;
    }
    else
    {
      RtlpHpStackTraceDisable();
    }
  }
  else
  {
    memset_thunk_772440563353939046(Buffer, 0, 0x60uLL);
    v6 = 0x10000000;
    v7 = v2;
    return (unsigned int)RtlpHeapPerformCrossProcessQuery(v1, Buffer);
  }
  return v3;
}
