/*
 * XREFs of IopQueryNameInternal @ 0x140950DC0
 * Callers:
 *     IoQueryFileDosDeviceName @ 0x140950990 (IoQueryFileDosDeviceName.c)
 *     IopQueryName @ 0x140952F80 (IopQueryName.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IopExceptionFilterMode @ 0x140593348 (IopExceptionFilterMode.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IoVolumeDeviceToDosName @ 0x140950A40 (IoVolumeDeviceToDosName.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryNameInternal(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        char a3,
        UNICODE_STRING *a4,
        unsigned int a5,
        unsigned int *a6,
        char a7)
{
  struct _FILE_OBJECT *v9; // rax
  UNICODE_STRING *v10; // r14
  unsigned int v11; // edi
  UNICODE_STRING *v13; // rsi
  _DWORD *p_Type; // rcx
  NTSTATUS NameStringMode; // ebx
  unsigned int v16; // edx
  char v17; // al
  UNICODE_STRING *v18; // r13
  char v19; // cl
  unsigned int v20; // eax
  struct _FILE_OBJECT *v21; // r10
  UNICODE_STRING *v22; // rbx
  char v23; // dl
  UNICODE_STRING *v24; // rbx
  __int64 Irp; // rax
  IRP *v26; // rdi
  __int64 v27; // rcx
  int v28; // ecx
  char *v29; // rdx
  unsigned int v30; // r8d
  __int64 v31; // rdi
  unsigned int Length; // eax
  int v34; // eax
  UNICODE_STRING *Pool2; // rax
  int v36; // ecx
  const wchar_t *v37; // rdx
  unsigned __int16 v38; // ax
  __int64 v39; // [rsp+40h] [rbp-A8h] BYREF
  char *v40; // [rsp+48h] [rbp-A0h]
  PVOID P; // [rsp+50h] [rbp-98h]
  int Buffer_high; // [rsp+58h] [rbp-90h]
  void *v43; // [rsp+60h] [rbp-88h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-80h]
  __int128 v45; // [rsp+70h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-68h] BYREF
  _OWORD v47[5]; // [rsp+98h] [rbp-50h] BYREF
  bool v49; // [rsp+F8h] [rbp+10h]
  char v50; // [rsp+F8h] [rbp+10h]
  unsigned int v53; // [rsp+110h] [rbp+28h]
  unsigned int v54; // [rsp+110h] [rbp+28h]

  v9 = a1;
  LODWORD(v39) = 0;
  v10 = 0LL;
  P = 0LL;
  v49 = 0;
  v47[0] = 0LL;
  v11 = 16;
  if ( a5 >= 0x10 )
    v11 = a5;
  if ( a7 == 1 )
  {
    Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL, v11, 0x324E6F49u);
    v10 = Pool2;
    P = Pool2;
    if ( !Pool2 )
    {
      NameStringMode = -1073741670;
      goto LABEL_45;
    }
    v13 = Pool2;
    v9 = a1;
  }
  else
  {
    v13 = (UNICODE_STRING *)v47;
    if ( a5 >= 0x10 )
      v13 = a4;
  }
  p_Type = &v9->DeviceObject->Type;
  if ( !a3 )
    goto LABEL_7;
  v34 = p_Type[13];
  if ( (v34 & 0x10) != 0 )
  {
    v36 = p_Type[13];
    v37 = L"\\\\?\\vmsmb";
    if ( (v34 & 0x80000) == 0 )
      v37 = L"\\";
    v38 = 20;
    if ( (v36 & 0x80000) == 0 )
      v38 = 4;
    LODWORD(v39) = v38 + 16;
    if ( (unsigned int)v39 > v11 )
      goto LABEL_76;
    NameStringMode = 0;
    v13->Length = v38 - 2;
    v13->MaximumLength = v38;
    v13->Buffer = &v13[1].Length;
    memmove(&v13[1], v37, v38);
    v16 = v39;
  }
  else
  {
    NameStringMode = IoVolumeDeviceToDosName(p_Type, v13);
    v16 = v13->Length + 18;
    LODWORD(v39) = v16;
  }
  v53 = v16;
  if ( NameStringMode < 0 )
  {
LABEL_76:
    p_Type = &a1->DeviceObject->Type;
LABEL_7:
    NameStringMode = ObQueryNameStringMode((_DWORD)p_Type, (_DWORD)v13, v11, (unsigned int)&v39, 0);
    v16 = v39;
    v17 = 0;
    v53 = v39;
    goto LABEL_8;
  }
  v17 = 1;
LABEL_8:
  if ( NameStringMode < 0 )
  {
    if ( NameStringMode != -1073741820 )
      goto LABEL_45;
  }
  else if ( !v17 )
  {
    v49 = v13->Length == 0;
  }
  v18 = a4 + 1;
  v43 = v18;
  v19 = a3;
  if ( a3 && v17 )
  {
    if ( v11 < v16 )
      Length = v11 - 16;
    else
      Length = v13->Length;
    memmove(v18, v13->Buffer, Length);
    v21 = a1;
    if ( (a1->DeviceObject->Characteristics & 0x10) != 0 )
    {
      v20 = v39;
      v53 = v39;
      v19 = a3;
      goto LABEL_14;
    }
    ExFreePoolWithTag(v13->Buffer, 0);
    v20 = v39;
    v53 = v39;
    v19 = a3;
LABEL_13:
    v21 = a1;
LABEL_14:
    v22 = a4;
    goto LABEL_15;
  }
  v20 = v53;
  if ( a7 != 1 || a5 < 0x10 || v53 > v11 )
    goto LABEL_13;
  v22 = a4;
  a4->Length = v13->Length;
  a4->MaximumLength = v13->MaximumLength;
  memmove(v18, &v13[1], v53 - 16LL);
  v19 = a3;
  v21 = a1;
  v20 = v53;
LABEL_15:
  if ( v49 )
  {
    v20 += 2;
    v53 = v20;
    LODWORD(v39) = v20;
  }
  v23 = 0;
  v50 = 0;
  if ( a5 < 0x10 || v20 > v11 )
  {
    *a6 = v20;
    v23 = 1;
    v50 = 1;
  }
  else
  {
    v22->Buffer = &v18->Length;
    v18 = (UNICODE_STRING *)((char *)v18 + v13->Length);
    v43 = v18;
    v20 = v53;
  }
  if ( a7 == 1 )
  {
    v24 = v10;
    v40 = (char *)v10;
    if ( !v23 )
      v11 = v11 - v20 + 4;
  }
  else if ( v23 )
  {
    v24 = (UNICODE_STRING *)v47;
    if ( a5 >= 0x10 )
      v24 = a4;
    v40 = (char *)v24;
  }
  else
  {
    v24 = (UNICODE_STRING *)((char *)v18 - 4);
    Buffer_high = HIDWORD(v18[-1].Buffer);
    v11 = (_DWORD)a4 + v11 - ((_DWORD)v18 - 4) - 2;
    v40 = (char *)&v18[-1].Buffer + 4;
  }
  v54 = v11;
  if ( (a7 != 1 || v19) && (v21->Flags & 2) != 0 )
  {
    memset(&Event, 0, sizeof(Event));
    v45 = 0LL;
    PsReferenceSiloContext(v21);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    DeviceObject = IoGetRelatedDeviceObject(a1);
    Irp = IopAllocateIrpExReturn((__int64)DeviceObject, (unsigned __int8)DeviceObject->StackSize, 0LL);
    v26 = (IRP *)Irp;
    if ( Irp )
    {
      *(_QWORD *)(Irp + 192) = a1;
      *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
      *(_BYTE *)(Irp + 64) = 0;
      *(_QWORD *)(Irp + 80) = &Event;
      *(_DWORD *)(Irp + 16) = 4100;
      *(_QWORD *)(Irp + 72) = &v45;
      *(_QWORD *)(Irp + 88) = 0LL;
      v27 = *(_QWORD *)(Irp + 184);
      *(_BYTE *)(v27 - 72) = 5;
      *(_QWORD *)(v27 - 24) = a1;
      *(_QWORD *)(Irp + 24) = v24;
      *(_DWORD *)(Irp + 16) |= 0x10u;
      *(_DWORD *)(v27 - 64) = v54;
      *(_DWORD *)(v27 - 56) = 9;
      IopQueueThreadIrp(Irp);
      NameStringMode = IofCallDriver(DeviceObject, v26);
      if ( NameStringMode == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        NameStringMode = v45;
      }
      LODWORD(v39) = DWORD2(v45);
      v18 = (UNICODE_STRING *)v43;
    }
    else
    {
      ObfDereferenceObject(a1);
      NameStringMode = -1073741670;
    }
  }
  else
  {
    NameStringMode = IopQueryXxxInformation((ULONG_PTR)v21, (__int64)v24, (__int64)&v39, 1);
  }
  if ( (NameStringMode & 0xC0000000) == 0xC0000000 )
  {
    if ( (unsigned int)(NameStringMode + 1073741822) > 0xE )
      goto LABEL_45;
    v28 = 18435;
    if ( !_bittest(&v28, NameStringMode + 1073741822) )
      goto LABEL_45;
    LODWORD(v39) = 4;
    v29 = v40;
    *(_DWORD *)v40 = 0;
    *((_WORD *)v29 + 2) = 92;
    NameStringMode = 0;
  }
  else
  {
    v29 = v40;
    if ( (unsigned int)v39 < 4 )
      LODWORD(v39) = 4;
  }
  if ( v50 )
  {
    *a6 += *(_DWORD *)v29;
    NameStringMode = -1073741820;
    if ( a5 >= 0x10 )
      NameStringMode = -2147483643;
  }
  else
  {
    v30 = *(_DWORD *)v29;
    if ( (unsigned int)(v39 - 4) <= *(_DWORD *)v29 )
      v30 = v39 - 4;
    LODWORD(v39) = (_DWORD)v18 + *(_DWORD *)v29 - (_DWORD)a4;
    if ( *((_WORD *)v29 + 2) == 92 )
    {
      v31 = v30;
      if ( a7 == 1 )
        memmove(v18, v29 + 4, v30);
      else
        *(_DWORD *)v29 = Buffer_high;
      v43 = (char *)v18 + v31;
      *(unsigned __int16 *)((char *)&v18->Length + v31) = 0;
      LODWORD(v39) = v39 + 2;
      *a6 = v39;
      a4->Length = v31 + (_WORD)v18 - (_WORD)a4 - 16;
      a4->MaximumLength = v31 + (_WORD)v18 - (_WORD)a4 - 14;
    }
    else
    {
      NameStringMode = -1073741767;
    }
  }
LABEL_45:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)NameStringMode;
}
