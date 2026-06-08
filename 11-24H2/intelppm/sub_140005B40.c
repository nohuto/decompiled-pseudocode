/*
 * XREFs of sub_140005B40 @ 0x140005B40
 * Callers:
 *     sub_140006AB0 @ 0x140006AB0 (sub_140006AB0.c)
 * Callees:
 *     sub_1400032C0 @ 0x1400032C0 (sub_1400032C0.c)
 */

unsigned __int64 *__fastcall sub_140005B40(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rsi
  int v8; // ecx
  unsigned __int64 *result; // rax

  if ( a1 )
  {
    result = a5;
    *a5 = 0LL;
  }
  else
  {
    v5 = __readmsr(HIDWORD(DeviceObject.Dpc.SystemArgument1));
    v6 = v5 - LODWORD(DeviceObject.DeviceQueue.Lock);
    v7 = (unsigned int)(v5 - LODWORD(DeviceObject.DeviceQueue.Lock));
    sub_1400032C0(SHIDWORD(DeviceObject.Dpc.SystemArgument1), v7);
    LODWORD(DeviceObject.DeviceQueue.Lock) = v5;
    if ( v6 > 0x7FFFFFFF )
    {
      result = a5;
    }
    else
    {
      v8 = (*(_DWORD *)&DeviceObject.DeviceQueue.Type >> 1) & 0x1F;
      if ( (DeviceObject.DeviceQueue.Type & 1) == 0 )
      {
        result = a5;
        *a5 = v7 << v8;
        return result;
      }
      result = a5;
      if ( (DeviceObject.DeviceQueue.Type & 1) == 1 )
      {
        *a5 = (unsigned __int64)(1000000 * v7) >> v8;
        return result;
      }
    }
    *result = 0LL;
  }
  return result;
}
