/*
 * XREFs of DxgkGetDWMVerticalBlankEvent @ 0x1403F94E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1403F960C (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkGetDWMVerticalBlankEvent(ULONG64 a1)
{
  const void *v1; // rdx
  NTSTATUS DWMVerticalBlankEventInternal; // r8d
  _QWORD *v3; // rdx
  unsigned int v5[4]; // [rsp+40h] [rbp-28h] BYREF
  ULONG64 v6; // [rsp+50h] [rbp-18h]
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  void *Handle; // [rsp+80h] [rbp+18h] BYREF

  v1 = (const void *)a1;
  Object = 0LL;
  Handle = 0LL;
  *(_OWORD *)v5 = 0LL;
  v6 = 0LL;
  if ( a1 >= MmUserProbeAddress )
    v1 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v5, v1, 0x18uLL);
  DWMVerticalBlankEventInternal = DxgkGetDWMVerticalBlankEventInternal(v5[0], v5[1], v5[2], (struct _KEVENT **)&Object);
  if ( DWMVerticalBlankEventInternal >= 0 )
    DWMVerticalBlankEventInternal = ObOpenObjectByPointer(
                                      Object,
                                      0,
                                      0LL,
                                      0x100002u,
                                      (POBJECT_TYPE)ExEventObjectType,
                                      1,
                                      &Handle);
  if ( DWMVerticalBlankEventInternal >= 0 )
  {
    v3 = (_QWORD *)v6;
    if ( v6 >= MmUserProbeAddress )
      v3 = (_QWORD *)MmUserProbeAddress;
    *v3 = Handle;
  }
  return (unsigned int)DWMVerticalBlankEventInternal;
}
