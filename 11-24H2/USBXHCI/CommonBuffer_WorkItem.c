/*
 * XREFs of CommonBuffer_WorkItem @ 0x140017080
 * Callers:
 *     <none>
 * Callees:
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x140016A00 (XilCoreCommonBuffer_AcquireBuffers.c)
 *     XilCoreCommonBuffer_PreAllocateBuffers @ 0x140017250 (XilCoreCommonBuffer_PreAllocateBuffers.c)
 *     WPP_RECORDER_SF_qqd @ 0x14003F64C (WPP_RECORDER_SF_qqd.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall CommonBuffer_WorkItem(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  KIRQL v5; // r8
  __int64 ****v6; // rdx
  __int64 ***v7; // rcx
  __int64 **v8; // rax
  _QWORD *v9; // rax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 *v13; // rbx
  __int64 *v14; // rax
  unsigned int v15; // eax
  int v16; // [rsp+20h] [rbp-40h]
  __int64 *v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v18; // [rsp+48h] [rbp-18h]
  __int128 v19; // [rsp+50h] [rbp-10h] BYREF
  char v20; // [rsp+88h] [rbp+28h] BYREF

  v20 = 0;
  v18 = &v17;
  v17 = (__int64 *)&v17;
  v19 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 6);
  v6 = (__int64 ****)(Context + 56);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (__int64 ***)v6 )
      break;
    if ( v7[1] != (__int64 **)v6
      || (v8 = *v7, (*v7)[1] != (__int64 *)v7)
      || (*v6 = (__int64 ***)v8, v8[1] = (__int64 *)v6, v9 = v18, *v18 != (__int64 *)&v17) )
    {
LABEL_15:
      __fastfail(3u);
    }
    v7[1] = v18;
    *v7 = &v17;
    *v9 = v7;
    v18 = (__int64 **)v7;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 6, v5);
  while ( 1 )
  {
    v13 = v17;
    if ( v17 == (__int64 *)&v17 )
      break;
    if ( (__int64 **)v17[1] != &v17 )
      goto LABEL_15;
    v14 = (__int64 *)*v17;
    if ( *(__int64 **)(*v17 + 8) != v17 )
      goto LABEL_15;
    v17 = (__int64 *)*v17;
    v14[1] = (__int64)&v17;
    v13[1] = (__int64)v13;
    *v13 = (__int64)v13;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqd(
        *(_QWORD *)(*(_QWORD *)Context + 72LL),
        v10,
        v11,
        v12,
        v16,
        (char)v13,
        v13[2],
        *((_DWORD *)v13 + 6));
    *((_QWORD *)&v19 + 1) = &v19;
    *(_QWORD *)&v19 = &v19;
    v15 = XilCoreCommonBuffer_AcquireBuffers(
            (__int64)(Context + 88),
            *((_DWORD *)v13 + 6),
            *((_DWORD *)v13 + 7),
            (int)&v19,
            v13[2],
            *((_DWORD *)v13 + 8),
            &v20);
    ((void (__fastcall *)(__int64 *, _QWORD, __int128 *))v13[5])(v13, v15, &v19);
  }
  XilCoreCommonBuffer_PreAllocateBuffers(Context + 88);
  IoFreeWorkItem(IoWorkItem);
  KeSetEvent((PRKEVENT)Context + 1, 0, 0);
}
