/*
 * XREFs of IopReferenceDriverObjectByName @ 0x1409C711C
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1409C5C74 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiGetDefaultMessageString @ 0x1409C8444 (PiGetDefaultMessageString.c)
 *     IopInitializeSystemDrivers @ 0x140C629DC (IopInitializeSystemDrivers.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140402420 (PsGetCurrentSilo.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 */

PVOID __fastcall IopReferenceDriverObjectByName(_WORD *a1)
{
  POBJECT_TYPE v1; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  NTSTATUS v3; // ebx
  _DWORD v5[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v6; // [rsp+48h] [rbp-28h]
  _WORD *v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+5Ch] [rbp-14h]
  __int128 v10; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+18h] BYREF

  v5[1] = 0;
  v9 = 0;
  Handle = 0LL;
  if ( !*a1 )
    return 0LL;
  v1 = IoDriverObjectType;
  v10 = 0LL;
  v5[0] = 48;
  v6 = 0LL;
  v8 = 576;
  v7 = a1;
  CurrentSilo = PsGetCurrentSilo();
  if ( (int)ObOpenObjectByNameEx((__int64)v5, (__int64)v1, 0, 0LL, 128, 0LL, (__int64)CurrentSilo, &Handle) < 0 )
    return 0LL;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &Object, 0LL);
  ZwClose(Handle);
  if ( v3 >= 0 )
    return Object;
  else
    return 0LL;
}
