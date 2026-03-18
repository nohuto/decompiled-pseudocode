/*
 * XREFs of UsbhBusRemove @ 0x1C0036FA0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhDispatch_BusEvent @ 0x1C001CF30 (UsbhDispatch_BusEvent.c)
 */

void __fastcall UsbhBusRemove(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  struct _IO_WORKITEM *v5; // rcx
  __int64 v6; // rbx
  unsigned __int16 v7; // si
  PIO_WORKITEM *v8; // rbx
  void *v9; // rcx

  v4 = FdoExt(a1);
  UsbhDispatch_BusEvent(a1, a2, 2);
  v5 = (struct _IO_WORKITEM *)*((_QWORD *)v4 + 148);
  if ( v5 )
  {
    IoFreeWorkItem(v5);
    *((_QWORD *)v4 + 148) = 0LL;
  }
  v6 = *((_QWORD *)v4 + 382);
  if ( v6 )
  {
    v7 = 0;
    v8 = (PIO_WORKITEM *)(v6 + 2456);
    while ( v7 < *((unsigned __int8 *)FdoExt(a1) + 2938) )
    {
      if ( *v8 )
      {
        IoFreeWorkItem(*v8);
        *v8 = 0LL;
      }
      v8 += 366;
      ++v7;
    }
  }
  v9 = (void *)*((_QWORD *)v4 + 382);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)v4 + 382) = 0LL;
  }
}
