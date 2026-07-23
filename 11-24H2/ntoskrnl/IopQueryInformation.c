/*
 * XREFs of IopQueryInformation @ 0x1409C4DC0
 * Callers:
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     FsRtlGetSupportedFeatures @ 0x140462750 (FsRtlGetSupportedFeatures.c)
 *     MmIsDriverVerifying @ 0x140499230 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     FsRtlQueryOpen @ 0x1409C4FF4 (FsRtlQueryOpen.c)
 *     VfFastIoCheckState @ 0x140BAB450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BAB7CC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopQueryInformation(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  void *v8; // rdi
  _BYTE *v9; // r12
  unsigned int v10; // r14d
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  ULONG_PTR FastIoQueryOpen; // r13
  __int64 result; // rax
  int Open; // eax
  struct _DRIVER_OBJECT *DriverObject; // [rsp+30h] [rbp-38h]
  int v16; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0LL;
  v16 = 0;
  if ( !*(_BYTE *)(a1 + 208) )
  {
    v9 = a5;
    *a5 = 0;
    v10 = 0;
    FastIoDispatch = a2->DriverObject->FastIoDispatch;
    if ( FastIoDispatch )
    {
      if ( FastIoDispatch->SizeOfFastIoDispatch > 0xC0 )
      {
        FastIoQueryOpen = (ULONG_PTR)FastIoDispatch->FastIoQueryOpen;
        if ( FastIoQueryOpen )
        {
          --*(_BYTE *)(a3 + 67);
          *(_QWORD *)(a3 + 184) -= 72LL;
          *(_QWORD *)(a4 + 40) = a2;
          if ( (MmVerifierData & 0x10) != 0 )
          {
            DriverObject = a2->DriverObject;
            if ( MmIsDriverVerifying(DriverObject) )
              v8 = (void *)VfFastIoSnapState(DriverObject);
          }
          *v9 = guard_dispatch_icall_no_overrides(a3, *(_QWORD *)(a1 + 104));
          if ( v8 )
            VfFastIoCheckState(v8, FastIoQueryOpen);
          *(_QWORD *)(a1 + 168) = *(_QWORD *)(a3 + 112);
          if ( *v9 )
          {
            *(_DWORD *)(a1 + 32) = -1096154543;
            if ( !*(_BYTE *)(a1 + 139) )
            {
              **(_QWORD **)(a1 + 96) = **(_QWORD **)(a1 + 104);
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL) = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8LL);
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 16LL) = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 16LL);
              *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 24LL);
              *(_DWORD *)(*(_QWORD *)(a1 + 96) + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 48LL);
            }
          }
          else
          {
            *(_QWORD *)(a3 + 184) += 72LL;
            ++*(_BYTE *)(a3 + 67);
          }
        }
      }
    }
    return v10;
  }
  result = FsRtlGetSupportedFeatures((__int64)a2, &v16);
  if ( (int)result >= 0 )
  {
    if ( (v16 & 4) == 0 )
    {
      *a5 = 0;
      return 0LL;
    }
    --*(_BYTE *)(a3 + 67);
    *(_QWORD *)(a3 + 184) -= 72LL;
    Open = FsRtlQueryOpen(a2, *(_DWORD *)(a1 + 200));
    v10 = Open;
    ++*(_BYTE *)(a3 + 67);
    *(_QWORD *)(a3 + 184) += 72LL;
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(a3 + 112);
    if ( Open < 0 )
    {
      if ( Open == -1071906812 || Open == -1073741822 )
      {
        v10 = 0;
        *a5 = 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 32) = -1096154543;
      *a5 = 1;
    }
    return v10;
  }
  return result;
}
