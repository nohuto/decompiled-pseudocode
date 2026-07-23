/*
 * XREFs of PpmWmiFireIdleAccountingEvent @ 0x1405D5500
 * Callers:
 *     <none>
 * Callees:
 *     IoWMIWriteEvent @ 0x1404206B0 (IoWMIWriteEvent.c)
 *     PpmTranslateIdleAccounting @ 0x1404369F0 (PpmTranslateIdleAccounting.c)
 *     PpmAllocWmiEvent @ 0x1405D53DC (PpmAllocWmiEvent.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmWmiFireIdleAccountingEvent(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v2; // rax
  __int64 v3; // rax
  void *v4; // rdi
  NTSTATUS v5; // ebx

  v1 = a1 + 34880;
  if ( *(_QWORD *)(a1 + 34880) && (v2 = *(_DWORD **)(a1 + 34888)) != 0LL && *(_DWORD *)(a1 + 35120) )
  {
    v3 = PpmAllocWmiEvent((PDEVICE_OBJECT)(a1 + 35112), (__int128 *)&PPM_IDLE_ACCOUNTING_EX_GUID, 416 * *v2 + 24);
    v4 = (void *)v3;
    if ( v3 )
    {
      PpmTranslateIdleAccounting(v1, v3 + *(unsigned int *)(v3 + 56), 0LL);
      v5 = IoWMIWriteEvent(v4);
      if ( v5 >= 0 )
        return 0;
      else
        ExFreePoolWithTag(v4, 0x774D5050u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v5;
}
