/*
 * XREFs of UsbhBusRemove @ 0x140045810
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDispatch_BusEvent @ 0x14001FC5C (UsbhDispatch_BusEvent.c)
 */

void __fastcall UsbhBusRemove(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _DWORD *v4; // rdi
  struct _IO_WORKITEM *v5; // rcx
  __int64 v6; // rbx
  unsigned __int16 v7; // si
  PIO_WORKITEM *v8; // rbx
  void *v9; // rcx

  v4 = FdoExt((__int64)a1);
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
    if ( *((_BYTE *)FdoExt((__int64)a1) + 2938) )
    {
      v8 = (PIO_WORKITEM *)(v6 + 2456);
      do
      {
        if ( *v8 )
        {
          IoFreeWorkItem(*v8);
          *v8 = 0LL;
        }
        v8 += 366;
        ++v7;
      }
      while ( v7 < *((unsigned __int8 *)FdoExt((__int64)a1) + 2938) );
    }
  }
  v9 = (void *)*((_QWORD *)v4 + 382);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)v4 + 382) = 0LL;
  }
}
