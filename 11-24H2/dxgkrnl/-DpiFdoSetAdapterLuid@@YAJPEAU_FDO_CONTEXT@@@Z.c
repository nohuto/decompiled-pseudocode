/*
 * XREFs of ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x14007CEE0
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     <none>
 */

int __fastcall DpiFdoSetAdapterLuid(struct _FDO_CONTEXT *a1)
{
  int result; // eax
  __int64 i; // rdi
  __int64 v4; // rax
  __int64 v5; // rsi
  int Data; // [rsp+50h] [rbp+8h] BYREF

  result = 0;
  if ( *((_DWORD *)a1 + 710) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 710); i = (unsigned int)(i + 1) )
    {
      v4 = *((_QWORD *)a1 + 354);
      Data = i;
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8 * i) + 64LL);
      result = IoSetDevicePropertyData(
                 *(PDEVICE_OBJECT *)(v5 + 152),
                 &DEVPKEY_Gpu_Luid,
                 0,
                 0,
                 9u,
                 8u,
                 (char *)a1 + 2696);
      if ( result < 0 )
        break;
      result = IoSetDevicePropertyData(
                 *(PDEVICE_OBJECT *)(v5 + 152),
                 &DEVPKEY_Gpu_PhysicalAdapterIndex,
                 0,
                 0,
                 7u,
                 4u,
                 &Data);
      if ( result < 0 )
        break;
    }
  }
  else
  {
    result = IoSetDevicePropertyData(*((PDEVICE_OBJECT *)a1 + 19), &DEVPKEY_Gpu_Luid, 0, 0, 9u, 8u, (char *)a1 + 2696);
    if ( result >= 0 )
    {
      Data = 0;
      return IoSetDevicePropertyData(
               *((PDEVICE_OBJECT *)a1 + 19),
               &DEVPKEY_Gpu_PhysicalAdapterIndex,
               0,
               0,
               7u,
               4u,
               &Data);
    }
  }
  return result;
}
