/*
 * XREFs of ExpRegisterFirmwareTableInformationHandler @ 0x1407B5AA0
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpRegisterFirmwareTableInformationHandler(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *i; // rdi
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 Pool2; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax

  v3 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741727;
  }
  else if ( a1 && a2 >= 0x18 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&ExpFirmwareTableResource, 1u);
    for ( i = (_DWORD *)(ExpFirmwareTableProviderListHead - 24); ; i = (_DWORD *)(*(_QWORD *)v7 - 24LL) )
    {
      v7 = i + 6;
      if ( &ExpFirmwareTableProviderListHead == (__int64 *)(i + 6) )
        break;
      if ( *i == *(_DWORD *)a1 )
      {
        if ( *(_BYTE *)(a1 + 4) )
        {
          v3 = 0x40000000;
          goto LABEL_22;
        }
        if ( *((_QWORD *)i + 2) == *(_QWORD *)(a1 + 16) )
        {
          v8 = *(_QWORD *)v7;
          if ( *(_DWORD **)(*(_QWORD *)v7 + 8LL) == v7 )
          {
            v9 = (_QWORD *)*((_QWORD *)i + 4);
            if ( (_DWORD *)*v9 == v7 )
            {
              *v9 = v8;
              *(_QWORD *)(v8 + 8) = v9;
              ObfDereferenceObject(*((PVOID *)i + 2));
              ExFreePoolWithTag(i, 0x54465241u);
              goto LABEL_22;
            }
          }
LABEL_19:
          __fastfail(3u);
        }
        goto LABEL_21;
      }
    }
    if ( !*(_BYTE *)(a1 + 4) )
    {
LABEL_21:
      v3 = -1073741811;
      goto LABEL_22;
    }
    Pool2 = ExAllocatePool2(0x100uLL, 0x28uLL, 0x54465241u);
    if ( Pool2 )
    {
      v11 = (_QWORD *)(Pool2 + 24);
      *(_DWORD *)Pool2 = *(_DWORD *)a1;
      *(_QWORD *)(Pool2 + 8) = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(Pool2 + 32) = Pool2 + 24;
      *(_QWORD *)(Pool2 + 24) = Pool2 + 24;
      PsReferenceSiloContext(*(void **)(Pool2 + 16));
      v12 = (_QWORD *)qword_140EFEE48;
      if ( *(__int64 **)qword_140EFEE48 != &ExpFirmwareTableProviderListHead )
        goto LABEL_19;
      *v11 = &ExpFirmwareTableProviderListHead;
      v11[1] = v12;
      *v12 = v11;
      qword_140EFEE48 = (__int64)v11;
    }
    else
    {
      v3 = -1073741670;
    }
LABEL_22:
    ExReleaseResourceLite(&ExpFirmwareTableResource);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741820;
  }
  return v3;
}
