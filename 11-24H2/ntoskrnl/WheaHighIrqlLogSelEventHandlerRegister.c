/*
 * XREFs of WheaHighIrqlLogSelEventHandlerRegister @ 0x14065DFA0
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x14065E3A8 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

char __fastcall WheaHighIrqlLogSelEventHandlerRegister(__int64 a1)
{
  __int64 v1; // rbx
  __int32 v2; // r9d
  int v3; // r10d
  __int64 v4; // r11

  v1 = a1;
  if ( (_DWORD)WheapHighIrqlLogSelHandler )
  {
    LOBYTE(v3) = 0;
  }
  else
  {
    LOBYTE(a1) = 1;
    WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    if ( (_DWORD)WheapHighIrqlLogSelHandler == v2 )
    {
      *((_QWORD *)&WheapHighIrqlLogSelHandler + 1) = v1;
      qword_140EF9A10 = v4;
      LODWORD(WheapHighIrqlLogSelHandler) = v3;
    }
    else
    {
      LOBYTE(v3) = v2;
    }
    _InterlockedExchange((_DWORD *)&WheapHighIrqlLogSelHandler + 1, v2);
  }
  return v3;
}
