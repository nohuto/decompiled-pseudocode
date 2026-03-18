/*
 * XREFs of IopQueryNameInternal @ 0x140968330
 * Callers:
 *     IoQueryFileDosDeviceName @ 0x140967F00 (IoQueryFileDosDeviceName.c)
 *     IopQueryName @ 0x14096A4F0 (IopQueryName.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IopExceptionFilterMode @ 0x140596318 (IopExceptionFilterMode.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     IoVolumeDeviceToDosName @ 0x140967FB0 (IoVolumeDeviceToDosName.c)
 *     ObQueryNameStringMode @ 0x140969A30 (ObQueryNameStringMode.c)
 *     IopQueryXxxInformation @ 0x14096A530 (IopQueryXxxInformation.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v26; // r8
  IRP *v27; // rdi
  __int64 v28; // rcx
  int v29; // ecx
  char *v30; // rdx
  unsigned int v31; // r8d
  __int64 v32; // rdi
  unsigned int Length; // eax
  int v35; // eax
  UNICODE_STRING *Pool2; // rax
  int v37; // ecx
  const wchar_t *v38; // rdx
  unsigned __int16 v39; // ax
  __int64 v40; // [rsp+40h] [rbp-A8h] BYREF
  char *v41; // [rsp+48h] [rbp-A0h]
  PVOID P; // [rsp+50h] [rbp-98h]
  int Buffer_high; // [rsp+58h] [rbp-90h]
  void *v44; // [rsp+60h] [rbp-88h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-80h]
  __int128 v46; // [rsp+70h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-68h] BYREF
  _OWORD v48[5]; // [rsp+98h] [rbp-50h] BYREF
  bool v50; // [rsp+F8h] [rbp+10h]
  char v51; // [rsp+F8h] [rbp+10h]
  unsigned int v54; // [rsp+110h] [rbp+28h]
  unsigned int v55; // [rsp+110h] [rbp+28h]

  v9 = a1;
  LODWORD(v40) = 0;
  v10 = 0LL;
  P = 0LL;
  v50 = 0;
  v48[0] = 0LL;
  v11 = 16;
  if ( a5 >= 0x10 )
    v11 = a5;
  if ( a7 == 1 )
  {
    Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
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
    v13 = (UNICODE_STRING *)v48;
    if ( a5 >= 0x10 )
      v13 = a4;
  }
  p_Type = &v9->DeviceObject->Type;
  if ( !a3 )
    goto LABEL_7;
  v35 = p_Type[13];
  if ( (v35 & 0x10) != 0 )
  {
    v37 = p_Type[13];
    v38 = L"\\\\?\\vmsmb";
    if ( (v35 & 0x80000) == 0 )
      v38 = L"\\";
    v39 = 20;
    if ( (v37 & 0x80000) == 0 )
      v39 = 4;
    LODWORD(v40) = v39 + 16;
    if ( (unsigned int)v40 > v11 )
      goto LABEL_76;
    NameStringMode = 0;
    v13->Length = v39 - 2;
    v13->MaximumLength = v39;
    v13->Buffer = &v13[1].Length;
    memmove(&v13[1], v38, v39);
    v16 = v40;
  }
  else
  {
    NameStringMode = IoVolumeDeviceToDosName(p_Type, v13);
    v16 = v13->Length + 18;
    LODWORD(v40) = v16;
  }
  v54 = v16;
  if ( NameStringMode < 0 )
  {
LABEL_76:
    p_Type = &a1->DeviceObject->Type;
LABEL_7:
    NameStringMode = ObQueryNameStringMode((_DWORD)p_Type, (_DWORD)v13, v11, (unsigned int)&v40, 0);
    v16 = v40;
    v17 = 0;
    v54 = v40;
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
    v50 = v13->Length == 0;
  }
  v18 = a4 + 1;
  v44 = v18;
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
      v20 = v40;
      v54 = v40;
      v19 = a3;
      goto LABEL_14;
    }
    ExFreePoolWithTag(v13->Buffer, 0);
    v20 = v40;
    v54 = v40;
    v19 = a3;
LABEL_13:
    v21 = a1;
LABEL_14:
    v22 = a4;
    goto LABEL_15;
  }
  v20 = v54;
  if ( a7 != 1 || a5 < 0x10 || v54 > v11 )
    goto LABEL_13;
  v22 = a4;
  a4->Length = v13->Length;
  a4->MaximumLength = v13->MaximumLength;
  memmove(v18, &v13[1], v54 - 16LL);
  v19 = a3;
  v21 = a1;
  v20 = v54;
LABEL_15:
  if ( v50 )
  {
    v20 += 2;
    v54 = v20;
    LODWORD(v40) = v20;
  }
  v23 = 0;
  v51 = 0;
  if ( a5 < 0x10 || v20 > v11 )
  {
    *a6 = v20;
    v23 = 1;
    v51 = 1;
  }
  else
  {
    v22->Buffer = &v18->Length;
    v18 = (UNICODE_STRING *)((char *)v18 + v13->Length);
    v44 = v18;
    v20 = v54;
  }
  if ( a7 == 1 )
  {
    v24 = v10;
    v41 = (char *)v10;
    if ( !v23 )
      v11 = v11 - v20 + 4;
  }
  else if ( v23 )
  {
    v24 = (UNICODE_STRING *)v48;
    if ( a5 >= 0x10 )
      v24 = a4;
    v41 = (char *)v24;
  }
  else
  {
    v24 = (UNICODE_STRING *)((char *)v18 - 4);
    Buffer_high = HIDWORD(v18[-1].Buffer);
    v11 = (_DWORD)a4 + v11 - ((_DWORD)v18 - 4) - 2;
    v41 = (char *)&v18[-1].Buffer + 4;
  }
  v55 = v11;
  if ( (a7 != 1 || v19) && (v21->Flags & 2) != 0 )
  {
    memset(&Event, 0, sizeof(Event));
    v46 = 0LL;
    PsReferenceSiloContext(v21);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    DeviceObject = IoGetRelatedDeviceObject(a1);
    Irp = IopAllocateIrpExReturn((__int64)DeviceObject, (unsigned __int8)DeviceObject->StackSize, 0LL);
    v27 = (IRP *)Irp;
    if ( Irp )
    {
      *(_QWORD *)(Irp + 192) = a1;
      *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
      *(_BYTE *)(Irp + 64) = 0;
      *(_QWORD *)(Irp + 80) = &Event;
      *(_DWORD *)(Irp + 16) = 4100;
      *(_QWORD *)(Irp + 72) = &v46;
      *(_QWORD *)(Irp + 88) = 0LL;
      v28 = *(_QWORD *)(Irp + 184);
      *(_BYTE *)(v28 - 72) = 5;
      *(_QWORD *)(v28 - 24) = a1;
      *(_QWORD *)(Irp + 24) = v24;
      *(_DWORD *)(Irp + 16) |= 0x10u;
      *(_DWORD *)(v28 - 64) = v55;
      *(_DWORD *)(v28 - 56) = 9;
      IopQueueThreadIrp(Irp, (__int64)a1, v26);
      NameStringMode = IofCallDriver(DeviceObject, v27);
      if ( NameStringMode == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        NameStringMode = v46;
      }
      LODWORD(v40) = DWORD2(v46);
      v18 = (UNICODE_STRING *)v44;
    }
    else
    {
      ObfDereferenceObject(a1);
      NameStringMode = -1073741670;
    }
  }
  else
  {
    NameStringMode = IopQueryXxxInformation((ULONG_PTR)v21, (__int64)v24, (__int64)&v40, 1);
  }
  if ( (NameStringMode & 0xC0000000) == 0xC0000000 )
  {
    if ( (unsigned int)(NameStringMode + 1073741822) > 0xE )
      goto LABEL_45;
    v29 = 18435;
    if ( !_bittest(&v29, NameStringMode + 1073741822) )
      goto LABEL_45;
    LODWORD(v40) = 4;
    v30 = v41;
    *(_DWORD *)v41 = 0;
    *((_WORD *)v30 + 2) = 92;
    NameStringMode = 0;
  }
  else
  {
    v30 = v41;
    if ( (unsigned int)v40 < 4 )
      LODWORD(v40) = 4;
  }
  if ( v51 )
  {
    *a6 += *(_DWORD *)v30;
    NameStringMode = -1073741820;
    if ( a5 >= 0x10 )
      NameStringMode = -2147483643;
  }
  else
  {
    v31 = *(_DWORD *)v30;
    if ( (unsigned int)(v40 - 4) <= *(_DWORD *)v30 )
      v31 = v40 - 4;
    LODWORD(v40) = (_DWORD)v18 + *(_DWORD *)v30 - (_DWORD)a4;
    if ( *((_WORD *)v30 + 2) == 92 )
    {
      v32 = v31;
      if ( a7 == 1 )
        memmove(v18, v30 + 4, v31);
      else
        *(_DWORD *)v30 = Buffer_high;
      v44 = (char *)v18 + v32;
      *(unsigned __int16 *)((char *)&v18->Length + v32) = 0;
      LODWORD(v40) = v40 + 2;
      *a6 = v40;
      a4->Length = v32 + (_WORD)v18 - (_WORD)a4 - 16;
      a4->MaximumLength = v32 + (_WORD)v18 - (_WORD)a4 - 14;
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
